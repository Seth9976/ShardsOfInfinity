// 函数名称: _rand_s
// 虚拟地址: 0x51f80e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_rand_s(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    *arg1 = 0
    
    if (___acrt_RtlGenRandom@8(arg1, 4) != 0)
        return 0
    
    *__errno() = 0xc
    return *__errno()
}
