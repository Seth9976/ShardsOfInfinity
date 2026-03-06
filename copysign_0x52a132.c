// 函数名称: __copysign
// 虚拟地址: 0x52a132
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__copysign(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    var_c.q = fconvert.d(float.t(0))
    int32_t var_8_1 = ((arg3 ^ arg2) & 0x7fffffff) ^ arg3
    return fconvert.t(arg1.q)
}
