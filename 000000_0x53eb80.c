// 函数名称: $$000000
// 虚拟地址: 0x53eb80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double$$000000(long double arg1 @ st0)
{
    // 第一条实际指令: int16_t ecx
    int16_t ecx
    void* ebp
    long double st0
    st0, ecx = AugmentSinCos(ebp, arg1)
    char temp0 = ecx.b
    ecx.b = ecx:1.b
    ecx:1.b = temp0
    long double result = __fpatan(st0, arg1)
    ecx.b = ecx.b
    
    if (ecx.b != 0)
        result = fconvert.t(3.1415926534682512) + fconvert.t(1.2154201012607932e-10) - result
    
    ecx:1.b = ecx:1.b
    
    if (ecx:1.b == 0)
        return result
    
    return fneg(result)
}
