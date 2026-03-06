// 函数名称: sub_4c71d0
// 虚拟地址: 0x4c71d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4c71d0(float arg1 @ xmm0, float arg2 @ xmm1)
{
    // 第一条实际指令: float xmm0_1 = sub_41b760(arg2)
    float xmm0_1 = sub_41b760(arg2)
    int32_t mxcsr
    int16_t x87control
    
    if (not(2f < xmm0_1))
        int32_t eax
        long double st0
        st0, eax = sub_53ea80(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.d(arg1 * 100f + 0.5f))))
        _mm_cvtpd_ps(zx.o(fconvert.d(st0)))
        return eax
    
    if (49f < xmm0_1)
        int32_t eax_2
        long double st0_2
        st0_2, eax_2 = sub_53ea80(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.d(arg1 + 0.5f))))
        _mm_cvtpd_ps(zx.o(fconvert.d(st0_2)))
        return eax_2
    
    int32_t eax_1
    long double st0_1
    st0_1, eax_1 = sub_53ea80(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.d(arg1 * 10f + 0.5f))))
    _mm_cvtpd_ps(zx.o(fconvert.d(st0_1)))
    return eax_1
}
