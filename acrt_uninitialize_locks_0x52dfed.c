// 函数名称: ___acrt_uninitialize_locks
// 虚拟地址: 0x52dfed
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_uninitialize_locks()
{
    // 第一条实际指令: int32_t i_1 = data_65a528
    int32_t i_1 = data_65a528
    
    if (i_1 != 0)
        int32_t edi
        int32_t var_8_1 = edi
        void* lpCriticalSection = &(&data_65a3c0)[i_1 * 0x18]
        int32_t i
        
        do
            DeleteCriticalSection(lpCriticalSection)
            data_65a528 -= 1
            lpCriticalSection -= 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t result
    result.b = 1
    return result
}
