// 函数名称: __fFATN2
// 虚拟地址: 0x53eba0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double __fastcall__fFATN2(int16_t arg1, void* arg2 @ ebp, long double arg3 @ st0, long double arg4 @ st1)
{
    // 第一条实际指令: *(arg2 - 0x90) = 0xfe
    *(arg2 - 0x90) = 0xfe
    long double result = __fpatan(fabs(arg3), fabs(arg4))
    arg1.b = arg1.b
    
    if (arg1.b != 0)
        result = fconvert.t(3.1415926534682512) + fconvert.t(1.2154201012607932e-10) - result
    
    arg1:1.b = arg1:1.b
    
    if (arg1:1.b == 0)
        return result
    
    return fneg(result)
}
