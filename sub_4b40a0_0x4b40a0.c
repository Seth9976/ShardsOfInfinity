// 函数名称: sub_4b40a0
// 虚拟地址: 0x4b40a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4b40a0(int32_t arg1, float* arg2, int128_t* arg3, uint64_t (* arg4)[0x2] @ edi, float arg5 @ xmm3, float* arg6)
{
    // 第一条实际指令: void var_108
    void var_108
    int32_t eax_1 = __security_cookie ^ &var_108
    float xmm0_1 = arg5 - *arg6
    float xmm3[0x2] = arg2[7]
    double xmm2_1 = _mm_cvtps_pd(arg2[6])
    double xmm1 = fconvert.d(xmm0_1)
    double xmm0_3 = _mm_cvtps_pd(arg2[4])
    double xmm3_3 = _mm_cvtps_pd(xmm3) * xmm1 + _mm_cvtps_pd(arg2[5])
    float var_c0
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_52c5b0(mxcsr, x87control, xmm2_1 * xmm1 + xmm0_3, &var_c0, arg4)
    float var_c4 = fconvert.s(st0)
    int16_t x87control_2
    long double st0_1
    st0_1, x87control_2 = sub_52c5b0(mxcsr, x87control_1, xmm3_3, &var_c0)
    float xmm0_8 = arg2[3] * xmm0_1
    var_c0 = fconvert.s(st0_1)
    double xmm0_10 = _mm_cvtps_pd(xmm0_8 + arg2[2])
    int16_t x87control_3
    double xmm0_11
    x87control_3, xmm0_11 = __libm_sse2_sin_precise(mxcsr, x87control_2, xmm0_10)
    float xmm0_13 = fconvert.s(xmm0_11) ^ (data_59e5c0.o).d
    float xmm1_1 = fconvert.s(__libm_sse2_cos_precise(mxcsr, x87control_3, xmm0_10))
    int32_t var_5c = 0
    int32_t var_58 = 0
    int32_t var_54 = 0x3f800000
    float xmm3_4[0x4] = data_57252c
    float var_64 = xmm1_1 * arg2[1]
    float var_74 = xmm1_1 * *arg2
    float var_68 = xmm0_13 * *arg2
    int32_t xmm2_6 = (xmm0_13 * arg2[1]) ^ (data_59e5c0.o).d
    float var_6c = var_c4
    float var_60 = var_c0
    float xmm0_24 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0x55) - 0.5f
    int32_t var_70 = xmm2_6
    int128_t xmm2_7 = data_57251c
    int128_t var_100
    __builtin_memcpy(&var_100, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x00", 
        0x20)
    var_100:8.d = 0xbf000000
    int128_t var_f0
    var_f0:4.d = xmm0_24
    int128_t var_50 = var_100
    float xmm3_6 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0x55) + 0.5f
    var_100 = xmm2_7
    var_100:8.d = 0x3f000000
    int128_t var_40 = var_f0
    int128_t xmm0_27 = var_100
    int32_t var_30 = 0x3f800000
    int32_t var_90 = 0x3f800000
    xmm3_4[1] = xmm3_6
    int128_t var_b0 = xmm0_27
    float var_a0[0x4] = xmm3_4
    sub_412bf0(&var_74, &var_b0, &var_100, &var_74)
    int32_t result
    int32_t result_1 = result
    var_b0 = var_100
    float var_a0_1[0x4] = xmm3_4
    sub_412bf0(&var_50, &var_b0, &var_100, &var_50)
    *arg3 = var_100
    arg3[1] = xmm3_4
    arg3[2].d = result
    @__security_check_cookie@4(eax_1 ^ &var_108)
    return result
}
