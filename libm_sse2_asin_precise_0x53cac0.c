// 函数名称: __libm_sse2_asin_precise
// 虚拟地址: 0x53cac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__libm_sse2_asin_precise(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, double arg3 @ xmm0, uint64_t arg4[0x2] @ xmm5, int64_t arg5 @ xmm6)
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
                    _mm_xor_pd(*((((xmm0 & 0xfffc) - 0xfb00) << 2) + &data_59f000), 
                        _mm_shuffle_epi32(_mm_slli_epi64(_mm_srli_epi64(xmm2_1, 0x3f), 0x3f), 0x44)), 
                    0xee)
                return (0x7ffff & xmm0) - 0x3fb00
            
            if ((0x7ffff & xmm0) - 0x3febb u< 0x43)
                double xmm3_6 = 1.0 - xmm1 f* xmm1
                uint64_t xmm3_7[0x2] = _mm_sqrt_sd(xmm3_6, xmm3_6)
                uint32_t eax_5 = _mm_movemask_epi8(xmm7)
                uint64_t xmm0_7[0x2] = _mm_slli_epi64(xmm0_1, 1)
                double xmm7_3 = __andpd_xmmxuq_memxuq(xmm7, *0x59e8e0)
                double xmm0_8 = _mm_srli_epi64(xmm0_7, 1)
                double xmm1_8 = xmm0_8 - xmm7_3
                uint64_t xmm2_5[0x2] = _mm_and_pd(-0x400000000000, xmm3_7)
                uint32_t edx_4 = _mm_extract_epi16(_mm_slli_epi64(xmm3_7, 2), 3)
                double xmm2_6 = _mm_or_pd(xmm2_5, xmm5_1)
                int32_t edx_6 = (edx_4 - 0xfec0) * 2
                double xmm7_6 = xmm3_7.q f* *((edx_6 << 2) + &data_59ff00)
                double xmm6_9 = xmm7_3 * xmm2_6 - xmm7_6 + xmm1_8 * xmm2_6
                double xmm3_10[0x2] = __subpd_xmmpd_mempd(data_59e8b0, *((edx_6 << 3) + &data_59f000))
                double xmm6_10 = xmm6_9 * xmm6_9
                int32_t eax_7 = (eax_5 & 0x80) << 8
                double xmm1_11 = xmm6_9 * xmm6_10
                int32_t xmm6_11[0x4] = _mm_insert_epi16(zx.o(0), eax_7, 3)
                double xmm0_15 =
                    (0.044642857142857144 * xmm6_10 + 0.074999999999999997) * xmm1_11 * xmm6_10
                    + 0.16666666666666666 * xmm1_11 f+ xmm3_10
                    - (1.0 - xmm7_3 * xmm7_3 - xmm2_6 * xmm2_6 - (xmm0_8 + xmm7_3) * xmm1_8)
                    / (xmm7_6 + xmm7_6 + xmm6_9)
                _mm_or_pd(xmm0_15 + _mm_shuffle_epi32(xmm3_10, 0xee), xmm6_11)
                return eax_7
            
            if ((0x7ffff & xmm0) - 0x3c300 u< 0x3800)
                double xmm7_9[0x2] = _mm_unpacklo_pd(xmm7, xmm7)
                double xmm6_12[0x2] = data_59e900
                double xmm1_13[0x2] = _mm_unpacklo_pd(xmm1, xmm7_9)
                double xmm2_8[0x2] = data_59e910
                double xmm4_8[0x2] = data_59e920
                double xmm7_10[0x2] = _mm_mul_pd(xmm7_9, xmm7_9)
                double xmm1_14 = _mm_mul_pd(xmm1_13, xmm7_10)
                double xmm6_13[0x2] = _mm_mul_pd(xmm6_12, xmm7_10)
                double xmm7_11[0x2] = _mm_mul_pd(xmm7_10, xmm7_10)
                _mm_shuffle_epi32(
                    _mm_mul_pd(xmm1_14 * xmm1_14 * xmm1_14, 
                        _mm_add_pd(_mm_add_pd(xmm6_13, xmm2_8), _mm_mul_pd(xmm4_8, xmm7_11))), 
                    0xee)
                return (0x7ffff & xmm0) - 0x3c300
            
            if ((0x7ffff & xmm0) - 0x3fefe u>= 2)
                if ((0x7ffff & xmm0) u< 0x3ff00)
                    int32_t xmm0_35[0x4] = var_8
                    double xmm6_25 = _mm_xor_pd(arg5, arg5)
                    
                    if ((_mm_extract_epi16(xmm0_35, 3) & 0x7ff0) - 0x10 u>= 0x7fe0)
                        _mm_or_pd(xmm0_35, xmm6_25 f+ xmm0_35)
                    
                    return 0x7ffff & xmm0
                
                uint64_t xmm0_28[0x2] = _mm_srli_epi64(xmm0_1, 0x20)
                int32_t eax_14 = (0x3ff00000 - (xmm0_28 & 0x7fffffff)) | xmm0_1
                
                if (eax_14 == 0)
                    _mm_or_pd(1.5707963267948966 + 6.123233995736766e-17, 
                        _mm_andnot_pd(0x7fffffffffffffff, xmm7))
                    return eax_14
                
                uint64_t xmm2_17[0x2] = var_8
                int32_t edx_11
                double xmm0_30
                
                if (sbb.d(_mm_srli_epi64(xmm2_17, 0x20) & 0x7fffffff, 0x7ff00000, xmm2_17 u< 1) s>= 0)
                    xmm0_30 = var_8 + _mm_xor_pd(arg5, arg5)
                    edx_11 = 0x3f1
                else
                    uint64_t xmm1_27[0x2] = _mm_xor_pd(xmm1, xmm1)
                    xmm0_30 = _mm_xor_pd(xmm0_28, xmm0_28) * _mm_insert_epi16(xmm1_27, 0x7ff0, 3)
                    edx_11 = 0x3d
                
                double var_10 = xmm0_30
                return sub_534d94(&var_8, &var_8, &var_10, edx_11)
            
            double xmm3_13 = 1.0 - xmm1 f* xmm1
            double xmm3_14[0x2] = _mm_sqrt_sd(xmm3_13, xmm3_13)
            uint32_t eax_10 = _mm_extract_epi16(xmm7, 3)
            double xmm7_12 = __andpd_xmmxuq_memxuq(xmm7, data_59e8d0)
            double xmm5_6 = _mm_shuffle_epi32(xmm3_14, 0x44)
            double xmm3_15 = __andpd_xmmxuq_memxuq(xmm3_14, data_59e8d0)
            double xmm0_19 = xmm0_1 f- xmm7_12
            double xmm6_17 = xmm3_15 - xmm5_6
            uint32_t xmm5_7[0x4] = xmm5_6 + xmm5_6
            double xmm2_10[0x2] = data_59e900
            uint32_t xmm3_17[0x4] = _mm_shuffle_epi32(xmm5_7, 0xee)
            uint32_t xmm7_14[0x4] = _mm_shuffle_epi32(xmm3_17, 0xee)
            uint32_t xmm6_18[0x4] = _mm_shuffle_epi32(xmm7_14, 0xee)
            int64_t xmm1_23 = (*"$rxxx").q
            double xmm5_10[0x2] = data_59e910
            double xmm0_21[0x2] = data_59e920
            double xmm7_15[0x2] = _mm_mul_pd(xmm7_14, xmm7_14)
            int64_t xmm3_19 = xmm6_18.q
            double xmm2_11[0x2] = _mm_mul_pd(xmm2_10, xmm7_15)
            double xmm6_19 = _mm_mul_pd(xmm6_18, xmm7_15)
            uint32_t eax_11 = eax_10 & 0x8000
            uint32_t xmm1_24[0x4] = xmm1_23 f* xmm7_15
            double xmm7_16[0x2] = _mm_mul_pd(xmm7_15, xmm7_15)
            double xmm5_11[0x2] = _mm_add_pd(xmm5_10, xmm2_11)
            double xmm6_20 = xmm6_19 * xmm6_19
            double xmm7_17[0x2] = _mm_mul_pd(xmm7_16, xmm0_21)
            uint32_t xmm0_22[0x4] = data_59e8b0
            double xmm2_13[0x2] = xmm6_19 * xmm6_20
            double xmm7_18[0x2] = _mm_add_pd(xmm7_17, xmm5_11)
            uint32_t xmm5_12[0x4] = _mm_shuffle_epi32(xmm1_24, 0xee)
            double xmm7_19[0x2] = _mm_mul_pd(xmm7_18, xmm2_13)
            uint64_t xmm5_13[0x2] = _mm_xor_pd(xmm5_12, xmm5_12)
            double xmm2_14 = _mm_shuffle_epi32(xmm7_19, 0xee)
            double xmm6_22 = _mm_shuffle_epi32(xmm0_22, 0xee)
            double xmm3_20 = xmm3_19 f- xmm6_22
            double xmm7_21 = xmm7_19 f+ xmm2_14 + (1.0 - xmm7_12 * xmm7_12
                - (xmm7_12 + xmm7_12) * xmm0_19 - xmm3_15 * xmm3_15 - xmm0_19 * xmm0_19
                + (xmm5_7 f+ xmm6_17) * xmm6_17) / (xmm3_17 f+ xmm3_17)
            _mm_or_pd(
                xmm0_22 f+ (xmm1_24 f+ xmm5_12) * xmm6_20 f* xmm2_13 - xmm7_21
                    - (xmm3_19 - (xmm6_22 + xmm3_20)) - xmm3_20, 
                _mm_insert_epi16(xmm5_13, eax_11, 3))
            return eax_11
    
    var_8 = arg3
    int32_t eax_16
    long double st0
    st0, eax_16 = sub_53f03f()
    var_8 = fconvert.d(st0)
    return eax_16
}
