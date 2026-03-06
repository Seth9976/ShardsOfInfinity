// 函数名称: ?should_skip_type_state_output@?$positional_parameter_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IBE_NXZ
// 虚拟地址: 0x520d24
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?should_skip_type_state_output@?$positional_parameter_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IBE_NXZ(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (*(arg1 + 0x45c) == 2)
        result = 1
    
    if (*(arg1 + 0x45c) != 2 || *(arg1 + 0x458) != 1)
        result.b = 0
    
    return result
}
