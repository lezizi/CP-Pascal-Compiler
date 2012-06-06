{
    Copyright (c) 2012 LeZiZi Studio
    
    The code is created by the LeZiZi Studio. Visit www.lezizi.org 
    for more information. 
    
}
{$mode objfpc}
{$H+}
unit sysconst;

interface

resourcestring

{ from old str*.inc files }
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

  SShortMonthNameJan = 'Jan';
  SShortMonthNameFeb = 'Feb';
  SShortMonthNameMar = 'Mar';
  SShortMonthNameApr = 'Apr';
  SShortMonthNameMay = 'May';
  SShortMonthNameJun = 'Jun';
  SShortMonthNameJul = 'Jul';
  SShortMonthNameAug = 'Aug';
  SShortMonthNameSep = 'Sep';
  SShortMonthNameOct = 'Oct';
  SShortMonthNameNov = 'Nov';
  SShortMonthNameDec = 'Dec';

  SLongMonthNameJan = 'January';
  SLongMonthNameFeb = 'February';
  SLongMonthNameMar = 'March';
  SLongMonthNameApr = 'April';
  SLongMonthNameMay = 'May';
  SLongMonthNameJun = 'June';
  SLongMonthNameJul = 'July';
  SLongMonthNameAug = 'August';
  SLongMonthNameSep = 'September';
  SLongMonthNameOct = 'October';
  SLongMonthNameNov = 'November';
  SLongMonthNameDec = 'December';

  SShortDayNameMon = 'Mon';
  SShortDayNameTue = 'Tue';
  SShortDayNameWed = 'Wed';
  SShortDayNameThu = 'Thu';
  SShortDayNameFri = 'Fri';
  SShortDayNameSat = 'Sat';
  SShortDayNameSun = 'Sun';

  SLongDayNameMon = 'Monday';
  SLongDayNameTue = 'Tuesday';
  SLongDayNameWed = 'Wednesday';
  SLongDayNameThu = 'Thursday';
  SLongDayNameFri = 'Friday';
  SLongDayNameSat = 'Saturday';
  SLongDayNameSun = 'Sunday';

Function GetRunError(Errno : Word) : String;

Implementation

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
     200 : Result:=SDivByZero;
     201 : Result:=SRangeError;
     203 : Result:=SOutOfMemory;
     204 : Result:=SInvalidPointer;
     205 : Result:=SOverFlow;
     206 : Result:=SUnderFlow;
     207 : Result:=SInvalidOp;
     211 : Result:=SAbstractError;
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

     {Error codes larger than 255 cannot be returned as an exit code to the OS,
      for some OS's. If this happens, error 255 is returned instead.
      Errors for which it is important that they can be distinguished,
      shall be below 255}

     {Error in the range 900 - 999 is considered platform specific}


  end;
  If length(Result)=0 then
    begin
      Str(Errno:3,Result);
      Result:=SUnknown+Result;
    end;
end;

end.
