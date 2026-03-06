// 函数名称: __errno
// 虚拟地址: 0x52df5c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*__errno()
{
    // 第一条实际指令: int32_t* eax_2 = ___acrt_getptd_noexit()
    int32_t* eax_2 = ___acrt_getptd_noexit()
    
    if (eax_2 != 0)
        return &eax_2[4]
    
    return 0x5b0170
}
