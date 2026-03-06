// 函数名称: __fFMOD
// 虚拟地址: 0x53c590
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__fFMOD(long double arg1 @ st0, long double arg2 @ st1)
{
    // 第一条实际指令: bool c1 = false
    bool c1 = false
    long double x87_r0 = arg2
    bool c0
    bool c2_1
    bool c3
    
    do
        long double st0_1
        uint8_t temp0
        st0_1, c2_1, temp0 = __fprem(x87_r0, arg1)
        x87_r0 = st0_1
        
        if (not(c2_1))
            c0 = (temp0 & 4) != 0
            c1 = (temp0 & 1) != 0
            c3 = (temp0 & 2) != 0
    while (test_bit(
        ((c0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe):1.b, 2))
    return arg1
}
