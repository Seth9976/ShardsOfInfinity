// 函数名称: __fFEXP
// 虚拟地址: 0x535d60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int80_t__fFEXP(void* arg1 @ ebp, long double arg2 @ st0, long double arg3 @ st1, long double arg4 @ st2)
{
    // 第一条实际指令: *(arg1 - 0x90) = 0xfe
    *(arg1 - 0x90) = 0xfe
    int16_t ecx
    ecx:1.b = 0
    int16_t ecx_1
    char edx
    ecx_1, edx = __ffexpm1(ecx, arg1, 
        arg2 * (fconvert.t(1.4426950407214463) + fconvert.t(1.675171316223821e-10)))
    long double x87_r1 = arg3 + float.t(1)
    
    if ((*(arg1 - 0x9f) & 1) != 0)
        long double x87_r0_2 = float.t(1)
        x87_r1 = x87_r0_2 / x87_r0_2
    
    if ((edx & 0x40) == 0)
        __fscale(x87_r1, arg4)
    
    ecx_1:1.b = ecx_1:1.b
    return sub_536064() __tailcall
}
