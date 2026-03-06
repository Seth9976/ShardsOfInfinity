// 函数名称: ___get_entropy
// 虚拟地址: 0x51c750
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___get_entropy()
{
    // 第一条实际指令: FILETIME systemTimeAsFileTime
    FILETIME systemTimeAsFileTime
    __builtin_memset(&systemTimeAsFileTime, 0, 8)
    GetSystemTimeAsFileTime(&systemTimeAsFileTime)
    uint32_t var_8 = systemTimeAsFileTime.dwHighDateTime ^ systemTimeAsFileTime.dwLowDateTime
    uint32_t eax_2 = GetCurrentThreadId()
    var_8 ^= eax_2
    uint32_t eax_3 = GetCurrentProcessId()
    var_8 ^= eax_3
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t var_14
    return var_14 ^ performanceCount ^ var_8 ^ &var_8
}
