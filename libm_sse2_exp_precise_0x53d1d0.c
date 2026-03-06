// 函数名称: __libm_sse2_exp_precise
// 虚拟地址: 0x53d1d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__libm_sse2_exp_precise(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, int64_t arg3 @ xmm0)
{
    // 第一条实际指令: int64_t var_8
    int64_t var_8
    
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
            double xmm0[0x2] = _mm_unpacklo_pd(arg3, arg3)
            double xmm1[0x2] = data_59ea90
            double xmm6[0x2] = data_59ea70
            double xmm2[0x2] = data_59eaa0
            double xmm3[0x2] = data_59eab0
            int32_t eax_3 = _mm_extract_epi16(xmm0, 3) & 0x7fff
            double var_12
            int32_t edx_7
            int32_t xmm0_10[0x4]
            
            if (((0x408f - eax_3) | (eax_3 - 0x3c90)) u>= 0x80000000)
                int32_t eax_13 = arg1 & 0x7fffffff
                
                if (eax_13 u< 0x40900000)
                    return eax_13
                
                if (eax_13 u>= 0x7ff00000)
                    if (eax_13 u> 0x7ff00000 || var_8.d != 0)
                        _mm_or_pd(xmm0, 0x8000000000000)
                        return eax_13
                    
                    return arg1
                
                if (arg1 u>= 0x80000000)
                    xmm0_10 = 2.2250738585072014e-308 * 2.2250738585072014e-308
                    edx_7 = 0xf
                else
                    xmm0_10 = 1.7976931348623157e+308 * 1.7976931348623157e+308
                    edx_7 = 0xe
            else
                double xmm1_2[0x2] = _mm_add_pd(_mm_mul_pd(xmm1, xmm0), xmm6)
                double xmm1_3[0x2] = _mm_sub_pd(xmm1_2, xmm6)
                double xmm2_1[0x2] = _mm_mul_pd(xmm2, xmm1_3)
                double xmm4_1[0x2] = data_59eac0
                double xmm3_1[0x2] = _mm_mul_pd(xmm3, xmm1_3)
                double xmm5_1[0x2] = data_59ead0
                int32_t eax_5 = xmm1_2
                int32_t eax_6 = eax_5 s>> 6
                double xmm0_2[0x2] = _mm_sub_pd(_mm_sub_pd(xmm0, xmm2_1), xmm3_1)
                double xmm2_2[0x2] = *(((eax_5 & 0x3f) << 4) + 0x5a0f20)
                double xmm4_2[0x2] = _mm_mul_pd(xmm4_1, xmm0_2)
                double xmm1_4 = xmm0_2[0]
                double xmm0_3 = _mm_mul_pd(xmm0_2, xmm0_2)
                double xmm5_2[0x2] = _mm_add_pd(xmm5_1, xmm4_2)
                double xmm2_3[0x2] = _mm_unpackhi_pd(xmm2_2, xmm2_2)
                uint64_t xmm7_4[0x2] =
                    _mm_slli_epi64(_mm_add_epi64(xmm1_2 & data_59ea50, data_59ea60), 0x2e)
                double xmm0_5[0x2] = _mm_mul_pd(xmm0_3 * xmm0_3, xmm5_2)
                uint64_t xmm2_4[0x2] = _mm_or_pd(xmm2_3, xmm7_4)
                double xmm0_7 = _mm_unpackhi_pd(xmm0_5, xmm0_5) + xmm1_4 f+ xmm2_2 f+ xmm0_5
                
                if (eax_6 + 0x37e u<= 0x77c)
                    return eax_6
                
                int16_t x87status_2
                int16_t temp0_2
                temp0_2, x87status_2 = __fnstcw_memmem16(arg2)
                int32_t edx_3
                edx_3.w = temp0_2
                edx_3.w |= 0x300
                int16_t x87control
                int16_t x87status_3
                x87control, x87status_3 = __fldcw_memmem16(edx_3.w)
                int32_t eax_7 = eax_6 s>> 1
                double xmm6_5 =
                    _mm_or_pd(data_59ea40 & not.o(xmm2_4), _mm_slli_epi64(zx.o(eax_7 + 0x3ff), 0x34))
                int64_t xmm4_4 = _mm_slli_epi64(zx.o(eax_6 - eax_7 + 0x3ff), 0x34)
                int16_t var_1a_1
                var_1a_1.q = xmm0_7
                var_12 = xmm6_5
                long double x87_r6_1 = fconvert.t(var_12)
                long double x87_r7_3 = fconvert.t(var_1a_1.q) * x87_r6_1 + x87_r6_1
                var_1a_1.q = xmm4_4
                var_1a_1.q = fconvert.d(x87_r7_3 * fconvert.t(var_1a_1.q))
                xmm0_10 = var_1a_1.q
                int16_t x87control_1
                int16_t x87status_4
                x87control_1, x87status_4 = __fldcw_memmem16(temp0_2)
                int32_t ecx_5 = _mm_extract_epi16(xmm0_10, 3) & 0x7ff0
                
                if (ecx_5 u>= 0x7ff0)
                    edx_7 = 0xe
                else
                    if (ecx_5 != 0)
                        return eax_7 + 0x3ff
                    
                    edx_7 = 0xf
            
            var_12 = xmm0_10
            return sub_534d94(&var_8, &var_8, &var_12:2, edx_7)
    
    var_8 = arg3
    int32_t eax_14 = sub_53f22b()
    long double x87_r0
    var_8 = fconvert.d(x87_r0)
    return eax_14
}
