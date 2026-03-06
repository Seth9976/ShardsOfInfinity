// 函数名称: sub_535d40
// 虚拟地址: 0x535d40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_535d40(int16_t arg1, void* arg2 @ ebp, long double arg3 @ st0, long double arg4 @ st1, long double arg5 @ st2, long double arg6 @ st3)
{
    // 第一条实际指令: *(arg2 - 0x90) = 0xfe
    *(arg2 - 0x90) = 0xfe
    arg1:1.b = arg1:1.b
    long double x87_r0
    long double x87_r1
    
    if (arg1:1.b != 0)
        int32_t eax_1 = _isintTOS(arg3)
        
        if (eax_1 == 0)
            return __rtindfpop(arg2) __tailcall
        
        arg1:1.b = 0
        
        if (eax_1 != 2)
            arg1:1.b = 0xff
        
        x87_r1 = arg3
        x87_r0 = fabs(arg4)
    else
        x87_r0 = arg4
        x87_r1 = arg3
    
    int16_t ecx
    char edx
    ecx, edx = __ffexpm1(arg1, arg2, __fyl2x(x87_r0, x87_r1))
    long double x87_r2 = arg5 + float.t(1)
    
    if ((*(arg2 - 0x9f) & 1) != 0)
        long double x87_r1_3 = float.t(1)
        x87_r2 = x87_r1_3 / x87_r1_3
    
    if ((edx & 0x40) == 0)
        __fscale(x87_r2, arg6)
    
    ecx:1.b = ecx:1.b
    return sub_536064() __tailcall
}
