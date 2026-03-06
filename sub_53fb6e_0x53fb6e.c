// 函数名称: sub_53fb6e
// 虚拟地址: 0x53fb6e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_53fb6e(uint64_t arg1[0x2] @ xmm0, uint64_t arg2[0x2] @ xmm5, int64_t arg3 @ xmm6, double arg4)
{
    // 第一条实际指令: uint64_t xmm5[0x2] = _mm_xor_pd(arg2, arg2)
    uint64_t xmm5[0x2] = _mm_xor_pd(arg2, arg2)
    double xmm1[0x2] = arg1.q
    int32_t xmm0 = _mm_srli_epi64(arg1, 0x2c)
    uint64_t xmm7[0x2] = xmm1.q
    int32_t xmm5_1[0x4] = _mm_insert_epi16(xmm5, 0x2000, 2)
    uint64_t xmm0_1[0x2] = xmm1.q
    double var_c
    
    if ((0x7ffff & xmm0) - 0x3fb00 u< 0x3bb)
        double xmm3 = 1.0 - xmm1 f* xmm1
        double xmm3_1 = _mm_sqrt_sd(xmm3, xmm3)
        uint64_t xmm2[0x2] = _mm_and_pd(-0x400000000000, xmm7)
        double xmm1_2 = *((((xmm0 & 0xfffc) - 0xfb00) << 1) + &data_59ff00)
        uint64_t xmm2_1[0x2] = _mm_or_pd(xmm2, xmm5_1)
        double xmm6_1 = xmm7.q f* xmm1_2
        double xmm3_2 = xmm3_1 f* xmm2_1
        double xmm1_4 = xmm6_1 - xmm3_2
        double xmm1_5 = xmm1_4 * xmm1_4
        double xmm3_4 = xmm1_4 * xmm1_5
        uint64_t xmm4_1[0x2] = _mm_xor_pd(*((((xmm0 & 0xfffc) - 0xfb00) << 2) + &data_59f000), 
            _mm_shuffle_epi32(_mm_slli_epi64(_mm_srli_epi64(xmm2_1, 0x3f), 0x3f), 0x44))
        var_c = (xmm0_1 f- xmm2_1) * (xmm7 f+ xmm2_1) / (xmm6_1 + xmm3_2)
            + (0.074999999999999997 + 0.044642857142857144 * xmm1_5) * xmm3_4 * xmm1_5
            + 0.16666666666666666 * xmm3_4 f+ xmm4_1 + _mm_shuffle_epi32(xmm4_1, 0xee)
        return fconvert.t(var_c)
    
    if ((0x7ffff & xmm0) - 0x3febb u< 0x43)
        double xmm3_6 = 1.0 - xmm1 f* xmm1
        uint64_t xmm3_7[0x2] = _mm_sqrt_sd(xmm3_6, xmm3_6)
        uint32_t eax_3 = _mm_movemask_epi8(xmm7)
        uint64_t xmm0_7[0x2] = _mm_slli_epi64(xmm0_1, 1)
        double xmm7_3 = __andpd_xmmxuq_memxuq(xmm7, *0x5a32d0)
        double xmm0_8 = _mm_srli_epi64(xmm0_7, 1)
        double xmm1_8 = xmm0_8 - xmm7_3
        uint64_t xmm2_5[0x2] = _mm_and_pd(-0x400000000000, xmm3_7)
        uint32_t edx_4 = _mm_extract_epi16(_mm_slli_epi64(xmm3_7, 2), 3)
        double xmm2_6 = _mm_or_pd(xmm2_5, xmm5_1)
        int32_t edx_6 = (edx_4 - 0xfec0) * 2
        double xmm7_6 = xmm3_7.q f* *((edx_6 << 2) + &data_59ff00)
        double xmm6_9 = xmm7_3 * xmm2_6 - xmm7_6 + xmm1_8 * xmm2_6
        double xmm3_10[0x2] = __subpd_xmmpd_mempd(data_5a32a0, *((edx_6 << 3) + &data_59f000))
        double xmm6_10 = xmm6_9 * xmm6_9
        double xmm1_11 = xmm6_9 * xmm6_10
        int32_t xmm6_11[0x4] = _mm_insert_epi16(zx.o(0), (eax_3 & 0x80) << 8, 3)
        double xmm0_15 = (0.044642857142857144 * xmm6_10 + 0.074999999999999997) * xmm1_11 * xmm6_10
            + 0.16666666666666666 * xmm1_11 f+ xmm3_10
            - (1.0 - xmm7_3 * xmm7_3 - xmm2_6 * xmm2_6 - (xmm0_8 + xmm7_3) * xmm1_8)
            / (xmm7_6 + xmm7_6 + xmm6_9)
        var_c = _mm_or_pd(xmm0_15 + _mm_shuffle_epi32(xmm3_10, 0xee), xmm6_11)
        return fconvert.t(var_c)
    
    if ((0x7ffff & xmm0) - 0x3c300 u< 0x3800)
        double xmm7_9[0x2] = _mm_unpacklo_pd(xmm7, xmm7)
        double xmm6_12[0x2] = data_5a32f0
        double xmm1_13[0x2] = _mm_unpacklo_pd(xmm1, xmm7_9)
        double xmm2_8[0x2] = data_5a3300
        double xmm4_7[0x2] = data_5a3310
        double xmm7_10[0x2] = _mm_mul_pd(xmm7_9, xmm7_9)
        double xmm1_14 = _mm_mul_pd(xmm1_13, xmm7_10)
        double xmm6_13[0x2] = _mm_mul_pd(xmm6_12, xmm7_10)
        double xmm7_11[0x2] = _mm_mul_pd(xmm7_10, xmm7_10)
        double xmm1_17[0x2] = _mm_mul_pd(xmm1_14 * xmm1_14 * xmm1_14, 
            _mm_add_pd(_mm_add_pd(xmm6_13, xmm2_8), _mm_mul_pd(xmm4_7, xmm7_11)))
        var_c = xmm0_1 f+ xmm1_17 f+ _mm_shuffle_epi32(xmm1_17, 0xee)
        return fconvert.t(var_c)
    
    if ((0x7ffff & xmm0) - 0x3fefe u>= 2)
        if ((0x7ffff & xmm0) u< 0x3ff00)
            int32_t xmm0_35[0x4] = arg4
            double xmm6_25 = _mm_xor_pd(arg3, arg3)
            
            if ((_mm_extract_epi16(xmm0_35, 3) & 0x7ff0) - 0x10 u>= 0x7fe0)
                xmm0_35 = _mm_or_pd(xmm0_35, xmm6_25 f+ xmm0_35)
            
            var_c = xmm0_35
            return fconvert.t(var_c)
        
        uint64_t xmm0_28[0x2] = _mm_srli_epi64(xmm0_1, 0x20)
        
        if (((0x3ff00000 - (xmm0_28 & 0x7fffffff)) | xmm0_1) == 0)
            var_c = _mm_or_pd(1.5707963267948966 + 6.123233995736766e-17, 
                _mm_andnot_pd(0x7fffffffffffffff, xmm7))
            return fconvert.t(var_c)
        
        uint64_t xmm2_17[0x2] = arg4
        int32_t edx_11
        double xmm0_30
        
        if (sbb.d(_mm_srli_epi64(xmm2_17, 0x20) & 0x7fffffff, 0x7ff00000, xmm2_17 u< 1) s>= 0)
            xmm0_30 = arg4 + _mm_xor_pd(arg3, arg3)
            edx_11 = 0x3f1
        else
            uint64_t xmm1_27[0x2] = _mm_xor_pd(xmm1, xmm1)
            xmm0_30 = _mm_xor_pd(xmm0_28, xmm0_28) * _mm_insert_epi16(xmm1_27, 0x7ff0, 3)
            edx_11 = 0x3d
        
        var_c = xmm0_30
        sub_534d94(&arg4, &arg4, &var_c, edx_11)
        var_c = var_c
        return fconvert.t(var_c)
    
    double xmm3_13 = 1.0 - xmm1 f* xmm1
    double xmm3_14[0x2] = _mm_sqrt_sd(xmm3_13, xmm3_13)
    uint32_t eax_8 = _mm_extract_epi16(xmm7, 3)
    double xmm7_12 = __andpd_xmmxuq_memxuq(xmm7, data_5a32c0)
    double xmm5_6 = _mm_shuffle_epi32(xmm3_14, 0x44)
    double xmm3_15 = __andpd_xmmxuq_memxuq(xmm3_14, data_5a32c0)
    double xmm0_19 = xmm0_1 f- xmm7_12
    double xmm6_17 = xmm3_15 - xmm5_6
    uint32_t xmm5_7[0x4] = xmm5_6 + xmm5_6
    double xmm2_10[0x2] = data_5a32f0
    uint32_t xmm3_17[0x4] = _mm_shuffle_epi32(xmm5_7, 0xee)
    uint32_t xmm7_14[0x4] = _mm_shuffle_epi32(xmm3_17, 0xee)
    uint32_t xmm6_18[0x4] = _mm_shuffle_epi32(xmm7_14, 0xee)
    int64_t xmm1_23 = (*"$rxxx").q
    double xmm5_10[0x2] = data_5a3300
    double xmm0_21[0x2] = data_5a3310
    double xmm7_15[0x2] = _mm_mul_pd(xmm7_14, xmm7_14)
    int64_t xmm3_19 = xmm6_18.q
    double xmm2_11[0x2] = _mm_mul_pd(xmm2_10, xmm7_15)
    double xmm6_19 = _mm_mul_pd(xmm6_18, xmm7_15)
    uint32_t xmm1_24[0x4] = xmm1_23 f* xmm7_15
    double xmm7_16[0x2] = _mm_mul_pd(xmm7_15, xmm7_15)
    double xmm5_11[0x2] = _mm_add_pd(xmm5_10, xmm2_11)
    double xmm6_20 = xmm6_19 * xmm6_19
    double xmm7_17[0x2] = _mm_mul_pd(xmm7_16, xmm0_21)
    uint32_t xmm0_22[0x4] = data_5a32a0
    double xmm2_13[0x2] = xmm6_19 * xmm6_20
    double xmm7_18[0x2] = _mm_add_pd(xmm7_17, xmm5_11)
    uint32_t xmm5_12[0x4] = _mm_shuffle_epi32(xmm1_24, 0xee)
    double xmm7_19[0x2] = _mm_mul_pd(xmm7_18, xmm2_13)
    uint64_t xmm5_13[0x2] = _mm_xor_pd(xmm5_12, xmm5_12)
    double xmm2_14 = _mm_shuffle_epi32(xmm7_19, 0xee)
    double xmm6_22 = _mm_shuffle_epi32(xmm0_22, 0xee)
    double xmm3_20 = xmm3_19 f- xmm6_22
    double xmm7_21 = xmm7_19 f+ xmm2_14 + (1.0 - xmm7_12 * xmm7_12 - (xmm7_12 + xmm7_12) * xmm0_19
        - xmm3_15 * xmm3_15 - xmm0_19 * xmm0_19 + (xmm5_7 f+ xmm6_17) * xmm6_17) / (xmm3_17 f+ xmm3_17)
    var_c = _mm_or_pd(
        xmm0_22 f+ (xmm1_24 f+ xmm5_12) * xmm6_20 f* xmm2_13 - xmm7_21 - (xmm3_19 - (xmm6_22 + xmm3_20))
            - xmm3_20, 
        _mm_insert_epi16(xmm5_13, eax_8 & 0x8000, 3))
    return fconvert.t(var_c)
}
