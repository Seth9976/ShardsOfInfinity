// 函数名称: __libm_sse2_tan_precise
// 虚拟地址: 0x53e810
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

double (*__libm_sse2_tan_precise(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, int64_t arg3 @ xmm0))[0x2]
{
    // 第一条实际指令: int32_t eax_1 = arg1 & 0x7f80
    int32_t eax_1 = arg1 & 0x7f80
    bool cond:0 = eax_1 != 0x1f80
    
    if (eax_1 == 0x1f80)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        eax_1.w = temp0_1
        eax_1.w &= 0x7f
        cond:0 = eax_1.w != 0x7f
    
    if (not(cond:0))
        uint16_t eax_2 = (_mm_extract_epi16(arg3, 3) & 0x7fff) - 0x3820
        
        if (eax_2 u<= 0x8a8)
            double xmm0[0x2] = _mm_unpacklo_pd(arg3, arg3)
            double xmm1_1[0x2] = _mm_mul_pd(data_59ee80, xmm0)
            double xmm2[0x2] = data_59ee90
            double xmm1_2[0x2] = _mm_add_pd(xmm1_1, xmm2)
            double xmm3_1[0x2] = data_59eea0
            double xmm1_3[0x2] = _mm_sub_pd(xmm1_2, xmm2)
            double xmm4[0x2] = data_59eeb0
            double xmm3_2[0x2] = _mm_mul_pd(xmm3_1, xmm1_3)
            int32_t edx_2 = (int.d(xmm1_1) + 0x72900) & 0x1f
            double xmm4_1[0x2] = _mm_mul_pd(xmm4, xmm1_3)
            int32_t ecx_1 = edx_2 << 1
            double xmm0_1[0x2] = _mm_sub_pd(xmm0, xmm3_2)
            double xmm1_4[0x2] = __mulpd_xmmpd_mempd(xmm1_3, data_59eec0)
            double xmm0_2[0x2] = _mm_sub_pd(xmm0_1, xmm4_1)
            double xmm5_2 =
                __andpd_xmmxuq_memxuq(6.7164665968574641e-14 f* xmm1_3 f+ xmm0_1, data_59eee0)
            double xmm3_3 = xmm0_2[0]
            double xmm2_2[0x2] = _mm_sub_pd(xmm0_1, xmm0_2)
            double xmm0_3[0x2] = _mm_unpackhi_pd(xmm0_2, xmm0_2)
            double xmm2_3[0x2] = _mm_sub_pd(xmm2_2, xmm4_1)
            double xmm7_1[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1b80), xmm0_3)
            double xmm2_4 = _mm_sub_pd(xmm2_3, xmm1_4)
            double xmm1_6[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1ba0), xmm0_3)
            double xmm4_3[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1bd0), xmm0_3)
            double xmm2_5[0x2] = xmm2_4 + xmm3_3 - xmm5_2
            double xmm0_4[0x2] = _mm_mul_pd(xmm0_3, xmm0_3)
            double xmm7_2[0x2] = __addpd_xmmpd_mempd(xmm7_1, *(0x5a1b70 + ((ecx_1 * 5 + edx_2) << 4)))
            double xmm1_8[0x2] = _mm_mul_pd(
                __addpd_xmmpd_mempd(xmm1_6, *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1b90)), xmm0_4)
            double xmm4_4[0x2] = __addpd_xmmpd_mempd(xmm4_3, *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1bc0))
            double xmm7_3[0x2] = _mm_add_pd(xmm7_2, xmm1_8)
            double xmm1_10[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1be0), xmm0_4)
            double xmm0_5[0x2] = _mm_mul_pd(xmm0_4, xmm0_4)
            double xmm4_5[0x2] = _mm_add_pd(xmm4_4, xmm1_10)
            double xmm7_4[0x2] =
                _mm_add_pd(xmm7_3, _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1bb0), xmm0_5))
            double xmm3_6[0x2] = _mm_mul_pd(xmm0_3, xmm0_5)
            double xmm1_14[0x2] = __mulpd_xmmpd_mempd(xmm0_3, *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1c00))
            double xmm7_5[0x2] = _mm_add_pd(xmm7_4, _mm_mul_pd(xmm4_5, xmm3_6))
            _mm_unpackhi_pd(xmm7_5, xmm7_5)
            _mm_unpackhi_pd(xmm1_14, xmm1_14)
            double xmm7_7 = *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1c00)
            double xmm2_6 = _mm_unpackhi_pd(xmm2_5, xmm2_5)
            (xmm7_7 + *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1c08)) * xmm2_6
                + *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1bf8)
            _mm_and_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1c18), 1.0 / xmm5_2)
                - *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1bf0)
            *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1c10)
            return 0x5a1b70 + ((ecx_1 * 5 + edx_2) << 4)
        
        if (eax_2 s<= 0x8a8)
            return eax_2 u>> 4
    
    int16_t var_8
    var_8.q = arg3
    int32_t result
    int80_t st0
    st0, result = sub_53f49f()
    var_8.q = fconvert.d(st0)
    return result
}
