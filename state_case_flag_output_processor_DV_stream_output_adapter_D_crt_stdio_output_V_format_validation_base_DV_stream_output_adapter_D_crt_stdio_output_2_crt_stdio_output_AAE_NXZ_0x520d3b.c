// 函数名称: ?state_case_flag@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x520d3b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?state_case_flag@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: int32_t eax_1 = sx.d(*(arg1 + 0x31))
    int32_t eax_1 = sx.d(*(arg1 + 0x31))
    
    if (eax_1 == 0x20)
        *(arg1 + 0x20) |= 2
    else if (eax_1 == 0x23)
        *(arg1 + 0x20) |= 0x20
    else if (eax_1 == 0x2b)
        *(arg1 + 0x20) |= 1
    else if (eax_1 == 0x2d)
        *(arg1 + 0x20) |= 4
    else if (eax_1 == 0x30)
        *(arg1 + 0x20) |= 8
    
    int32_t result
    result.b = 1
    return result
}
