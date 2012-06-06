#
#   This file is part of the CP Pascal Compiler
#   Copyright (c) by the CP Development team of LeZiZi Studio 
#
#   Chinese (Simplified) Language File for CP Pascal
#
#
# The constants are build in the following order:
# <part>_<type>_<txtidentifier>
#
# <part> is the part of the compiler the message is used
#   asmr_     assembler parsing
#   asmw_     assembler writing/binary writers
#   unit_     unit handling
#   scan_     scanner
#   parser_   parser
#   type_     type checking
#   general_  general info
#   exec_     calls to assembler, external linker, binder
#   link_     internal linker
#
# <type> the type of the message it should normally used for
#   f_   fatal error
#   e_   error
#   w_   warning
#   n_   note
#   h_   hint
#   i_   info
#   l_   add linenumber
#   u_   used
#   t_   tried
#   c_   conditional
#   d_   debug message
#   x_   executable informations
#   o_   normal (e.g., "press enter to continue")
#

#
# General
#
# 01023 is the last used one
#
# BeginOfTeX





general_t_compilername=01000_T_编译器: $1


general_d_sourceos=01001_D_编译系统: $1


general_i_targetos=01002_I_目标系统: $1


general_t_exepath=01003_T_可执行文件目录: $1


general_t_unitpath=01004_T_库（Unit）目录: $1


general_t_includepath=01005_T_include 目录: $1



general_t_librarypath=01006_T_library 目录: $1


general_t_objectpath=01007_T_object 目录: $1



general_i_abslines_compiled=01008_I_编译了 $1 ，行 $2 段 $3



general_f_no_memory_left=01009_F_剩余内存不足










general_i_writingresourcefile=01010_I_输出资源字符串表: $1


general_e_errorwritingresourcefile=01011_E_输出资源字符串表: $1


general_i_fatal=01012_I_失败：

general_i_error=01013_I_错误：

general_i_warning=01014_I_警告：

general_i_note=01015_I_提示：

general_i_hint=01016_I_注意：



general_e_path_does_not_exist=01017_E_目录 "$1" 不为空
general_f_compilation_aborted=01018_F_编译中止
general_text_bytes_code=01019_bytes 代码
general_text_bytes_data=01020_bytes 数据
general_i_number_of_warnings=01021_I_$1 个错误被找到
general_i_number_of_hints=01022_I_$1 个警告被找到
general_i_number_of_notes=01023_I_$1 个提示被找到

#
# Scanner
#
# 02087 is the last used one
#






scan_f_end_of_file=02000_F_缺少文件结尾


scan_f_string_exceeds_line=02001_F_字符串过长


scan_f_illegal_char=02002_F_非法字符 "$1" ($2)

scan_f_syn_expected=02003_F_语法错误，找到 "$2" ，但缺少 "$1"



scan_t_start_include_file=02004_TL_阅读 include 文件 $1


scan_w_comment_level=02005_W_找到 $1 层注释



scan_n_ignored_switch=02008_N_忽略编译开关 "$1"

scan_w_illegal_switch=02009_W_非法编译开关 "$1"


scan_w_switch_is_global=02010_W_错误的全局编译开关


scan_e_illegal_char_const=02011_E_连续的错误字符


scan_f_cannot_open_input=02012_F_无法打开文件 "$1"


scan_f_cannot_open_includefile=02013_F_无法打开 include 文件 "$1"


scan_e_illegal_pack_records=02015_E_非法的记录校准符 "$1"


scan_e_illegal_pack_enum=02016_E_非法枚举最小尺寸标识符 "$1"


scan_e_endif_expected=02017_E_$定义在 $3 行 $4 的 $1 $2 缺少 ENDIF   

scan_e_preproc_syntax_error=02018_E_解析表达式一个条件时发生语法错误


scan_e_error_in_preproc_expr=02019_计算条件表达式失败


scan_w_macro_cut_after_255_chars=02020_W_宏定义多于 255 个字符

scan_e_endif_without_if=02021_E_没有If却结束Endif

scan_f_user_defined=02022_F_用户定义：$1

scan_e_user_defined=02023_E_用户定义：$1

scan_w_user_defined=02024_W_用户定义：$1

scan_n_user_defined=02025_N_用户定义：$1

scan_h_user_defined=02026_H_用户定义：$1

scan_i_user_defined=02027_I_用户定义：$1

scan_e_keyword_cant_be_a_macro=02028_E_关键字宏观定义没有任何效果

scan_f_macro_buffer_overflow=02029_F_Macro buffer overflow while reading or expanding a macro

scan_w_macro_too_deep=02030_W_Expanding of macros exceeds a depth of 16.



scan_w_wrong_styled_switch=02031_W_compiler switches aren't supported in // styled comments

scan_d_handling_switch=02032_DL_处理开关 "$1"


scan_c_endif_found=02033_CL_ENDIF $1 found


scan_c_ifdef_found=02034_CL_IFDEF $1 found, $2


scan_c_ifopt_found=02035_CL_IFOPT $1 found, $2


scan_c_if_found=02036_CL_IF $1 found, $2


scan_c_ifndef_found=02037_CL_IFNDEF $1 found, $2


scan_c_else_found=02038_CL_ELSE $1 found, $2


scan_c_skipping_until=02039_CL_Skipping until...



scan_i_press_enter=02040_I_按回车键继续



scan_w_unsupported_switch=02041_W_不支持开关 "$1"



scan_w_illegal_directive=02042_W_Illegal compiler directive "$1"


scan_t_back_in=02043_TL_Back in $1


scan_w_unsupported_app_type=02044_W_不支持应用程序形式 "$1"


scan_w_app_type_not_support=02045_W_APPTYPE is not supported by the target OS

scan_w_description_not_support=02046_W_DESCRIPTION is not supported by the target OS

scan_n_version_not_support=02047_N_VERSION 在目标操作系统中不被支持

scan_n_only_exe_version=02048_N_VERSION 仅供 EXE 或 DLL 使用

scan_w_wrong_version_ignored=02049_W_Wrong format for VERSION directive "$1"


scan_e_illegal_asmmode_specifier=02050_E_非法汇编式 "$1"


scan_w_no_asm_reader_switch_inside_asm=02051_W_ASM reader switch is not possible inside asm statement, "$1" will be effective only for next



scan_e_wrong_switch_toggle=02052_E_错误的开关，请使用 ON/OFF 或 +/-

scan_e_resourcefiles_not_supported=02053_E_在当前开关中，资源文件不被许可

scan_w_include_env_not_found=02054_W_Include environment "$1" not found in environment


scan_e_invalid_maxfpureg_value=02055_E_不符合FPU的注册限制

scan_w_only_one_resourcefile_supported=02056_W_Only one resource file is supported for this target


scan_w_macro_support_turned_off=02057_W_宏功能已经被关闭



scan_e_invalid_interface_type=02058_E_错误的接口指定。允许 COM，CORBA 或DEFAULT

scan_w_appid_not_support=02059_W_APPID is only supported for PalmOS

scan_w_appname_not_support=02060_W_APPNAME is only supported for PalmOS

scan_e_string_exceeds_255_chars=02061_E_常数字符串多于 255 个字符


scan_f_include_deep_ten=02062_F_Including include files exceeds a depth of 16.



scan_e_too_many_push=02063_F_PUSH 层数太多

scan_e_too_many_pop=02064_E_一个在进栈之前的出栈

scan_e_error_macro_lacks_value=02065_E_宏或编译时变量 "$1" 没有任何值

scan_e_wrong_switch_toggle_default=02066_E_错误的开关, 使用 ON/OFF/DEFAULT 或 +/-/*

scan_e_mode_switch_not_allowed=02067_E_模式开关 "$1" 在此处不被允许


scan_e_error_macro_undefined=02068_E_编译时变量或宏 "$1" 为定义

scan_e_utf8_bigger_than_65535=02069_E_UTF-8 代码大于 65535

scan_e_utf8_malformed=02070_E_格式错误的 UTF-8 字符串

scan_c_switching_to_utf8=02071_C_UTF-8 签名找到，使用 UTF-8 编码


scan_e_compile_time_typeerror=02072_E_编译时表达式：在$3未找到$1但找到$2 

scan_n_app_type_not_support=02073_N_APPTYPE is not supported by the target OS

scan_e_illegal_optimization_specifier=02074_E_非法的优化设置 "$1"


scan_w_setpeflags_not_support=02075_W_SETPEFLAGS is not supported by the target OS

scan_w_imagebase_not_support=02076_W_IMAGEBASE is not supported by the target OS

scan_w_minstacksize_not_support=02077_W_MINSTACKSIZE is not supported by the target OS

scan_w_maxstacksize_not_support=02078_W_MAXSTACKSIZE is not supported by the target OS

scanner_e_illegal_warn_state=02079_E_非法状态 $WARN 指令

scan_e_only_packset=02080_E_非法设置包装值

scan_w_pic_ignored=02081_W_PIC directive or switch ignored


scan_w_unsupported_switch_by_target=02082_W_The switch "$1" is not supported by the currently selected target

scan_w_frameworks_darwin_only=02084_W_Framework-related options are only supported for Darwin/Mac OS X


scan_e_illegal_minfpconstprec=02085_E_非法最小精度浮点常数 "$1"


scan_w_multiple_main_name_overrides=02086_W_Overriding name of "main" procedure multiple times, was previously set to "$1"


#
# Parser
#
# 03252 is the last used one
#





scanner_w_illegal_warn_identifier=02087_W_Illegal identifier "$1" for $WARN directive

scanner_e_illegal_alignment_directive=02088_E_Illegal alignment directive



#
# Parser
#
# 03310 is the last used one
#





parser_e_syntax_error=03000_E_Parser - Syntax Error


parser_e_dont_nest_interrupt=03004_E_INTERRUPT procedure can't be nested

parser_w_proc_directive_ignored=03005_W_Procedure type "$1" ignored

parser_e_no_overload_for_all_procs=03006_E_Not all declarations of "$1" are declared with OVERLOAD


parser_e_export_name_double=03008_E_Duplicate exported function name "$1"

parser_e_export_ordinal_double=03009_E_Duplicate exported function index $1

parser_e_export_invalid_index=03010_E_Invalid index for exported function

parser_w_parser_reloc_no_debug=03011_W_Relocatable DLL or executable $1 debug info does not work, disabled.

parser_w_parser_win32_debug_needs_WN=03012_W_To allow debugging for win32 code you need to disable relocation with -WN option


parser_e_constructorname_must_be_init=03013_E_Constructor name must be INIT


parser_e_destructorname_must_be_done=03014_E_Destructor name must be DONE


parser_e_proc_inline_not_supported=03016_E_Procedure type INLINE not supported



parser_w_constructor_should_be_public=03018_W_Constructor should be public

parser_w_destructor_should_be_public=03019_W_Destructor should be public

parser_n_only_one_destructor=03020_N_Class should have one destructor only

parser_e_no_local_objects=03021_E_Local class definitions are not allowed


parser_f_no_anonym_objects=03022_F_Anonymous class definitions are not allowed









parser_n_object_has_no_vmt=03023_N_对象 "$1" 没有 VMT


parser_e_illegal_parameter_list=03024_E_非法参数列表


parser_e_wrong_parameter_size=03026_E_"$1" 的参数数量错误


parser_e_overloaded_no_procedure=03027_E_重载的标识符 "$1" 不是函数


parser_e_overloaded_have_same_parameters=03028_E_重载的多个函数有相同的参数表



parser_e_header_dont_match_forward=03029_E_函数定义与先前的定义 "$1" 不吻合


parser_e_header_different_var_names=03030_E_函数定义 "$1"  并未在先前的定义中找到：变量名 $2 ==> $3


parser_n_duplicate_enum=03031_N_Values in enumeration types have to be ascending









parser_e_no_with_for_variable_in_other_segments=03033_E_不能用于变量在不同的域


parser_e_too_much_lexlevel=03034_E_函数嵌套数量大于31

parser_e_range_check_error=03035_E_常数范围检查错误

parser_w_range_check_error=03036_W_常量范围检查错误

parser_e_double_caselabel=03037_E_重复的标签

parser_e_case_lower_less_than_upper_bound=03038_E_上界的范围小于下界


parser_e_type_const_not_possible=03039_E_类或接口类型的常量不允许

parser_e_no_overloaded_procvars=03040_E_装载的功能函数变量不允许


parser_e_invalid_string_size=03041_E_字符串长度必须在 1 到 255 之间




parser_w_use_extended_syntax_for_objects=03042_W_use extended syntax of NEW and DISPOSE for instances of objects





parser_w_no_new_dispose_on_void_pointers=03043_W_use of NEW or DISPOSE for untyped pointers is meaningless


parser_e_no_new_dispose_on_void_pointers=03044_E_NEW 或 DISPOSE 不兼容无类型的指针




parser_e_class_id_expected=03045_E_缺少 类型 标识符



parser_e_no_type_not_allowed_here=03046_E_类 型标识符在此处不被允许

parser_e_methode_id_expected=03047_E_缺少 方法 标识符




parser_e_header_dont_match_any_member=03048_E_函数定义不符合任何属于此类的方法 "$1"




parser_d_procedure_start=03049_DL_过程/函数 $1


parser_e_error_in_real=03050_E_非法浮点常数

parser_e_fail_only_in_constructor=03051_E_FAIL 只能被用于构造

parser_e_no_paras_for_destructor=03052_E_析构函数不能有参数


parser_e_only_class_members_via_class_ref=03053_E_只有类方法，类属性和类变量可以被参考




parser_e_only_class_members=03054_E_只有类，类方法，类属性和类变量可以在类方法中使用


parser_e_case_mismatch=03055_E_常数和 CASE 类型不匹配

parser_e_illegal_symbol_exported=03056_E_不能从库中导出符号


parser_w_should_use_override=03057_W_继承的方法被 "$1" 隐藏




parser_e_nothing_to_be_overridden=03058_E_在重写的根类中有没有方法："$1"


parser_e_no_procedure_to_access_property=03059_E_访问的属性不提供任何成员

parser_w_stored_not_implemented=03060_W_存储的 property directive 并未实现

parser_e_ill_property_access_sym=03061_E_使用非法符号访问属性




parser_e_cant_access_protected_member=03062_E_不能访问对象的 proteced 域

parser_e_cant_access_private_member=03063_E_不能访问对象的 private 域


parser_e_overridden_methods_not_same_ret=03066_E_重写方法必须有着相同的返回类型： "$2" 被 "$1"重写，但有着不同的返回类型


parser_e_dont_nest_export=03067_E_EXPORT declared functions can't be nested


parser_e_methods_dont_be_export=03068_E_方法不能用于 EXPORT


parser_e_call_by_ref_without_typeconv=03069_E_Call by var for arg no. $1 has to match exactly: Got "$2" expected "$3"



parser_e_no_super_class=03070_E_Class isn't a parent class of the current class


parser_e_self_not_in_method=03071_E_SELF 只允许在方法中使用


parser_e_generic_methods_only_in_methods=03072_E_Methods can be only in other methods called direct with type identifier of the class

parser_e_illegal_colon_qualifier=03073_E_错误地使用 ':'


parser_e_illegal_set_expr=03074_E_range check error in set constructor or duplicate set element



parser_e_pointer_to_class_expected=03075_E_缺少对象指针


parser_e_expr_have_to_be_constructor_call=03076_E_Expression must be constructor call



parser_e_expr_have_to_be_destructor_call=03077_E_Expression must be destructor call



parser_e_invalid_record_const=03078_E_错误的记录元素序列


parser_e_false_with_expr=03079_E_表达式类型必须为 类 或 记录


parser_e_void_function=03080_E_过程不能返回值



parser_e_only_methods_allowed=03081_E_constructors, destructors 和 class 操作必须为方法


parser_e_operator_not_overloaded=03082_E_相应的操作符没有重载


parser_e_no_such_assignment=03083_E_无法重载对相同类的分配


parser_e_overload_impossible=03084_E_错误的操作符重载


parser_e_no_reraise_possible=03085_E_此处不能使用 Re-raise


parser_e_no_new_or_dispose_for_classes=03086_E_The extended syntax of new or dispose isn't allowed for a class




parser_e_procedure_overloading_is_off=03088_E_过程重载被关闭


parser_e_overload_operator_failed=03089_E_无法重载该操作符。可重载的操作符为: $1





parser_e_comparative_operator_return_boolean=03090_E_比较操作符必须返回布尔类型的值


parser_e_only_virtual_methods_abstract=03091_E_只有 virtual 方法可以被抽象


parser_f_unsupported_feature=03092_F_使用了不支持的功能

parser_e_mix_of_classes_and_objects=03093_E_不允许混合多种对象 (包括 class, object, interface, 等等)


parser_w_unknown_proc_directive_ignored=03094_W_Unknown procedure directive had to be ignored: "$1"

parser_e_absolute_only_one_var=03095_E_absolute can only be associated to one variable






parser_e_absolute_only_to_var_or_const=03096_E_abs 函数只能使用 var 或 const 传入







parser_e_initialized_only_one_var=03097_E_只有变量可以被赋初值

parser_e_abstract_no_definition=03098_E_Abstract methods shouldn't have any definition (with function body)


parser_e_overloaded_must_be_all_global=03099_E_This overloaded function can't be local (must be exported)


parser_w_virtual_without_constructor=03100_W_Virtual methods are used without a constructor in "$1"




parser_c_macro_defined=03101_CL_定义的宏: $1

parser_c_macro_undefined=03102_CL_未定义的宏: $1

parser_c_macro_set_to=03103_CL_Macro $1 set to $2

parser_i_compiling=03104_I_编译 $1


parser_u_parsing_interface=03105_UL_Parsing interface of unit $1


parser_u_parsing_implementation=03106_UL_Parsing implementation of $1


parser_d_compiling_second_time=03107_DL_Compiling $1 for the second time


parser_e_no_property_found_to_override=03109_E_No property found to override


parser_e_only_one_default_property=03110_E_只允许一个默认设置


parser_e_property_need_paras=03111_E_The default property must be an array property

parser_e_constructor_cannot_be_not_virtual=03112_E_Virtual constructors are only supported in class object model


parser_e_no_default_property_available=03113_E_没有可用的默认属性


parser_e_cant_have_published=03114_E_The class can't have a published section, use the {$M+} switch



parser_e_forward_declaration_must_be_resolved=03115_E_Forward declaration of class "$1" must be resolved here to use the class as ancestor









parser_e_no_local_operator=03116_E_不支持本地操作符


parser_e_proc_dir_not_allowed_in_interface=03117_E_过程定义 "$1" 不允许出现在 interface 段中


parser_e_proc_dir_not_allowed_in_implementation=03118_E_过程定义 "$1" 不允许出现在 implementation 段中


parser_e_proc_dir_not_allowed_in_procvar=03119_E_过程定义 "$1" 不允许出现在 procvar 定义中


parser_e_function_already_declared_public_forward=03120_E_函数 "$1" 已经被定义或被定义为 Public  



parser_e_not_external_and_export=03121_E_不能同时使用 EXPORT 和 EXTERNAL

parser_w_not_supported_for_inline=03123_W_"$1" not yet supported inside inline procedure/function

parser_w_inlining_disabled=03124_W_Inlining disabled

parser_i_writing_browser_log=03125_I_写出浏览日志 $1


parser_h_maybe_deref_caret_missing=03126_H_may be pointer dereference is missing

parser_f_assembler_reader_not_supported=03127_F_Selected assembler reader not supported



parser_e_proc_dir_conflict=03128_E_Procedure directive "$1" has conflicts with other directives


parser_e_call_convention_dont_match_forward=03129_E_Calling convention doesn't match forward




parser_e_property_cant_have_a_default_value=03131_E_Property can't have a default value

parser_e_property_default_value_must_const=03132_E_The default value of a property must be constant



parser_e_cant_publish_that=03133_E_Symbol can't be published, can be only a class


parser_e_cant_publish_that_property=03134_E_This kind of property can't be published



parser_e_empty_import_name=03136_E_An import name is required

parser_e_division_by_zero=03138_E_除以0

parser_e_invalid_float_operation=03139_E_错误的浮点指针操作


parser_e_array_lower_less_than_upper_bound=03140_E_Upper bound of range is less than lower bound


parser_w_string_too_long=03141_W_字符串 "$1" 长于 "$2"


parser_e_string_larger_array=03142_E_字符串长度大于字符数组长度


parser_e_ill_msg_expr=03143_E_Illegal expression after message directive

parser_e_ill_msg_param=03144_E_Message handlers can take only one call by ref. parameter



parser_e_duplicate_message_label=03145_E_重复的消息标识: "$1"

parser_e_self_in_non_message_handler=03146_E_Self can only be an explicit parameter in methods which are message handlers


parser_e_threadvars_only_sg=03147_E_Threadvars can be only static or global




parser_f_direct_assembler_not_allowed=03148_F_Direct assembler not supported for binary output format


parser_w_no_objpas_use_mode=03149_W_不允许手动添加 OBJPAS 库，请使用 {$mode objfpc} 或 {$mode delphi} 打开编译开关



parser_e_no_object_override=03150_E_对象中不允许重写


parser_e_cant_use_inittable_here=03151_E_Data types which require initialization/finalization can't be used in variant records



parser_e_resourcestring_only_sg=03152_E_Resourcestrings can be only static or global


parser_e_exit_with_argument_not__possible=03153_E_此处不允许带参数推出


parser_e_stored_property_must_be_boolean=03154_E_The type of the storage symbol must be boolean


parser_e_ill_property_storage_sym=03155_E_This symbol isn't allowed as storage symbol



parser_e_only_publishable_classes_can_be_published=03156_E_Only classes which are compiled in $M+ mode can be published



parser_e_proc_directive_expected=03157_E_Procedure directive expected











parser_e_invalid_property_index_value=03158_E_The value for a property index must be of an ordinal type


parser_e_procname_to_short_for_export=03159_E_export 过程的名称太短



parser_e_dlltool_unit_var_problem=03160_E_No DEFFILE entry can be generated for unit global vars
parser_e_dlltool_unit_var_problem2=03161_E_Compile without -WD option


parser_f_need_objfpc_or_delphi_mode=03162_F_You need ObjFpc (-S2) or Delphi (-Sd) mode to compile this module


parser_e_no_export_with_index_for_target=03163_E_Can't export with index under $1


parser_e_no_export_of_variables_for_target=03164_E_Exporting of variables is not supported under $1

parser_e_improper_guid_syntax=03165_E_Improper GUID 语法





parser_w_interface_mapping_notfound=03168_W_Procedure named "$1" not found that is suitable for implementing the $2.$3


parser_e_interface_id_expected=03169_E_缺少 interface 标识符









parser_e_type_cant_be_used_in_array_index=03170_E_Type "$1" can't be used as array index type

parser_e_no_con_des_in_interfaces=03171_E_Con- and destructors aren't allowed in interfaces



parser_e_no_access_specifier_in_interfaces=03172_E_Access specifiers can't be used in INTERFACES



parser_e_no_vars_in_interfaces=03173_E_interface 不能包含域


parser_e_no_local_proc_external=03174_E_Can't declare local procedure as EXTERNAL


parser_w_skipped_fields_before=03175_W_Some fields coming before "$1" weren't initialized


parser_e_skipped_fields_before=03176_E_Some fields coming before "$1" weren't initialized


parser_w_skipped_fields_after=03177_W_Some fields coming after "$1" weren't initialized



parser_e_varargs_need_cdecl_and_external=03178_E_VarArgs directive (or '...' in MacPas) without CDecl/CPPDecl/MWPascal and External




parser_e_self_call_by_value=03179_E_Self must be a normal (call-by-value) parameter


parser_e_interface_has_no_guid=03180_E_Interface "$1" has no interface identification


parser_e_illegal_field_or_method=03181_E_Unknown class field or method identifier "$1"

parser_w_proc_overriding_calling=03182_W_Overriding calling convention "$1" with "$2"


parser_e_no_procvarobj_const=03183_E_Typed constants of the type "procedure of object" can only be initialized with NIL




parser_e_default_value_only_one_para=03184_E_Default value can only be assigned to one parameter









parser_e_default_value_expected_for_para=03185_E_Default parameter required for "$1"

parser_w_unsupported_feature=03186_W_Use of unsupported feature!

parser_h_c_arrays_are_references=03187_H_C arrays are passed by reference


parser_e_C_array_of_const_must_be_last=03188_E_C array of const must be the last argument



parser_h_type_redef=03189_H_Type "$1" redefinition



parser_w_cdecl_has_no_high=03190_W_cdecl'ared functions have no high parameter

parser_w_cdecl_no_openstring=03191_W_cdecl'ared functions do not support open strings

parser_e_initialized_not_for_threadvar=03192_E_Cannot initialize variables declared as threadvar


parser_e_msg_only_for_classes=03193_E_Message directive is only allowed in Classes

parser_e_procedure_or_function_expected=03194_E_Procedure or Function expected

parser_e_illegal_calling_convention=03195_W_Calling convention directive ignored: "$1"


parser_e_no_object_reintroduce=03196_E_REINTRODUCE can't be used in objects

parser_e_paraloc_only_one_para=03197_E_Each argument must have its own location







parser_e_paraloc_all_paras=03198_E_Each argument must have an explicit location


parser_e_illegal_explicit_paraloc=03199_E_Unknown argument location

parser_e_32bitint_or_pointer_variable_expected=03200_E_32 Bit-Integer or pointer variable expected

parser_e_goto_outside_proc=03201_E_Goto statements aren't allowed between different procedures




















parser_f_too_complex_proc=03202_F_过程太复杂


parser_e_illegal_expression=03203_E_非法表达式


parser_e_invalid_integer=03204_E_错误的整型表达式


parser_e_invalid_qualifier=03205_E_错误的修饰符






parser_e_upper_lower_than_lower=03206_E_下限大于上限


parser_e_macpas_exit_wrong_param=03207_E_Exit's parameter must be the name of the procedure it is used in

parser_e_illegal_assignment_to_count_var=03208_E_错误的循环标识符定义 "$1"





parser_e_no_local_var_external=03209_E_无法将本地变量定义为 EXTERNAL


parser_e_proc_already_external=03210_E_过程已经被定义为 EXTERNAL


parser_w_implicit_uses_of_variants_unit=03211_W_Implicit uses of Variants unit



parser_e_no_static_method_in_interfaces=03212_E_Class and static methods can't be used in INTERFACES


parser_e_arithmetic_operation_overflow=03213_E_Overflow in arithmetic operation

parser_e_protected_or_private_expected=03214_E_缺少 Protected 或 private

parser_e_illegal_slice=03215_E_SLICE can't be used outside of parameter list

parser_e_dispinterface_cant_have_parent=03216_E_A DISPINTERFACE can't have a parent class

parser_e_dispinterface_needs_a_guid=03217_E_A DISPINTERFACE needs a guid

parser_w_overridden_methods_not_same_ret=03218_W_Overridden methods must have a related return type. This code may crash, it depends on a Delphi parser bug ("$2" is overridden by "$1" which has another return type)





parser_e_dispid_must_be_ord_const=03219_E_Dispatch IDs must be ordinal constants



parser_e_array_range_out_of_bounds=03220_E_数组范围定义过大



parser_e_packed_element_no_var_addr=03221_E_The address cannot be taken of bit packed array elements and record fields





parser_e_packed_dynamic_open_array=03222_E_动态数组无法被包装

parser_e_packed_element_no_loop=03223_E_Bit packed array elements and record fields cannot be used as loop variables




parser_e_type_var_const_only_in_records_and_classes=03224_E_VAR, TYPE and CONST are allowed only in records, objects and classes


parser_e_cant_create_generics_of_this_type=03225_E_This type can't be a generic

parser_w_no_lineinfo_use_switch=03226_W_Don't load LINEINFO unit manually, Use the -gl compiler switch instead




parser_e_no_funcret_specified=03227_E_No function result type specified for function "$1"


parser_e_special_onlygenerics=03228_E_Specialization is only supported for generic types

parser_e_no_generics_as_params=03229_E_Generics can't be used as parameters when specializing generics

parser_e_type_object_constants=03230_E_Constants of objects containing a VMT aren't allowed



parser_e_label_outside_proc=03231_E_Taking the address of labels defined outside the current scope isn't allowed


parser_e_initialized_not_for_external=03233_E_Cannot initialize variables declared as external

parser_e_illegal_function_result=03234_E_错误的函数返回类型

parser_e_no_common_type=03235_E_No common type possible between "$1" and "$2"





parser_e_no_generics_as_types=03236_E_Generics without specialization can not be used as a type for a variable

parser_w_register_list_ignored=03237_W_Register list is ignored for pure assembler routines

parser_e_implements_must_be_class_or_interface=03238_E_Implements property must have class or interface type

parser_e_implements_must_have_correct_type=03239_E_Implements-property must implement interface of correct type, found "$1" expected "$2"

parser_e_implements_must_read_specifier=03240_E_Implements-property must have read specifier

parser_e_implements_must_not_have_write_specifier=03241_E_Implements-property must not have write-specifier

parser_e_implements_must_not_have_stored_specifier=03242_E_Implements-property must not have stored-specifier

parser_e_implements_uses_non_implemented_interface=03243_E_Implements-property used on unimplemented interface: "$1"

parser_e_unsupported_real=03244_E_Floating point not supported for this target

parser_e_class_doesnt_implement_interface=03245_E_Class "$1" does not implement interface "$2"

parser_e_class_implements_must_be_interface=03246_E_Type used by implements must be an interface

parser_e_cant_export_var_different_name=03247_E_Variables cannot be exported with a different name on this target, add the name to the declaration using the "export" directive (variable name: $1, declared export name: $2)




parser_e_weak_external_not_supported=03248_E_Weak external symbols are not supported for the current target



parser_e_forward_mismatch=03249_E_无法找到先前定义的类型


parser_n_ignore_lower_visibility=03250_N_Virtual method "$1" has a lower visibility ($2) than parent class $3 ($4)



parser_e_field_not_allowed_here=03251_E_Fields cannot appear after a method or property definition, start a new visibility section first




parser_e_no_local_para_def=03252_E_参数不能包含类型定义，请在 type 中单独定义类型










#
# Type Checking
#
# 04087 is the last used one

parser_e_abstract_and_sealed_conflict=03253_E_ABSTRACT and SEALED conflict

parser_e_sealed_descendant=03254_E_Cannot create a descendant of the sealed class "$1"

parser_e_sealed_class_cannot_have_abstract_methods=03255_E_SEALED class cannot have an ABSTRACT method

parser_e_only_virtual_methods_final=03256_E_Only virtual methods can be final


parser_e_final_can_no_be_overridden=03257_E_Final method cannot be overridden: "$1"


parser_e_multiple_messages=03258_E_Only one message can be used per method.

parser_e_invalid_enumerator_identifier=03259_E_Invalid enumerator identifier: "$1"

parser_e_enumerator_identifier_required=03260_E_Enumerator identifier required

parser_e_enumerator_movenext_is_not_valid=03261_E_Enumerator MoveNext pattern method is not valid. Method must be a function with the Boolean return type and no required arguments.

parser_e_enumerator_current_is_not_valid=03262_E_Enumerator Current pattern property is not valid. Property must have a getter.

parser_e_only_one_enumerator_movenext=03263_E_Only one enumerator MoveNext method is allowed per class/object

parser_e_only_one_enumerator_current=03264_E_Only one enumerator Current property is allowed per class/object

parser_e_for_in_loop_cannot_be_used_for_the_type=03265_E_For in loop cannot be used for the type "$1"

parser_e_objc_requires_msgstr=03266_E_Objective-C messages require their Objective-C selector name to be specified using the "message" directive.




parser_e_objc_no_constructor_destructor=03267_E_Objective-C does not have formal constructors nor destructors. Use the alloc, initXXX and dealloc messages.





parser_e_message_string_too_long=03268_E_Message name is too long (max. 255 characters)

parser_e_objc_message_name_too_long=03269_E_Objective-C message symbol name for "$1" is too long


parser_h_no_objc_parent=03270_H_Defining a new Objective-C root class. To derive from another root class (e.g., NSObject), specify it as the parent class.





parser_e_no_objc_published=03271_E_Objective-C classes cannot have published sections.


parser_f_need_objc=03272_F_This module requires an Objective-C mode switch to be compiled


parser_e_must_use_override_objc=03273_E_Inherited methods can only be overridden in Objective-C, add "override" (inherited method defined in $1)
parser_h_should_use_override_objc=03274_H_Inherited methods can only be overridden in Objective-C, add "override" (inherited method defined in $1).








parser_e_objc_message_name_changed=03275_E_Message name "$1" in inherited class is different from message name "$2" in current class.



parser_e_no_objc_unique=03276_E_It is not yet possible to make unique copies of Objective-C types


parser_e_no_category_as_types=03277_E_Objective-C categories and Object Pascal class helpers cannot be used as types





parser_e_no_category_override=03278_E_Categories do not override, but replace methods. Use "reintroduce" instead.
parser_e_must_use_reintroduce_objc=03279_E_Replaced methods can only be reintroduced in Objective-C, add "reintroduce" (replaced method defined in $1).
parser_h_should_use_reintroduce_objc=03280_H_Replaced methods can only be reintroduced in Objective-C, add "reintroduce" (replaced method defined in $1).









parser_e_implements_getter_not_default_cc=03281_E_Getter for implements interface must use the target's default calling convention.



parser_e_no_refcounted_typed_file=03282_E_Typed files cannot contain reference-counted types.


parser_e_operator_not_overloaded_2=03283_E_$2 "$1" 操作符未被重载


parser_e_operator_not_overloaded_3=03284_E_"$1" $2 "$3" 操作符未被重载


parser_e_more_array_elements_expected=03285_E_Expected another $1 array elements

parser_e_string_const_too_long=03286_E_String constant too long while ansistrings are disabled


parser_e_invalid_univ_para=03287_E_Type cannot be used as univ parameter because its size is unknown at compile time: "$1"


parser_e_only_one_class_constructor_allowed=03288_E_Only one class constructor can be declared in class: "$1"

parser_e_only_one_class_destructor_allowed=03289_E_Only one class destructor can be declared in class: "$1"

parser_e_no_paras_for_class_constructor=03290_E_Class constructors can't have parameters


parser_e_no_paras_for_class_destructor=03291_E_Class destructors can't have parameters


parser_f_modeswitch_objc_required=03292_F_This construct requires the \{\$modeswitch objectivec1\} mode switch to be active


parser_e_widestring_to_ansi_compile_time=03293_E_Unicodechar/string constants cannot be converted to ansi/shortstring at compile-time




parser_e_objc_enumerator_2_0=03294_E_For-in Objective-Pascal loops require \{\$modeswitch ObjectiveC2\} to be active



parser_e_objc_missing_enumeration_defs=03295_E_The compiler cannot find the NSFastEnumerationProtocol or NSFastEnumerationState type in the CocoaAll unit





parser_e_no_procvarnested_const=03296_E_Typed constants of the type 'procedure is nested' can only be initialized with NIL and global procedures/functions






parser_f_no_generic_inside_generic=03297_F_Declaration of generic class inside another generic class is not allowed




parser_e_forward_protocol_declaration_must_be_resolved=03298_E_Forward declaration of objcprotocol "$1" must be resolved before an objcclass can conform to it









parser_e_no_record_published=03299_E_Record types cannot have published sections

parser_e_no_destructor_in_records=03300_E_Destructors aren't allowed in records or helpers

parser_e_class_methods_only_static_in_records=03301_E_Class methods must be static in records


parser_e_no_constructor_in_records=03302_E_Constructors aren't allowed in records or record helpers

parser_e_at_least_one_argument_must_be_of_type=03303_E_Either the result or at least one parameter must be of type "$1"


parser_e_cant_use_type_parameters_here=03304_E_Type parameters may require initialization/finalization - can't be used in variant records


parser_e_externals_no_section=03305_E_Variables being declared as external cannot be in a custom section

parser_e_section_no_locals=03306_E_Non-static and non-global variables cannot have a section directive

parser_e_not_allowed_in_helper=03307_E_"$1" is not allowed in helper types




parser_e_no_class_constructor_in_helpers=03308_E_Class constructors aren't allowed in helpers

parser_e_inherited_not_in_record=03309_E_The use of "inherited" is not allowed in a record


parser_e_no_types_in_local_anonymous_records=03310_E_Type declarations are not allowed in local or anonymous records


parser_e_duplicate_implements_clause=03311_E_Duplicate implements clause for interface "$1"


parser_e_mapping_no_implements=03312_E_Interface "$1" can't be delegated by "$2", it already has method resolutions


parser_e_implements_no_mapping=03313_E_Interface "$1" can't have method resolutions, "$2" already delegates it


# Type Checking
#
# 04100 is the last used one
#




type_e_mismatch=04000_E_类型不匹配







type_e_incompatible_types=04001_E_不匹配 "$1" 类型，可以改用 "$2" 类型



type_e_not_equal_types=04002_E_"$1" 与 "$2" 之间类型不匹配

type_e_type_id_expected=04003_E_缺少类型标识符

type_e_variable_id_expected=04004_E_缺少变量标识符


type_e_integer_expr_expected=04005_E_缺少 Integer 整型，但是有 "$1"


type_e_boolean_expr_expected=04006_E_缺少 Boolean 布尔型，但是有 "$1"


type_e_ordinal_expr_expected=04007_E_缺少顺序类型

type_e_pointer_type_expected=04008_E_缺少 指针 型，但是有 "$1"


type_e_class_type_expected=04009_E_缺少类，但是有 "$1"







type_e_cant_eval_constant_expr=04011_E_不能计算常数表达式


type_e_set_element_are_not_comp=04012_E_设置的元素不兼容



type_e_set_operation_unknown=04013_E_sets 未执行操作



type_w_convert_real_2_comp=04014_W_Automatic type conversion from floating type to COMP which is an integer type



type_h_use_div_for_int=04015_H_若要得到整型，请使用 DIV 运算


type_e_strict_var_string_violation=04016_E_由于启用了 $V+ 开关，字符串类型不匹配


type_e_succ_and_pred_enums_with_assign_not_possible=04017_E_succ 或 pred 枚举分配不可能用上






type_e_cant_read_write_type=04018_E_不能读取或写入这种类型的变量




type_e_no_readln_writeln_for_typed_file=04019_E_不能在结构化文件上使用 readln 或 writeln

type_e_no_read_write_for_untyped_file=04020_E_不能再非结构化文件上使用 read 或 write

type_e_typeconflict_in_set=04021_E_设置元素的类型冲突


type_w_maybe_wrong_hi_lo=04022_W_lo/hi(dword/qword) 返回了 upper/lower word/dword





type_e_integer_or_real_expr_expected=04023_E_缺少 Integer 整型或 Real 实型

type_e_wrong_type_in_array_constructor=04024_E_"$1" 在构造函数中类型不正确


type_e_wrong_parameter_type=04025_E_不兼容的参数类型 $1：有 "$2" ，而非 "$3"

type_e_no_method_and_procedure_not_compatible=04026_E_方法 变量 及程序 变量 不兼容


type_e_wrong_math_argument=04027_E_非法常数传递给数学函数


type_e_no_addr_of_constant=04028_E_不能接受的常数表达式的地址



type_e_argument_cant_be_assigned=04029_E_不能将参数分配给





type_e_cannot_local_proc_to_procvar=04030_E_不能将本地过程/函数赋给过程变量



type_e_no_assign_to_addr=04031_E_不能将值赋予一个地址



type_e_no_assign_to_const=04032_E_不能为常量赋值




type_e_array_required=04033_E_缺少数组类型


type_e_interface_type_expected=04034_E_缺少接口类型，但是有 "$1"






type_h_mixed_signed_unsigned=04035_H_Mixing signed expressions and longwords gives a 64bit result






type_w_mixed_signed_unsigned2=04036_W_Mixing signed expressions and cardinals here may cause a range check error






type_e_typecast_wrong_size_for_assignment=04037_E_类型转换分配中具有不同大小 ($1 -> $2) 


type_e_array_index_enums_with_assign_not_possible=04038_E_枚举分配，不能作为数组索引






type_e_classes_not_related=04039_E_类或对象类型 "$1" 和 "$2" 无关


type_w_classes_not_related=04040_W_类或对象类型 "$1" 和 "$2" 无关


type_e_class_or_interface_type_expected=04041_E_缺少类或接口类型，但是有 "$1"

type_e_type_is_not_completly_defined=04042_E_类型 "$1" 没有被成功定义


type_w_string_too_long=04043_W_字符串长度超过 Short string 短字符串


type_w_signed_unsigned_always_false=04044_W_由于值域，比较结果永恒为假



type_w_signed_unsigned_always_true=04045_W_由于值域，比较结果永恒为真



type_w_instance_with_abstract=04046_W_Constructing a class "$1" with abstract method "$2"



type_h_in_range_check=04047_H_The left operand of the IN operator should be byte sized





type_w_smaller_possible_range_check=04048_W_Type size mismatch, possible loss of data / range check error


type_h_smaller_possible_range_check=04049_H_Type size mismatch, possible loss of data / range check error


type_e_cant_take_address_of_abstract_method=04050_E_抽象方法的地址不能接受

type_e_assignment_not_allowed=04051_E_不能正式的参数和开放的数组分配


type_e_constant_expr_expected=04052_E_缺少常量表达式

type_e_operator_not_supported_for_types=04053_E_操作 "$1" 不支持 "$2" 和 "$3" 类型

type_e_illegal_type_conversion=04054_E_非法类型转换："$1" 转为 "$2"


type_h_pointer_to_longint_conv_not_portable=04055_H_Conversion between ordinals and pointers is not portable


type_w_pointer_to_longint_conv_not_portable=04056_W_Conversion between ordinals and pointers is not portable



type_e_cant_choose_overload_function=04057_E_不能确定该重载函数调用




type_e_illegal_count_var=04058_E_非法计数器变量


type_w_double_c_varargs=04059_W_Converting constant real value to double for C variable argument, add explicit typecast to prevent this.




type_e_class_or_cominterface_type_expected=04060_E_类或 COM 接口缺少类型，但是有 "$1"

type_e_no_const_packed_array=04061_E_该编译器暂时不支持常数包装数组

type_e_got_expected_packed_array=04062_E_不兼容的类型参数 $1：缺少 "(Bit)Packed Array" 但是有 "$2" 

type_e_got_expected_unpacked_array=04063_E_不兼容的类型参数 $1：缺少 "(not packed) Array" 但是有 "$2"

type_e_no_packed_inittable=04064_E_填充数组的元素不能是需要被初始化的类型


type_e_no_const_packed_record=04065_E_该编译器暂时不支持常数包装记录

type_w_untyped_arithmetic_unportable=04066_W_Arithmetic "$1" on untyped pointer is unportable to {$T+}, suggest typecast


type_e_cant_take_address_of_local_subroutine=04076_E_Can't take address of a subroutine marked as local

type_e_cant_export_local=04077_E_Can't export subroutine marked as local from a unit

type_e_not_automatable=04078_E_类型不是可自动化的："$1"


type_h_convert_add_operands_to_prevent_overflow=04079_H_Converting the operands to "$1" before doing the add could prevent overflow errors.


type_h_convert_sub_operands_to_prevent_overflow=04080_H_Converting the operands to "$1" before doing the subtract could prevent overflow errors.


type_h_convert_mul_operands_to_prevent_overflow=04081_H_Converting the operands to "$1" before doing the multiply could prevent overflow errors.


type_w_pointer_to_signed=04082_W_Converting pointers to signed integers may result in wrong comparison results and range errors, use an unsigned type instead.





type_e_interface_has_no_guid=04083_E_Interface type $1 has no valid GUID


type_e_invalid_objc_selector_name=04084_E_无效的选择器名称


type_e_expected_objc_method_but_got=04085_E_缺少目标-方法或常量的方法名称，但是有 $1


type_e_expected_objc_method=04086_E_缺少目标-方法或常量的方法名称



type_e_no_type_info=04087_E_没有可用于此类型的类型消息

#
# Symtable
#
# 05064 is the last used one
#




type_e_ordinal_or_string_expr_expected=04088_E_Ordinal or string expression expected

type_e_string_expr_expected=04089_E_String expression expected

type_w_zero_to_nil=04090_W_Converting 0 to NIL

type_e_protocol_type_expected=04091_E_Objective-C protocol type expected, but got "$1"

type_e_objc_type_unsupported=04092_E_The type "$1" is not supported for interaction with the Objective-C runtime.






type_e_class_or_objcclass_type_expected=04093_E_Class or objcclass type expected, but got "$1"

type_e_objcclass_type_expected=04094_E_Objcclass type expected

type_w_procvar_univ_conflicting_para=04095_W_Coerced univ parameter type in procedural variable may cause crash or memory corruption: $1 to $2
























type_e_generics_cannot_reference_itself=04096_E_Type parameters of specializations of generics cannot reference the currently specialized type

type_e_type_parameters_are_not_allowed_here=04097_E_Type parameters are not allowed on non-generic class/record/object procedure or function

type_e_generic_declaration_does_not_match=04098_E_Generic declaration of "$1" differs from previous declaration

type_e_helper_type_expected=04099_E_Helper type expected

type_e_record_type_expected=04100_E_Record type expected

type_e_class_helper_must_extend_subclass=04101_E_Derived class helper must extend a subclass of "$1" or the class itself


type_e_record_helper_must_extend_same_record=04102_E_Derived record helper must extend "$1"




#
# Symtable
#
# 05084 is the last used one
#




sym_e_id_not_found=05000_E_找不到标识符 "$1"



sym_f_internal_error_in_symtablestack=05001_F_Internal Error in SymTableStack()



sym_e_duplicate_id=05002_E_重复的标识符 "$1"

sym_h_duplicate_id_where=05003_H_Identifier already defined in $1 at line $2

sym_e_unknown_id=05004_E_未知标识符 "$1"


sym_e_forward_not_resolved=05005_E_正向定义 "$1" 未 resolve




sym_e_error_in_type_def=05007_E_类型定义错误



sym_e_forward_type_not_resolved=05009_E_先前的类型未确定 "$1"

sym_e_only_static_in_static=05010_E_静态变量仅适用于静态方法或外部方法

sym_f_type_must_be_rec_or_class=05012_F_record or class type expected

sym_e_no_instance_of_abstract_object=05013_E_Instances of classes or objects with an abstract method are not allowed


sym_w_label_not_defined=05014_W_标签未定义 "$1"

sym_e_label_used_and_not_defined=05015_E_使用了未定义的标签 "$1"

sym_e_ill_label_decl=05016_E_非法标签定义


sym_e_goto_and_label_not_supported=05017_E_在使用 -Sg 开关情况下，GOTO 和 LABEL 不被支持



sym_e_label_not_found=05018_E_无法找到标签

sym_e_id_is_no_label_id=05019_E_标识符不是一个标签

sym_e_label_already_defined=05020_E_标签已定义

sym_e_ill_type_decl_set=05021_E_设置元素的非法类型定义

sym_e_class_forward_not_resolved=05022_E_Forward class definition not resolved "$1"

sym_n_unit_not_used=05023_H_库 "$1" 未在 $2 中使用

sym_h_para_identifier_not_used=05024_H_Parameter "$1" not used


sym_n_local_identifier_not_used=05025_N_本地变量 "$1" 未被使用


sym_h_para_identifier_only_set=05026_H_参数 "$1" 未被使用


sym_n_local_identifier_only_set=05027_N_本地变量 "$1" 未被使用


sym_h_local_symbol_not_used=05028_H_Local $1 "$2" is not used

sym_n_private_identifier_not_used=05029_N_Private 域 "$1.$2" 从未使用过

sym_n_private_identifier_only_set=05030_N_Private 域 "$1.$2" 被定义，但从未使用过

sym_n_private_method_not_used=05031_N_Private 方法 "$1.$2" 从未使用过

sym_e_set_expected=05032_E_缺少正确的集合类型


sym_w_function_result_not_set=05033_W_函数的结果不是集合



sym_w_wrong_C_pack=05034_W_Type "$1" is not aligned correctly in current record for C


sym_e_illegal_field=05035_E_未知的记录字段标识符 "$1"

sym_w_uninitialized_local_variable=05036_W_Local variable "$1" does not seem to be initialized




sym_w_uninitialized_variable=05037_W_Variable "$1" does not seem to be initialized




sym_e_id_no_member=05038_E_identifier idents no member "$1"


sym_h_param_list=05039_H_找到定义: $1



sym_e_segment_too_large=05040_E_数据元素太大


sym_e_no_matching_implementation_found=05042_E_No matching implementation for interface method "$1" found


sym_w_deprecated_symbol=05043_W_Symbol "$1" is deprecated




sym_w_non_portable_symbol=05044_W_Symbol "$1" is not portable




sym_w_non_implemented_symbol=05055_W_Symbol "$1" is not implemented



sym_e_cant_create_unique_type=05056_E_Can't create unique type from this type


sym_h_uninitialized_local_variable=05057_H_Local variable "$1" does not seem to be initialized




sym_h_uninitialized_variable=05058_H_Variable "$1" does not seem to be initialized




sym_w_function_result_uninitialized=05059_W_Function result variable does not seem to initialized




sym_h_function_result_uninitialized=05060_H_Function result variable does not seem to be initialized




sym_w_identifier_only_read=05061_W_Variable "$1" read but nowhere assigned


sym_h_abstract_method_list=05062_H_找到抽象过程: $1


sym_w_experimental_symbol=05063_W_Symbol "$1" is experimental




sym_w_forward_not_resolved=05064_W_Forward declaration "$1" not resolved, assumed external



#
# Codegenerator
#
# 06049 is the last used one
#




sym_w_library_symbol=05065_W_Symbol "$1" is belongs to a library



sym_w_deprecated_symbol_with_msg=05066_W_Symbol "$1" is deprecated: "$2"




sym_e_no_enumerator=05067_E_Cannot find an enumerator for the type "$1"



sym_e_no_enumerator_move=05068_E_Cannot find a "MoveNext" method in enumerator "$1"


sym_e_no_enumerator_current=05069_E_Cannot find a "Current" property in enumerator "$1"


sym_e_objc_para_mismatch=05070_E_Mismatch between number of declared parameters and number of colons in message string.






sym_n_private_type_not_used=05071_N_Private type "$1.$2" never used

sym_n_private_const_not_used=05072_N_Private const "$1.$2" never used

sym_n_private_property_not_used=05073_N_Private property "$1.$2" never used

sym_w_deprecated_unit=05074_W_Unit "$1" is deprecated




sym_w_deprecated_unit_with_msg=05075_W_Unit "$1" is deprecated: "$2"




sym_w_non_portable_unit=05076_W_Unit "$1" is not portable




sym_w_library_unit=05077_W_Unit "$1" is belongs to a library



sym_w_non_implemented_unit=05078_W_Unit "$1" is not implemented



sym_w_experimental_unit=05079_W_Unit "$1" is experimental




sym_e_objc_formal_class_not_resolved=05080_E_No complete definition of the formally declared objcclass "$1" is in scope





sym_e_interprocgoto_into_init_final_code_not_allowed=05081_E_Gotos into initialization or finalization blocks of units are not allowed

sym_e_external_class_name_mismatch1=05082_E_Invalid external name "$1" for formal class "$2"
sym_e_external_class_name_mismatch2=05083_E_Complete class definition with external name "$1" here



sym_w_library_overload=05084_W_Possible library conflict: symbol "$1" from library "$2" also found in library "$3"







#
# Codegenerator
#
# 06049 is the last used one
#




cg_e_parasize_too_big=06009_E_参数列表的大小超过 65535 字节


cg_e_file_must_call_by_reference=06012_E_文件类型必须是 var 参数


cg_e_cant_use_far_pointer_there=06013_E_不允许使用远指针









cg_e_dont_call_exported_direct=06015_E_导出表定义不能调用函数

cg_w_member_cd_call_from_method=06016_W_Possible illegal call of constructor or destructor



cg_n_inefficient_code=06017_N_Inefficient code

cg_w_unreachable_code=06018_W_无法使用的代码







cg_e_cant_call_abstract_method=06020_E_Abstract methods can't be called directly


cg_d_register_weight=06027_DL_Register $1 weight $2 $3


cg_d_stackframe_omited=06029_DL_Stack frame is omitted


cg_e_unable_inline_object_methods=06031_E_Object or class methods can't be inline.

cg_e_unable_inline_procvar=06032_E_Procvar calls cannot be inline.

cg_e_no_code_for_inline_stored=06033_E_No code for inline procedure stored

cg_e_can_access_element_zero=06035_E_Element zero of an ansi/wide- or longstring can't be accessed, use (set)length instead


cg_e_cannot_call_cons_dest_inside_with=06037_E_Constructors or destructors can not be called inside a 'with' clause


cg_e_cannot_call_message_direct=06038_E_Cannot call message handler methods directly


cg_e_goto_inout_of_exception_block=06039_E_Jump in or outside of an exception block

















cg_e_control_flow_outside_finally=06040_E_Control flow statements aren't allowed in a finally block

















cg_w_parasize_too_big=06041_W_Parameters size exceeds limit for certain cpu's


cg_w_localsize_too_big=06042_W_Local variable size exceed limit for certain cpu's


cg_e_localsize_too_big=06043_E_Local variables size exceeds supported limit


cg_e_break_not_allowed=06044_E_不允许使用 BREAK

cg_e_continue_not_allowed=06045_E_不允许使用 CONTINUE

cg_f_unknown_compilerproc=06046_F_Unknown compilerproc "$1". Check if you use the correct run time library.




cg_f_unknown_system_type=06047_F_Cannot find system type "$1". Check if you use the correct run time library.




cg_h_inherited_ignored=06048_H_Inherited call to abstract method ignored


cg_e_goto_label_not_found=06049_E_Goto 标识 "$1" 并未定义



# EndOfTeX

#
# Assembler reader
#
# 07107 is the last used one
#
cg_f_unknown_type_in_unit=06050_F_Cannot find type "$1" in unit "$2". Check if you use the correct run time library.




cg_e_interprocedural_goto_only_to_outer_scope_allowed=06051_E_Interprocedural gotos are allowed only to outer subroutines


cg_e_labels_cannot_defined_outside_declaration_scope=06052_E_Label must be defined in the same scope as it is declared

cg_e_goto_across_procedures_with_exceptions_not_allowed=06053_E_Leaving procedures containing explicit or implicit exceptions frames using goto is not allowed



# EndOfTeX

#
# Assembler reader
#
# 07110 is the last used one
#
asmr_d_start_reading=07000_DL_Starting $1 styled assembler parsing

asmr_d_finish_reading=07001_DL_Finished $1 styled assembler parsing

asmr_e_none_label_contain_at=07002_E_Non-label pattern contains @

asmr_e_building_record_offset=07004_E_Error building record offset



asmr_e_offset_without_identifier=07005_E_OFFSET used without identifier


asmr_e_type_without_identifier=07006_E_TYPE used without identifier


asmr_e_no_local_or_para_allowed=07007_E_Cannot use local variable or parameters here



asmr_e_need_offset=07008_E_need to use OFFSET here

asmr_e_need_dollar=07009_E_need to use $ here

asmr_e_cant_have_multiple_relocatable_symbols=07010_E_Cannot use multiple relocatable symbols


asmr_e_only_add_relocatable_symbol=07011_E_Relocatable symbol can only be added


asmr_e_invalid_constant_expression=07012_E_Invalid constant expression

asmr_e_relocatable_symbol_not_allowed=07013_E_Relocatable symbol is not allowed

asmr_e_invalid_reference_syntax=07014_E_Invalid reference syntax

asmr_e_local_para_unreachable=07015_E_You can not reach $1 from that code



asmr_e_local_label_not_allowed_as_ref=07016_E_Local symbols/labels aren't allowed as references

asmr_e_wrong_base_index=07017_E_Invalid base and index register usage


asmr_w_possible_object_field_bug=07018_W_Possible error in object field handling


asmr_e_wrong_scale_factor=07019_E_Wrong scale factor specified

asmr_e_multiple_index=07020_E_Multiple index register usage

asmr_e_invalid_operand_type=07021_E_Invalid operand type

asmr_e_invalid_string_as_opcode_operand=07022_E_Invalid string as opcode operand: $1

asmr_w_CODE_and_DATA_not_supported=07023_W_@CODE and @DATA not supported

asmr_e_null_label_ref_not_allowed=07024_E_Null label references are not allowed
asmr_e_expr_zero_divide=07025_E_Divide by zero in asm evaluator

asmr_e_expr_illegal=07026_E_非法表达式

asmr_e_escape_seq_ignored=07027_E_escape sequence ignored: $1


asmr_e_invalid_symbol_ref=07028_E_Invalid symbol reference
asmr_w_fwait_emu_prob=07029_W_Fwait can cause emulation problems with emu387
asmr_w_fadd_to_faddp=07030_W_$1 without operand translated into $1P
asmr_w_enter_not_supported_by_linux=07031_W_ENTER instruction is not supported by Linux kernel


asmr_w_calling_overload_func=07032_W_Calling an overload function in assembler


asmr_e_unsupported_symbol_type=07033_E_Unsupported symbol type for operand
asmr_e_constant_out_of_bounds=07034_E_Constant value out of bounds
asmr_e_error_converting_decimal=07035_E_Error converting decimal $1

asmr_e_error_converting_octal=07036_E_Error converting octal $1

asmr_e_error_converting_binary=07037_E_Error converting binary $1

asmr_e_error_converting_hexadecimal=07038_E_Error converting hexadecimal $1

asmr_h_direct_global_to_mangled=07039_H_$1 translated to $2
asmr_w_direct_global_is_overloaded_func=07040_W_$1 is associated to an overloaded function
asmr_e_cannot_use_SELF_outside_a_method=07041_E_Cannot use SELF outside a method


asmr_e_cannot_use_OLDEBP_outside_nested_procedure=07042_E_Cannot use OLDEBP outside a nested procedure


asmr_e_void_function=07043_W_Procedures can't return any value in asm code


asmr_e_SEG_not_supported=07044_E_SEG not supported
asmr_e_size_suffix_and_dest_dont_match=07045_E_Size suffix and destination or source size do not match


asmr_w_size_suffix_and_dest_dont_match=07046_W_Size suffix and destination or source size do not match


asmr_e_syntax_error=07047_E_Assembler syntax error

asmr_e_invalid_opcode_and_operand=07048_E_Invalid combination of opcode and operands

asmr_e_syn_operand=07049_E_Assembler syntax error in operand
asmr_e_syn_constant=07050_E_Assembler syntax error in constant
asmr_e_invalid_string_expression=07051_E_Invalid String expression
asmr_w_const32bit_for_address=07052_W_constant with symbol $1 for address which is not on a pointer


asmr_e_unknown_opcode=07053_E_Unrecognized opcode $1

asmr_e_invalid_or_missing_opcode=07054_E_Invalid or missing opcode
asmr_e_invalid_prefix_and_opcode=07055_E_Invalid combination of prefix and opcode: $1
asmr_e_invalid_override_and_opcode=07056_E_Invalid combination of override and opcode: $1
asmr_e_too_many_operands=07057_E_Too many operands on line


asmr_w_near_ignored=07058_W_NEAR ignored
asmr_w_far_ignored=07059_W_FAR ignored
asmr_e_dup_local_sym=07060_E_Duplicate local symbol $1
asmr_e_unknown_local_sym=07061_E_Undefined local symbol $1
asmr_e_unknown_label_identifier=07062_E_Unknown label identifier $1
asmr_e_invalid_register=07063_E_Invalid register name

asmr_e_invalid_fpu_register=07064_E_Invalid floating point register name

asmr_w_modulo_not_supported=07066_W_Modulo not supported
asmr_e_invalid_float_const=07067_E_错误的浮点指针常量 $1


asmr_e_invalid_float_expr=07068_E_错误的浮点指针表达式


asmr_e_wrong_sym_type=07069_E_错误的符号类
asmr_e_cannot_index_relative_var=07070_E_Cannot index a local var or parameter with a register


asmr_e_invalid_seg_override=07071_E_Invalid segment override expression
asmr_w_id_supposed_external=07072_W_Identifier $1 supposed external



asmr_e_string_not_allowed_as_const=07073_E_Strings not allowed as constants

asmr_e_no_var_type_specified=07074_No type of variable specified


asmr_w_assembler_code_not_returned_to_text=07075_E_assembler code not returned to text section



asmr_e_not_directive_or_local_symbol=07076_E_Not a directive or local symbol $1

asmr_w_using_defined_as_local=07077_E_Using a defined name as a local label
asmr_e_dollar_without_identifier=07078_E_Dollar token is used without an identifier


asmr_w_32bit_const_for_address=07079_W_32bit constant created for address


asmr_n_align_is_target_specific=07080_N_.align is target specific, use .balign or .p2align


asmr_e_cannot_access_field_directly_for_parameters=07081_E_Can't access fields directly for parameters


asmr_e_cannot_access_object_field_directly=07082_E_Can't access fields of objects/classes directly



asmr_e_unable_to_determine_reference_size=07083_E_No size specified and unable to determine the size of the operands



asmr_e_cannot_use_RESULT_here=07084_E_Cannot use RESULT in this function


asmr_w_adding_explicit_args_fXX=07086_W_"$1" without operand translated into "$1 
asmr_w_adding_explicit_first_arg_fXX=07087_W_"$1 
asmr_w_adding_explicit_second_arg_fXX=07088_W_"$1 
asmr_e_invalid_char_smaller=07089_E_Char < not allowed here


asmr_e_invalid_char_greater=07090_E_Char > not allowed here


asmr_w_align_not_supported=07093_W_ALIGN not supported
asmr_e_no_inc_and_dec_together=07094_E_Inc and Dec cannot be together


asmr_e_invalid_reg_list_in_movem=07095_E_Invalid reglist for movem


asmr_e_invalid_reg_list_for_opcode=07096_E_Reglist invalid for opcode
asmr_e_higher_cpu_mode_required=07097_E_Higher cpu mode required ($1)



asmr_w_unable_to_determine_reference_size_using_dword=07098_W_No size specified and unable to determine the size of the operands, using DWORD as default




asmr_e_illegal_shifterop_syntax=07099_E_Syntax error while trying to parse a shifter operand







asmr_e_packed_element=07100_E_Address of packed component is not at a byte boundary






asmr_w_unable_to_determine_reference_size_using_byte=07101_W_No size specified and unable to determine the size of the operands, using BYTE as default




asmr_w_no_direct_ebp_for_parameter=07102_W_Use of +offset(


asmr_w_direct_ebp_for_parameter_regcall=07103_W_Use of +offset(


asmr_w_direct_ebp_neg_offset=07104_W_Use of -offset(

asmr_w_direct_esp_neg_offset=07105_W_Use of -offset(


asmr_e_no_vmtoffset_possible=07106_E_VMTOffset must be used in combination with a virtual method, and "$1" is not virtual

asmr_e_need_pic_ref=07107_E_Generating PIC, but reference is not PIC-safe



#
# Assembler/binary writers
#
# 08020 is the last used one
#
asmr_e_mixing_regtypes=07108_E_All registers in a register set must be of the same kind and width


asmr_e_empty_regset=07109_E_A register set cannot be empty



asmr_w_useless_got_for_local=07110_W_@GOTPCREL is useless and potentially dangereous for local symbols


#
# Assembler/binary writers
#
# 08022 is the last used one
#
asmw_f_too_many_asm_files=08000_F_Too many assembler files


asmw_f_assembler_output_not_supported=08001_F_Selected assembler output not supported
asmw_f_comp_not_supported=08002_F_Comp not supported
asmw_f_direct_not_supported=08003_F_Direct not support for binary writers

asmw_e_alloc_data_only_in_bss=08004_E_Allocating of data is only allowed in bss section
asmw_f_no_binary_writer_selected=08005_F_No binary writer selected
asmw_e_opcode_not_in_table=08006_E_Asm: Opcode $1 not in table
asmw_e_invalid_opcode_and_operands=08007_E_Asm: $1 invalid combination of opcode and operands
asmw_e_16bit_not_supported=08008_E_Asm: 16 Bit references not supported
asmw_e_invalid_effective_address=08009_E_Asm: Invalid effective address
asmw_e_immediate_or_reference_expected=08010_E_Asm: Immediate or reference expected
asmw_e_value_exceeds_bounds=08011_E_Asm: $1 value exceeds bounds $2
asmw_e_short_jmp_out_of_range=08012_E_Asm: Short jump is out of range $1
asmw_e_undefined_label=08013_E_Asm: Undefined label $1
asmw_e_comp_not_supported=08014_E_Asm: Comp type not supported for this target
asmw_e_extended_not_supported=08015_E_Asm: Extended type not supported for this target
asmw_e_duplicate_label=08016_E_Asm: Duplicate label $1
asmw_e_redefined_label=08017_E_Asm: Redefined label $1
asmw_e_first_defined_label=08018_E_Asm: First defined here
asmw_e_invalid_register=08019_E_Asm: Invalid register $1
asmw_e_16bit_32bit_not_supported=08020_E_Asm: 16 or 32 Bit references not supported
asmw_e_64bit_not_supported=08021_E_Asm: 64 Bit operands not supported

#
# Executing linker/assembler
#
# 09032 is the last used one
#
# BeginOfTeX





asmw_e_bad_reg_with_rex=08022_E_Asm: AH,BH,CH or DH cannot be used in an instruction requiring REX prefix





#
# Executing linker/assembler
#
# 09032 is the last used one
#
# BeginOfTeX





exec_w_source_os_redefined=09000_W_Source operating system redefined

exec_i_assembling_pipe=09001_I_Assembling (pipe) $1

exec_d_cant_create_asmfile=09002_E_Can't create assembler file: $1


exec_e_cant_create_objectfile=09003_E_无法创建目标文件: $1


exec_e_cant_create_archivefile=09004_E_无法创建档案文件: $1


exec_e_assembler_not_found=09005_E_Assembler $1 not found, switching to external assembling


exec_t_using_assembler=09006_T_Using assembler: $1

exec_e_error_while_assembling=09007_E_Error while assembling exitcode $1



exec_e_cant_call_assembler=09008_E_Can't call the assembler, error $1 switching to external assembling


exec_i_assembling=09009_I_Assembling $1

exec_i_assembling_smart=09010_I_Assembling with smartlinking $1

exec_w_objfile_not_found=09011_W_Object $1 not found, Linking may fail !


exec_w_libfile_not_found=09012_W_Library $1 not found, Linking may fail !


exec_e_error_while_linking=09013_E_链接错误

exec_e_cant_call_linker=09014_E_无法调用链接器


exec_i_linking=09015_I_Linking $1

exec_e_util_not_found=09016_E_Util $1 not found, switching to external linking


exec_t_using_util=09017_T_Using util $1

exec_e_exe_not_supported=09018_E_Creation of Executables not supported


exec_e_dll_not_supported=09019_E_Creation of Dynamic/Shared Libraries not supported


exec_i_closing_script=09020_I_Closing script $1

exec_e_res_not_found=09021_E_resource compiler "$1" not found, switching to external mode


exec_i_compilingresource=09022_I_Compiling resource $1

exec_t_unit_not_static_linkable_switch_to_smart=09023_T_unit $1 can't be statically linked, switching to smart linking

exec_t_unit_not_smart_linkable_switch_to_static=09024_T_unit $1 can't be smart linked, switching to static linking

exec_t_unit_not_shared_linkable_switch_to_static=09025_T_unit $1 can't be shared linked, switching to static linking

exec_e_unit_not_smart_or_static_linkable=09026_E_unit $1 can't be smart or static linked

exec_e_unit_not_shared_or_static_linkable=09027_E_unit $1 can't be shared or static linked

exec_d_resbin_params=09028_D_Calling resource compiler "$1" with "$2" as command line

exec_e_error_while_compiling_resources=09029_E_Error while compiling resources

exec_e_cant_call_resource_compiler=09030_E_Can't call the resource compiler "$1", switching to external mode



exec_e_cant_open_resource_file=09031_E_Can't open resource file "$1"

exec_e_cant_write_resource_file=09032_E_Can't write resource file "$1"


# EndOfTeX

#
# Executable information
#
# 09134 is the last used one
#
# BeginOfTeX




execinfo_f_cant_process_executable=09128_F_Can't post process executable $1

execinfo_f_cant_open_executable=09129_F_Can't open executable $1

execinfo_x_codesize=09130_X_Size of Code: $1 bytes

execinfo_x_initdatasize=09131_X_Size of initialized data: $1 bytes

execinfo_x_uninitdatasize=09132_X_Size of uninitialized data: $1 bytes

execinfo_x_stackreserve=09133_X_Stack space reserved: $1 bytes

execinfo_x_stackcommit=09134_X_Stack space committed: $1 bytes


# EndOfTeX

#
# Internal linker messages
#
# 09200 is the last used one
#
# BeginOfTeX



link_f_executable_too_big=09200_F_Executable image size is too big for $1 target.

link_w_32bit_absolute_reloc=09201_W_Object file "$1" contains 32-bit absolute relocation to symbol "$2".




# EndOfTeX

#
# Unit loading
#
# 10061 is the last used one
#
# BeginOfTeX





unit_t_unitsearch=10000_T_Unitsearch: $1


unit_t_ppu_loading=10001_T_PPU Loading $1


unit_u_ppu_name=10002_U_PPU Name: $1

unit_u_ppu_flags=10003_U_PPU Flags: $1

unit_u_ppu_crc=10004_U_PPU Crc: $1

unit_u_ppu_time=10005_U_PPU Time: $1

unit_u_ppu_file_too_short=10006_U_PPU 文件太小

unit_u_ppu_invalid_header=10007_U_PPU Invalid Header (no PPU at the begin)

unit_u_ppu_invalid_version=10008_U_PPU $1 版本错误


unit_u_ppu_invalid_processor=10009_U_PPU is compiled for another processor


unit_u_ppu_invalid_target=10010_U_PPU is compiled for an other target


unit_u_ppu_source=10011_U_PPU Source: $1

unit_u_ppu_write=10012_U_Writing $1


unit_f_ppu_cannot_write=10013_F_Can't Write PPU-File

unit_f_ppu_read_error=10014_F_Error reading PPU-File


unit_f_ppu_read_unexpected_end=10015_F_unexpected end of PPU-File


unit_f_ppu_invalid_entry=10016_F_Invalid PPU-File entry: $1


unit_f_ppu_dbx_count_problem=10017_F_PPU Dbx count problem

unit_e_illegal_unit_name=10018_E_错误的库：$1

unit_f_too_much_units=10019_F_库数量太多



unit_f_circular_unit_reference=10020_F_Circular unit reference between $1 and $2



unit_f_cant_compile_unit=10021_F_Can't compile unit $1, no sources available


unit_f_cant_find_ppu=10022_F_无法找到被 $2 程序使用的 $1 库


unit_w_unit_name_error=10023_W_无法找到 $1 库但找到 $2

unit_f_unit_name_error=10024_F_无法找到 $1 库但找到 $2 


unit_w_switch_us_missed=10025_W_Compiling the system unit requires the -Us switch


unit_f_errors_in_unit=10026_F_编译器发生 $1 个错误，中止


unit_u_load_unit=10027_U_Load from $1 ($2) unit $3


unit_u_recompile_crc_change=10028_U_Recompiling $1, checksum changed for $2


unit_u_recompile_source_found_alone=10029_U_Recompiling $1, source found only


unit_u_recompile_staticlib_is_older=10030_U_Recompiling unit, static lib is older than ppufile


unit_u_recompile_sharedlib_is_older=10031_U_Recompiling unit, shared lib is older than ppufile


unit_u_recompile_obj_and_asm_older=10032_U_Recompiling unit, obj and asm are older than ppufile


unit_u_recompile_obj_older_than_asm=10033_U_Recompiling unit, obj is older than asm


unit_u_parsing_interface=10034_U_Parsing interface of $1


unit_u_parsing_implementation=10035_U_Parsing implementation of $1


unit_u_second_load_unit=10036_U_Second load for unit $1



unit_u_check_time=10037_U_PPU Check file $1 time $2


### The following two error msgs is currently disabled.
#unit_h_cond_not_set_in_last_compile=10038_H_Conditional $1 was not set at startup in last compilation of $2
#
#
#
#
#unit_h_cond_set_in_last_compile=10039_H_Conditional $1 was set at startup in last compilation of $2
#
#
#
#
unit_w_cant_compile_unit_with_changed_incfile=10040_W_Can't recompile unit $1, but found modifed include files


unit_u_source_modified=10041_U_File $1 is newer than PPU file $2

unit_u_ppu_invalid_fpumode=10042_U_Trying to use a unit which was compiled with a different FPU mode



unit_u_loading_interface_units=10043_U_Loading interface units from $1


unit_u_loading_implementation_units=10044_U_Loading implementation units from $1


unit_u_interface_crc_changed=10045_U_Interface CRC changed for unit $1



unit_u_implementation_crc_changed=10046_U_Implementation CRC changed for unit $1



unit_u_finished_compiling=10047_U_Finished compiling unit $1


unit_u_add_depend_to=10048_U_Add dependency of $1 to $2


unit_u_no_reload_is_caller=10049_U_No reload, is caller: $1



unit_u_no_reload_in_second_compile=10050_U_No reload, already in second compile: $1


unit_u_flag_for_reload=10051_U_Flag for reload: $1


unit_u_forced_reload=10052_U_强制重载


unit_u_previous_state=10053_U_Previous state of $1: $2


unit_u_second_compile_unit=10054_U_Already compiling $1, setting second compile



unit_u_loading_unit=10055_U_Loading unit $1


unit_u_finished_loading_unit=10056_U_Finished loading unit $1


unit_u_registering_new_unit=10057_U_Registering new unit $1


unit_u_reresolving_unit=10058_U_Re-resolving unit $1


unit_u_skipping_reresolving_unit=10059_U_Skipping re-resolving unit $1, still loading used units



unit_u_unload_resunit=10060_U_Unloading resource unit $1 (not needed)


unit_e_different_wpo_file=10061_E_Unit $1 was compiled using a different whole program optimization feedback input ($2, $3); recompile it without wpo or use the same wpo feedback input file for this compilation invocation




# EndOfTeX

#
#  Options
#
# 11047 is the last used one
#
unit_u_indirect_crc_changed=10062_U_Indirect interface (objects/classes) CRC changed for unit $1





# EndOfTeX

#
#  Options
#
# 11048 is the last used one
#
option_usage=11000_O_CP Pascal Compiler 是一种 Pascal 语言编译器。详情请访问 www.lezizi.org 。本项目已根据GNU协议开源。
# BeginOfTeX





option_only_one_source_support=11001_W_Only one source file supported, changing source file to compile from "$1" into "$2"



option_def_only_for_os2=11002_W_DEF file can be created only for OS/2

option_no_nested_response_file=11003_E_nested response files are not supported

option_no_source_found=11004_F_No source file name in command line

option_no_option_found=11005_N_No option inside $1 config file

option_illegal_para=11006_E_非法参数: $1

option_help_pages_para=11007_H_-? writes help pages

option_too_many_cfg_files=11008_F_Too many config files nested

option_unable_open_file=11009_F_无法打开文件: $1

option_reading_further_from=11010_D_Reading further options from $1


option_target_is_already_set=11011_W_Target is already set to: $1

option_no_shared_lib_under_dos=11012_W_Shared libs not supported on DOS platform, reverting to static


option_too_many_ifdef=11013_F_In options file $1 at line $2 too many #IF(N)DEFs encountered


option_too_many_endif=11014_F_In options file $1 at line $2 unexpected #ENDIFs encountered


option_too_less_endif=11015_F_Open conditional at the end of the options file


option_no_debug_support=11016_W_Debug information generation is not supported by this executable



option_no_debug_support_recompile_fpc=11017_H_Try recompiling with -dGDB



option_obsolete_switch=11018_W_You are using the obsolete switch $1



option_obsolete_switch_use_new=11019_W_You are using the obsolete switch $1, please use $2




option_switch_bin_to_src_assembler=11020_N_Switching assembler to default source writing assembler


option_incompatible_asm=11021_W_Assembler output selected "$1" is not compatible with "$2"
option_asm_forced=11022_W_"$1" assembler use forced



option_using_file=11026_T_Reading options from file $1

option_using_env=11027_T_Reading options from environment $1

option_handling_option=11028_D_Handling option "$1"

option_help_press_enter=11029_O_*** 按回车键退出 ***



option_start_reading_configfile=11030_H_Start of reading config file $1

option_end_reading_configfile=11031_H_End of reading config file $1

option_interpreting_option=11032_D_interpreting option "$1"

option_interpreting_firstpass_option=11036_D_interpreting firstpass option "$1"

option_interpreting_file_option=11033_D_interpreting file option "$1"

option_read_config_file=11034_D_Reading config file "$1"

option_found_file=11035_D_found source file name "$1"


option_code_page_not_available=11039_E_未知编码页




option_config_is_dir=11040_F_配置文件 $1 是一个目录

option_confict_asm_debug=11041_W_Assembler output selected "$1" cannot generate debug info, debugging disabled


option_ppc386_deprecated=11042_W_Use of ppc386.cfg is deprecated, please use fpc.cfg instead


option_else_without_if=11043_F_In options file $1 at line $2 #ELSE directive without #IF(N)DEF found

option_unsupported_target=11044_F_Option "$1" is not, or not yet, supported on the current target platform


option_unsupported_target_for_feature=11045_F_The feature "$1" is not, or not yet, supported on the selected target platform


option_dwarf_smart_linking=11046_N_DWARF debug information cannot be used with smart linking on this target, switching to static linking


option_ignored_target=11047_W_Option "$1" is ignored for the current target platform.



# EndOfTeX

#
#  Whole program optimization
#
# 12019 is the last used one
#
# BeginOfTeX





option_debug_external_unsupported=11048_W_Disabling external debug information because it is unsupported for the selected target/debug format combination.



# EndOfTeX

#
#  Whole program optimization
#
# 12019 is the last used one
#
# BeginOfTeX





wpo_cant_find_file=12000_F_Cannot open whole program optimization feedback file "$1"

wpo_begin_processing=12001_D_Processing whole program optimization information in wpo feedback file "$1"

wpo_end_processing=12002_D_Finished processing the whole program optimization information in wpo feedback file "$1"

wpo_expected_section=12003_E_Expected section header, but got "$2" at line $1 of wpo feedback file


wpo_no_section_handler=12004_W_No handler registered for whole program optimization section "$2" at line $1 of wpo feedback file, ignoring


wpo_found_section=12005_D_Found whole program optimization section "$1" with information about "$2"


wpo_no_input_specified=12006_F_The selected whole program optimizations require a previously generated feedback file (use -Fw to specify)



wpo_not_enough_info=12007_E_No collected information necessary to perform "$1" whole program optimization found



wpo_no_output_specified=12008_F_Specify a whole program optimization feedback file to store the generated info in (using -FW)


wpo_output_without_info_gen=12009_E_Not generating any whole program optimization information, yet a feedback file was specified (using -FW)



wpo_input_without_info_use=12010_E_Not performing any whole program optimizations, yet an input feedback file was specified (using -Fw)



wpo_skipping_unnecessary_section=12011_D_Skipping whole program optimization section "$1", because not needed by the requested optimizations


wpo_duplicate_wpotype=12012_W_Overriding previously read information for "$1" from feedback input file using information in section "$2"



wpo_cannot_extract_live_symbol_info_strip=12013_E_Cannot extract symbol liveness information from program when stripping symbols, use -Xs-


wpo_cannot_extract_live_symbol_info_no_link=12014_E_Cannot extract symbol liveness information from program when when not linking


wpo_cannot_find_symbol_progs=12015_F_Cannot find "$1" or "$2" to extract symbol liveness information from linked program


wpo_error_reading_symbol_file=12016_E_Error during reading symbol liveness information produced by "$1"


wpo_error_executing_symbol_prog=12017_F_Error executing "$1" (exitcode: $2) to extract symbol information from linked program


wpo_symbol_live_info_needs_smart_linking=12018_E_Collection of symbol liveness information can only help when using smart linking, use -CX -XX



wpo_cant_create_feedback_file=12019_E_Cannot create specified whole program optimisation feedback file "$1"


# EndOfTeX


#
# Logo (option -l)
#
option_logo=11023_[
CP Pascal Compiler version $FPCFULLVERSION [$FPCDATE] for $FPCCPU
Copyright (C) 2008-2012 LeZiZi Studio
]

#
# Info (option -i)
#
option_info=11024_[
CP Pascal Compiler version $FPCVERSION

Compiler Date      : $FPCDATE
Compiler CPU Target: $FPCCPU

Supported targets:
  $OSTARGETS

Supported CPU instruction sets:
  $INSTRUCTIONSETS

Supported FPU instruction sets:
  $FPUINSTRUCTIONSETS

Supported ABI targets:
  $ABITARGETS

Supported Optimizations:
  $OPTIMIZATIONS

Supported Whole Program Optimizations:
  All
  $WPOPTIMIZATIONS

Supported Microcontroller types:
  $CONTROLLERTYPES

This program comes under the GNU General Public Licence
For more information read COPYING.FPC

Report bugs, suggestions, etc. to:
                 http://www.lezizi.org
or
                 support@lezizi.org
]

#
# Help pages (option -? and -h)
#
# The first character on the line indicates who will display this
# line, the current possibilities are :
#    * = every target
#    3 = 80x86 targets
#    6 = 680x0 targets
#    e = in extended debug mode only
#    P = PowerPC targets
#    S = Sparc targets
#    V = Virtual machine targets
# The second character also indicates who will display this line,
# (if the above character was TRUE) the current possibilities are :
#    * = everyone
#    g = with GDB info supported by the compiler
#    O = OS/2
#    L = UNIX systems
#  The third character represents the indentation level.
#
option_help_pages=11025_[
**
]

#
# The End...