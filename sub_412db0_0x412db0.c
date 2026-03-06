// 函数名称: sub_412db0
// 虚拟地址: 0x412db0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_412db0(int32_t arg1, int32_t arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: int32_t* var_c = arg3
    int32_t* var_c = arg3
    float xmm2 = *arg3
    float xmm1 = arg3[4]
    float xmm0 = arg3[8]
    float xmm4_1 = xmm2 + xmm1
    float xmm3_1 = xmm4_1 + xmm0
    int32_t mxcsr
    int16_t x87control
    
    if (not(xmm3_1 f<= 0))
        float xmm1_1 =
            fconvert.s(__libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtps_pd(xmm3_1 + 1f)))
        float xmm2_1 = 0.5f / xmm1_1
        arg4[3] = xmm1_1 * 0.5f
        *arg4 = (arg3[7] f- arg3[5]) * xmm2_1
        arg4[1] = (arg3[2] f- arg3[6]) * xmm2_1
        arg4[2] = (arg3[3] f- arg3[1]) * xmm2_1
        return arg4
    
    if (xmm1 <= xmm2)
        if (xmm0 <= xmm2)
            uint32_t eax_5
            double xmm0_45
            eax_5, xmm0_45 =
                __libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtps_pd(xmm2 - (xmm0 + xmm1) + 1f))
            float xmm1_6 = fconvert.s(xmm0_45)
            *arg4 = xmm1_6 * 0.5f
            xmm1_6 f- 0
            eax_5:1.b = (xmm1_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_6, 0f) ? 1 : 0) << 2
                | (xmm1_6 < 0f ? 1 : 0)
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (p_5)
                xmm1_6 = 0.5f / xmm1_6
            
            arg4[3] = (arg3[7] f- arg3[5]) * xmm1_6
            arg4[1] = (arg3[3] f+ arg3[1]) * xmm1_6
            arg4[2] = (arg3[6] f+ arg3[2]) * xmm1_6
            return arg4
    else if (not(xmm0 > xmm1))
        uint32_t eax_1
        double xmm0_16
        eax_1, xmm0_16 =
            __libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtps_pd(xmm1 - (xmm0 + xmm2) + 1f))
        float xmm1_4 = fconvert.s(xmm0_16)
        arg4[1] = xmm1_4 * 0.5f
        xmm1_4 f- 0
        eax_1:1.b = (xmm1_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_4, 0f) ? 1 : 0) << 2
            | (xmm1_4 < 0f ? 1 : 0)
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            xmm1_4 = 0.5f / xmm1_4
        
        arg4[3] = (arg3[2] f- arg3[6]) * xmm1_4
        arg4[2] = (arg3[7] f+ arg3[5]) * xmm1_4
        *arg4 = (arg3[3] f+ arg3[1]) * xmm1_4
        return arg4
    
    uint32_t eax_3
    double xmm0_31
    eax_3, xmm0_31 = __libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtps_pd(xmm0 - xmm4_1 + 1f))
    float xmm1_5 = fconvert.s(xmm0_31)
    arg4[2] = xmm1_5 * 0.5f
    xmm1_5 f- 0
    eax_3:1.b =
        (xmm1_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_5, 0f) ? 1 : 0) << 2 | (xmm1_5 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        xmm1_5 = 0.5f / xmm1_5
    
    arg4[3] = (arg3[3] f- arg3[1]) * xmm1_5
    *arg4 = (arg3[6] f+ arg3[2]) * xmm1_5
    arg4[1] = (arg3[7] f+ arg3[5]) * xmm1_5
    return arg4
}
