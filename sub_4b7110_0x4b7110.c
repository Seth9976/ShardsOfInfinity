// 函数名称: sub_4b7110
// 虚拟地址: 0x4b7110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_4b7110(int32_t arg1, int32_t arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: float var_48
    float var_48
    int32_t eax_1 = __security_cookie ^ &var_48
    int32_t xmm0 = arg3[0xb]
    float xmm0_1 = arg3[1]
    int64_t xmm2_1 = _mm_unpacklo_ps(arg3[3], arg3[7])
    float xmm1_1 = *arg3
    *(arg4 + 0x14) = xmm2_1
    arg4[7] = xmm0
    float xmm0_3 = arg3[2]
    int32_t edx
    int32_t mxcsr
    int16_t x87control
    double xmm0_6
    edx, xmm0_6 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
        _mm_cvtps_pd(xmm1_1 * xmm1_1 + xmm0_1 * xmm0_1 + xmm0_3 * xmm0_3))
    float xmm0_7 = fconvert.s(xmm0_6)
    float xmm7 = *arg3
    float xmm6 = 1f / xmm0_7
    float xmm5 = arg3[4]
    float xmm4 = arg3[5]
    float xmm3 = arg3[6]
    float xmm2_2 = arg3[8]
    float xmm1_5 = arg3[9]
    *arg4 = xmm0_7
    var_48 = arg3[1] f* xmm6
    float xmm0_11 = arg3[2] f* xmm6
    float xmm0_13 = arg3[0xa] f* xmm6
    float var_2c = var_48
    float var_30 = xmm7 * xmm6
    float var_28 = xmm0_11
    float var_24 = xmm5 * xmm6
    float var_20 = xmm4 * xmm6
    float var_1c = xmm3 * xmm6
    float var_18 = xmm2_2 * xmm6
    float var_14 = xmm1_5 * xmm6
    float var_10 = xmm0_13
    float var_40
    *(arg4 + 4) = *sub_412db0(&var_40, edx, &var_30, &var_40)
    @__security_check_cookie@4(eax_1 ^ &var_48)
    return arg4
}
