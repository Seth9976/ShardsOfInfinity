// 函数名称: _isintTOS
// 虚拟地址: 0x535ee0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_isintTOS(long double arg1 @ st0) __pure
{
    // 第一条实际指令: long double x87_r7 = roundint.t(arg1)
    long double x87_r7 = roundint.t(arg1)
    x87_r7 - arg1
    
    if (not(test_bit(
            ((x87_r7 < arg1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, arg1) ? 1 : 0) << 0xa
                | (x87_r7 == arg1 ? 1 : 0) << 0xe):1.b, 
            6)))
        return 0
    
    long double x87_r7_2 = arg1 * fconvert.t(0.5)
    long double x87_r6_2 = roundint.t(x87_r7_2)
    x87_r6_2 - x87_r7_2
    
    if (test_bit(
            ((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe):1.b, 
            6))
        return 2
    
    return 1
}
