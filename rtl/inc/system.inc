{
    Copyright (c) 2012 LeZiZi Studio
    
    The code is created by the LeZiZi Studio. Visit www.lezizi.org 
    for more information. 
    
}
{

    This file is part of the Free Pascal Run time library.
    Copyright (c) 1999-2008 by the Free Pascal development team

    See the file COPYING.FPC, included in this distribution,
    For details about the copyright.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

 **********************************************************************}


{ The RTTI is implemented through a series of constants : }

Const
   // please update tkManagedTypes below if you add new
   // values
   tkUnknown       = 0;
   tkInteger       = 1;
   tkChar          = 2;
   tkEnumeration   = 3;
   tkFloat         = 4;
   tkSet           = 5;
   tkMethod        = 6;
   tkSString       = 7;
   tkString        = tkSString;
   tkLString       = 8;
   tkAString       = 9;
   tkWString       = 10;
   tkVariant       = 11;
   tkArray         = 12;
   tkRecord        = 13;
   tkInterface     = 14;
   tkClass         = 15;
   tkObject        = 16;
   tkWChar         = 17;
   tkBool          = 18;
   tkInt64         = 19;
   tkQWord         = 20;
   tkDynArray      = 21;
   tkInterfaceCorba = 22;
   tkProcVar       = 23;
   tkUString       = 24;
   tkHelper        = 26;

  // all potentially managed types
  tkManagedTypes   = [tkAstring,tkWstring,tkUstring,tkArray,
                     tkObject,tkRecord,tkDynArray,tkInterface,tkVariant];

{****************************************************************************
                                Local types
****************************************************************************}

{
  TextRec and FileRec are put in a separate file to make it available to other
  units without putting it explicitly in systemh.
  This way we keep TP compatibility, and the TextRec definition is available
  for everyone who needs it.
}
{$ifdef FPC_HAS_FEATURE_FILEIO}
{$i filerec.inc}
{$endif FPC_HAS_FEATURE_FILEIO}

{$ifdef FPC_HAS_FEATURE_TEXTIO}
{$i textrec.inc}
{$endif FPC_HAS_FEATURE_TEXTIO}

{$ifdef FPC_HAS_FEATURE_EXITCODE}
  {$ifdef FPC_OBJFPC_EXTENDED_IF}
    {$if High(errorcode)<>maxExitCode}
      {$define FPC_LIMITED_EXITCODE}
    {$endif}
  {$else}
    {$define FPC_LIMITED_EXITCODE}
  {$endif FPC_OBJFPC_EXTENDED_IF}
{$endif FPC_HAS_FEATURE_EXITCODE}

Procedure HandleError (Errno : Longint); forward;
Procedure HandleErrorFrame (Errno : longint;frame : Pointer); forward;

{$ifdef FPC_HAS_FEATURE_TEXTIO}
type
  FileFunc = Procedure(var t : TextRec);
{$endif FPC_HAS_FEATURE_TEXTIO}


const
  STACK_MARGIN = 16384;    { Stack size margin for stack checking }
{ Random / Randomize constants }
  OldRandSeed : Cardinal = 0;

{ For Error Handling.}
  ErrorBase : Pointer = nil;

{ Used by the ansi/widestrings and maybe also other things in the future }
var
  { widechar, because also used by widestring -> pwidechar conversions }
  emptychar : widechar;public name 'FPC_EMPTYCHAR';
{$ifndef FPC_NO_GENERIC_STACK_CHECK}
  { if the OS does the stack checking, we don't need any stklen from the
    main program }
  initialstklen : SizeUint;external name '__stklen';
{$endif FPC_NO_GENERIC_STACK_CHECK}

{ checks whether the given suggested size for the stack of the current
 thread is acceptable. If this is the case, returns it unaltered.
 Otherwise it should return an acceptable value.

 Operating systems that automatically expand their stack on demand, should
 simply return a very large value.
 Operating systems which do not have a possibility to retrieve stack size
 information, should simply return the given stklen value (This is the default
 implementation).
}
{$ifdef FPC_HAS_FEATURE_STACKCHECK}
function CheckInitialStkLen(stklen : SizeUInt) : SizeUInt; forward;
{$endif FPC_HAS_FEATURE_STACKCHECK}

{*****************************************************************************
                       OS dependent Helpers/Syscalls
*****************************************************************************}

{ for some OSes do_isdevice is defined in sysos.inc, but for others (win32)
  it isn't, and is used before the actual definition is encountered         }

{$ifdef FPC_HAS_FEATURE_FILEIO}
function do_isdevice(handle:thandle):boolean;forward;
{$endif FPC_HAS_FEATURE_FILEIO}


{$i sysos.inc}


{****************************************************************************
                    Include processor specific routines
****************************************************************************}

{$ifdef FPC_USE_LIBC}
{ Under Haiku, bcopy cause a problem when searching for include file
  in the compiler. So, we use the internal implementation for now
  under BeOS and Haiku.  }
{$ifndef BEOS}
{ prefer libc implementations over our own, as they're most likely faster }
{$i cgeneric.inc}
{ is now declared as external reference to another routine in the interface }
{$i cgenstr.inc}
{$endif}
{$endif FPC_USE_LIBC}

{$ifdef cpui386}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$i i386.inc}  { Case dependent, don't change }
{$endif cpui386}

{$ifdef cpum68k}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$i m68k.inc}  { Case dependent, don't change }
  {$define SYSPROCDEFINED}
{$endif cpum68k}

{$ifdef cpux86_64}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$i x86_64.inc}  { Case dependent, don't change }
  {$define SYSPROCDEFINED}
{$endif cpux86_64}

{$ifdef cpupowerpc32}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$i powerpc.inc}  { Case dependent, don't change }
  {$define SYSPROCDEFINED}
{$endif cpupowerpc32}

{$ifdef cpupowerpc64}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$i powerpc64.inc}  { Case dependent, don't change }
  {$define SYSPROCDEFINED}
{$endif cpupowerpc64}

{$ifdef cpualpha}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$i alpha.inc}  { Case dependent, don't change }
  {$define SYSPROCDEFINED}
{$endif cpualpha}

{$ifdef cpuiA64}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$i ia64.inc}  { Case dependent, don't change }
  {$define SYSPROCDEFINED}
{$endif cpuiA64}

{$ifdef cpusparc}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$i sparc.inc}  { Case dependent, don't change }
  {$define SYSPROCDEFINED}
{$endif cpusparc}

{$ifdef cpuarm}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$if defined(CPUCORTEXM3) or defined(CPUARMV7M)}
    {$i thumb2.inc}  { Case dependent, don't change }
  {$else}
    {$i arm.inc}  { Case dependent, don't change }
  {$endif}
  {$define SYSPROCDEFINED}
{$endif cpuarm}

{$ifdef cpuavr}
  {$ifdef SYSPROCDEFINED}
    {$Error Can't determine processor type !}
  {$endif}
  {$i avr.inc}  { Case dependent, don't change }
  {$define SYSPROCDEFINED}
{$endif cpuavr}


procedure fillchar(var x;count : SizeInt;value : boolean);
begin
  fillchar(x,count,byte(value));
end;


procedure fillchar(var x;count : SizeInt;value : char);
begin
  fillchar(x,count,byte(value));
end;


procedure FillByte (var x;count : SizeInt;value : byte );
begin
  FillChar (X,Count,VALUE);
end;


function IndexChar(Const buf;len:SizeInt;b:char):SizeInt;
begin
  IndexChar:=IndexByte(Buf,Len,byte(B));
end;


function CompareChar(Const buf1,buf2;len:SizeInt):SizeInt;
begin
  CompareChar:=CompareByte(buf1,buf2,len);
end;


{ Include generic pascal only routines which are not defined in the processor
  specific include file }
{$I generic.inc}


{****************************************************************************
                                Set Handling
****************************************************************************}

{ Include set support which is processor specific}
{$i set.inc}
{ Include generic pascal routines for sets if the processor }
{ specific routines are not available.                      }
{$i genset.inc}


{****************************************************************************
                               Math Routines
****************************************************************************}

function Hi(b : byte): byte;{$ifdef SYSTEMINLINE}inline;{$endif}
begin
   Hi := b shr 4
end;

function Lo(b : byte): byte;{$ifdef SYSTEMINLINE}inline;{$endif}
begin
   Lo := b and $0f
end;

Function Swap (X : Word) : Word;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Swap := SwapEndian(X);
End;

Function Swap (X : Integer) : Integer;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Swap := SwapEndian(X);
End;

Function Swap (X : Longint) : Longint;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Swap:=(X and $ffff) shl 16 + (X shr 16)
End;

Function Swap (X : Cardinal) : Cardinal;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Swap:=(X and $ffff) shl 16 + (X shr 16)
End;

Function Swap (X : QWord) : QWord;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Swap:=(X and $ffffffff) shl 32 + (X shr 32);
End;

Function swap (X : Int64) : Int64;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Swap:=(X and $ffffffff) shl 32 + (X shr 32);
End;

{$ifdef SUPPORT_DOUBLE}
operator := (b:real48) d:double;{$ifdef SYSTEMINLINE}inline;{$endif}
begin
 D:=real2double(b);
end;
{$endif SUPPORT_DOUBLE}

{$ifdef SUPPORT_EXTENDED}
operator := (b:real48) e:extended;{$ifdef SYSTEMINLINE}inline;{$endif}
begin
 e:=real2double(b);
end;
{$endif SUPPORT_EXTENDED}

{$ifndef FPUNONE}
{$ifdef FPC_USE_LIBC}
{ Include libc versions }
{$i cgenmath.inc}
{$endif FPC_USE_LIBC}
{ Include processor specific routines }
{$I math.inc}
{ Include generic version }
{$I genmath.inc}
{$endif}

{$i gencurr.inc}


function aligntoptr(p : pointer) : pointer;inline;
  begin
{$ifdef FPC_REQUIRES_PROPER_ALIGNMENT}
    result:=align(p,sizeof(p));
{$else FPC_REQUIRES_PROPER_ALIGNMENT}
    result:=p;
{$endif FPC_REQUIRES_PROPER_ALIGNMENT}
  end;


{****************************************************************************
                  Subroutines for String handling
****************************************************************************}

{ Needs to be before RTTI handling }

{$i sstrings.inc}

{ requires sstrings.inc for initval }
{$I int64p.inc}
{$I int64.inc}

{Requires int64.inc, since that contains the VAL functions for int64 and qword}
{$ifdef FPC_HAS_FEATURE_ANSISTRINGS}
{$i astrings.inc}
{$endif FPC_HAS_FEATURE_ANSISTRINGS}

{$ifdef FPC_HAS_FEATURE_WIDESTRINGS}
  {$ifndef FPC_WIDESTRING_EQUAL_UNICODESTRING}
    {$i wstrings.inc}
  {$endif FPC_WIDESTRING_EQUAL_UNICODESTRING}
  {$i ustrings.inc}
{$endif FPC_HAS_FEATURE_WIDESTRINGS}

{$i aliases.inc}

{*****************************************************************************
                        Dynamic Array support
*****************************************************************************}

{$ifdef FPC_HAS_FEATURE_DYNARRAYS}
{$i dynarr.inc}
{$endif FPC_HAS_FEATURE_DYNARRAYS}

{*****************************************************************************
                        Object Pascal support
*****************************************************************************}

{$ifdef FPC_HAS_FEATURE_CLASSES}
{$i objpas.inc}
{$endif FPC_HAS_FEATURE_CLASSES}

{*****************************************************************************
                            Variant support
*****************************************************************************}

{$ifdef FPC_HAS_FEATURE_VARIANTS}
{$i variant.inc}
{$endif FPC_HAS_FEATURE_VARIANTS}

{****************************************************************************
                         Run-Time Type Information (RTTI)
****************************************************************************}

{$ifdef FPC_HAS_FEATURE_RTTI}
{$i rtti.inc}
{$endif FPC_HAS_FEATURE_RTTI}

{$if defined(FPC_HAS_FEATURE_RANDOM)}

{----------------------------------------------------------------------
   Mersenne Twister: A 623-Dimensionally Equidistributed Uniform
   Pseudo-Random Number Generator.

   What is Mersenne Twister?
   Mersenne Twister(MT) is a pseudorandom number generator developped by
   Makoto Matsumoto and Takuji Nishimura (alphabetical order) during
   1996-1997. MT has the following merits:
   It is designed with consideration on the flaws of various existing
   generators.
   Far longer period and far higher order of equidistribution than any
   other implemented generators. (It is proved that the period is 2^19937-1,
   and 623-dimensional equidistribution property is assured.)
   Fast generation. (Although it depends on the system, it is reported that
   MT is sometimes faster than the standard ANSI-C library in a system
   with pipeline and cache memory.)
   Efficient use of the memory. (The implemented C-code mt19937.c
   consumes only 624 words of working area.)

   home page
     http://www.math.keio.ac.jp/~matumoto/emt.html
   original c source
     http://www.math.keio.ac.jp/~nisimura/random/int/mt19937int.c

   Coded by Takuji Nishimura, considering the suggestions by
   Topher Cooper and Marc Rieffel in July-Aug. 1997.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later
   version.
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
   See the GNU Library General Public License for more details.
   You should have received a copy of the GNU Library General
   Public License along with this library; if not, write to the
   Free Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307  USA

   Copyright (C) 1997, 1999 Makoto Matsumoto and Takuji Nishimura.
   When you use this, send an email to: matumoto@math.keio.ac.jp
   with an appropriate reference to your work.

   REFERENCE
   M. Matsumoto and T. Nishimura,
   "Mersenne Twister: A 623-Dimensionally Equidistributed Uniform
   Pseudo-Random Number Generator",
   ACM Transactions on Modeling and Computer Simulation,
   Vol. 8, No. 1, January 1998, pp 3--30.


  Translated to OP and Delphi interface added by Roman Krejci (6.12.1999)

  http://www.rksolution.cz/delphi/tips.htm

  Revised 21.6.2000: Bug in the function RandInt_MT19937 fixed

  2003/10/26: adapted to use the improved intialisation mentioned at
  <http://www.math.keio.ac.jp/~matumoto/MT2002/emt19937ar.html> and
  removed the assembler code

 ----------------------------------------------------------------------}

{$R-} {range checking off}
{$Q-} {overflow checking off}

{ Period parameter }
Const
  MT19937N=624;

Type
  tMT19937StateArray = array [0..MT19937N-1] of longint; // the array for the state vector

{ Period parameters }
const
  MT19937M=397;
  MT19937MATRIX_A  =$9908b0df;  // constant vector a
  MT19937UPPER_MASK=longint($80000000);  // most significant w-r bits
  MT19937LOWER_MASK=longint($7fffffff);  // least significant r bits

{ Tempering parameters }
  TEMPERING_MASK_B=longint($9d2c5680);
  TEMPERING_MASK_C=longint($efc60000);


VAR
  mt : tMT19937StateArray;

const
  mti: longint=MT19937N+1; // mti=MT19937N+1 means mt[] is not initialized

{ Initializing the array with a seed }
procedure sgenrand_MT19937(seed: longint);
var
  i: longint;
begin
  mt[0] := seed;
  for i := 1 to MT19937N-1 do
    begin
      mt[i] := 1812433253 * (mt[i-1] xor (mt[i-1] shr 30)) + i;
      { See Knuth TAOCP Vol2. 3rd Ed. P.106 for multiplier. }
      { In the previous versions, MSBs of the seed affect   }
      { only MSBs of the array mt[].                        }
      { 2002/01/09 modified by Makoto Matsumoto             }
    end;
  mti := MT19937N;
end;


function genrand_MT19937: longint;
const
  mag01 : array [0..1] of longint =(0, longint(MT19937MATRIX_A));
var
  y: longint;
  kk: longint;
begin
  if RandSeed<>OldRandSeed then
    mti:=MT19937N+1;
  if (mti >= MT19937N) { generate MT19937N longints at one time }
  then begin
     if mti = (MT19937N+1) then  // if sgenrand_MT19937() has not been called,
       begin
         sgenrand_MT19937(randseed);   // default initial seed is used
         { hack: randseed is not used more than once in this algorithm. Most }
         {  user changes are re-initialising reandseed with the value it had }
         {  at the start -> with the "not", we will detect this change.      }
         {  Detecting other changes is not useful, since the generated       }
         {  numbers will be different anyway.                                }
         randseed := not(randseed);
         oldrandseed := randseed;
       end;
     for kk:=0 to MT19937N-MT19937M-1 do begin
        y := (mt[kk] and MT19937UPPER_MASK) or (mt[kk+1] and MT19937LOWER_MASK);
        mt[kk] := mt[kk+MT19937M] xor (y shr 1) xor mag01[y and $00000001];
     end;
     for kk:= MT19937N-MT19937M to MT19937N-2 do begin
       y := (mt[kk] and MT19937UPPER_MASK) or (mt[kk+1] and MT19937LOWER_MASK);
       mt[kk] := mt[kk+(MT19937M-MT19937N)] xor (y shr 1) xor mag01[y and $00000001];
     end;
     y := (mt[MT19937N-1] and MT19937UPPER_MASK) or (mt[0] and MT19937LOWER_MASK);
     mt[MT19937N-1] := mt[MT19937M-1] xor (y shr 1) xor mag01[y and $00000001];
     mti := 0;
  end;
  y := mt[mti]; inc(mti);
  y := y xor (y shr 11);
  y := y xor (y shl 7)  and TEMPERING_MASK_B;
  y := y xor (y shl 15) and TEMPERING_MASK_C;
  y := y xor (y shr 18);
  Result := y;
end;


function random(l:longint): longint;
begin
  { otherwise we can return values = l (JM) }
  if (l < 0) then
    inc(l);
  random := longint((int64(cardinal(genrand_MT19937))*l) shr 32);
end;

function random(l:int64): int64;
begin
  { always call random, so the random generator cycles (TP-compatible) (JM) }
  random := int64((qword(cardinal(genrand_MT19937)) or ((qword(cardinal(genrand_MT19937)) shl 32))) and $7fffffffffffffff);
  if (l<>0) then
    random := random mod l
  else
    random := 0;
end;

{$ifndef FPUNONE}
function random: extended;
begin
  random := cardinal(genrand_MT19937) * (extended(1.0)/(int64(1) shl 32));
end;
{$endif}
{$endif FPC_HAS_FEATURE_RANDOM}


{****************************************************************************
                            Memory Management
****************************************************************************}

Function Ptr(sel,off : Longint) : farpointer;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  ptr:=farpointer((sel shl 4)+off);
End;

Function CSeg : Word;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Cseg:=0;
End;

Function DSeg : Word;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Dseg:=0;
End;

Function SSeg : Word;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Sseg:=0;
End;



{$ifopt R+}
{$define RangeCheckWasOn}
{$R-}
{$endif opt R+}

{$ifopt I+}
{$define IOCheckWasOn}
{$I-}
{$endif opt I+}

{$ifopt Q+}
{$define OverflowCheckWasOn}
{$Q-}
{$endif opt Q+}

{*****************************************************************************
                             Miscellaneous
*****************************************************************************}

procedure fpc_rangeerror;[public,alias:'FPC_RANGEERROR']; compilerproc;
begin
  HandleErrorFrame(201,get_frame);
end;


procedure fpc_divbyzero;[public,alias:'FPC_DIVBYZERO']; compilerproc;
begin
  HandleErrorFrame(200,get_frame);
end;


procedure fpc_overflow;[public,alias:'FPC_OVERFLOW']; compilerproc;
begin
  HandleErrorFrame(215,get_frame);
end;


procedure fpc_threaderror; [public,alias:'FPC_THREADERROR'];
begin
  HandleErrorFrame(6,get_frame);
end;


procedure fpc_iocheck;[public,alias:'FPC_IOCHECK']; compilerproc;
var
  l : longint;
  HInoutRes : PWord;
begin
  HInOutRes:=@InoutRes;
  if HInOutRes^<>0 then
   begin
     l:=HInOutRes^;
     HInOutRes^:=0;
     HandleErrorFrame(l,get_frame);
   end;
end;


Function IOResult:Word;
var
  HInoutRes : PWord;
Begin
  HInoutRes:=@InoutRes;
  IOResult:=HInOutRes^;
  HInOutRes^:=0;
End;


Function GetThreadID:TThreadID;{$ifdef SYSTEMINLINE}inline;{$endif}
begin
(* ThreadID is stored in a threadvar and made available in interface *)
(* to allow setup of this value during thread initialization.        *)
  GetThreadID := ThreadID;
end;


function fpc_safecallcheck(res : hresult) : hresult;[public,alias:'FPC_SAFECALLCHECK']; compilerproc; {$ifdef CPU86} register; {$endif}
begin
  if res<0 then
    begin
      if assigned(SafeCallErrorProc) then
        SafeCallErrorProc(res,get_frame);
      HandleErrorFrame(229,get_frame);
    end;
  result:=res;
end;


{*****************************************************************************
                         Stack check code
*****************************************************************************}

{ be compatible with old code }
{$ifdef FPC_NO_GENERIC_STACK_CHECK}
{$define NO_GENERIC_STACK_CHECK}
{$endif FPC_NO_GENERIC_STACK_CHECK}

{$IFNDEF NO_GENERIC_STACK_CHECK}

{$IFOPT S+}
{$DEFINE STACKCHECK}
{$ENDIF}
{$S-}
procedure fpc_stackcheck(stack_size:SizeUInt);[public,alias:'FPC_STACKCHECK'];
var
  c : Pointer;
begin
  { Avoid recursive calls when called from the exit routines }
  if StackError then
   exit;
  { don't use sack_size, since the stack pointer has already been
    decreased when this routine is called
  }
  c := Sptr - STACK_MARGIN;
  if (c <= StackBottom) then
   begin
     StackError:=true;
     HandleError(202);
   end;
end;
{$IFDEF STACKCHECK}
{$S+}
{$ENDIF}
{$UNDEF STACKCHECK}

{$ENDIF NO_GENERIC_STACK_CHECK}

{*****************************************************************************
                        Initialization / Finalization
*****************************************************************************}

const
  maxunits=1024; { See also files.pas of the compiler source }
type
  TInitFinalRec=record
    InitProc,
    FinalProc : TProcedure;
  end;
  TInitFinalTable = record
    TableCount,
    InitCount  : longint;
    Procs      : array[1..maxunits] of TInitFinalRec;
  end;
  PInitFinalTable = ^TInitFinalTable;


{$ifndef FPC_HAS_INDIRECT_MAIN_INFORMATION}
var
  InitFinalTable : TInitFinalTable;external name 'INITFINAL';
{$endif FPC_HAS_INDIRECT_MAIN_INFORMATION}


procedure fpc_InitializeUnits;[public,alias:'FPC_INITIALIZEUNITS']; compilerproc;
var
  i : longint;
begin
  { call cpu/fpu initialisation routine }
  fpc_cpuinit;
{$ifdef FPC_HAS_INDIRECT_MAIN_INFORMATION}
  with PInitFinalTable(EntryInformation.InitFinalTable)^ do
{$else FPC_HAS_INDIRECT_MAIN_INFORMATION}
  with InitFinalTable do
{$endif FPC_HAS_INDIRECT_MAIN_INFORMATION}
   begin
     for i:=1 to TableCount do
      begin
        if assigned(Procs[i].InitProc) then
         Procs[i].InitProc();
        InitCount:=i;
      end;
   end;
  if assigned(InitProc) then
    TProcedure(InitProc)();
end;


procedure internal_initializeunits; external name 'FPC_INITIALIZEUNITS';

procedure fpc_LibInitializeUnits;[public,alias:'FPC_LIBINITIALIZEUNITS'];
begin
  IsLibrary:=true;
  { must also be set to true for packages when implemented }
  ModuleIsLib:=true;
  internal_initializeunits;
end;


procedure FinalizeUnits;[public,alias:'FPC_FINALIZEUNITS'];
begin
{$ifdef FPC_HAS_INDIRECT_MAIN_INFORMATION}
  with PInitFinalTable(EntryInformation.InitFinalTable)^ do
{$else FPC_HAS_INDIRECT_MAIN_INFORMATION}
  with InitFinalTable do
{$endif FPC_HAS_INDIRECT_MAIN_INFORMATION}
   begin
     while (InitCount>0) do
      begin
        // we've to decrement the cound before calling the final. code
        // else a halt in the final. code leads to a endless loop
        dec(InitCount);
        if assigned(Procs[InitCount+1].FinalProc) then
         Procs[InitCount+1].FinalProc();
      end;
   end;
end;

{*****************************************************************************
                          Error / Exit / ExitProc
*****************************************************************************}

Procedure system_exit;forward;
{$ifdef FPC_HAS_FEATURE_HEAP}
{$ifndef HAS_MEMORYMANAGER}
//not needed if independant memory manager
Procedure FinalizeHeap;forward;
{$endif HAS_MEMORYMANAGER}
{$endif FPC_HAS_FEATURE_HEAP}

{$ifdef FPC_HAS_FEATURE_CONSOLEIO}
procedure SysFlushStdIO;
begin
  { Make sure that all output is written to the redirected file }
  if Textrec(Output).Mode=fmOutput then
    Flush(Output);
  if Textrec(ErrOutput).Mode=fmOutput then
    Flush(ErrOutput);
  if Textrec(stdout).Mode=fmOutput then
    Flush(stdout);
  if Textrec(StdErr).Mode=fmOutput then
    Flush(StdErr);
end;
{$endif FPC_HAS_FEATURE_CONSOLEIO}

Procedure InternalExit;
var
  current_exit : Procedure;
  
{$ifdef FPC_HAS_FEATURE_CONSOLEIO}
  pstdout : ^Text;
{$endif}
{$if defined(MSWINDOWS) or defined(OS2)}
  i : longint;
{$endif}

{乐滋滋工作室 开始}  
Const 
  SAbortError            = '操作中断';
  SAbstractError         = '调用抽象方法';
  SAccessDenied          = '文件拒绝访问';
  SAccessViolation       = '试图申请非法或超出界限的内存';
  SArgumentMissing       = 'Missing argument in format "%s"';
  SAssertError           = '%s (%s, line %d)';
  SAssertionFailed       = 'Assertion failed';
  SBusError              = '总线错误或非法存取';
  SCannotCreateEmptyDir  = 'Cannot create empty directory';
  SControlC              = '按键中断';
  SDiskFull              = '磁盘已满';
  SDispatchError         = 'No variant method call dispatch';
  SDivByZero             = '除以零';
  SEndOfFile             = '磁盘读取错误';
  SErrInvalidDateMonthWeek = 'Year %d, month %d, Week %d and day %d is not a valid date.';
  SErrInvalidDateWeek    = '%d %d %d is not a valid dateweek';
  SErrInvalidDayOfWeek   = '%d is not a valid day of the week';
  SErrInvalidDayOfWeekInMonth = 'Year %d Month %d NDow %d DOW %d is not a valid date';
  SErrInvalidDayOfYear   = 'Year %d does not have a day number %d';
  SErrInvalidTimeStamp   = 'Invalid date/timestamp : "%s"';
  SInvalidJulianDate            = '%f Julian cannot be represented as a DateTime';
  SErrIllegalDateFormatString   = '"%s" is not a valid date format string';
  SErrInvalidTimeFormat  = '"%s" is not a valid time';
  SExceptionErrorMessage = 'exception at %p';
  SExceptionStack        = '异常处理堆栈错误';
  SExecuteProcessFailed  = 'Failed to execute "%s", error code: %d';
  SExternalException     = '未知错误';
  SFileNotAssigned       = '没有对文件进行 Assign 操作';
  SFileNotFound          = '找不到文件';
  SFileNotOpen           = '文件没有打开：对文件进行 close，read，write，seek，EOf，FilePos，FileSize，Flush，BlockRead，BlockWrite 而没有打开这个文件';
  SFileNotOpenForInput   = 'input 文件没有打开：没有使用 reset 语句';
  SFileNotOpenForOutput  = 'output 文件没有打开：没有使用 rewrite 语句';
  SInValidFileName       = '错误的文件名';
  SIntOverflow           = '算术溢出';
  SIntfCastError         = '不支持 Interface';
  SInvalidArgIndex       = 'Invalid argument index in format "%s"';
  SInvalidBCD            = '%x is an invalid BCD value';
  SInvalidBoolean        = '"%s" is not a valid boolean.';
  SInvalidCast           = 'Invalid type cast';
  SinvalidCurrency       = 'Invalid currency: "%s"';
  SInvalidDateTime       = '%f is not a valid date/time value.';
  SInvalidDrive          = '无效的驱动器盘符';
  SInvalidFileHandle     = '无效的文件句柄';
  SInvalidFloat          = '"%s" is an invalid float';
  SInvalidFormat         = 'Invalid format specifier : "%s"';
  SInvalidGUID           = '"%s" is not a valid GUID value';
  SInvalidInput          = '无效的形式：从文件中读入的信息类型不符';
  SInvalidInteger        = '"%s" is an invalid integer';
  SInvalidOp             = '非法浮点操作';
  SInvalidPointer        = '非法指针操作：对notably,Nil指针进行dispose/Freemem操作';
  SInvalidVarCast        = 'Invalid variant type cast';
  SInvalidVarNullOp      = 'Invalid NULL variant operation';
  SInvalidVarOp          = 'Invalid variant operation';
  SInvalidBinaryVarOp    = 'Invalid variant operation %s %s %s';
  SInvalidUnaryVarOp     = 'Invalid variant operation %s %s';
  SInvalidVarOpWithHResultWithPrefix = 'Invalid variant operation (%s%.8x)'+LineEnding+'%s';
  SNoError               = '程序正常退出';
  SNoThreadSupport       = '不支持线程';
  SMissingWStringManager = 'Widestring manager not available. Recompile program with appropriate manager.';
  SSigQuit               = 'SIGQUIT signal received.';
  SOSError               = '操作系统错误';
  SOutOfMemory           = '内存超限';
  SOverflow              = '浮点运算上溢出';
  SPrivilege             = '试图调用 CUP 特权指令';
  SRangeError            = '范围检查错误：一个数组接受了一个超出它的长度的位置指令';
  SSafecallException     = 'safecall 方法错误';
  SiconvError            = 'iconv error';

  STooManyOpenFiles      = '打开文件数量超出限制';
  SUnKnownRunTimeError   = '未知运行时错误';
  SUnderflow             = '浮点运算下溢出';
  SUnkOSError            = '系统调用失败';
  SUnknown               = '未知运行时错误 ';
  SUnknownErrorCode      = '未知错误';
  SVarArrayBounds        = 'Variant array bounds error';
  SVarArrayCreate        = 'Variant array cannot be created';
  SVarArrayLocked        = 'Variant array locked';
  SVarBadType            = 'Invalid variant type';
  SVarInvalid            = '参数错误';
  SVarInvalid1           = 'Invalid argument: %s';
  SVarNotArray           = 'Variant doesn''t contain an array';
  SVarNotImplemented     = 'Operation not supported';
  SVarOutOfMemory        = '变量内存溢出';
  SVarOverflow           = '变量溢出';
  SVarParamNotFound      = 'Variant Parameter not found';
  SVarTypeAlreadyUsedWithPrefix = 'Custom variant type (%s%.4x) already used by %s';
  SVarTypeConvertOverflow       = 'Overflow while converting variant of type (%s) into type (%s)';
  SVarTypeCouldNotConvert       = 'Could not convert variant of type (%s) into type (%s)';
  SVarTypeNotUsableWithPrefix   = 'Custom variant type (%s%.4x) is not usable';
  SVarTypeOutOfRangeWithPrefix  = 'Custom variant type (%s%.4x) is out of range';
  SVarTypeRangeCheck1           = 'Range check error for variant of type (%s)';
  SVarTypeRangeCheck2           = 'Range check error while converting variant of type (%s) into type (%s)';
  SVarTypeTooManyCustom         = 'Too many custom variant types have been registered';
  SVarUnexpected                = 'Unexpected variant error';

  SFallbackError                = '由于错误代码过大引发的错误';


  SNoArrayMatch                 = 'Can''t match any allowed value at pattern position %d, string position %d.';
  SNoCharMatch                  = 'Mismatch char "%s" <> "%s" at pattern position %d, string position %d.';
  SHHMMError                    = 'mm in a sequence hh:mm is interpreted as minutes. No longer versions allowed! (Position : %d).' ;
  SFullpattern                  = 'Couldn''t match entire pattern string. Input too short at pattern position %d.';
  SPatternCharMismatch          = 'Pattern mismatch char "%s" at position %d.';
Function GetRunError(Errno : Word) : String;

begin
  Case Errno Of
     0  : Result:=SNoError;
     1  : Result:=SOutOfMemory;
     2  : Result:=SFileNotFound;
     3  : Result:=SInvalidFileName;
     4  : Result:=STooManyOpenFiles;
     5  : Result:=SAccessDenied;
     6  : Result:=SInvalidFileHandle;
     15 : Result:=SInvalidDrive;
     100 : Result:=SEndOfFile;
     101 : Result:=SDiskFull;
     102 : Result:=SFileNotAssigned;
     103 : Result:=SFileNotOpen;
     104 : Result:=SFileNotOpenForInput;
     105 : Result:=SFileNotOpenForOutput;
     106 : Result:=SInvalidInput;
     150 : Result:='磁盘写保护';
     151 : Result:='坏驱动器要求了一个结构长度';
     152 : Result:='驱动器没有准备好';
     154 : Result:='数据中出现了CRC错误';
     156 : Result:='磁盘查找/请求出现了错误';
     157 : Result:='不知道的媒体类型';
     158 : Result:='数字扇区没有找到';
     159 : Result:='打印机无纸';
     160 : Result:='设备写入出错';
     161 : Result:='设备读入出错';
     162 : Result:='硬件错误';
     
     200 : Result:=SDivByZero;
     201 : Result:=SRangeError;
     202 : Result:='超过栈的最大容量';
     203 : Result:=SOutOfMemory;
     204 : Result:=SInvalidPointer;
     205 : Result:=SOverFlow;
     206 : Result:=SUnderFlow;
     207 : Result:=SInvalidOp;
     210 : Result:='对象没有进行初始化';
     211 : Result:=SAbstractError;
     212 : Result:='一个非法的类型在对象单元里进行了注册';
     213 : Result:='打算用一个非法的指标进入collection';
     214 : Result:=SBusError;
     215 : Result:=SIntOverFlow;
     216 : Result:=SAccessViolation;
     217 : Result:=SPrivilege;
     218 : Result:=SControlC;
     219 : Result:=SInvalidCast;
     220 : Result:=SInvalidVarCast;
     221 : Result:=SInvalidVarOp;
     222 : Result:=SDispatchError;
     223 : Result:=SVarArrayCreate;
     224 : Result:=SVarNotArray;
     225 : Result:=SVarArrayBounds;
     227 : Result:=SAssertionFailed;
     228 : Result:=SExternalException;
     229 : Result:=SIntfCastError;
     230 : Result:=SSafecallException;
     231 : Result:=SExceptionStack;
     232 : Result:=SNoThreadSupport;
     233 : Result:=SMissingWStringManager;
     255 : Result:=SFallbackError;

  end;
  If length(Result)=0 then
    begin
      Str(Errno:3,Result);
      Result:=SUnknown+Result;
    end;
end;
{乐滋滋工作室  结束}  
Begin
{$ifdef SYSTEMDEBUG}
  writeln('InternalExit');
{$endif SYSTEMDEBUG}
  while exitProc<>nil Do
   Begin
     InOutRes:=0;
     current_exit:=tProcedure(exitProc);
     exitProc:=nil;
     current_exit();
   End;
  { Finalize units }
  FinalizeUnits;

{$ifdef FPC_HAS_FEATURE_CONSOLEIO}
  { Show runtime error and exit }
  pstdout:=@stdout;
  If erroraddr<>nil Then
   Begin
     {乐滋滋工作室}
     Writeln(pstdout^,'运行时错误 ',Errorcode,' ',GetRunError(Errorcode),'。发生于地址：');
     Writeln('  $',hexstr(erroraddr));
     {乐滋滋工作室}
     Writeln(pstdout^,BackTraceStrFunc(Erroraddr));
     dump_stack(pstdout^,ErrorBase);
     Writeln(pstdout^,'');
   End;
  SysFlushStdIO;
{$endif FPC_HAS_FEATURE_CONSOLEIO}

{$if defined(MSWINDOWS) or defined(OS2)}
  { finally release the heap if possible, especially
    important for DLLs.
    Reset the array to nil, and finally also argv itself to
    avoid double freeing problem in case this function gets called twice. }
  if assigned(argv) then
    begin
      for i:=0 to argc-1 do
        if assigned(argv[i]) then
          begin
            sysfreemem(argv[i]);
            argv[i]:=nil;
          end;
      sysfreemem(argv);
      argv:=nil;
    end;
{$endif}
{$ifdef LINUX}
  {sysfreemem already checks for nil}
  sysfreemem(calculated_cmdline);
{$endif}
{$ifdef BSD}
  sysfreemem(cmdline);
{$endif}

{$ifdef FPC_HAS_FEATURE_HEAP}
{$ifndef HAS_MEMORYMANAGER}
  FinalizeHeap;
{$endif HAS_MEMORYMANAGER}
{$endif FPC_HAS_FEATURE_HEAP}
End;


Procedure do_exit;[Public,Alias:'FPC_DO_EXIT'];
begin
  InternalExit;
  System_exit;
end;


Procedure lib_exit;[Public,Alias:'FPC_LIB_EXIT'];
begin
  InternalExit;
end;


Procedure Halt(ErrNum: Longint);
Begin
  ExitCode:=Errnum;
  Do_Exit;
end;


function SysBackTraceStr (Addr: Pointer): ShortString;
begin
  SysBackTraceStr:='  $'+hexstr(addr);
end;


Procedure HandleErrorAddrFrame (Errno : longint;addr,frame : Pointer);[public,alias:'FPC_BREAK_ERROR']; {$ifdef CPU86} register; {$endif}
begin
  If pointer(ErrorProc)<>Nil then
    ErrorProc(Errno,addr,frame);
  errorcode:=word(Errno);
  erroraddr:=addr;
  errorbase:=frame;
{$ifdef FPC_HAS_FEATURE_EXCEPTIONS}
  if ExceptAddrStack <> nil then
    raise TObject(nil) at addr,frame;
{$endif FPC_HAS_FEATURE_EXCEPTIONS}

{$ifdef FPC_HAS_FEATURE_EXITCODE}
{$ifdef FPC_LIMITED_EXITCODE}
  if errorcode > maxExitCode then
    halt(255)
  else
{$endif FPC_LIMITED_EXITCODE}
    halt(errorcode);
{$else FPC_HAS_FEATURE_EXITCODE}
  halt;
{$endif FPC_HAS_FEATURE_EXITCODE}
end;

Procedure HandleErrorFrame (Errno : longint;frame : Pointer);
{
  Procedure to handle internal errors, i.e. not user-invoked errors
  Internal function should ALWAYS call HandleError instead of RunError.
  Can be used for exception handlers to specify the frame
}
begin
  HandleErrorAddrFrame(Errno,get_caller_addr(frame),get_caller_frame(frame));
end;


Procedure HandleError (Errno : longint);[public,alias : 'FPC_HANDLEERROR'];
{
  Procedure to handle internal errors, i.e. not user-invoked errors
  Internal function should ALWAYS call HandleError instead of RunError.
}
begin
  HandleErrorFrame(Errno,get_frame);
end;


procedure RunError(w : word);[alias: 'FPC_RUNERROR'];
begin
  errorcode:=w;
  erroraddr:=get_caller_addr(get_frame);
  errorbase:=get_caller_frame(get_frame);
{$ifdef FPC_HAS_FEATURE_EXITCODE}
{$ifdef FPC_LIMITED_EXITCODE}
  if errorcode > maxExitCode then
    halt(255)
  else
{$endif FPC_LIMITED_EXITCODE}
    halt(errorcode);
{$else FPC_HAS_FEATURE_EXITCODE}
  halt;
{$endif FPC_HAS_FEATURE_EXITCODE}
end;


Procedure RunError;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  RunError (0);
End;


Procedure Halt;{$ifdef SYSTEMINLINE}inline;{$endif}
Begin
  Halt(0);
End;

Procedure Error(RunTimeError : TRunTimeError);

begin
  RunError(RuntimeErrorExitCodes[RunTimeError]);
end;


{$ifdef FPC_HAS_FEATURE_CONSOLEIO}
Procedure dump_stack(var f : text;bp : Pointer);
var
  i : Longint;
  prevbp : Pointer;
  is_dev : boolean;
  caller_frame,
  caller_addr : Pointer;
Begin
{$ifdef FPC_HAS_FEATURE_EXCEPTIONS}
  try
{$endif FPC_HAS_FEATURE_EXCEPTIONS}
    prevbp:=bp-1;
    i:=0;
    is_dev:=do_isdevice(textrec(f).Handle);
    while bp > prevbp Do
     Begin
       caller_addr := get_caller_addr(bp);
       caller_frame := get_caller_frame(bp);
       if (caller_addr=nil) then
         break;
       Writeln(f,BackTraceStrFunc(caller_addr));
       if (caller_frame=nil) then
         break;
       Inc(i);
       If ((i>max_frame_dump) and is_dev) or (i>256) Then
         break;
       prevbp:=bp;
       bp:=caller_frame;
     End;
{$ifdef FPC_HAS_FEATURE_EXCEPTIONS}
   except
     { prevent endless dump if an exception occured }
   end;
{$endif FPC_HAS_FEATURE_EXCEPTIONS}
End;


{$ifdef FPC_HAS_FEATURE_EXCEPTIONS}
procedure DumpExceptionBackTrace(var f:text);
var
  FrameNumber,
  FrameCount   : longint;
  Frames       : PPointer;
begin
  if RaiseList=nil then
    exit;
  WriteLn(f,BackTraceStrFunc(RaiseList^.Addr));
  FrameCount:=RaiseList^.Framecount;
  Frames:=RaiseList^.Frames;
  for FrameNumber := 0 to FrameCount-1 do
    WriteLn(f,BackTraceStrFunc(Frames[FrameNumber]));
end;
{$endif FPC_HAS_FEATURE_EXCEPTIONS}

{$endif FPC_HAS_FEATURE_CONSOLEIO}


{$ifdef FPC_HAS_FEATURE_HEAP}
Type
  PExitProcInfo = ^TExitProcInfo;
  TExitProcInfo = Record
    Next     : PExitProcInfo;
    SaveExit : Pointer;
    Proc     : TProcedure;
  End;
const
  ExitProcList: PExitProcInfo = nil;

Procedure DoExitProc;
var
  P    : PExitProcInfo;
  Proc : TProcedure;
Begin
  P:=ExitProcList;
  ExitProcList:=P^.Next;
  ExitProc:=P^.SaveExit;
  Proc:=P^.Proc;
  DisPose(P);
  Proc();
End;


Procedure AddExitProc(Proc: TProcedure);
var
  P : PExitProcInfo;
Begin
  New(P);
  P^.Next:=ExitProcList;
  P^.SaveExit:=ExitProc;
  P^.Proc:=Proc;
  ExitProcList:=P;
  ExitProc:=@DoExitProc;
End;
{$endif FPC_HAS_FEATURE_HEAP}


{$ifdef FPC_HAS_FEATURE_HEAP}
function ArrayStringToPPchar(const S:Array of AnsiString;reserveentries:Longint):ppchar; // const ?
// Extra allocate reserveentries pchar's at the beginning (default param=0 after 1.0.x ?)
// Note: for internal use by skilled programmers only
// if "s" goes out of scope in the parent procedure, the pointer is dangling.

var p   : ppchar;
    i   : LongInt;
begin
  if High(s)<Low(s) Then Exit(NIL);
  Getmem(p,sizeof(pchar)*(high(s)-low(s)+ReserveEntries+2));  // one more for NIL, one more
                                              // for cmd
  if p=nil then
    begin
      {$ifdef xunix}
      fpseterrno(ESysEnomem);
      {$endif}
      exit(NIL);
    end;
  for i:=low(s) to high(s) do
     p[i+Reserveentries]:=pchar(s[i]);
  p[high(s)+1+Reserveentries]:=nil;
  ArrayStringToPPchar:=p;
end;


Function StringToPPChar(Var S:AnsiString;ReserveEntries:integer):ppchar;
{
  Create a PPChar to structure of pchars which are the arguments specified
  in the string S. Especially useful for creating an ArgV for Exec-calls
}

begin
  StringToPPChar:=StringToPPChar(PChar(S),ReserveEntries);
end;


Function StringToPPChar(S: PChar;ReserveEntries:integer):ppchar;

var
  i,nr  : longint;
  Buf : ^char;
  p   : ppchar;

begin
  buf:=s;
  nr:=1;
  while (buf^<>#0) do                   // count nr of args
   begin
     while (buf^ in [' ',#9,#10]) do    // Kill separators.
      inc(buf);
     inc(nr);
     if buf^='"' Then                   // quotes argument?
      begin
        inc(buf);
        while not (buf^ in [#0,'"']) do // then end of argument is end of string or next quote
         inc(buf);
        if buf^='"' then                // skip closing quote.
          inc(buf);
      end
     else
       begin                            // else std
         while not (buf^ in [' ',#0,#9,#10]) do
           inc(buf);
       end;
   end;
  getmem(p,(ReserveEntries+nr)*sizeof(pchar));
  StringToPPChar:=p;
  if p=nil then
   begin
     {$ifdef xunix}
     fpseterrno(ESysEnomem);
     {$endif}
     exit;
   end;
  for i:=1 to ReserveEntries do inc(p); // skip empty slots
  buf:=s;
  while (buf^<>#0) do
   begin
     while (buf^ in [' ',#9,#10]) do    // Kill separators.
      begin
       buf^:=#0;
       inc(buf);
      end;
     if buf^='"' Then                   // quotes argument?
      begin
        inc(buf);
        p^:=buf;
        inc(p);
        p^:=nil;
        while not (buf^ in [#0,'"']) do // then end of argument is end of string or next quote
         inc(buf);
        if buf^='"' then                // skip closing quote.
          begin
            buf^:=#0;
            inc(buf);
          end;
      end
     else
       begin
        p^:=buf;
        inc(p);
        p^:=nil;
         while not (buf^ in [' ',#0,#9,#10]) do
           inc(buf);
       end;
   end;
end;
{$endif FPC_HAS_FEATURE_HEAP}


{*****************************************************************************
                          Abstract/Assert support.
*****************************************************************************}

procedure fpc_AbstractErrorIntern;compilerproc;[public,alias : 'FPC_ABSTRACTERROR'];
begin
  If pointer(AbstractErrorProc)<>nil then
    AbstractErrorProc();
  HandleErrorFrame(211,get_frame);
end;


Procedure fpc_assert(Const Msg,FName:Shortstring;LineNo:Longint;ErrorAddr:Pointer); [Public,Alias : 'FPC_ASSERT']; compilerproc;
begin
  if pointer(AssertErrorProc)<>nil then
    AssertErrorProc(Msg,FName,LineNo,ErrorAddr)
  else
    HandleErrorFrame(227,get_frame);
end;


Procedure SysAssert(Const Msg,FName:Shortstring;LineNo:Longint;ErrorAddr:Pointer);
begin
{$ifdef FPC_HAS_FEATURE_CONSOLEIO}
  If msg='' then
    write(stderr,'Assertion failed')
  else
    write(stderr,msg);
  Writeln(stderr,' (',FName,', line ',LineNo,').');
  Writeln(stderr,'');
{$ifdef FPC_HAS_FEATURE_EXITCODE}
  Halt(227);
{$else FPC_HAS_FEATURE_EXITCODE}
  halt;
{$endif FPC_HAS_FEATURE_EXITCODE}
{$endif FPC_HAS_FEATURE_CONSOLEIO}
end;


{*****************************************************************************
                       SetJmp/LongJmp support.
*****************************************************************************}

{$i setjump.inc}


{$ifdef IOCheckWasOn}
{$I+}
{$endif}

{$ifdef RangeCheckWasOn}
{$R+}
{$endif}

{$ifdef OverflowCheckWasOn}
{$Q+}
{$endif}


{*****************************************************************************
                               Heap
*****************************************************************************}

{$ifdef FPC_HAS_FEATURE_HEAP}
{$i sysheap.inc}

{$i heap.inc}
{$endif FPC_HAS_FEATURE_HEAP}

{*****************************************************************************
                          Thread support
*****************************************************************************}

{$ifdef FPC_HAS_FEATURE_THREADING}
{ Generic threadmanager }
{$i thread.inc}

{ Generic threadvar support }
{$i threadvr.inc}

{$ifdef DISABLE_NO_THREAD_MANAGER}
{ OS Dependent implementation }
{$i systhrd.inc}
{$endif DISABLE_NO_THREAD_MANAGER}
{$endif FPC_HAS_FEATURE_THREADING}


{*****************************************************************************
                            File Handling
*****************************************************************************}


{$ifdef FPC_HAS_FEATURE_FILEIO}
{ Allow slash and backslash as separators }
procedure DoDirSeparators(p:Pchar);
var
  i : longint;
begin
  for i:=0 to strlen(p) do
    if p[i] in AllowDirectorySeparators then
      p[i]:=DirectorySeparator;
end;

procedure DoDirSeparators(var p:shortstring);
var
  i : longint;
begin
  for i:=1 to length(p) do
    if p[i] in AllowDirectorySeparators then
      p[i]:=DirectorySeparator;
end;
{$endif FPC_HAS_FEATURE_FILEIO}

{ OS dependent low level file functions }
{$ifdef FPC_HAS_FEATURE_FILEIO}
{$i sysfile.inc}
{$endif FPC_HAS_FEATURE_FILEIO}

{ Text file }
{$ifdef FPC_HAS_FEATURE_TEXTIO}
{$i text.inc}
{$endif FPC_HAS_FEATURE_TEXTIO}

{$ifdef FPC_HAS_FEATURE_FILEIO}
{ Untyped file }
{$i file.inc}

{ Typed file }
{$i typefile.inc}
{$endif FPC_HAS_FEATURE_FILEIO}


{*****************************************************************************
                            Directory Handling
*****************************************************************************}

{$ifdef FPC_HAS_FEATURE_FILEIO}
{ OS dependent dir functions }
{$i sysdir.inc}
{$endif FPC_HAS_FEATURE_FILEIO}

{$if defined(FPC_HAS_FEATURE_FILEIO) and defined(FPC_HAS_FEATURE_ANSISTRINGS)}
Procedure getdir(drivenr:byte;Var dir:ansistring);
{ this is needed to also allow ansistrings, the shortstring version is
  OS dependent }
var
  s : shortstring;
begin
  getdir(drivenr,s);
  dir:=s;
end;
{$endif}

{$if defined(FPC_HAS_FEATURE_FILEIO)}

Procedure MkDir(Const s: String);
Var
  Buffer: Array[0..255] of Char;
Begin
  If (s='') or (InOutRes <> 0) then
   exit;
  Move(s[1], Buffer, Length(s));
  Buffer[Length(s)] := #0;
  MkDir(@buffer[0],length(s));
End;

Procedure RmDir(Const s: String);
Var
  Buffer: Array[0..255] of Char;
Begin
  If (s='') or (InOutRes <> 0) then
   exit;
  Move(s[1], Buffer, Length(s));
  Buffer[Length(s)] := #0;
  RmDir(@buffer[0],length(s));
End;

Procedure ChDir(Const s: String);
Var
  Buffer: Array[0..255] of Char;
Begin
  If (s='') or (InOutRes <> 0) then
   exit;
  Move(s[1], Buffer, Length(s));
  Buffer[Length(s)] := #0;
  ChDir(@buffer[0],length(s));
End;
{$endif}

{*****************************************************************************
                            Resources support
*****************************************************************************}

{$i sysres.inc}

const
  CtrlBreakHandler: TCtrlBreakHandler = nil;

{$IFNDEF FPC_HAS_SETCTRLBREAKHANDLER}
(* It is possible to provide platform specific implementation performing   *)
(* special initialization; default implementation just sets the procedural *)
(* variable to make it available for use from the exception handler.       *)
function SysSetCtrlBreakHandler (Handler: TCtrlBreakHandler): TCtrlBreakHandler;
begin
  (* Return either nil or previous handler *)
  SysSetCtrlBreakHandler := CtrlBreakHandler;
  CtrlBreakHandler := Handler;
end;
{$ENDIF FPC_HAS_SETCTRLBREAKHANDLER}
