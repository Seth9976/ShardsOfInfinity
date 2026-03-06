// 函数名称: __frnd
// 虚拟地址: 0x53ad86
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__frnd(double arg1) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    var_c.q = fconvert.d(roundint.t(fconvert.t(arg1)))
    return fconvert.t(var_c.q)
}
