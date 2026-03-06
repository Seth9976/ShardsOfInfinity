// 函数名称: ?should_skip_normal_state_processing@?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ
// 虚拟地址: 0x520cfc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?should_skip_normal_state_processing@?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x458)
    int32_t edx = *(arg1 + 0x458)
    int32_t result
    bool cond:0_1
    
    if (edx == 1)
        cond:0_1 = *(arg1 + 0x45c) != 2
    label_520d0e:
        
        if (not(cond:0_1))
            result.b = 1
            return result
    else if (edx == 2)
        cond:0_1 = *(arg1 + 0x45c) != 0
        goto label_520d0e
    result.b = 0
    return result
}
