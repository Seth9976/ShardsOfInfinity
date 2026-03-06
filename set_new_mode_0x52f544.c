// 函数名称: __set_new_mode
// 虚拟地址: 0x52f544
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__set_new_mode(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0 && arg1 != 1)
    if (arg1 != 0 && arg1 != 1)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    int32_t result = data_65a678
    data_65a678 = arg1
    return result
}
