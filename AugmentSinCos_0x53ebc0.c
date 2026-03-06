// 函数名称: AugmentSinCos
// 虚拟地址: 0x53ebc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doubleAugmentSinCos(void* arg1 @ ebp, long double arg2 @ st0)
{
    // 第一条实际指令: long double x87_r0 = fabs(arg2)
    long double x87_r0 = fabs(arg2)
    long double x87_r7_2 = (float.t(1) - x87_r0) * (x87_r0 + float.t(1))
    long double temp1 = float.t(0)
    x87_r7_2 - temp1
    *(arg1 - 0xa0) = (x87_r7_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe | 0x3800
    
    if ((*(arg1 - 0x9f) & 1) != 0)
        return __rtindfpop(arg1) __tailcall
    
    int32_t ecx
    ecx:1.b = 0
    return sqrt(x87_r7_2)
}
