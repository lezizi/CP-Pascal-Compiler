{$ifdef Delphi}
const msgtxt : array[0..000181] of string[240]=(
{$else Delphi}
const msgtxt : array[0..000181,1..240] of char=(
{$endif Delphi}
  '01000_T_±àÒëÆ÷: $1'#000+
  '01001_D_±àÒëÏµÍ³: $1'#000+
  '01002_I_Ä¿±êÏµÍ³: $1'#000+
  '01003_T_¿ÉÖ´ÐÐÎÄ¼þÄ¿Â¼: $1'#000+
  '01004_T_¿â£¨Unit£©Ä¿Â¼: $1'#000+
  '01005_T_include Ä¿Â¼: $1'#000+
  '01006_T_library Ä¿Â¼: $1'#000+
  '01007_T_object Ä¿Â¼: $1'#000+
  '01008_I_±àÒëÁË $1 £¬ÐÐ $2 ¶Î $3'#000+
  '01009_F_Ê£ÓàÄÚ´æ²»×','ã'#000+
  '01010_I_Êä³ö×ÊÔ´×Ö·û´®±í: $1'#000+
  '01011_E_Êä³ö×ÊÔ´×Ö·û´®±í: $1'#000+
  '01012_I_Ê§°Ü£º'#000+
  '01013_I_´íÎó£º'#000+
  '01014_I_¾¯¸æ£º'#000+
  '01015_I_ÌáÊ¾£º'#000+
  '01016_I_×¢Òâ£º'#000+
  '01017_E_Ä¿Â¼ "$1" ²»Îª¿Õ'#000+
  '01018_F_±àÒëÖÐÖ¹'#000+
  '01019_bytes ´úÂë'#000+
  '01020_bytes Êý¾Ý'#000+
  '01021_I_$1 ¸ö´íÎó±»ÕÒµ½'#000+
  '01022','_I_$1 ¸ö¾¯¸æ±»ÕÒµ½'#000+
  '01023_I_$1 ¸öÌáÊ¾±»ÕÒµ½'#000+
  '02000_F_È±ÉÙÎÄ¼þ½áÎ²'#000+
  '02001_F_×Ö·û´®¹ý³¤'#000+
  '02002_F_·Ç·¨×Ö·û "$1" ($2)'#000+
  '02003_F_Óï·¨´íÎó£¬ÕÒµ½ "$2" £¬µ«È±ÉÙ "$1"'#000+
  '02004_TL_ÔÄ¶Á include ÎÄ¼þ $1'#000+
  '02005_W_ÕÒµ½ $1 ²ã×¢ÊÍ'#000+
  '02008_N_ºöÂÔ±àÒë¿ª¹Ø "$1"'#000+
  '02009_W_·','Ç·¨±àÒë¿ª¹Ø "$1"'#000+
  '02010_W_´íÎóµÄÈ«¾Ö±àÒë¿ª¹Ø'#000+
  '02011_E_Á¬ÐøµÄ´íÎó×Ö·û'#000+
  '02012_F_ÎÞ·¨´ò¿ªÎÄ¼þ "$1"'#000+
  '02013_F_ÎÞ·¨´ò¿ª include ÎÄ¼þ "$1"'#000+
  '02015_E_·Ç·¨µÄ¼ÇÂ¼Ð£×¼·û "$1"'#000+
  '02016_E_·Ç·¨Ã¶¾Ù×îÐ¡³ß´ç±êÊ¶·û "$1"'#000+
  '02017_E_$¶¨ÒåÔÚ $3 ÐÐ $4 µÄ $1 $2 È±ÉÙ ENDIF  ',' '#000+
  '02018_E_½âÎö±í´ïÊ½Ò»¸öÌõ¼þÊ±·¢ÉúÓï·¨´íÎó'#000+
  '02019_¼ÆËãÌõ¼þ±í´ïÊ½Ê§°Ü'#000+
  '02020_W_ºê¶¨Òå¶àÓÚ 255 ¸ö×Ö·û'#000+
  '02021_E_Ã»ÓÐIfÈ´½áÊøEndif'#000+
  '02022_F_ÓÃ»§¶¨Òå£º$1'#000+
  '02023_E_ÓÃ»§¶¨Òå£º$1'#000+
  '02024_W_ÓÃ»§¶¨Òå£º$1'#000+
  '02025_N_ÓÃ»§¶¨Òå£º$1'#000+
  '02026_H_ÓÃ»§¶¨Òå£º$1'#000+
  '02027_I_ÓÃ»','§¶¨Òå£º$1'#000+
  '02028_E_¹Ø¼ü×Öºê¹Û¶¨ÒåÃ»ÓÐÈÎºÎÐ§¹û'#000+
  '02029_F_Macro buffer overflow while reading or expanding a macro'#000+
  '02030_W_Expanding of macros exceeds a depth of 16.'#000+
  '02031_W_compiler switches aren'#039't supported in // styled comments'#000+
  '02032_DL_´¦Àí¿','ª¹Ø "$1"'#000+
  '02033_CL_ENDIF $1 found'#000+
  '02034_CL_IFDEF $1 found, $2'#000+
  '02035_CL_IFOPT $1 found, $2'#000+
  '02036_CL_IF $1 found, $2'#000+
  '02037_CL_IFNDEF $1 found, $2'#000+
  '02038_CL_ELSE $1 found, $2'#000+
  '02039_CL_Skipping until...'#000+
  '02040_I_°´»Ø³µ¼ü¼ÌÐø'#000+
  '02041_W_²»Ö§³Ö¿ª¹Ø "$1','"'#000+
  '02042_W_Illegal compiler directive "$1"'#000+
  '02043_TL_Back in $1'#000+
  '02044_W_²»Ö§³ÖÓ¦ÓÃ³ÌÐòÐÎÊ½ "$1"'#000+
  '02045_W_APPTYPE is not supported by the target OS'#000+
  '02046_W_DESCRIPTION is not supported by the target OS'#000+
  '02047_N_VERSION ÔÚÄ¿±ê²Ù×÷ÏµÍ³ÖÐ²»±»Ö§³Ö'#000+
  '0','2048_N_VERSION ½ö¹© EXE »ò DLL Ê¹ÓÃ'#000+
  '02049_W_Wrong format for VERSION directive "$1"'#000+
  '02050_E_·Ç·¨»ã±àÊ½ "$1"'#000+
  '02051_W_ASM reader switch is not possible inside asm statement, "$1" w'+
  'ill be effective only for next'#000+
  '02052_E_´íÎóµÄ¿ª¹Ø£¬ÇëÊ¹ÓÃ ON/O','FF »ò +/-'#000+
  '02053_E_ÔÚµ±Ç°¿ª¹ØÖÐ£¬×ÊÔ´ÎÄ¼þ²»±»Ðí¿É'#000+
  '02054_W_Include environment "$1" not found in environment'#000+
  '02055_E_²»·ûºÏFPUµÄ×¢²áÏÞÖÆ'#000+
  '02056_W_Only one resource file is supported for this target'#000+
  '02057_W_ºê¹¦ÄÜÒÑ¾­±»¹Ø±Õ'#000+
  '02058_E_´íÎóµÄ½Ó¿ÚÖ¸','¶¨¡£ÔÊÐí COM£¬CORBA »òDEFAULT'#000+
  '02059_W_APPID is only supported for PalmOS'#000+
  '02060_W_APPNAME is only supported for PalmOS'#000+
  '02061_E_³£Êý×Ö·û´®¶àÓÚ 255 ¸ö×Ö·û'#000+
  '02062_F_Including include files exceeds a depth of 16.'#000+
  '02063_F_PUSH ²ãÊýÌ«¶à'#000+
  '02064_E_Ò»¸','öÔÚ½øÕ»Ö®Ç°µÄ³öÕ»'#000+
  '02065_E_ºê»ò±àÒëÊ±±äÁ¿ "$1" Ã»ÓÐÈÎºÎÖµ'#000+
  '02066_E_´íÎóµÄ¿ª¹Ø, Ê¹ÓÃ ON/OFF/DEFAULT »ò +/-/*'#000+
  '02067_E_Ä£Ê½¿ª¹Ø "$1" ÔÚ´Ë´¦²»±»ÔÊÐí'#000+
  '02068_E_±àÒëÊ±±äÁ¿»òºê "$1" Îª¶¨Òå'#000+
  '02069_E_UTF-8 ´úÂë´óÓÚ 65535'#000+
  '02070_E_¸ñÊ½´íÎóµÄ UTF-8 ×Ö·û´®'#000+
  '0','2071_C_UTF-8 Ç©ÃûÕÒµ½£¬Ê¹ÓÃ UTF-8 ±àÂë'#000+
  '02072_E_±àÒëÊ±±í´ïÊ½£ºÔÚ$3Î´ÕÒµ½$1µ«ÕÒµ½$2 '#000+
  '02073_N_APPTYPE is not supported by the target OS'#000+
  '02074_E_·Ç·¨µÄÓÅ»¯ÉèÖÃ "$1"'#000+
  '02075_W_SETPEFLAGS is not supported by the target OS'#000+
  '02076_W_IMAGEBASE is not s','upported by the target OS'#000+
  '02077_W_MINSTACKSIZE is not supported by the target OS'#000+
  '02078_W_MAXSTACKSIZE is not supported by the target OS'#000+
  '02079_E_·Ç·¨×´Ì¬ $WARN Ö¸Áî'#000+
  '02080_E_·Ç·¨ÉèÖÃ°ü×°Öµ'#000+
  '02081_W_PIC directive or switch ignored'#000+
  '02082_W_The s','witch "$1" is not supported by the currently selected t'+
  'arget'#000+
  '02084_W_Framework-related options are only supported for Darwin/Mac OS'+
  ' X'#000+
  '02085_E_·Ç·¨×îÐ¡¾«¶È¸¡µã³£Êý "$1"'#000+
  '02086_W_Overriding name of "main" procedure multiple times, was previo'+
  'us','ly set to "$1"'#000+
  '02087_W_Illegal identifier "$1" for $WARN directive'#000+
  '02088_E_Illegal alignment directive'#000+
  '03000_E_Parser - Syntax Error'#000+
  '03004_E_INTERRUPT procedure can'#039't be nested'#000+
  '03005_W_Procedure type "$1" ignored'#000+
  '03006_E_Not all declaration','s of "$1" are declared with OVERLOAD'#000+
  '03008_E_Duplicate exported function name "$1"'#000+
  '03009_E_Duplicate exported function index $1'#000+
  '03010_E_Invalid index for exported function'#000+
  '03011_W_Relocatable DLL or executable $1 debug info does not work, d','i'+
  'sabled.'#000+
  '03012_W_To allow debugging for win32 code you need to disable relocati'+
  'on with -WN option'#000+
  '03013_E_Constructor name must be INIT'#000+
  '03014_E_Destructor name must be DONE'#000+
  '03016_E_Procedure type INLINE not supported'#000+
  '03018_W_Constructor sho','uld be public'#000+
  '03019_W_Destructor should be public'#000+
  '03020_N_Class should have one destructor only'#000+
  '03021_E_Local class definitions are not allowed'#000+
  '03022_F_Anonymous class definitions are not allowed'#000+
  '03023_N_¶ÔÏó "$1" Ã»ÓÐ VMT'#000+
  '03024_E_·Ç·¨²ÎÊýÁ','Ð±í'#000+
  '03026_E_"$1" µÄ²ÎÊýÊýÁ¿´íÎó'#000+
  '03027_E_ÖØÔØµÄ±êÊ¶·û "$1" ²»ÊÇº¯Êý'#000+
  '03028_E_ÖØÔØµÄ¶à¸öº¯ÊýÓÐÏàÍ¬µÄ²ÎÊý±í'#000+
  '03029_E_º¯Êý¶¨ÒåÓëÏÈÇ°µÄ¶¨Òå "$1" ²»ÎÇºÏ'#000+
  '03030_E_º¯Êý¶¨Òå "$1"  ²¢Î´ÔÚÏÈÇ°µÄ¶¨ÒåÖÐÕÒµ½£º±äÁ¿Ãû $2 ==> $3'#000+
  '03031_N_Values in enumeration t','ypes have to be ascending'#000+
  '03033_E_²»ÄÜÓÃÓÚ±äÁ¿ÔÚ²»Í¬µÄÓò'#000+
  '03034_E_º¯ÊýÇ¶Ì×ÊýÁ¿´óÓÚ31'#000+
  '03035_E_³£Êý·¶Î§¼ì²é´íÎó'#000+
  '03036_W_³£Á¿·¶Î§¼ì²é´íÎó'#000+
  '03037_E_ÖØ¸´µÄ±êÇ©'#000+
  '03038_E_ÉÏ½çµÄ·¶Î§Ð¡ÓÚÏÂ½ç'#000+
  '03039_E_Àà»ò½Ó¿ÚÀàÐÍµÄ³£Á¿²»ÔÊÐí'#000+
  '03040_E_×°ÔØµÄ¹¦ÄÜº¯Êý±äÁ¿²','»ÔÊÐí'#000+
  '03041_E_×Ö·û´®³¤¶È±ØÐëÔÚ 1 µ½ 255 Ö®¼ä'#000+
  '03042_W_use extended syntax of NEW and DISPOSE for instances of object'+
  's'#000+
  '03043_W_use of NEW or DISPOSE for untyped pointers is meaningless'#000+
  '03044_E_NEW »ò DISPOSE ²»¼æÈÝÎÞÀàÐÍµÄÖ¸Õë'#000+
  '03045_E_È±ÉÙ Àà','ÐÍ ±êÊ¶·û'#000+
  '03046_E_Àà ÐÍ±êÊ¶·ûÔÚ´Ë´¦²»±»ÔÊÐí'#000+
  '03047_E_È±ÉÙ ·½·¨ ±êÊ¶·û'#000+
  '03048_E_º¯Êý¶¨Òå²»·ûºÏÈÎºÎÊôÓÚ´ËÀàµÄ·½·¨ "$1"'#000+
  '03049_DL_¹ý³Ì/º¯Êý $1'#000+
  '03050_E_·Ç·¨¸¡µã³£Êý'#000+
  '03051_E_FAIL Ö»ÄÜ±»ÓÃÓÚ¹¹Ôì'#000+
  '03052_E_Îö¹¹º¯Êý²»ÄÜÓÐ²ÎÊý'#000+
  '03053_E_Ö»ÓÐÀà·½·¨£¬ÀàÊôÐÔº','ÍÀà±äÁ¿¿ÉÒÔ±»²Î¿¼'#000+
  '03054_E_Ö»ÓÐÀà£¬Àà·½·¨£¬ÀàÊôÐÔºÍÀà±äÁ¿¿ÉÒÔÔÚÀà·½·¨ÖÐÊ¹ÓÃ'#000+
  '03055_E_³£ÊýºÍ CASE ÀàÐÍ²»Æ¥Åä'#000+
  '03056_E_²»ÄÜ´Ó¿âÖÐµ¼³ö·ûºÅ'#000+
  '03057_W_¼Ì³ÐµÄ·½·¨±» "$1" Òþ²Ø'#000+
  '03058_E_ÔÚÖØÐ´µÄ¸ùÀàÖÐÓÐÃ»ÓÐ·½·¨£º"$1"'#000+
  '03059_E_·ÃÎÊµÄÊôÐÔ²»Ìá¹©ÈÎºÎ³ÉÔ±'#000+
  '0306','0_W_´æ´¢µÄ property directive ²¢Î´ÊµÏÖ'#000+
  '03061_E_Ê¹ÓÃ·Ç·¨·ûºÅ·ÃÎÊÊôÐÔ'#000+
  '03062_E_²»ÄÜ·ÃÎÊ¶ÔÏóµÄ proteced Óò'#000+
  '03063_E_²»ÄÜ·ÃÎÊ¶ÔÏóµÄ private Óò'#000+
  '03066_E_ÖØÐ´·½·¨±ØÐëÓÐ×ÅÏàÍ¬µÄ·µ»ØÀàÐÍ£º "$2" ±» "$1"ÖØÐ´£¬µ«ÓÐ×Å²»Í¬µ'+
  'Ä·µ»ØÀàÐÍ'#000+
  '03067_E_EXPORT declared',' functions can'#039't be nested'#000+
  '03068_E_·½·¨²»ÄÜÓÃÓÚ EXPORT'#000+
  '03069_E_Call by var for arg no. $1 has to match exactly: Got "$2" expe'+
  'cted "$3"'#000+
  '03070_E_Class isn'#039't a parent class of the current class'#000+
  '03071_E_SELF Ö»ÔÊÐíÔÚ·½·¨ÖÐÊ¹ÓÃ'#000+
  '03072_E_Methods c','an be only in other methods called direct with type'+
  ' identifier of the class'#000+
  '03073_E_´íÎóµØÊ¹ÓÃ '#039':'#039#000+
  '03074_E_range check error in set constructor or duplicate set element'#000+
  '03075_E_È±ÉÙ¶ÔÏóÖ¸Õë'#000+
  '03076_E_Expression must be constructor call'#000+
  '03077_','E_Expression must be destructor call'#000+
  '03078_E_´íÎóµÄ¼ÇÂ¼ÔªËØÐòÁÐ'#000+
  '03079_E_±í´ïÊ½ÀàÐÍ±ØÐëÎª Àà »ò ¼ÇÂ¼'#000+
  '03080_E_¹ý³Ì²»ÄÜ·µ»ØÖµ'#000+
  '03081_E_constructors, destructors ºÍ class ²Ù×÷±ØÐëÎª·½·¨'#000+
  '03082_E_ÏàÓ¦µÄ²Ù×÷·ûÃ»ÓÐÖØÔØ'#000+
  '03083_E_ÎÞ·¨ÖØÔØ¶ÔÏàÍ¬ÀàµÄ·ÖÅä',#000+
  '03084_E_´íÎóµÄ²Ù×÷·ûÖØÔØ'#000+
  '03085_E_´Ë´¦²»ÄÜÊ¹ÓÃ Re-raise'#000+
  '03086_E_The extended syntax of new or dispose isn'#039't allowed for a '+
  'class'#000+
  '03088_E_¹ý³ÌÖØÔØ±»¹Ø±Õ'#000+
  '03089_E_ÎÞ·¨ÖØÔØ¸Ã²Ù×÷·û¡£¿ÉÖØÔØµÄ²Ù×÷·ûÎª: $1'#000+
  '03090_E_±È½Ï²Ù×÷·û±ØÐë·µ»Ø²¼¶ûÀàÐÍµÄÖµ'#000+
  '030','91_E_Ö»ÓÐ virtual ·½·¨¿ÉÒÔ±»³éÏó'#000+
  '03092_F_Ê¹ÓÃÁË²»Ö§³ÖµÄ¹¦ÄÜ'#000+
  '03093_E_²»ÔÊÐí»ìºÏ¶àÖÖ¶ÔÏó (°üÀ¨ class, object, interface, µÈµÈ)'#000+
  '03094_W_Unknown procedure directive had to be ignored: "$1"'#000+
  '03095_E_absolute can only be associated to one variable',#000+
  '03096_E_abs º¯ÊýÖ»ÄÜÊ¹ÓÃ var »ò const ´«Èë'#000+
  '03097_E_Ö»ÓÐ±äÁ¿¿ÉÒÔ±»¸³³õÖµ'#000+
  '03098_E_Abstract methods shouldn'#039't have any definition (with funct'+
  'ion body)'#000+
  '03099_E_This overloaded function can'#039't be local (must be exported)'+
  #000+
  '03100_W_Virtual methods ','are used without a constructor in "$1"'#000+
  '03101_CL_¶¨ÒåµÄºê: $1'#000+
  '03102_CL_Î´¶¨ÒåµÄºê: $1'#000+
  '03103_CL_Macro $1 set to $2'#000+
  '03104_I_±àÒë $1'#000+
  '03105_UL_Parsing interface of unit $1'#000+
  '03106_UL_Parsing implementation of $1'#000+
  '03107_DL_Compiling $1 for the secon','d time'#000+
  '03109_E_No property found to override'#000+
  '03110_E_Ö»ÔÊÐíÒ»¸öÄ¬ÈÏÉèÖÃ'#000+
  '03111_E_The default property must be an array property'#000+
  '03112_E_Virtual constructors are only supported in class object model'#000+
  '03113_E_Ã»ÓÐ¿ÉÓÃµÄÄ¬ÈÏÊôÐÔ'#000+
  '03114_E_The clas','s can'#039't have a published section, use the {$M+} '+
  'switch'#000+
  '03115_E_Forward declaration of class "$1" must be resolved here to use'+
  ' the class as ancestor'#000+
  '03116_E_²»Ö§³Ö±¾µØ²Ù×÷·û'#000+
  '03117_E_¹ý³Ì¶¨Òå "$1" ²»ÔÊÐí³öÏÖÔÚ interface ¶ÎÖÐ'#000+
  '03118_E_¹ý³Ì¶¨Òå ','"$1" ²»ÔÊÐí³öÏÖÔÚ implementation ¶ÎÖÐ'#000+
  '03119_E_¹ý³Ì¶¨Òå "$1" ²»ÔÊÐí³öÏÖÔÚ procvar ¶¨ÒåÖÐ'#000+
  '03120_E_º¯Êý "$1" ÒÑ¾­±»¶¨Òå»ò±»¶¨ÒåÎª Public  '#000+
  '03121_E_²»ÄÜÍ¬Ê±Ê¹ÓÃ EXPORT ºÍ EXTERNAL'#000+
  '03123_W_"$1" not yet supported inside inline procedure/function'#000,
  '03124_W_Inlining disabled'#000+
  '03125_I_Ð´³öä¯ÀÀÈÕÖ¾ $1'#000+
  '03126_H_may be pointer dereference is missing'#000+
  '03127_F_Selected assembler reader not supported'#000+
  '03128_E_Procedure directive "$1" has conflicts with other directives'#000+
  '03129_E_Calling convention ','doesn'#039't match forward'#000+
  '03131_E_Property can'#039't have a default value'#000+
  '03132_E_The default value of a property must be constant'#000+
  '03133_E_Symbol can'#039't be published, can be only a class'#000+
  '03134_E_This kind of property can'#039't be published'#000+
  '03136_E_An im','port name is required'#000+
  '03138_E_³ýÒÔ0'#000+
  '03139_E_´íÎóµÄ¸¡µãÖ¸Õë²Ù×÷'#000+
  '03140_E_Upper bound of range is less than lower bound'#000+
  '03141_W_×Ö·û´® "$1" ³¤ÓÚ "$2"'#000+
  '03142_E_×Ö·û´®³¤¶È´óÓÚ×Ö·ûÊý×é³¤¶È'#000+
  '03143_E_Illegal expression after message directive'#000+
  '03144_E','_Message handlers can take only one call by ref. parameter'#000+
  '03145_E_ÖØ¸´µÄÏûÏ¢±êÊ¶: "$1"'#000+
  '03146_E_Self can only be an explicit parameter in methods which are me'+
  'ssage handlers'#000+
  '03147_E_Threadvars can be only static or global'#000+
  '03148_F_Direct asse','mbler not supported for binary output format'#000+
  '03149_W_²»ÔÊÐíÊÖ¶¯Ìí¼Ó OBJPAS ¿â£¬ÇëÊ¹ÓÃ {$mode objfpc} »ò {$mode delp'+
  'hi} ´ò¿ª±àÒë¿ª¹Ø'#000+
  '03150_E_¶ÔÏóÖÐ²»ÔÊÐíÖØÐ´'#000+
  '03151_E_Data types which require initialization/finalization can'#039't'+
  ' be used in varia','nt records'#000+
  '03152_E_Resourcestrings can be only static or global'#000+
  '03153_E_´Ë´¦²»ÔÊÐí´ø²ÎÊýÍÆ³ö'#000+
  '03154_E_The type of the storage symbol must be boolean'#000+
  '03155_E_This symbol isn'#039't allowed as storage symbol'#000+
  '03156_E_Only classes which are compiled ','in $M+ mode can be published'+
  #000+
  '03157_E_Procedure directive expected'#000+
  '03158_E_The value for a property index must be of an ordinal type'#000+
  '03159_E_export ¹ý³ÌµÄÃû³ÆÌ«¶Ì'#000+
  '03160_E_No DEFFILE entry can be generated for unit global vars'#000+
  '03161_E_Compile',' without -WD option'#000+
  '03162_F_You need ObjFpc (-S2) or Delphi (-Sd) mode to compile this mod'+
  'ule'#000+
  '03163_E_Can'#039't export with index under $1'#000+
  '03164_E_Exporting of variables is not supported under $1'#000+
  '03165_E_Improper GUID Óï·¨'#000+
  '03168_W_Procedure nam','ed "$1" not found that is suitable for implemen'+
  'ting the $2.$3'#000+
  '03169_E_È±ÉÙ interface ±êÊ¶·û'#000+
  '03170_E_Type "$1" can'#039't be used as array index type'#000+
  '03171_E_Con- and destructors aren'#039't allowed in interfaces'#000+
  '03172_E_Access specifiers can'#039't be use','d in INTERFACES'#000+
  '03173_E_interface ²»ÄÜ°üº¬Óò'#000+
  '03174_E_Can'#039't declare local procedure as EXTERNAL'#000+
  '03175_W_Some fields coming before "$1" weren'#039't initialized'#000+
  '03176_E_Some fields coming before "$1" weren'#039't initialized'#000+
  '03177_W_Some fields coming ','after "$1" weren'#039't initialized'#000+
  '03178_E_VarArgs directive (or '#039'...'#039' in MacPas) without CDecl/C'+
  'PPDecl/MWPascal and External'#000+
  '03179_E_Self must be a normal (call-by-value) parameter'#000+
  '03180_E_Interface "$1" has no interface identification'#000+
  '03181_E','_Unknown class field or method identifier "$1"'#000+
  '03182_W_Overriding calling convention "$1" with "$2"'#000+
  '03183_E_Typed constants of the type "procedure of object" can only be '+
  'initialized with NIL'#000+
  '03184_E_Default value can only be assigned to one',' parameter'#000+
  '03185_E_Default parameter required for "$1"'#000+
  '03186_W_Use of unsupported feature!'#000+
  '03187_H_C arrays are passed by reference'#000+
  '03188_E_C array of const must be the last argument'#000+
  '03189_H_Type "$1" redefinition'#000+
  '03190_W_cdecl'#039'ared functio','ns have no high parameter'#000+
  '03191_W_cdecl'#039'ared functions do not support open strings'#000+
  '03192_E_Cannot initialize variables declared as threadvar'#000+
  '03193_E_Message directive is only allowed in Classes'#000+
  '03194_E_Procedure or Function expected'#000+
  '03195_W','_Calling convention directive ignored: "$1"'#000+
  '03196_E_REINTRODUCE can'#039't be used in objects'#000+
  '03197_E_Each argument must have its own location'#000+
  '03198_E_Each argument must have an explicit location'#000+
  '03199_E_Unknown argument location'#000+
  '03200_E_32 Bit-','Integer or pointer variable expected'#000+
  '03201_E_Goto statements aren'#039't allowed between different procedure'+
  's'#000+
  '03202_F_¹ý³ÌÌ«¸´ÔÓ'#000+
  '03203_E_·Ç·¨±í´ïÊ½'#000+
  '03204_E_´íÎóµÄÕûÐÍ±í´ïÊ½'#000+
  '03205_E_´íÎóµÄÐÞÊÎ·û'#000+
  '03206_E_ÏÂÏÞ´óÓÚÉÏÏÞ'#000+
  '03207_E_Exit'#039's parameter must ','be the name of the procedure it is'+
  ' used in'#000+
  '03208_E_´íÎóµÄÑ­»·±êÊ¶·û¶¨Òå "$1"'#000+
  '03209_E_ÎÞ·¨½«±¾µØ±äÁ¿¶¨ÒåÎª EXTERNAL'#000+
  '03210_E_¹ý³ÌÒÑ¾­±»¶¨ÒåÎª EXTERNAL'#000+
  '03211_W_Implicit uses of Variants unit'#000+
  '03212_E_Class and static methods can'#039't be used in IN','TERFACES'#000+
  '03213_E_Overflow in arithmetic operation'#000+
  '03214_E_È±ÉÙ Protected »ò private'#000+
  '03215_E_SLICE can'#039't be used outside of parameter list'#000+
  '03216_E_A DISPINTERFACE can'#039't have a parent class'#000+
  '03217_E_A DISPINTERFACE needs a guid'#000+
  '03218_W_Overrid','den methods must have a related return type. This cod'+
  'e may crash, it depends on a Delphi parser bug ("$2" is overridden by '+
  '"$1" which has another return type)'#000+
  '03219_E_Dispatch IDs must be ordinal constants'#000+
  '03220_E_Êý×é·¶Î§¶¨Òå¹ý´ó'#000+
  '03221_E_T','he address cannot be taken of bit packed array elements and'+
  ' record fields'#000+
  '03222_E_¶¯Ì¬Êý×éÎÞ·¨±»°ü×°'#000+
  '03223_E_Bit packed array elements and record fields cannot be used as '+
  'loop variables'#000+
  '03224_E_VAR, TYPE and CONST are allowed only in record','s, objects and'+
  ' classes'#000+
  '03225_E_This type can'#039't be a generic'#000+
  '03226_W_Don'#039't load LINEINFO unit manually, Use the -gl compiler sw'+
  'itch instead'#000+
  '03227_E_No function result type specified for function "$1"'#000+
  '03228_E_Specialization is only supported ','for generic types'#000+
  '03229_E_Generics can'#039't be used as parameters when specializing gen'+
  'erics'#000+
  '03230_E_Constants of objects containing a VMT aren'#039't allowed'#000+
  '03231_E_Taking the address of labels defined outside the current scope'+
  ' isn'#039't allowed'#000+
  '0323','3_E_Cannot initialize variables declared as external'#000+
  '03234_E_´íÎóµÄº¯Êý·µ»ØÀàÐÍ'#000+
  '03235_E_No common type possible between "$1" and "$2"'#000+
  '03236_E_Generics without specialization can not be used as a type for '+
  'a variable'#000+
  '03237_W_Register list is ','ignored for pure assembler routines'#000+
  '03238_E_Implements property must have class or interface type'#000+
  '03239_E_Implements-property must implement interface of correct type, '+
  'found "$1" expected "$2"'#000+
  '03240_E_Implements-property must have read spec','ifier'#000+
  '03241_E_Implements-property must not have write-specifier'#000+
  '03242_E_Implements-property must not have stored-specifier'#000+
  '03243_E_Implements-property used on unimplemented interface: "$1"'#000+
  '03244_E_Floating point not supported for this targe','t'#000+
  '03245_E_Class "$1" does not implement interface "$2"'#000+
  '03246_E_Type used by implements must be an interface'#000+
  '03247_E_Variables cannot be exported with a different name on this tar'+
  'get, add the name to the declaration using the "export" direct','ive (v'+
  'ariable name: $1, declared export name: $2)'#000+
  '03248_E_Weak external symbols are not supported for the current target'+
  #000+
  '03249_E_ÎÞ·¨ÕÒµ½ÏÈÇ°¶¨ÒåµÄÀàÐÍ'#000+
  '03250_N_Virtual method "$1" has a lower visibility ($2) than parent cl'+
  'ass $3 ($4)'#000+
  '03251_','E_Fields cannot appear after a method or property definition, '+
  'start a new visibility section first'#000+
  '03252_E_²ÎÊý²»ÄÜ°üº¬ÀàÐÍ¶¨Òå£¬ÇëÔÚ type ÖÐµ¥¶À¶¨ÒåÀàÐÍ'#000+
  '03253_E_ABSTRACT and SEALED conflict'#000+
  '03254_E_Cannot create a descendant of the sealed ','class "$1"'#000+
  '03255_E_SEALED class cannot have an ABSTRACT method'#000+
  '03256_E_Only virtual methods can be final'#000+
  '03257_E_Final method cannot be overridden: "$1"'#000+
  '03258_E_Only one message can be used per method.'#000+
  '03259_E_Invalid enumerator identifier:',' "$1"'#000+
  '03260_E_Enumerator identifier required'#000+
  '03261_E_Enumerator MoveNext pattern method is not valid. Method must b'+
  'e a function with the Boolean return type and no required arguments.'#000+
  '03262_E_Enumerator Current pattern property is not valid','. Property m'+
  'ust have a getter.'#000+
  '03263_E_Only one enumerator MoveNext method is allowed per class/objec'+
  't'#000+
  '03264_E_Only one enumerator Current property is allowed per class/obje'+
  'ct'#000+
  '03265_E_For in loop cannot be used for the type "$1"'#000+
  '03266_E_Obj','ective-C messages require their Objective-C selector name'+
  ' to be specified using the "message" directive.'#000+
  '03267_E_Objective-C does not have formal constructors nor destructors.'+
  ' Use the alloc, initXXX and dealloc messages.'#000+
  '03268_E_Message nam','e is too long (max. 255 characters)'#000+
  '03269_E_Objective-C message symbol name for "$1" is too long'#000+
  '03270_H_Defining a new Objective-C root class. To derive from another '+
  'root class (e.g., NSObject), specify it as the parent class.'#000+
  '03271_E_Obje','ctive-C classes cannot have published sections.'#000+
  '03272_F_This module requires an Objective-C mode switch to be compiled'+
  #000+
  '03273_E_Inherited methods can only be overridden in Objective-C, add "'+
  'override" (inherited method defined in $1)'#000+
  '03274_H_','Inherited methods can only be overridden in Objective-C, add'+
  ' "override" (inherited method defined in $1).'#000+
  '03275_E_Message name "$1" in inherited class is different from message'+
  ' name "$2" in current class.'#000+
  '03276_E_It is not yet possible to m','ake unique copies of Objective-C '+
  'types'#000+
  '03277_E_Objective-C categories and Object Pascal class helpers cannot '+
  'be used as types'#000+
  '03278_E_Categories do not override, but replace methods. Use "reintrod'+
  'uce" instead.'#000+
  '03279_E_Replaced methods can o','nly be reintroduced in Objective-C, ad'+
  'd "reintroduce" (replaced method defined in $1).'#000+
  '03280_H_Replaced methods can only be reintroduced in Objective-C, add '+
  '"reintroduce" (replaced method defined in $1).'#000+
  '03281_E_Getter for implements interf','ace must use the target'#039's de'+
  'fault calling convention.'#000+
  '03282_E_Typed files cannot contain reference-counted types.'#000+
  '03283_E_$2 "$1" ²Ù×÷·ûÎ´±»ÖØÔØ'#000+
  '03284_E_"$1" $2 "$3" ²Ù×÷·ûÎ´±»ÖØÔØ'#000+
  '03285_E_Expected another $1 array elements'#000+
  '03286_E_String c','onstant too long while ansistrings are disabled'#000+
  '03287_E_Type cannot be used as univ parameter because its size is unkn'+
  'own at compile time: "$1"'#000+
  '03288_E_Only one class constructor can be declared in class: "$1"'#000+
  '03289_E_Only one class destruc','tor can be declared in class: "$1"'#000+
  '03290_E_Class constructors can'#039't have parameters'#000+
  '03291_E_Class destructors can'#039't have parameters'#000+
  '03292_F_This construct requires the \{\$modeswitch objectivec1\} mode '+
  'switch to be active'#000+
  '03293_E_Unicodecha','r/string constants cannot be converted to ansi/sho'+
  'rtstring at compile-time'#000+
  '03294_E_For-in Objective-Pascal loops require \{\$modeswitch Objective'+
  'C2\} to be active'#000+
  '03295_E_The compiler cannot find the NSFastEnumerationProtocol or NSFa'+
  'stEnume','rationState type in the CocoaAll unit'#000+
  '03296_E_Typed constants of the type '#039'procedure is nested'#039' can '+
  'only be initialized with NIL and global procedures/functions'#000+
  '03297_F_Declaration of generic class inside another generic class is n'+
  'ot allowe','d'#000+
  '03298_E_Forward declaration of objcprotocol "$1" must be resolved befo'+
  're an objcclass can conform to it'#000+
  '03299_E_Record types cannot have published sections'#000+
  '03300_E_Destructors aren'#039't allowed in records or helpers'#000+
  '03301_E_Class methods mus','t be static in records'#000+
  '03302_E_Constructors aren'#039't allowed in records or record helpers'#000+
  '03303_E_Either the result or at least one parameter must be of type "$'+
  '1"'#000+
  '03304_E_Type parameters may require initialization/finalization - can'#039+
  't be used',' in variant records'#000+
  '03305_E_Variables being declared as external cannot be in a custom sec'+
  'tion'#000+
  '03306_E_Non-static and non-global variables cannot have a section dire'+
  'ctive'#000+
  '03307_E_"$1" is not allowed in helper types'#000+
  '03308_E_Class constructor','s aren'#039't allowed in helpers'#000+
  '03309_E_The use of "inherited" is not allowed in a record'#000+
  '03310_E_Type declarations are not allowed in local or anonymous record'+
  's'#000+
  '03311_E_Duplicate implements clause for interface "$1"'#000+
  '03312_E_Interface "$1" can'#039,'t be delegated by "$2", it already has'+
  ' method resolutions'#000+
  '03313_E_Interface "$1" can'#039't have method resolutions, "$2" already'+
  ' delegates it'#000+
  '04000_E_ÀàÐÍ²»Æ¥Åä'#000+
  '04001_E_²»Æ¥Åä "$1" ÀàÐÍ£¬¿ÉÒÔ¸ÄÓÃ "$2" ÀàÐÍ'#000+
  '04002_E_"$1" Óë "$2" Ö®¼äÀàÐÍ²»Æ¥Åä'#000+
  '04','003_E_È±ÉÙÀàÐÍ±êÊ¶·û'#000+
  '04004_E_È±ÉÙ±äÁ¿±êÊ¶·û'#000+
  '04005_E_È±ÉÙ Integer ÕûÐÍ£¬µ«ÊÇÓÐ "$1"'#000+
  '04006_E_È±ÉÙ Boolean ²¼¶ûÐÍ£¬µ«ÊÇÓÐ "$1"'#000+
  '04007_E_È±ÉÙË³ÐòÀàÐÍ'#000+
  '04008_E_È±ÉÙ Ö¸Õë ÐÍ£¬µ«ÊÇÓÐ "$1"'#000+
  '04009_E_È±ÉÙÀà£¬µ«ÊÇÓÐ "$1"'#000+
  '04011_E_²»ÄÜ¼ÆËã³£Êý±í´ïÊ½'#000+
  '04012_','E_ÉèÖÃµÄÔªËØ²»¼æÈÝ'#000+
  '04013_E_sets Î´Ö´ÐÐ²Ù×÷'#000+
  '04014_W_Automatic type conversion from floating type to COMP which is '+
  'an integer type'#000+
  '04015_H_ÈôÒªµÃµ½ÕûÐÍ£¬ÇëÊ¹ÓÃ DIV ÔËËã'#000+
  '04016_E_ÓÉÓÚÆôÓÃÁË $V+ ¿ª¹Ø£¬×Ö·û´®ÀàÐÍ²»Æ¥Åä'#000+
  '04017_E_succ »ò pred Ã¶¾Ù·Ö','Åä²»¿ÉÄÜÓÃÉÏ'#000+
  '04018_E_²»ÄÜ¶ÁÈ¡»òÐ´ÈëÕâÖÖÀàÐÍµÄ±äÁ¿'#000+
  '04019_E_²»ÄÜÔÚ½á¹¹»¯ÎÄ¼þÉÏÊ¹ÓÃ readln »ò writeln'#000+
  '04020_E_²»ÄÜÔÙ·Ç½á¹¹»¯ÎÄ¼þÉÏÊ¹ÓÃ read »ò write'#000+
  '04021_E_ÉèÖÃÔªËØµÄÀàÐÍ³åÍ»'#000+
  '04022_W_lo/hi(dword/qword) ·µ»ØÁË upper/lower word/dword'#000+
  '04023_E_È±','ÉÙ Integer ÕûÐÍ»ò Real ÊµÐÍ'#000+
  '04024_E_"$1" ÔÚ¹¹Ôìº¯ÊýÖÐÀàÐÍ²»ÕýÈ·'#000+
  '04025_E_²»¼æÈÝµÄ²ÎÊýÀàÐÍ $1£ºÓÐ "$2" £¬¶ø·Ç "$3"'#000+
  '04026_E_·½·¨ ±äÁ¿ ¼°³ÌÐò ±äÁ¿ ²»¼æÈÝ'#000+
  '04027_E_·Ç·¨³£Êý´«µÝ¸øÊýÑ§º¯Êý'#000+
  '04028_E_²»ÄÜ½ÓÊÜµÄ³£Êý±í´ïÊ½µÄµØÖ·'#000+
  '04029_E_²»ÄÜ½«²ÎÊý·ÖÅä¸ø',#000+
  '04030_E_²»ÄÜ½«±¾µØ¹ý³Ì/º¯Êý¸³¸ø¹ý³Ì±äÁ¿'#000+
  '04031_E_²»ÄÜ½«Öµ¸³ÓèÒ»¸öµØÖ·'#000+
  '04032_E_²»ÄÜÎª³£Á¿¸³Öµ'#000+
  '04033_E_È±ÉÙÊý×éÀàÐÍ'#000+
  '04034_E_È±ÉÙ½Ó¿ÚÀàÐÍ£¬µ«ÊÇÓÐ "$1"'#000+
  '04035_H_Mixing signed expressions and longwords gives a 64bit result'#000+
  '04036_W_Mixing signed e','xpressions and cardinals here may cause a ran'+
  'ge check error'#000+
  '04037_E_ÀàÐÍ×ª»»·ÖÅäÖÐ¾ßÓÐ²»Í¬´óÐ¡ ($1 -> $2) '#000+
  '04038_E_Ã¶¾Ù·ÖÅä£¬²»ÄÜ×÷ÎªÊý×éË÷Òý'#000+
  '04039_E_Àà»ò¶ÔÏóÀàÐÍ "$1" ºÍ "$2" ÎÞ¹Ø'#000+
  '04040_W_Àà»ò¶ÔÏóÀàÐÍ "$1" ºÍ "$2" ÎÞ¹Ø'#000+
  '04041_E_È±ÉÙÀà»ò½Ó¿Ú','ÀàÐÍ£¬µ«ÊÇÓÐ "$1"'#000+
  '04042_E_ÀàÐÍ "$1" Ã»ÓÐ±»³É¹¦¶¨Òå'#000+
  '04043_W_×Ö·û´®³¤¶È³¬¹ý Short string ¶Ì×Ö·û´®'#000+
  '04044_W_ÓÉÓÚÖµÓò£¬±È½Ï½á¹ûÓÀºãÎª¼Ù'#000+
  '04045_W_ÓÉÓÚÖµÓò£¬±È½Ï½á¹ûÓÀºãÎªÕæ'#000+
  '04046_W_Constructing a class "$1" with abstract method "$2"'#000+
  '04047_H_The le','ft operand of the IN operator should be byte sized'#000+
  '04048_W_Type size mismatch, possible loss of data / range check error'#000+
  '04049_H_Type size mismatch, possible loss of data / range check error'#000+
  '04050_E_³éÏó·½·¨µÄµØÖ·²»ÄÜ½ÓÊÜ'#000+
  '04051_E_²»ÄÜÕýÊ½µÄ','²ÎÊýºÍ¿ª·ÅµÄÊý×é·ÖÅä'#000+
  '04052_E_È±ÉÙ³£Á¿±í´ïÊ½'#000+
  '04053_E_²Ù×÷ "$1" ²»Ö§³Ö "$2" ºÍ "$3" ÀàÐÍ'#000+
  '04054_E_·Ç·¨ÀàÐÍ×ª»»£º"$1" ×ªÎª "$2"'#000+
  '04055_H_Conversion between ordinals and pointers is not portable'#000+
  '04056_W_Conversion between ordinals and pointers is',' not portable'#000+
  '04057_E_²»ÄÜÈ·¶¨¸ÃÖØÔØº¯Êýµ÷ÓÃ'#000+
  '04058_E_·Ç·¨¼ÆÊýÆ÷±äÁ¿'#000+
  '04059_W_Converting constant real value to double for C variable argume'+
  'nt, add explicit typecast to prevent this.'#000+
  '04060_E_Àà»ò COM ½Ó¿ÚÈ±ÉÙÀàÐÍ£¬µ«ÊÇÓÐ "$1"'#000+
  '04061_E_¸Ã±àÒëÆ÷','ÔÝÊ±²»Ö§³Ö³£Êý°ü×°Êý×é'#000+
  '04062_E_²»¼æÈÝµÄÀàÐÍ²ÎÊý $1£ºÈ±ÉÙ "(Bit)Packed Array" µ«ÊÇÓÐ "$2" '#000+
  '04063_E_²»¼æÈÝµÄÀàÐÍ²ÎÊý $1£ºÈ±ÉÙ "(not packed) Array" µ«ÊÇÓÐ "$2"'#000+
  '04064_E_Ìî³äÊý×éµÄÔªËØ²»ÄÜÊÇÐèÒª±»³õÊ¼»¯µÄÀàÐÍ'#000+
  '04065_E_¸Ã±àÒëÆ÷ÔÝÊ±²»Ö§³Ö³£Êý°ü×°¼Ç','Â¼'#000+
  '04066_W_Arithmetic "$1" on untyped pointer is unportable to {$T+}, sug'+
  'gest typecast'#000+
  '04076_E_Can'#039't take address of a subroutine marked as local'#000+
  '04077_E_Can'#039't export subroutine marked as local from a unit'#000+
  '04078_E_ÀàÐÍ²»ÊÇ¿É×Ô¶¯»¯µÄ£º"$1"'#000+
  '0','4079_H_Converting the operands to "$1" before doing the add could p'+
  'revent overflow errors.'#000+
  '04080_H_Converting the operands to "$1" before doing the subtract coul'+
  'd prevent overflow errors.'#000+
  '04081_H_Converting the operands to "$1" before doing',' the multiply co'+
  'uld prevent overflow errors.'#000+
  '04082_W_Converting pointers to signed integers may result in wrong com'+
  'parison results and range errors, use an unsigned type instead.'#000+
  '04083_E_Interface type $1 has no valid GUID'#000+
  '04084_E_ÎÞÐ§µÄÑ¡Ô','ñÆ÷Ãû³Æ'#000+
  '04085_E_È±ÉÙÄ¿±ê-·½·¨»ò³£Á¿µÄ·½·¨Ãû³Æ£¬µ«ÊÇÓÐ $1'#000+
  '04086_E_È±ÉÙÄ¿±ê-·½·¨»ò³£Á¿µÄ·½·¨Ãû³Æ'#000+
  '04087_E_Ã»ÓÐ¿ÉÓÃÓÚ´ËÀàÐÍµÄÀàÐÍÏûÏ¢'#000+
  '04088_E_Ordinal or string expression expected'#000+
  '04089_E_String expression expected'#000+
  '04090_W_Converting 0 to NIL'#000+
  '0','4091_E_Objective-C protocol type expected, but got "$1"'#000+
  '04092_E_The type "$1" is not supported for interaction with the Object'+
  'ive-C runtime.'#000+
  '04093_E_Class or objcclass type expected, but got "$1"'#000+
  '04094_E_Objcclass type expected'#000+
  '04095_W_Coer','ced univ parameter type in procedural variable may cause'+
  ' crash or memory corruption: $1 to $2'#000+
  '04096_E_Type parameters of specializations of generics cannot referenc'+
  'e the currently specialized type'#000+
  '04097_E_Type parameters are not allowed on ','non-generic class/record/'+
  'object procedure or function'#000+
  '04098_E_Generic declaration of "$1" differs from previous declaration'#000+
  '04099_E_Helper type expected'#000+
  '04100_E_Record type expected'#000+
  '04101_E_Derived class helper must extend a subclass of "$1','" or the c'+
  'lass itself'#000+
  '04102_E_Derived record helper must extend "$1"'#000+
  '05000_E_ÕÒ²»µ½±êÊ¶·û "$1"'#000+
  '05001_F_Internal Error in SymTableStack()'#000+
  '05002_E_ÖØ¸´µÄ±êÊ¶·û "$1"'#000+
  '05003_H_Identifier already defined in $1 at line $2'#000+
  '05004_E_Î´Öª±êÊ¶·û "$1"'#000+
  '0','5005_E_ÕýÏò¶¨Òå "$1" Î´ resolve'#000+
  '05007_E_ÀàÐÍ¶¨Òå´íÎó'#000+
  '05009_E_ÏÈÇ°µÄÀàÐÍÎ´È·¶¨ "$1"'#000+
  '05010_E_¾²Ì¬±äÁ¿½öÊÊÓÃÓÚ¾²Ì¬·½·¨»òÍâ²¿·½·¨'#000+
  '05012_F_record or class type expected'#000+
  '05013_E_Instances of classes or objects with an abstract method are no'+
  't allo','wed'#000+
  '05014_W_±êÇ©Î´¶¨Òå "$1"'#000+
  '05015_E_Ê¹ÓÃÁËÎ´¶¨ÒåµÄ±êÇ© "$1"'#000+
  '05016_E_·Ç·¨±êÇ©¶¨Òå'#000+
  '05017_E_ÔÚÊ¹ÓÃ -Sg ¿ª¹ØÇé¿öÏÂ£¬GOTO ºÍ LABEL ²»±»Ö§³Ö'#000+
  '05018_E_ÎÞ·¨ÕÒµ½±êÇ©'#000+
  '05019_E_±êÊ¶·û²»ÊÇÒ»¸ö±êÇ©'#000+
  '05020_E_±êÇ©ÒÑ¶¨Òå'#000+
  '05021_E_ÉèÖÃÔªËØµÄ·Ç·¨ÀàÐÍ¶¨Òå'#000+
  '05022_E','_Forward class definition not resolved "$1"'#000+
  '05023_H_¿â "$1" Î´ÔÚ $2 ÖÐÊ¹ÓÃ'#000+
  '05024_H_Parameter "$1" not used'#000+
  '05025_N_±¾µØ±äÁ¿ "$1" Î´±»Ê¹ÓÃ'#000+
  '05026_H_²ÎÊý "$1" Î´±»Ê¹ÓÃ'#000+
  '05027_N_±¾µØ±äÁ¿ "$1" Î´±»Ê¹ÓÃ'#000+
  '05028_H_Local $1 "$2" is not used'#000+
  '05029_N_Pr','ivate Óò "$1.$2" ´ÓÎ´Ê¹ÓÃ¹ý'#000+
  '05030_N_Private Óò "$1.$2" ±»¶¨Òå£¬µ«´ÓÎ´Ê¹ÓÃ¹ý'#000+
  '05031_N_Private ·½·¨ "$1.$2" ´ÓÎ´Ê¹ÓÃ¹ý'#000+
  '05032_E_È±ÉÙÕýÈ·µÄ¼¯ºÏÀàÐÍ'#000+
  '05033_W_º¯ÊýµÄ½á¹û²»ÊÇ¼¯ºÏ'#000+
  '05034_W_Type "$1" is not aligned correctly in current record for C'#000+
  '050','35_E_Î´ÖªµÄ¼ÇÂ¼×Ö¶Î±êÊ¶·û "$1"'#000+
  '05036_W_Local variable "$1" does not seem to be initialized'#000+
  '05037_W_Variable "$1" does not seem to be initialized'#000+
  '05038_E_identifier idents no member "$1"'#000+
  '05039_H_ÕÒµ½¶¨Òå: $1'#000+
  '05040_E_Êý¾ÝÔªËØÌ«´ó'#000+
  '05042_E_No m','atching implementation for interface method "$1" found'#000+
  '05043_W_Symbol "$1" is deprecated'#000+
  '05044_W_Symbol "$1" is not portable'#000+
  '05055_W_Symbol "$1" is not implemented'#000+
  '05056_E_Can'#039't create unique type from this type'#000+
  '05057_H_Local variable "$1" ','does not seem to be initialized'#000+
  '05058_H_Variable "$1" does not seem to be initialized'#000+
  '05059_W_Function result variable does not seem to initialized'#000+
  '05060_H_Function result variable does not seem to be initialized'#000+
  '05061_W_Variable "$1" read ','but nowhere assigned'#000+
  '05062_H_ÕÒµ½³éÏó¹ý³Ì: $1'#000+
  '05063_W_Symbol "$1" is experimental'#000+
  '05064_W_Forward declaration "$1" not resolved, assumed external'#000+
  '05065_W_Symbol "$1" is belongs to a library'#000+
  '05066_W_Symbol "$1" is deprecated: "$2"'#000+
  '05067_E_Ca','nnot find an enumerator for the type "$1"'#000+
  '05068_E_Cannot find a "MoveNext" method in enumerator "$1"'#000+
  '05069_E_Cannot find a "Current" property in enumerator "$1"'#000+
  '05070_E_Mismatch between number of declared parameters and number of c'+
  'olons in ','message string.'#000+
  '05071_N_Private type "$1.$2" never used'#000+
  '05072_N_Private const "$1.$2" never used'#000+
  '05073_N_Private property "$1.$2" never used'#000+
  '05074_W_Unit "$1" is deprecated'#000+
  '05075_W_Unit "$1" is deprecated: "$2"'#000+
  '05076_W_Unit "$1" is not port','able'#000+
  '05077_W_Unit "$1" is belongs to a library'#000+
  '05078_W_Unit "$1" is not implemented'#000+
  '05079_W_Unit "$1" is experimental'#000+
  '05080_E_No complete definition of the formally declared objcclass "$1"'+
  ' is in scope'#000+
  '05081_E_Gotos into initialization or fi','nalization blocks of units ar'+
  'e not allowed'#000+
  '05082_E_Invalid external name "$1" for formal class "$2"'#000+
  '05083_E_Complete class definition with external name "$1" here'#000+
  '05084_W_Possible library conflict: symbol "$1" from library "$2" also '+
  'found i','n library "$3"'#000+
  '06009_E_²ÎÊýÁÐ±íµÄ´óÐ¡³¬¹ý 65535 ×Ö½Ú'#000+
  '06012_E_ÎÄ¼þÀàÐÍ±ØÐëÊÇ var ²ÎÊý'#000+
  '06013_E_²»ÔÊÐíÊ¹ÓÃÔ¶Ö¸Õë'#000+
  '06015_E_µ¼³ö±í¶¨Òå²»ÄÜµ÷ÓÃº¯Êý'#000+
  '06016_W_Possible illegal call of constructor or destructor'#000+
  '06017_N_Inefficient code'#000+
  '06018_W_ÎÞ·¨Ê¹Ó','ÃµÄ´úÂë'#000+
  '06020_E_Abstract methods can'#039't be called directly'#000+
  '06027_DL_Register $1 weight $2 $3'#000+
  '06029_DL_Stack frame is omitted'#000+
  '06031_E_Object or class methods can'#039't be inline.'#000+
  '06032_E_Procvar calls cannot be inline.'#000+
  '06033_E_No code for inline ','procedure stored'#000+
  '06035_E_Element zero of an ansi/wide- or longstring can'#039't be acces'+
  'sed, use (set)length instead'#000+
  '06037_E_Constructors or destructors can not be called inside a '#039'wi'+
  'th'#039' clause'#000+
  '06038_E_Cannot call message handler methods directl','y'#000+
  '06039_E_Jump in or outside of an exception block'#000+
  '06040_E_Control flow statements aren'#039't allowed in a finally block'#000+
  '06041_W_Parameters size exceeds limit for certain cpu'#039's'#000+
  '06042_W_Local variable size exceed limit for certain cpu'#039's'#000+
  '06043_E_','Local variables size exceeds supported limit'#000+
  '06044_E_²»ÔÊÐíÊ¹ÓÃ BREAK'#000+
  '06045_E_²»ÔÊÐíÊ¹ÓÃ CONTINUE'#000+
  '06046_F_Unknown compilerproc "$1". Check if you use the correct run ti'+
  'me library.'#000+
  '06047_F_Cannot find system type "$1". Check if you use the c','orrect r'+
  'un time library.'#000+
  '06048_H_Inherited call to abstract method ignored'#000+
  '06049_E_Goto ±êÊ¶ "$1" ²¢Î´¶¨Òå'#000+
  '06050_F_Cannot find type "$1" in unit "$2". Check if you use the corre'+
  'ct run time library.'#000+
  '06051_E_Interprocedural gotos are allowed ','only to outer subroutines'#000+
  '06052_E_Label must be defined in the same scope as it is declared'#000+
  '06053_E_Leaving procedures containing explicit or implicit exceptions '+
  'frames using goto is not allowed'#000+
  '07000_DL_Starting $1 styled assembler parsing',#000+
  '07001_DL_Finished $1 styled assembler parsing'#000+
  '07002_E_Non-label pattern contains @'#000+
  '07004_E_Error building record offset'#000+
  '07005_E_OFFSET used without identifier'#000+
  '07006_E_TYPE used without identifier'#000+
  '07007_E_Cannot use local variable or parame','ters here'#000+
  '07008_E_need to use OFFSET here'#000+
  '07009_E_need to use $ here'#000+
  '07010_E_Cannot use multiple relocatable symbols'#000+
  '07011_E_Relocatable symbol can only be added'#000+
  '07012_E_Invalid constant expression'#000+
  '07013_E_Relocatable symbol is not allowed'#000,
  '07014_E_Invalid reference syntax'#000+
  '07015_E_You can not reach $1 from that code'#000+
  '07016_E_Local symbols/labels aren'#039't allowed as references'#000+
  '07017_E_Invalid base and index register usage'#000+
  '07018_W_Possible error in object field handling'#000+
  '07019_E_Wro','ng scale factor specified'#000+
  '07020_E_Multiple index register usage'#000+
  '07021_E_Invalid operand type'#000+
  '07022_E_Invalid string as opcode operand: $1'#000+
  '07023_W_@CODE and @DATA not supported'#000+
  '07024_E_Null label references are not allowed'#000+
  '07025_E_Divide by ','zero in asm evaluator'#000+
  '07026_E_·Ç·¨±í´ïÊ½'#000+
  '07027_E_escape sequence ignored: $1'#000+
  '07028_E_Invalid symbol reference'#000+
  '07029_W_Fwait can cause emulation problems with emu387'#000+
  '07030_W_$1 without operand translated into $1P'#000+
  '07031_W_ENTER instruction is',' not supported by Linux kernel'#000+
  '07032_W_Calling an overload function in assembler'#000+
  '07033_E_Unsupported symbol type for operand'#000+
  '07034_E_Constant value out of bounds'#000+
  '07035_E_Error converting decimal $1'#000+
  '07036_E_Error converting octal $1'#000+
  '07037_E_','Error converting binary $1'#000+
  '07038_E_Error converting hexadecimal $1'#000+
  '07039_H_$1 translated to $2'#000+
  '07040_W_$1 is associated to an overloaded function'#000+
  '07041_E_Cannot use SELF outside a method'#000+
  '07042_E_Cannot use OLDEBP outside a nested procedure'#000,
  '07043_W_Procedures can'#039't return any value in asm code'#000+
  '07044_E_SEG not supported'#000+
  '07045_E_Size suffix and destination or source size do not match'#000+
  '07046_W_Size suffix and destination or source size do not match'#000+
  '07047_E_Assembler syntax error'#000+
  '0','7048_E_Invalid combination of opcode and operands'#000+
  '07049_E_Assembler syntax error in operand'#000+
  '07050_E_Assembler syntax error in constant'#000+
  '07051_E_Invalid String expression'#000+
  '07052_W_constant with symbol $1 for address which is not on a pointer'#000+
  '0','7053_E_Unrecognized opcode $1'#000+
  '07054_E_Invalid or missing opcode'#000+
  '07055_E_Invalid combination of prefix and opcode: $1'#000+
  '07056_E_Invalid combination of override and opcode: $1'#000+
  '07057_E_Too many operands on line'#000+
  '07058_W_NEAR ignored'#000+
  '07059_W_FAR i','gnored'#000+
  '07060_E_Duplicate local symbol $1'#000+
  '07061_E_Undefined local symbol $1'#000+
  '07062_E_Unknown label identifier $1'#000+
  '07063_E_Invalid register name'#000+
  '07064_E_Invalid floating point register name'#000+
  '07066_W_Modulo not supported'#000+
  '07067_E_´íÎóµÄ¸¡µãÖ¸Õë³£Á','¿ $1'#000+
  '07068_E_´íÎóµÄ¸¡µãÖ¸Õë±í´ïÊ½'#000+
  '07069_E_´íÎóµÄ·ûºÅÀà'#000+
  '07070_E_Cannot index a local var or parameter with a register'#000+
  '07071_E_Invalid segment override expression'#000+
  '07072_W_Identifier $1 supposed external'#000+
  '07073_E_Strings not allowed as constant','s'#000+
  '07074_No type of variable specified'#000+
  '07075_E_assembler code not returned to text section'#000+
  '07076_E_Not a directive or local symbol $1'#000+
  '07077_E_Using a defined name as a local label'#000+
  '07078_E_Dollar token is used without an identifier'#000+
  '07079_W_32','bit constant created for address'#000+
  '07080_N_.align is target specific, use .balign or .p2align'#000+
  '07081_E_Can'#039't access fields directly for parameters'#000+
  '07082_E_Can'#039't access fields of objects/classes directly'#000+
  '07083_E_No size specified and unable to ','determine the size of the op'+
  'erands'#000+
  '07084_E_Cannot use RESULT in this function'#000+
  '07086_W_"$1" without operand translated into "$1 '#000+
  '07087_W_"$1 '#000+
  '07088_W_"$1 '#000+
  '07089_E_Char < not allowed here'#000+
  '07090_E_Char > not allowed here'#000+
  '07093_W_ALIGN not supp','orted'#000+
  '07094_E_Inc and Dec cannot be together'#000+
  '07095_E_Invalid reglist for movem'#000+
  '07096_E_Reglist invalid for opcode'#000+
  '07097_E_Higher cpu mode required ($1)'#000+
  '07098_W_No size specified and unable to determine the size of the oper'+
  'ands, using DWORD ','as default'#000+
  '07099_E_Syntax error while trying to parse a shifter operand'#000+
  '07100_E_Address of packed component is not at a byte boundary'#000+
  '07101_W_No size specified and unable to determine the size of the oper'+
  'ands, using BYTE as default'#000+
  '07102_W_','Use of +offset('#000+
  '07103_W_Use of +offset('#000+
  '07104_W_Use of -offset('#000+
  '07105_W_Use of -offset('#000+
  '07106_E_VMTOffset must be used in combination with a virtual method, a'+
  'nd "$1" is not virtual'#000+
  '07107_E_Generating PIC, but reference is not PIC-safe'#000+
  '07108','_E_All registers in a register set must be of the same kind and'+
  ' width'#000+
  '07109_E_A register set cannot be empty'#000+
  '07110_W_@GOTPCREL is useless and potentially dangereous for local symb'+
  'ols'#000+
  '08000_F_Too many assembler files'#000+
  '08001_F_Selected assembl','er output not supported'#000+
  '08002_F_Comp not supported'#000+
  '08003_F_Direct not support for binary writers'#000+
  '08004_E_Allocating of data is only allowed in bss section'#000+
  '08005_F_No binary writer selected'#000+
  '08006_E_Asm: Opcode $1 not in table'#000+
  '08007_E_Asm: $1',' invalid combination of opcode and operands'#000+
  '08008_E_Asm: 16 Bit references not supported'#000+
  '08009_E_Asm: Invalid effective address'#000+
  '08010_E_Asm: Immediate or reference expected'#000+
  '08011_E_Asm: $1 value exceeds bounds $2'#000+
  '08012_E_Asm: Short jump is ','out of range $1'#000+
  '08013_E_Asm: Undefined label $1'#000+
  '08014_E_Asm: Comp type not supported for this target'#000+
  '08015_E_Asm: Extended type not supported for this target'#000+
  '08016_E_Asm: Duplicate label $1'#000+
  '08017_E_Asm: Redefined label $1'#000+
  '08018_E_Asm: First',' defined here'#000+
  '08019_E_Asm: Invalid register $1'#000+
  '08020_E_Asm: 16 or 32 Bit references not supported'#000+
  '08021_E_Asm: 64 Bit operands not supported'#000+
  '08022_E_Asm: AH,BH,CH or DH cannot be used in an instruction requiring'+
  ' REX prefix'#000+
  '09000_W_Source op','erating system redefined'#000+
  '09001_I_Assembling (pipe) $1'#000+
  '09002_E_Can'#039't create assembler file: $1'#000+
  '09003_E_ÎÞ·¨´´½¨Ä¿±êÎÄ¼þ: $1'#000+
  '09004_E_ÎÞ·¨´´½¨µµ°¸ÎÄ¼þ: $1'#000+
  '09005_E_Assembler $1 not found, switching to external assembling'#000+
  '09006_T_Using assembler',': $1'#000+
  '09007_E_Error while assembling exitcode $1'#000+
  '09008_E_Can'#039't call the assembler, error $1 switching to external a'+
  'ssembling'#000+
  '09009_I_Assembling $1'#000+
  '09010_I_Assembling with smartlinking $1'#000+
  '09011_W_Object $1 not found, Linking may fail !'#000+
  '09012_','W_Library $1 not found, Linking may fail !'#000+
  '09013_E_Á´½Ó´íÎó'#000+
  '09014_E_ÎÞ·¨µ÷ÓÃÁ´½ÓÆ÷'#000+
  '09015_I_Linking $1'#000+
  '09016_E_Util $1 not found, switching to external linking'#000+
  '09017_T_Using util $1'#000+
  '09018_E_Creation of Executables not supported'#000+
  '09019_E_Creat','ion of Dynamic/Shared Libraries not supported'#000+
  '09020_I_Closing script $1'#000+
  '09021_E_resource compiler "$1" not found, switching to external mode'#000+
  '09022_I_Compiling resource $1'#000+
  '09023_T_unit $1 can'#039't be statically linked, switching to smart lin'+
  'kin','g'#000+
  '09024_T_unit $1 can'#039't be smart linked, switching to static linking'+
  #000+
  '09025_T_unit $1 can'#039't be shared linked, switching to static linkin'+
  'g'#000+
  '09026_E_unit $1 can'#039't be smart or static linked'#000+
  '09027_E_unit $1 can'#039't be shared or static linked'#000+
  '09028_','D_Calling resource compiler "$1" with "$2" as command line'#000+
  '09029_E_Error while compiling resources'#000+
  '09030_E_Can'#039't call the resource compiler "$1", switching to extern'+
  'al mode'#000+
  '09031_E_Can'#039't open resource file "$1"'#000+
  '09032_E_Can'#039't write resource ','file "$1"'#000+
  '09128_F_Can'#039't post process executable $1'#000+
  '09129_F_Can'#039't open executable $1'#000+
  '09130_X_Size of Code: $1 bytes'#000+
  '09131_X_Size of initialized data: $1 bytes'#000+
  '09132_X_Size of uninitialized data: $1 bytes'#000+
  '09133_X_Stack space reserved: $1 byte','s'#000+
  '09134_X_Stack space committed: $1 bytes'#000+
  '09200_F_Executable image size is too big for $1 target.'#000+
  '09201_W_Object file "$1" contains 32-bit absolute relocation to symbol'+
  ' "$2".'#000+
  '10000_T_Unitsearch: $1'#000+
  '10001_T_PPU Loading $1'#000+
  '10002_U_PPU Name: $','1'#000+
  '10003_U_PPU Flags: $1'#000+
  '10004_U_PPU Crc: $1'#000+
  '10005_U_PPU Time: $1'#000+
  '10006_U_PPU ÎÄ¼þÌ«Ð¡'#000+
  '10007_U_PPU Invalid Header (no PPU at the begin)'#000+
  '10008_U_PPU $1 °æ±¾´íÎó'#000+
  '10009_U_PPU is compiled for another processor'#000+
  '10010_U_PPU is compiled for an othe','r target'#000+
  '10011_U_PPU Source: $1'#000+
  '10012_U_Writing $1'#000+
  '10013_F_Can'#039't Write PPU-File'#000+
  '10014_F_Error reading PPU-File'#000+
  '10015_F_unexpected end of PPU-File'#000+
  '10016_F_Invalid PPU-File entry: $1'#000+
  '10017_F_PPU Dbx count problem'#000+
  '10018_E_´íÎóµÄ¿â£º$1'#000+
  '10019_F_','¿âÊýÁ¿Ì«¶à'#000+
  '10020_F_Circular unit reference between $1 and $2'#000+
  '10021_F_Can'#039't compile unit $1, no sources available'#000+
  '10022_F_ÎÞ·¨ÕÒµ½±» $2 ³ÌÐòÊ¹ÓÃµÄ $1 ¿â'#000+
  '10023_W_ÎÞ·¨ÕÒµ½ $1 ¿âµ«ÕÒµ½ $2'#000+
  '10024_F_ÎÞ·¨ÕÒµ½ $1 ¿âµ«ÕÒµ½ $2 '#000+
  '10025_W_Compiling the s','ystem unit requires the -Us switch'#000+
  '10026_F_±àÒëÆ÷·¢Éú $1 ¸ö´íÎó£¬ÖÐÖ¹'#000+
  '10027_U_Load from $1 ($2) unit $3'#000+
  '10028_U_Recompiling $1, checksum changed for $2'#000+
  '10029_U_Recompiling $1, source found only'#000+
  '10030_U_Recompiling unit, static lib is older ','than ppufile'#000+
  '10031_U_Recompiling unit, shared lib is older than ppufile'#000+
  '10032_U_Recompiling unit, obj and asm are older than ppufile'#000+
  '10033_U_Recompiling unit, obj is older than asm'#000+
  '10034_U_Parsing interface of $1'#000+
  '10035_U_Parsing implementat','ion of $1'#000+
  '10036_U_Second load for unit $1'#000+
  '10037_U_PPU Check file $1 time $2'#000+
  '10040_W_Can'#039't recompile unit $1, but found modifed include files'#000+
  '10041_U_File $1 is newer than PPU file $2'#000+
  '10042_U_Trying to use a unit which was compiled with a di','fferent FPU'+
  ' mode'#000+
  '10043_U_Loading interface units from $1'#000+
  '10044_U_Loading implementation units from $1'#000+
  '10045_U_Interface CRC changed for unit $1'#000+
  '10046_U_Implementation CRC changed for unit $1'#000+
  '10047_U_Finished compiling unit $1'#000+
  '10048_U_Add de','pendency of $1 to $2'#000+
  '10049_U_No reload, is caller: $1'#000+
  '10050_U_No reload, already in second compile: $1'#000+
  '10051_U_Flag for reload: $1'#000+
  '10052_U_Ç¿ÖÆÖØÔØ'#000+
  '10053_U_Previous state of $1: $2'#000+
  '10054_U_Already compiling $1, setting second compile'#000+
  '10055_','U_Loading unit $1'#000+
  '10056_U_Finished loading unit $1'#000+
  '10057_U_Registering new unit $1'#000+
  '10058_U_Re-resolving unit $1'#000+
  '10059_U_Skipping re-resolving unit $1, still loading used units'#000+
  '10060_U_Unloading resource unit $1 (not needed)'#000+
  '10061_E_Unit $1 ','was compiled using a different whole program optimiz'+
  'ation feedback input ($2, $3); recompile it without wpo or use the sam'+
  'e wpo feedback input file for this compilation invocation'#000+
  '10062_U_Indirect interface (objects/classes) CRC changed for',' unit $1'+
  #000+
  '11000_O_CP Pascal Compiler ÊÇÒ»ÖÖ Pascal ÓïÑÔ±àÒëÆ÷¡£ÏêÇéÇë·ÃÎÊ www.le'+
  'zizi.org ¡£±¾ÏîÄ¿ÒÑ¸ù¾ÝGNUÐ­Òé¿ªÔ´¡£'#000+
  '11001_W_Only one source file supported, changing source file to compil'+
  'e from "$1" into "$2"'#000+
  '11002_W_DEF file can be created ','only for OS/2'#000+
  '11003_E_nested response files are not supported'#000+
  '11004_F_No source file name in command line'#000+
  '11005_N_No option inside $1 config file'#000+
  '11006_E_·Ç·¨²ÎÊý: $1'#000+
  '11007_H_-? writes help pages'#000+
  '11008_F_Too many config files nested'#000+
  '11009_F','_ÎÞ·¨´ò¿ªÎÄ¼þ: $1'#000+
  '11010_D_Reading further options from $1'#000+
  '11011_W_Target is already set to: $1'#000+
  '11012_W_Shared libs not supported on DOS platform, reverting to static'+
  #000+
  '11013_F_In options file $1 at line $2 too many #IF(N)DEFs encountered'#000+
  '1101','4_F_In options file $1 at line $2 unexpected #ENDIFs encountered'+
  #000+
  '11015_F_Open conditional at the end of the options file'#000+
  '11016_W_Debug information generation is not supported by this executab'+
  'le'#000+
  '11017_H_Try recompiling with -dGDB'#000+
  '11018_W_You',' are using the obsolete switch $1'#000+
  '11019_W_You are using the obsolete switch $1, please use $2'#000+
  '11020_N_Switching assembler to default source writing assembler'#000+
  '11021_W_Assembler output selected "$1" is not compatible with "$2"'#000+
  '11022_W_"$1" as','sembler use forced'#000+
  '11026_T_Reading options from file $1'#000+
  '11027_T_Reading options from environment $1'#000+
  '11028_D_Handling option "$1"'#000+
  '11029_O_*** °´»Ø³µ¼üÍË³ö ***'#000+
  '11030_H_Start of reading config file $1'#000+
  '11031_H_End of reading config file $1'#000+
  '1103','2_D_interpreting option "$1"'#000+
  '11036_D_interpreting firstpass option "$1"'#000+
  '11033_D_interpreting file option "$1"'#000+
  '11034_D_Reading config file "$1"'#000+
  '11035_D_found source file name "$1"'#000+
  '11039_E_Î´Öª±àÂëÒ³'#000+
  '11040_F_ÅäÖÃÎÄ¼þ $1 ÊÇÒ»¸öÄ¿Â¼'#000+
  '11041_W_Ass','embler output selected "$1" cannot generate debug info, d'+
  'ebugging disabled'#000+
  '11042_W_Use of ppc386.cfg is deprecated, please use fpc.cfg instead'#000+
  '11043_F_In options file $1 at line $2 #ELSE directive without #IF(N)DE'+
  'F found'#000+
  '11044_F_Option "$1"',' is not, or not yet, supported on the current tar'+
  'get platform'#000+
  '11045_F_The feature "$1" is not, or not yet, supported on the selected'+
  ' target platform'#000+
  '11046_N_DWARF debug information cannot be used with smart linking on t'+
  'his target, switching',' to static linking'#000+
  '11047_W_Option "$1" is ignored for the current target platform.'#000+
  '11048_W_Disabling external debug information because it is unsupported'+
  ' for the selected target/debug format combination.'#000+
  '12000_F_Cannot open whole program op','timization feedback file "$1"'#000+
  '12001_D_Processing whole program optimization information in wpo feedb'+
  'ack file "$1"'#000+
  '12002_D_Finished processing the whole program optimization information'+
  ' in wpo feedback file "$1"'#000+
  '12003_E_Expected section head','er, but got "$2" at line $1 of wpo feed'+
  'back file'#000+
  '12004_W_No handler registered for whole program optimization section "'+
  '$2" at line $1 of wpo feedback file, ignoring'#000+
  '12005_D_Found whole program optimization section "$1" with information'+
  ' abou','t "$2"'#000+
  '12006_F_The selected whole program optimizations require a previously '+
  'generated feedback file (use -Fw to specify)'#000+
  '12007_E_No collected information necessary to perform "$1" whole progr'+
  'am optimization found'#000+
  '12008_F_Specify a whole pr','ogram optimization feedback file to store '+
  'the generated info in (using -FW)'#000+
  '12009_E_Not generating any whole program optimization information, yet'+
  ' a feedback file was specified (using -FW)'#000+
  '12010_E_Not performing any whole program optimizati','ons, yet an input'+
  ' feedback file was specified (using -Fw)'#000+
  '12011_D_Skipping whole program optimization section "$1", because not '+
  'needed by the requested optimizations'#000+
  '12012_W_Overriding previously read information for "$1" from feedback '+
  'inpu','t file using information in section "$2"'#000+
  '12013_E_Cannot extract symbol liveness information from program when s'+
  'tripping symbols, use -Xs-'#000+
  '12014_E_Cannot extract symbol liveness information from program when w'+
  'hen not linking'#000+
  '12015_F_Cannot f','ind "$1" or "$2" to extract symbol liveness informat'+
  'ion from linked program'#000+
  '12016_E_Error during reading symbol liveness information produced by "'+
  '$1"'#000+
  '12017_F_Error executing "$1" (exitcode: $2) to extract symbol informat'+
  'ion from linked prog','ram'#000+
  '12018_E_Collection of symbol liveness information can only help when u'+
  'sing smart linking, use -CX -XX'#000+
  '12019_E_Cannot create specified whole program optimisation feedback fi'+
  'le "$1"'#000+
  '11023_CP Pascal Compiler version $FPCFULLVERSION [$FPCDA','TE] for $FPC'+
  'CPU'#010+
  'Copyright (C) 2008-2012 LeZiZi Studio'#000+
  '11024_CP Pascal Compiler version $FPCVERSION'#010+
  #010+
  'Compiler Date      : $FPCDATE'#010+
  'Compiler CPU Target: $FPCCPU'#010+
  #010+
  'Supported targets:'#010+
  '  $OSTARGETS'#010+
  #010+
  'Supported CPU instruction sets:'#010+
  '  $INSTRUCTIONS','ETS'#010+
  #010+
  'Supported FPU instruction sets:'#010+
  '  $FPUINSTRUCTIONSETS'#010+
  #010+
  'Supported ABI targets:'#010+
  '  $ABITARGETS'#010+
  #010+
  'Supported Optimizations:'#010+
  '  $OPTIMIZATIONS'#010+
  #010+
  'Supported Whole Program Optimizations:'#010+
  '  All'#010+
  '  $WPOPTIMIZATIONS'#010+
  #010+
  'Supported Microcontroller types:'#010+
  ' ',' $CONTROLLERTYPES'#010+
  #010+
  'This program comes under the GNU General Public Licence'#010+
  'For more information read COPYING.FPC'#010+
  #010+
  'Report bugs, suggestions, etc. to:'#010+
  '                 http://www.lezizi.org'#010+
  'or'#010+
  '                 support@lezizi.org'#000+
  '11025_**'
);
