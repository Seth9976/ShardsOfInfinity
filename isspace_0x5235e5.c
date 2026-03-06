// 函数名称: _isspace
// 虚拟地址: 0x5235e5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_isspace(char arg1)
{
    // 第一条实际指令: if (data_65a674 == 0)
    if (data_65a674 == 0)
        return zx.d((*data_5b01d8)[zx.d(arg1)]) & 8
    
    return __isspace_l(arg1.d, nullptr)
}
