// 函数名称: ___acrt_initialize_locks
// 虚拟地址: 0x52df95
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___acrt_initialize_locks()
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    void* edi_1 = &data_65a3d8
    int32_t esi = 0
    BOOL result
    
    while (true)
        if (___acrt_InitializeCriticalSectionEx@12(edi_1, 0xfa0, 0) == 0)
            ___acrt_uninitialize_locks()
            result.b = 0
            break
        
        data_65a528 += 1
        esi += 0x18
        edi_1 += 0x18
        
        if (esi u>= 0x150)
            result.b = 1
            break
    
    return result
}
