// 函数名称: ?should_format@?$positional_parameter_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ
// 虚拟地址: 0x520ce6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?should_format@?$positional_parameter_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ(void* arg1)
{
    // 第一条实际指令: int32_t result = 1
    int32_t result = 1
    
    if (*(arg1 + 0x458) == 1 && *(arg1 + 0x45c) != 1)
        result.b = 0
    
    return result
}
