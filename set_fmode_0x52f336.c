// 函数名称: __set_fmode
// 虚拟地址: 0x52f336
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__set_fmode(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0x4000 || arg1 == 0x8000 || arg1 == 0x10000)
    if (arg1 == 0x4000 || arg1 == 0x8000 || arg1 == 0x10000)
        data_65aa8c = arg1
        return 0
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16
}
