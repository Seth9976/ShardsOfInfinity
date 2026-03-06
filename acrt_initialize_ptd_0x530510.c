// 函数名称: ___acrt_initialize_ptd
// 虚拟地址: 0x530510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t___acrt_initialize_ptd()
{
    // 第一条实际指令: uint32_t eax = ___acrt_FlsAlloc@4(destroy_fls)
    uint32_t eax = ___acrt_FlsAlloc@4(destroy_fls)
    data_5b01d4 = eax
    
    if (eax != 0xffffffff)
        int32_t* eax_1 = ___acrt_getptd_noexit()
        
        if (eax_1 != 0)
            eax_1.b = 1
            return eax_1
        
        int32_t* var_4_1 = eax_1
        ___acrt_uninitialize_ptd()
    
    eax.b = 0
    return eax
}
