// 函数名称: ___vcrt_initialize_locks
// 虚拟地址: 0x51f357
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___vcrt_initialize_locks()
{
    // 第一条实际指令: void* edi = &data_65a340
    void* edi = &data_65a340
    int32_t esi = 0
    BOOL result
    
    while (true)
        if (___vcrt_InitializeCriticalSectionEx(edi, 0xfa0, 0) == 0)
            ___vcrt_uninitialize_locks()
            result.b = 0
            break
        
        data_65a358 += 1
        esi += 0x18
        edi += 0x18
        
        if (esi u>= 0x18)
            result.b = 1
            break
    
    return result
}
