// 函数名称: ___acrt_stdio_free_buffer_nolock
// 虚拟地址: 0x531a98
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint8_t___acrt_stdio_free_buffer_nolock(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    uint8_t result = (arg1[3] u>> 0xd).b
    
    if ((result & 1) != 0)
        result = (arg1[3] u>> 6).b
        
        if ((result & 1) != 0)
            __free_base(arg1[1])
            arg1[3] &= 0xfffffebf
            result = 0
            arg1[1] = 0
            *arg1 = 0
            arg1[2] = 0
    
    return result
}
