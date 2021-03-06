{
    This file is part of the Free Pascal Run time library.
    Copyright (c) 1999-2000 by the Free Pascal development team

    See the File COPYING.FPC, included in this distribution,
    for details about the copyright.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

 **********************************************************************}

{****************************************************************************
                    subroutines for typed file handling
****************************************************************************}

Procedure Assign(out f:TypedFile;const Name:string);
{
  Assign Name to file f so it can be used with the file routines
}
Begin
  FillChar(f,SizeOF(FileRec),0);
  FileRec(f).Handle:=UnusedHandle;
  FileRec(f).mode:=fmClosed;
  Move(Name[1],FileRec(f).Name,Length(Name));
End;


Procedure Assign(out f:TypedFile;p:pchar);
{
  Assign Name to file f so it can be used with the file routines
}
begin
  Assign(f,StrPas(p));
end;


Procedure Assign(out f:TypedFile;c:char);
{
  Assign Name to file f so it can be used with the file routines
}
begin
  Assign(f,string(c));
end;


Procedure fpc_reset_typed(var f : TypedFile;Size : Longint);[Public,IOCheck, Alias:'FPC_RESET_TYPED']; compilerproc;
Begin
  If InOutRes <> 0 then
   exit;
  Reset(UnTypedFile(f),Size);
End;


Procedure fpc_rewrite_typed(var f : TypedFile;Size : Longint);[Public,IOCheck, Alias:'FPC_REWRITE_TYPED']; compilerproc;
Begin
  If InOutRes <> 0 then
   exit;
  Rewrite(UnTypedFile(f),Size);
End;

{ this code is duplicated in the iso7185 unit }
Procedure DoAssign(var t : TypedFile);
Begin
  Assign(t,'fpc_'+HexStr(random(1000000000),8)+'.tmp');
End;


Procedure fpc_reset_typed_iso(var f : TypedFile;Size : Longint);[Public,IOCheck, Alias:'FPC_RESET_TYPED_ISO']; compilerproc;
Begin
  If InOutRes <> 0 then
   exit;

  { create file name? }
  if FileRec(f).mode=0 then
    DoAssign(f);

  Reset(UnTypedFile(f),Size);
End;


Procedure fpc_rewrite_typed_iso(var f : TypedFile;Size : Longint);[Public,IOCheck, Alias:'FPC_REWRITE_TYPED_ISO']; compilerproc;
Begin
  If InOutRes <> 0 then
   exit;

  { create file name? }
  if FileRec(f).mode=0 then
    DoAssign(f);

  Rewrite(UnTypedFile(f),Size);
End;


Procedure fpc_typed_write(TypeSize : Longint;var f : TypedFile;const Buf);[IOCheck, Public, Alias :'FPC_TYPED_WRITE']; compilerproc;
Begin
  If InOutRes <> 0 then
   exit;
  case fileRec(f).mode of
    fmOutPut,fmInOut:
      Do_Write(FileRec(f).Handle,@Buf,TypeSize);
    fmInput: inOutRes := 105;
    else inOutRes := 103;
  end;
End;

Procedure fpc_typed_read(TypeSize : Longint;var f : TypedFile;out Buf);[IOCheck, Public, Alias :'FPC_TYPED_READ']; compilerproc;
var
  Result : Longint;
Begin
  If InOutRes <> 0 then
   exit;
  case FileRec(f).mode of
    fmInput,fmInOut:
      begin
        Result:=Do_Read(FileRec(f).Handle,@Buf,TypeSize);
        If Result<TypeSize Then
         InOutRes:=100
      end;
    fmOutPut: inOutRes := 104
    else inOutRes := 103;
  end;
End;

