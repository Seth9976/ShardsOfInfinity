// 函数名称: __wremove
// 虚拟地址: 0x5343b5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__wremove(PWSTR arg1)
{
    // 第一条实际指令: if (DeleteFileW(arg1) != 0)
    if (DeleteFileW(arg1) != 0)
        return 0
    
    ___acrt_errno_map_os_error(GetLastError())
    return 0xffffffff
}
