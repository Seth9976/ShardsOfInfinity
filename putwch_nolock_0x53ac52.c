// 函数名称: __putwch_nolock
// 虚拟地址: 0x53ac52
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcall__putwch_nolock(uint32_t arg1)
{
    // 第一条实际指令: uint32_t var_8 = arg1
    uint32_t var_8 = arg1
    int16_t arg_4
    
    if (___dcrt_lowio_ensure_console_output_initialized() != 0
            && ___dcrt_write_console(&arg_4, 1, &var_8) != 0)
        BOOL result
        result.w = arg_4
        return result
    
    return 0xffff
}
