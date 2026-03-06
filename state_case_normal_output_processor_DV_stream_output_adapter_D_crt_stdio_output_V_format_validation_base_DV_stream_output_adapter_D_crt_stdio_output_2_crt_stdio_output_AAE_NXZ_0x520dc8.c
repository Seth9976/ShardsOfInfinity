// 函数名称: ?state_case_normal@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x520dc8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?state_case_normal@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ()
{
    // 第一条实际指令: void* ecx
    void* ecx
    
    if (__crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::state_case_normal_common(
            ecx) != 0)
        return 1
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    int32_t result
    result.b = 0
    return result
}
