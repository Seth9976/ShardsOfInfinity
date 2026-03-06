// 函数名称: _tolower
// 虚拟地址: 0x52a7de
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t_tolower(uint32_t arg1)
{
    // 第一条实际指令: if (data_65a674 != 0)
    if (data_65a674 != 0)
        return __tolower_l(arg1, nullptr)
    
    if (arg1 - 0x41 u> 0x19)
        return arg1
    
    return arg1 + 0x20
}
