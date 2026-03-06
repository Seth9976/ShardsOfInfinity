// 函数名称: ?type_case_o@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x522407
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall?type_case_o@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: int32_t edx_1 = *(arg1 + 0x20)
    int32_t edx_1 = *(arg1 + 0x20)
    
    if (((edx_1 u>> 5).b & 1) != 0)
        *(arg1 + 0x20) = edx_1 | 0x80
    
    return __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_integer(
        arg1, 8, 0)
}
