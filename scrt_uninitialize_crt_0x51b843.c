// 函数名称: ___scrt_uninitialize_crt
// 虚拟地址: 0x51b843
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___scrt_uninitialize_crt(int32_t arg1, char arg2)
{
    // 第一条实际指令: if (data_659f90 == 0 || arg2 == 0)
    if (data_659f90 == 0 || arg2 == 0)
        ___acrt_uninitialize(arg1.b)
        ___vcrt_uninitialize(arg1.b)
    
    int32_t result
    result.b = 1
    return result
}
