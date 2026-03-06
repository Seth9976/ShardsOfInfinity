// 函数名称: __Init_thread_footer
// 虚拟地址: 0x51bba6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__Init_thread_footer(int32_t* arg1)
{
    // 第一条实际指令: EnterCriticalSection(&data_659fac)
    EnterCriticalSection(&data_659fac)
    int32_t ecx_1 = data_5b0064 + 1
    data_5b0064 = ecx_1
    *arg1 = ecx_1
    TEB* fsbase
    *(*(fsbase->ThreadLocalStoragePointer + (data_65a300 << 2)) + 4) = data_5b0064
    LeaveCriticalSection(&data_659fac)
    return __Init_thread_notify() __tailcall
}
