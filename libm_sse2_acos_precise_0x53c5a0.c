// 函数名称: __libm_sse2_acos_precise
// 虚拟地址: 0x53c5a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__libm_sse2_acos_precise(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, double arg3 @ xmm0, uint64_t arg4[0x2] @ xmm5, int64_t arg5 @ xmm6)
{
    // 第一条实际指令: double var_8
    double var_8
    
    if ((arg1 & 0x7f80) == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        var_8.w = temp0_1
        int32_t eax_1
        eax_1.w = var_8.w
        eax_1.w &= 0x7f
        
        if (eax_1.w == 0x7f)
            var_8 = arg3
            uint64_t xmm5[0x2] = _mm_xor_pd(arg4, arg4)
            double xmm1[0x2] = arg3.q
            int32_t xmm0 = _mm_srli_epi64(arg3, 0x2c)
            uint64_t xmm7[0x2] = xmm1.q
            int32_t xmm5_1[0x4] = _mm_insert_epi16(xmm5, 0x2000, 2)
            uint64_t xmm0_1[0x2] = xmm1.q
            
            if ((0x7ffff & xmm0) - 0x3fb00 u< 0x3bb)
                double xmm3 = 1.0 - xmm1 f* xmm1
                _mm_sqrt_sd(xmm3, xmm3)
                uint64_t xmm2[0x2] = _mm_and_pd(-0x400000000000, xmm7)
                *((((xmm0 & 0xfffc) - 0xfb00) << 1) + &data_59ff00)
                uint64_t xmm2_1[0x2] = _mm_or_pd(xmm2, xmm5_1)
                _mm_shuffle_epi32(
                    __subpd_xmmpd_mempd(
                        _mm_xor_pd(*((((xmm0 & 0xfffc) - 0xfb00) << 2) + &data_59f000), 
                            _mm_shuffle_epi32(_mm_slli_epi64(_mm_srli_epi64(xmm2_1, 0x3f), 0x3f), 
                                0x44)), 
                        data_59e790), 
                    0xee)
                return (0x7ffff & xmm0) - 0x3fb00
            
            if ((0x7ffff & xmm0) - 0x3febb u< 0x41)
                double xmm7_5 = _mm_slli_epi64(_mm_srli_epi64(xmm7, 0x26), 0x26)
                uint32_t eax_5 = _mm_movemask_epi8(xmm0_1)
                double xmm1_6 = xmm1 f- xmm7_5
                uint64_t xmm5_4[0x2] = _mm_or_pd(xmm5_1, _mm_andnot_pd(0x7fffffffffffffff, xmm0_1))
                double xmm3_6 = 1.0 - xmm7_5 * xmm7_5
                double xmm0_10 = (xmm0_1 f+ xmm7_5) * xmm1_6
                double xmm3_7 = xmm3_6 - xmm0_10
                double xmm3_8[0x2] = _mm_sqrt_sd(xmm3_7, xmm3_7)
                int32_t eax_8 = neg.d((eax_5 & 0x80) u>> 7)
                uint64_t xmm2_5[0x2] = _mm_and_pd(-0x400000000000, xmm3_8)
                uint32_t edx_4 = _mm_extract_epi16(_mm_slli_epi64(xmm3_8, 2), 3)
                double xmm2_6 = _mm_or_pd(xmm2_5, xmm5_4)
                uint32_t xmm3_11[0x4] = _mm_shuffle_epi32(zx.o(eax_8), 0)
                int32_t edx_6 = (edx_4 - 0xfec0) * 2
                double xmm7_8 = xmm3_8.q f* *((edx_6 << 2) + &data_59ff00)
                double xmm6_6 = xmm7_5 * xmm2_6 - xmm7_8 + xmm1_6 * xmm2_6
                double xmm4_8 = (xmm3_6 - xmm2_6 * xmm2_6 - xmm0_10) / (xmm7_8 + xmm7_8 + xmm6_6)
                double xmm3_13[0x2] = __addpd_xmmpd_mempd(__andpd_xmmxuq_memxuq(xmm3_11, data_59e7a0), 
                    *((edx_6 << 3) + &data_59f000))
                double xmm6_7 = xmm6_6 * xmm6_6
                double xmm1_9 = xmm6_6 * xmm6_7
                uint32_t eax_9 = eax_8 & 0x8000
                int32_t xmm6_8[0x4] = _mm_insert_epi16(zx.o(0), eax_9, 3)
                double xmm3_14 = _mm_shuffle_epi32(xmm3_13, 0xee)
                double xmm4_9 = xmm4_8 + xmm3_14
                _mm_xor_pd(
                    (-0.044642857142857144 * xmm6_7 + -0.074999999999999997) * xmm1_9 * xmm6_7
                        + -0.16666666666666666 * xmm1_9 f+ xmm3_13 + xmm4_8 + xmm3_14 - xmm4_9
                        + xmm4_9, 
                    xmm6_8)
                return eax_9
            
            if ((0x7ffff & xmm0) - 0x3c300 u< 0x3800)
                double xmm0_18[0x2] = _mm_unpacklo_pd(xmm0_1, xmm0_1)
                double xmm6_9[0x2] = data_59e810
                double xmm1_11[0x2] = _mm_unpacklo_pd(xmm1, xmm0_18)
                double xmm2_8[0x2] = data_59e820
                double xmm4_10[0x2] = data_59e830
                double xmm0_19[0x2] = _mm_mul_pd(xmm0_18, xmm0_18)
                uint32_t xmm5_9[0x4] = data_59e790
                double xmm1_12 = _mm_mul_pd(xmm1_11, xmm0_19)
                double xmm6_10[0x2] = _mm_mul_pd(xmm6_9, xmm0_19)
                double xmm0_20[0x2] = _mm_mul_pd(xmm0_19, xmm0_19)
                double xmm6_12[0x2] =
                    _mm_add_pd(_mm_add_pd(xmm6_10, xmm2_8), _mm_mul_pd(xmm4_10, xmm0_20))
                _mm_shuffle_epi32(xmm5_9, 0xee)
                double xmm1_15[0x2] = _mm_mul_pd(xmm1_12 * xmm1_12 * xmm1_12, xmm6_12)
                _mm_shuffle_epi32(xmm5_9, 0xee)
                _mm_shuffle_epi32(xmm1_15, 0xee)
                return (0x7ffff & xmm0) - 0x3c300
            
            if ((0x7ffff & xmm0) - 0x3fefc u>= 4)
                if ((0x7ffff & xmm0) u< 0x3ff00)
                    return 0x7ffff & xmm0
                
                uint64_t xmm7_17[0x2] = _mm_srli_epi64(xmm7, 0x20)
                int32_t eax_16 = (0x3ff00000 - (xmm7_17 & 0x7fffffff)) | xmm7
                
                if (eax_16 == 0)
                    uint32_t xmm7_19[0x4] =
                        _mm_shuffle_epi32(zx.o(neg.d(_mm_extract_epi16(xmm7_17, 1) u>> 0xf)), 0)
                    _mm_and_pd(0x3ca1a62633145c07, xmm7_19)
                    _mm_and_pd(0x400921fb54442d18, xmm7_19)
                    return eax_16
                
                uint64_t xmm2_20[0x2] = var_8
                int32_t edx_11
                double xmm0_31
                
                if (sbb.d(_mm_srli_epi64(xmm2_20, 0x20) & 0x7fffffff, 0x7ff00000, xmm2_20 u< 1) s>= 0)
                    xmm0_31 = xmm0_1 f+ _mm_xor_pd(arg5, arg5)
                    edx_11 = 0x3f0
                else
                    uint64_t xmm1_20[0x2] = _mm_xor_pd(xmm1, xmm1)
                    xmm0_31 = _mm_xor_pd(xmm0_1, xmm0_1) * _mm_insert_epi16(xmm1_20, 0x7ff0, 3)
                    edx_11 = 0x3a
                
                double var_10 = xmm0_31
                return sub_534d94(&var_8, &var_8, &var_10, edx_11)
            
            uint64_t xmm6_15[0x2] = _mm_xor_pd(arg5, arg5)
            double xmm7_12 = __andpd_xmmxuq_memxuq(xmm7, data_59e850)
            double xmm1_16[0x2] = data_59e810
            double xmm2_10[0x2] = data_59e820
            uint32_t xmm4_12[0x4] = 0.5 - xmm7_12 * 0.5
            double xmm3_17[0x2] = data_59e830
            uint32_t xmm7_14[0x4] = _mm_shuffle_epi32(xmm4_12, 0x44)
            double xmm4_13[0x2] = _mm_sqrt_sd(xmm4_12, xmm4_12)
            double xmm1_17[0x2] = _mm_mul_pd(xmm1_16, xmm7_14)
            uint32_t xmm5_13[0x4] = _mm_shuffle_epi32(xmm7_14, 0x44)
            uint32_t eax_12 = _mm_extract_epi16(xmm0_1, 3)
            double xmm7_15[0x2] = _mm_mul_pd(xmm7_14, xmm7_14)
            double xmm2_11[0x2] = _mm_add_pd(xmm2_10, xmm1_17)
            double xmm3_18[0x2] = _mm_mul_pd(xmm3_17, xmm7_15)
            double xmm0_24[0x2] = _mm_cmpeq_sd(xmm0_1, xmm6_15, 1)
            double xmm2_12 = _mm_add_pd(xmm2_11, xmm3_18)
            uint64_t xmm0_26[0x2] = __andpd_xmmxuq_memxuq(_mm_shuffle_epi32(xmm0_24, 0x44), data_59e7a0)
            double xmm2_14[0x2] = _mm_mul_pd(xmm2_12 * xmm7_15 f* xmm5_13, xmm5_13)
            double xmm1_18 = _mm_and_pd(-0x8000000, xmm4_13)
            double xmm3_19 = _mm_shuffle_epi32(xmm4_13, 0x44)
            double xmm4_14 = xmm4_13 f- xmm1_18
            uint32_t xmm3_21[0x4] = xmm3_19 + xmm3_19 - xmm4_14
            uint32_t xmm3_22[0x4] = _mm_shuffle_epi32(xmm3_21, 0xee)
            double xmm3_23[0x2] = _mm_add_pd(xmm3_22, xmm3_22)
            double xmm2_15[0x2] = _mm_mul_pd(xmm2_14, xmm3_23)
            double xmm4_16 = _mm_shuffle_epi32(xmm2_15, 0xee)
            uint32_t eax_13 = eax_12 & 0x8000
            int32_t xmm6_16[0x4] = _mm_insert_epi16(xmm6_15, eax_13, 3)
            _mm_xor_pd(
                _mm_shuffle_epi32(xmm0_26, 0xee) + xmm2_15 f+ xmm0_26 + xmm4_16
                    + (xmm5_13 f- xmm1_18 * xmm1_18 - xmm4_14 f* xmm3_21) f/ xmm3_22 f+ xmm3_23, 
                xmm6_16)
            return eax_13
    
    var_8 = arg3
    int32_t eax_18
    long double st0
    st0, eax_18 = sub_53ef2f()
    var_8 = fconvert.d(st0)
    return eax_18
}
