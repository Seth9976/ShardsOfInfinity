// 函数名称: ?state_case_normal@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x520d97
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?state_case_normal@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: if (__crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> >::should_skip_normal_state_processing(arg1) == 0 && __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::state_case_normal_common(arg1) == 0)
    if (__crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> >::should_skip_normal_state_processing(
            arg1) == 0 && __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::state_case_normal_common(
            arg1) == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        int32_t result
        result.b = 0
        return result
    
    return 1
}
