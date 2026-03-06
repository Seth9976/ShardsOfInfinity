// 函数名称: _fseek
// 虚拟地址: 0x52ab00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_fseek(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg2)
    return common_fseek(arg1, eax_1, edx, arg3)
}
