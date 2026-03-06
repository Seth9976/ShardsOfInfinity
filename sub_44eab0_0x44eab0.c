// 函数名称: sub_44eab0
// 虚拟地址: 0x44eab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_44eab0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    
    if (data_e48e18 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e48e18)
        
        if (data_e48e18 == 0xffffffff)
            int32_t frequency
            QueryPerformanceFrequency(&frequency)
            data_e48e20 = frequency
            int32_t var_8
            data_e48e24 = var_8
            __Init_thread_footer(&data_e48e18)
    
    int32_t eax_7
    int32_t edx
    edx:eax_7 = mulu.dp.d(arg1, 0x3e8)
    return __aulldiv(eax_7, arg2 * 0x3e8 + edx, data_e48e20, data_e48e24)
}
