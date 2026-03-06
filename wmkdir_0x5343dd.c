// 函数名称: __wmkdir
// 虚拟地址: 0x5343dd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__wmkdir(PWSTR arg1)
{
    // 第一条实际指令: if (CreateDirectoryW(arg1, nullptr) != 0)
    if (CreateDirectoryW(arg1, nullptr) != 0)
        return 0
    
    ___acrt_errno_map_os_error(GetLastError())
    return 0xffffffff
}
