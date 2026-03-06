// 函数名称: start
// 虚拟地址: 0x53f60e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublestart(uint64_t arg1[0x2] @ xmm0, uint64_t arg2[0x2] @ xmm5, int64_t arg3 @ xmm6, double arg4)
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
        double xmm4_2[0x2] = __subpd_xmmpd_mempd(
            _mm_xor_pd(*((((xmm0 & 0xfffc) - 0xfb00) << 2) + &data_59f000), 
                _mm_shuffle_epi32(_mm_slli_epi64(_mm_srli_epi64(xmm2_1, 0x3f), 0x3f), 0x44)), 
            data_5a3180)
        var_c = (-0.044642857142857144 * xmm1_5 + -0.074999999999999997) * xmm3_4 * xmm1_5
            + -0.16666666666666666 * xmm3_4 f- xmm4_2
            - (xmm7 f+ xmm2_1) * (xmm0_1 f- xmm2_1) / (xmm6_1 + xmm3_2)
            - _mm_shuffle_epi32(xmm4_2, 0xee)
        return fconvert.t(var_c)
    
    if ((0x7ffff & xmm0) - 0x3febb u< 0x41)
        double xmm7_5 = _mm_slli_epi64(_mm_srli_epi64(xmm7, 0x26), 0x26)
        uint32_t eax_3 = _mm_movemask_epi8(xmm0_1)
        double xmm1_6 = xmm1 f- xmm7_5
        uint64_t xmm5_4[0x2] = _mm_or_pd(xmm5_1, _mm_andnot_pd(0x7fffffffffffffff, xmm0_1))
        double xmm3_6 = 1.0 - xmm7_5 * xmm7_5
        double xmm0_10 = (xmm0_1 f+ xmm7_5) * xmm1_6
        double xmm3_7 = xmm3_6 - xmm0_10
        double xmm3_8[0x2] = _mm_sqrt_sd(xmm3_7, xmm3_7)
        int32_t eax_6 = neg.d((eax_3 & 0x80) u>> 7)
        uint64_t xmm2_5[0x2] = _mm_and_pd(-0x400000000000, xmm3_8)
        uint32_t edx_4 = _mm_extract_epi16(_mm_slli_epi64(xmm3_8, 2), 3)
        double xmm2_6 = _mm_or_pd(xmm2_5, xmm5_4)
        uint32_t xmm3_11[0x4] = _mm_shuffle_epi32(zx.o(eax_6), 0)
        int32_t edx_6 = (edx_4 - 0xfec0) * 2
        double xmm7_8 = xmm3_8.q f* *((edx_6 << 2) + &data_59ff00)
        double xmm6_6 = xmm7_5 * xmm2_6 - xmm7_8 + xmm1_6 * xmm2_6
        double xmm4_8 = (xmm3_6 - xmm2_6 * xmm2_6 - xmm0_10) / (xmm7_8 + xmm7_8 + xmm6_6)
        double xmm3_13[0x2] = __addpd_xmmpd_mempd(__andpd_xmmxuq_memxuq(xmm3_11, data_5a3190), 
            *((edx_6 << 3) + &data_59f000))
        double xmm6_7 = xmm6_6 * xmm6_6
        double xmm1_9 = xmm6_6 * xmm6_7
        int32_t xmm6_8[0x4] = _mm_insert_epi16(zx.o(0), eax_6 & 0x8000, 3)
        double xmm3_14 = _mm_shuffle_epi32(xmm3_13, 0xee)
        double xmm4_9 = xmm4_8 + xmm3_14
        var_c = _mm_xor_pd(
            (-0.044642857142857144 * xmm6_7 + -0.074999999999999997) * xmm1_9 * xmm6_7
                + -0.16666666666666666 * xmm1_9 f+ xmm3_13 + xmm4_8 + xmm3_14 - xmm4_9 + xmm4_9, 
            xmm6_8)
        return fconvert.t(var_c)
    
    if ((0x7ffff & xmm0) - 0x3c300 u< 0x3800)
        double xmm0_18[0x2] = _mm_unpacklo_pd(xmm0_1, xmm0_1)
        double xmm6_9[0x2] = data_5a3200
        double xmm1_11[0x2] = _mm_unpacklo_pd(xmm1, xmm0_18)
        double xmm2_8[0x2] = data_5a3210
        double xmm4_10[0x2] = data_5a3220
        double xmm0_19[0x2] = _mm_mul_pd(xmm0_18, xmm0_18)
        uint32_t xmm5_9[0x4] = data_5a3180
        double xmm1_12 = _mm_mul_pd(xmm1_11, xmm0_19)
        double xmm6_10[0x2] = _mm_mul_pd(xmm6_9, xmm0_19)
        double xmm0_20[0x2] = _mm_mul_pd(xmm0_19, xmm0_19)
        double xmm6_12[0x2] = _mm_add_pd(_mm_add_pd(xmm6_10, xmm2_8), _mm_mul_pd(xmm4_10, xmm0_20))
        double xmm0_21 = _mm_shuffle_epi32(xmm5_9, 0xee)
        double xmm1_15[0x2] = _mm_mul_pd(xmm1_12 * xmm1_12 * xmm1_12, xmm6_12)
        double xmm6_13 = _mm_shuffle_epi32(xmm5_9, 0xee)
        double xmm0_22 = xmm0_21 f- xmm7
        var_c = xmm0_22 + xmm5_9 f- xmm1_15 - _mm_shuffle_epi32(xmm1_15, 0xee)
            - (xmm7 f- (xmm6_13 - xmm0_22))
        return fconvert.t(var_c)
    
    if ((0x7ffff & xmm0) - 0x3fefc u>= 4)
        if ((0x7ffff & xmm0) u< 0x3ff00)
            var_c = 1.5707963267948966 + 6.123233995736766e-17
            return fconvert.t(var_c)
        
        uint64_t xmm7_17[0x2] = _mm_srli_epi64(xmm7, 0x20)
        
        if (((0x3ff00000 - (xmm7_17 & 0x7fffffff)) | xmm7) == 0)
            uint32_t xmm7_19[0x4] =
                _mm_shuffle_epi32(zx.o(neg.d(_mm_extract_epi16(xmm7_17, 1) u>> 0xf)), 0)
            double xmm2_22 = _mm_and_pd(0x3ca1a62633145c07, xmm7_19)
            var_c = _mm_and_pd(0x400921fb54442d18, xmm7_19) + xmm2_22
            return fconvert.t(var_c)
        
        uint64_t xmm2_20[0x2] = arg4
        int32_t edx_11
        double xmm0_31
        
        if (sbb.d(_mm_srli_epi64(xmm2_20, 0x20) & 0x7fffffff, 0x7ff00000, xmm2_20 u< 1) s>= 0)
            xmm0_31 = xmm0_1 f+ _mm_xor_pd(arg3, arg3)
            edx_11 = 0x3f0
        else
            uint64_t xmm1_20[0x2] = _mm_xor_pd(xmm1, xmm1)
            xmm0_31 = _mm_xor_pd(xmm0_1, xmm0_1) * _mm_insert_epi16(xmm1_20, 0x7ff0, 3)
            edx_11 = 0x3a
        
        var_c = xmm0_31
        sub_534d94(&arg4, &arg4, &var_c, edx_11)
        var_c = var_c
        return fconvert.t(var_c)
    
    uint64_t xmm6_15[0x2] = _mm_xor_pd(arg3, arg3)
    double xmm7_12 = __andpd_xmmxuq_memxuq(xmm7, data_5a3240)
    double xmm1_16[0x2] = data_5a3200
    double xmm2_10[0x2] = data_5a3210
    uint32_t xmm4_12[0x4] = 0.5 - xmm7_12 * 0.5
    double xmm3_17[0x2] = data_5a3220
    uint32_t xmm7_14[0x4] = _mm_shuffle_epi32(xmm4_12, 0x44)
    double xmm4_13[0x2] = _mm_sqrt_sd(xmm4_12, xmm4_12)
    double xmm1_17[0x2] = _mm_mul_pd(xmm1_16, xmm7_14)
    uint32_t xmm5_13[0x4] = _mm_shuffle_epi32(xmm7_14, 0x44)
    uint32_t eax_10 = _mm_extract_epi16(xmm0_1, 3)
    double xmm7_15[0x2] = _mm_mul_pd(xmm7_14, xmm7_14)
    double xmm2_11[0x2] = _mm_add_pd(xmm2_10, xmm1_17)
    double xmm3_18[0x2] = _mm_mul_pd(xmm3_17, xmm7_15)
    double xmm0_24[0x2] = _mm_cmpeq_sd(xmm0_1, xmm6_15, 1)
    double xmm2_12 = _mm_add_pd(xmm2_11, xmm3_18)
    uint64_t xmm0_26[0x2] = __andpd_xmmxuq_memxuq(_mm_shuffle_epi32(xmm0_24, 0x44), data_5a3190)
    double xmm2_14[0x2] = _mm_mul_pd(xmm2_12 * xmm7_15 f* xmm5_13, xmm5_13)
    double xmm1_18 = _mm_and_pd(-0x8000000, xmm4_13)
    double xmm3_19 = _mm_shuffle_epi32(xmm4_13, 0x44)
    double xmm4_14 = xmm4_13 f- xmm1_18
    uint32_t xmm3_21[0x4] = xmm3_19 + xmm3_19 - xmm4_14
    uint32_t xmm3_22[0x4] = _mm_shuffle_epi32(xmm3_21, 0xee)
    double xmm3_23[0x2] = _mm_add_pd(xmm3_22, xmm3_22)
    double xmm2_15[0x2] = _mm_mul_pd(xmm2_14, xmm3_23)
    double xmm4_16 = _mm_shuffle_epi32(xmm2_15, 0xee)
    int32_t xmm6_16[0x4] = _mm_insert_epi16(xmm6_15, eax_10 & 0x8000, 3)
    var_c = _mm_xor_pd(
        _mm_shuffle_epi32(xmm0_26, 0xee) + xmm2_15 f+ xmm0_26 + xmm4_16
            + (xmm5_13 f- xmm1_18 * xmm1_18 - xmm4_14 f* xmm3_21) f/ xmm3_22 f+ xmm3_23, 
        xmm6_16)
    return fconvert.t(var_c)
}
