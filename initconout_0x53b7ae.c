// 函数名称: ___initconout
// 虚拟地址: 0x53b7ae
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HANDLE___initconout()
{
    // 第一条实际指令: HANDLE result = CreateFileW(u"CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
    HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
        OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
    data_5b09a0 = result
    return result
}
