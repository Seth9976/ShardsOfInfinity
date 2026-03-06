// 函数名称: ___vcrt_initialize_ptd
// 虚拟地址: 0x51e3f4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___vcrt_initialize_ptd()
{
    // 第一条实际指令: BOOL eax = ___vcrt_FlsAlloc(___vcrt_freefls@4)
    BOOL eax = ___vcrt_FlsAlloc(___vcrt_freefls@4)
    data_5b00a0 = eax
    
    if (eax != 0xffffffff)
        if (___vcrt_FlsSetValue(eax, 0x65a314) != 0)
            BOOL eax_1
            eax_1.b = 1
            return eax_1
        
        ___vcrt_uninitialize_ptd()
    
    eax.b = 0
    return eax
}
