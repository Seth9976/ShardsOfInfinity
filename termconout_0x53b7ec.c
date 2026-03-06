// 函数名称: ___termconout
// 虚拟地址: 0x53b7ec
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___termconout()
{
    // 第一条实际指令: BOOL hObject = data_5b09a0
    BOOL hObject = data_5b09a0
    
    if (hObject != 0xffffffff && hObject != 0xfffffffe)
        return CloseHandle(hObject)
    
    return hObject
}
