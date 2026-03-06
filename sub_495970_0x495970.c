// 函数名称: sub_495970
// 虚拟地址: 0x495970
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double __convention("regparm")sub_495970(int32_t arg1, int32_t arg2, void* arg3, float arg4 @ xmm2, float* arg5)
{
    // 第一条实际指令: double xmm0_4 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(arg2)) * arg4 f* *(*(*(arg3 + 0x30) + 0x2e4) + 0x58))
    double xmm0_4 =
        _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(arg2)) * arg4 f* *(*(*(arg3 + 0x30) + 0x2e4) + 0x58))
    int32_t mxcsr
    int16_t x87control
    long double st0 = sub_53ea80(mxcsr, x87control, fconvert.d(fconvert.t(xmm0_4)))
    int32_t esi_1 = *(arg3 + 0x2c)
    int32_t edi = int.d(_mm_cvtpd_ps(zx.o(fconvert.d(st0))))
    int32_t edx_1 = esi_1 * edi
    int32_t eax_2 = edx_1 * 0x4d
    int32_t ecx_2 = (eax_2 << 0xf) + not.d(eax_2)
    int32_t ecx_3 = (ecx_2 u>> 0xc ^ ecx_2) * 5
    double var_48
    var_48.d = (ecx_3 u>> 4 ^ ecx_3) * 0x809
    int32_t eax_11 = edx_1 * 0x4e
    int32_t ecx_6 = (eax_11 << 0xf) + not.d(eax_11)
    int32_t ecx_7 = (ecx_6 u>> 0xc ^ ecx_6) * 5
    int32_t eax_19 = (ecx_7 u>> 4 ^ ecx_7) * 0x809
    int32_t eax_20 = edx_1 * 0x4f
    int32_t edx_3 = (edi - 1) * esi_1
    int32_t ecx_10 = (eax_20 << 0xf) + not.d(eax_20)
    int32_t ecx_11 = (ecx_10 u>> 0xc ^ ecx_10) * 5
    int32_t ebx = (ecx_11 u>> 4 ^ ecx_11) * 0x809
    int32_t eax_28 = edx_3 * 0x4d
    int32_t ecx_14 = (eax_28 << 0xf) + not.d(eax_28)
    int32_t ecx_15 = (ecx_14 u>> 0xc ^ ecx_14) * 5
    int32_t edi_1 = (ecx_15 u>> 4 ^ ecx_15) * 0x809
    int32_t eax_36 = edx_3 * 0x4e
    int32_t ecx_18 = (eax_36 << 0xf) + not.d(eax_36)
    int32_t ecx_19 = (ecx_18 u>> 0xc ^ ecx_18) * 5
    int32_t esi_2 = (ecx_19 u>> 4 ^ ecx_19) * 0x809
    int32_t eax_44 = edx_3 * 0x4f
    int32_t ecx_22 = (eax_44 << 0xf) + not.d(eax_44)
    int32_t ecx_23 = (ecx_22 u>> 0xc ^ ecx_22) * 5
    int32_t ecx_24 = (ecx_23 u>> 4 ^ ecx_23) * 0x809
    var_48.d = ((var_48.d u>> 0x10 ^ var_48.d) & 0x7fffff) | 0x3f800000
    float xmm0_8 = var_48.d - 1f
    var_48.d = ((eax_19 u>> 0x10 ^ eax_19) & 0x7fffff) | 0x3f800000
    float xmm0_10 = var_48.d - 1f
    var_48.d = ((ebx u>> 0x10 ^ ebx) & 0x7fffff) | 0x3f800000
    float xmm0_11 = var_48.d
    var_48.d = ((edi_1 u>> 0x10 ^ edi_1) & 0x7fffff) | 0x3f800000
    float xmm0_12 = xmm0_11 - 1f
    float xmm0_14 = var_48.d - 1f
    var_48.d = ((esi_2 u>> 0x10 ^ esi_2) & 0x7fffff) | 0x3f800000
    float xmm0_16 = var_48.d - 1f
    var_48.d = ((ecx_24 u>> 0x10 ^ ecx_24) & 0x7fffff) | 0x3f800000
    var_48.d = var_48.d - 1f
    long double result = fconvert.t(xmm0_4)
    sub_53c580()
    float xmm0_21 = _mm_cvtpd_ps(zx.o(fconvert.d(float.t(1)))) - 0f
    double var_58_1
    var_58_1.d = xmm0_21
    float xmm1
    
    if (not(0f < xmm0_21))
        xmm1 = xmm0_14
    else if (xmm0_21 < 1f)
        xmm1 = sub_4145f0(4, xmm0_21, xmm0_14, xmm0_8)
        xmm0_21 = var_58_1.d
    else
        xmm1 = xmm0_8
    
    *arg5 = xmm1
    float xmm1_2
    
    if (not(0 f< xmm0_21))
        xmm1_2 = xmm0_16
    else if (xmm0_21 < 1f)
        xmm1_2 = sub_4145f0(4, xmm0_21, xmm0_16, xmm0_10)
        xmm0_21 = var_58_1.d
    else
        xmm1_2 = xmm0_10
    
    arg5[1] = xmm1_2
    
    if (not(0 f< xmm0_21))
        arg5[2] = var_48.d
        return result
    
    if (xmm0_21 < 1f)
        arg5[2] = sub_4145f0(4, xmm0_21, var_48.d, xmm0_12)
        return result
    
    arg5[2] = xmm0_12
    return result
}
