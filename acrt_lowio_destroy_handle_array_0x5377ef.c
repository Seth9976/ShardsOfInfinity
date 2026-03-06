// 函数名称: ___acrt_lowio_destroy_handle_array
// 虚拟地址: 0x5377ef
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void___acrt_lowio_destroy_handle_array(CRITICAL_SECTION* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t edi
    int32_t var_10_1 = edi
    CRITICAL_SECTION* lpCriticalSection = arg1
    
    if (arg1 != &arg1[0x80])
        do
            DeleteCriticalSection(lpCriticalSection)
            lpCriticalSection = &lpCriticalSection[2]
        while (lpCriticalSection != &arg1[0x80])
    
    __free_base(arg1)
}
