// 函数名称: ?state_case_precision@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x520f2e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcall?state_case_precision@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x31) != 0x2a)
    if (*(arg1 + 0x31) != 0x2a)
        return __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::string_output_adapter<char> > >::parse_int_from_format_string(
            arg1, arg1 + 0x28)
    
    char result = __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> >::update_precision(
        arg1)
    
    if (result == 0)
        return result
    
    if (__crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::should_format(
            arg1) != 0 && *(arg1 + 0x28) s< 0)
        *(arg1 + 0x28) = 0xffffffff
    
    return 1
}
