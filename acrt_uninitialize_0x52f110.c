// 函数名称: ___acrt_uninitialize
// 虚拟地址: 0x52f110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_uninitialize(char arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return ___acrt_execute_uninitializers(&data_54e4b0, &data_54e530)
    
    if (data_65a3c8 != 0)
        __flushall()
    
    int32_t result
    result.b = 1
    return result
}
