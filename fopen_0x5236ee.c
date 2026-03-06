// 函数名称: _fopen
// 虚拟地址: 0x5236ee
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_fopen(char* arg1, char* arg2)
{
    // 第一条实际指令: return common_fsopen<char>(arg1, arg2, 0x40)
    return common_fsopen<char>(arg1, arg2, 0x40)
}
