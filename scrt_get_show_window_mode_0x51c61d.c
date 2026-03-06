// 函数名称: ___scrt_get_show_window_mode
// 虚拟地址: 0x51c61d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t___scrt_get_show_window_mode()
{
    // 第一条实际指令: void startupInfo
    void startupInfo
    _memset(&startupInfo, 0, 0x44)
    GetStartupInfoW(&startupInfo)
    char var_1c
    
    if ((var_1c & 1) == 0)
        return 0xa
    
    int16_t var_18
    return zx.d(var_18)
}
