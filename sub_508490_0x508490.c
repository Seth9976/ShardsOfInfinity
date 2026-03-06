// 函数名称: sub_508490
// 虚拟地址: 0x508490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_508490(int32_t arg1, int32_t* arg2, int32_t arg3, float arg4 @ xmm1, float arg5 @ xmm2, float arg6 @ xmm3, int32_t* arg7, float* arg8)
{
    // 第一条实际指令: float xmm4_2 = _mm_cvtepi32_ps(zx.o(arg3)) + 0.5f
    float xmm4_2 = _mm_cvtepi32_ps(zx.o(arg3)) + 0.5f
    *arg8 = xmm4_2 * arg5 - arg6
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_53ea80(mxcsr, x87control, 
        fconvert.d(fconvert.t(_mm_cvtps_pd((xmm4_2 - arg4) * arg5 - arg6) + 0.5)))
    *arg2 = sub_53c130(st0)
    int32_t result = sub_53c130(sub_53ea80(mxcsr, x87control_1, 
        fconvert.d(fconvert.t(_mm_cvtps_pd((xmm4_2 + arg4) * arg5 - arg6) - 0.5))))
    *arg7 = result
    return result
}
