// 函数名称: ___vcrt_uninitialize_ptd
// 虚拟地址: 0x51e427
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___vcrt_uninitialize_ptd()
{
    // 第一条实际指令: BOOL result = data_5b00a0
    BOOL result = data_5b00a0
    
    if (result != 0xffffffff)
        ___vcrt_FlsFree(result)
        data_5b00a0 = 0xffffffff
    
    result.b = 1
    return result
}
