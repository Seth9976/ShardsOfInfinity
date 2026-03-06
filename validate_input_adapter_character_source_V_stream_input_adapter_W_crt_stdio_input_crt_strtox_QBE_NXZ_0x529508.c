// 函数名称: ?validate@?$input_adapter_character_source@V?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@QBE_NXZ
// 虚拟地址: 0x529508
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?validate@?$input_adapter_character_source@V?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@QBE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: if (*arg1 != 0 && arg1[6] != 0)
    if (*arg1 != 0 && arg1[6] != 0)
        int32_t eax
        eax.b = 1
        return eax
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    int32_t eax_2
    eax_2.b = 0
    return eax_2
}
