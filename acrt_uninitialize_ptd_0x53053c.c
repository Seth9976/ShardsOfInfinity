// 函数名称: ___acrt_uninitialize_ptd
// 虚拟地址: 0x53053c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___acrt_uninitialize_ptd()
{
    // 第一条实际指令: BOOL result = data_5b01d4
    BOOL result = data_5b01d4
    
    if (result != 0xffffffff)
        ___acrt_FlsFree@4(result)
        data_5b01d4 = 0xffffffff
    
    result.b = 1
    return result
}
