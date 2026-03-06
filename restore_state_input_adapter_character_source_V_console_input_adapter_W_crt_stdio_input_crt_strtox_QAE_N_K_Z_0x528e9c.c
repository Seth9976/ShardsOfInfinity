// 函数名称: ?restore_state@?$input_adapter_character_source@V?$console_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@QAE_N_K@Z
// 虚拟地址: 0x528e9c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __thiscall?restore_state@?$input_adapter_character_source@V?$console_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@QAE_N_K@Z(void* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: char* result
    char* result
    
    if (arg2 != *(arg1 + 0x10) || arg3 != *(arg1 + 0x14))
        **(arg1 + 0x18) = 0
        result.b = 0
    else
        result.b = 1
    
    return result
}
