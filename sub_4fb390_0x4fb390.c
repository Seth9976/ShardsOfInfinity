// 函数名称: sub_4fb390
// 虚拟地址: 0x4fb390
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double __convention("regparm")sub_4fb390(int32_t arg1, int32_t arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    float xmm2 = arg3[1]
    float xmm3 = *arg3
    float xmm4_1 = xmm2 * xmm2
    float xmm1_2 = xmm3 f* arg3[3] + arg3[2] f* xmm2
    float xmm2_3 = xmm3 * xmm3 + xmm4_1
    double var_20 = _mm_cvtps_pd(xmm1_2 + xmm1_2)
    long double x87_r6 = fconvert.t(_mm_cvtps_pd(1f - (xmm2_3 + xmm2_3)))
    int16_t x87control = sub_53c570()
    float xmm0_6 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6)))
    float xmm1_5 = arg3[3] f* arg3[1]
    *arg4 = xmm0_6 * 360f / 6.28318548f
    float xmm1_6 = xmm1_5 - *arg3 f* arg3[2]
    float xmm1_7[0x2] = xmm1_6 + xmm1_6
    double xmm4_2[0x2] = _mm_cvtps_pd(xmm1_7)
    float xmm3_1 = _mm_cvtpd_ps(__andps_xmmxud_memxud(xmm4_2, data_59e5a0))
    int32_t mxcsr
    uint64_t xmm5[0x2]
    int64_t xmm6
    
    if (xmm3_1 < 1f)
        arg4[1] = fconvert.s(__libm_sse2_asin_precise(mxcsr, x87control, xmm4_2[0], xmm5, xmm6)) * 360f
            / 6.28318548f
    else if (9.99999975e-06f <= xmm3_1)
        arg4[1] = xmm1_7 f/ xmm3_1 * 90f
    else
        arg4[1] = 1f * 90f
    float xmm1_11 = arg3[2]
    float xmm0_20 = arg3[3] f* xmm1_11 + *arg3 * xmm2
    float xmm1_13 = xmm1_11 * xmm1_11 + xmm4_1
    long double result = fconvert.t(_mm_cvtps_pd(xmm0_20 + xmm0_20))
    long double x87_r5 = fconvert.t(_mm_cvtps_pd(1f - (xmm1_13 + xmm1_13)))
    sub_53c570()
    arg4[2] = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r5))) * 360f / 6.28318548f
    return result
}
