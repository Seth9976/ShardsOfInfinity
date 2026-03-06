// 函数名称: __set_exp
// 虚拟地址: 0x533162
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__set_exp(double arg1, int16_t arg2, int32_t arg3) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    var_c.q = fconvert.d(fconvert.t(arg1))
    var_8:2.w = ((arg3 + 0x3fe) << 4).w | (arg2 & 0x800f)
    return fconvert.t(var_c.q)
}
