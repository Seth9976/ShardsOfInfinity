// 函数名称: ?advance_to_next_pass@?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ
// 虚拟地址: 0x520639
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcall?advance_to_next_pass@?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x458) += 1
    *(arg1 + 0x458) += 1
    int32_t ecx = *(arg1 + 0x458)
    void* result
    
    if (ecx == 3 || (ecx == 2 && *(arg1 + 0x45c) == 1))
        result.b = 0
        return result
    
    *(arg1 + 0xaa4) = 0xffffffff
    *(arg1 + 0xaa8) = 0xffffffff
    *(arg1 + 0x45c) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x10) = *(arg1 + 0x460)
    result.b = 1
    return result
}
