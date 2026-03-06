// 函数名称: ___dcrt_write_console
// 虚拟地址: 0x53b803
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___dcrt_write_console(void* arg1, uint32_t arg2, uint32_t* arg3)
{
    // 第一条实际指令: BOOL lpReserved = WriteConsoleW(data_5b09a0, arg1, arg2, arg3, nullptr)
    BOOL lpReserved = WriteConsoleW(data_5b09a0, arg1, arg2, arg3, nullptr)
    
    if (lpReserved == 0 && GetLastError() == ERROR_INVALID_HANDLE)
        ___termconout()
        ___initconout()
        return WriteConsoleW(data_5b09a0, arg1, arg2, arg3, lpReserved)
    
    return lpReserved
}
