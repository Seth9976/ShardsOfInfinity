// 函数名称: ?state_case_width@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x5219fc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcall?state_case_width@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x31) != 0x2a)
    if (*(arg1 + 0x31) != 0x2a)
        return __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::string_output_adapter<char> > >::parse_int_from_format_string(
            arg1, arg1 + 0x24)
    
    *(arg1 + 0x14) += 4
    int32_t result = *(*(arg1 + 0x14) - 4)
    *(arg1 + 0x24) = result
    
    if (result s< 0)
        *(arg1 + 0x20) |= 4
        *(arg1 + 0x24) = neg.d(result)
    
    result.b = 1
    return result
}
