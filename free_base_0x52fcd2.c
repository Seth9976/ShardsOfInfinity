// 函数名称: __free_base
// 虚拟地址: 0x52fcd2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void__free_base(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0 && HeapFree(data_65aa88, HEAP_NONE, arg1) == 0)
    if (arg1 != 0 && HeapFree(data_65aa88, HEAP_NONE, arg1) == 0)
        BOOL* esi_1 = __errno()
        *esi_1 = ___acrt_errno_from_os_error(GetLastError())
}
