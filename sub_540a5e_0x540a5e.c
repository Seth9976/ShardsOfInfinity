// 函数名称: sub_540a5e
// 虚拟地址: 0x540a5e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

double (*sub_540a5e(int32_t arg1[0x4] @ xmm0))[0x2]
{
    // 第一条实际指令: uint16_t eax = (_mm_extract_epi16(arg1, 3) & 0x7fff) - 0x3820
    uint16_t eax = (_mm_extract_epi16(arg1, 3) & 0x7fff) - 0x3820
    
    if (eax u> 0x8a8)
        if (eax s> 0x8a8)
            return sub_53f49f() __tailcall
        
        double var_c_1 = (36028797018963968.0 f* arg1 f+ arg1) * 2.7755575615628914e-17
        return eax u>> 4
    
    double xmm0[0x2] = _mm_unpacklo_pd(arg1, arg1)
    double xmm1_1[0x2] = _mm_mul_pd(data_5a36b0, xmm0)
    double xmm2[0x2] = data_5a36c0
    double xmm1_2[0x2] = _mm_add_pd(xmm1_1, xmm2)
    double xmm3_1[0x2] = data_5a36d0
    double xmm1_3[0x2] = _mm_sub_pd(xmm1_2, xmm2)
    double xmm4[0x2] = data_5a36e0
    double xmm3_2[0x2] = _mm_mul_pd(xmm3_1, xmm1_3)
    int32_t edx_2 = (int.d(xmm1_1) + 0x72900) & 0x1f
    double xmm4_1[0x2] = _mm_mul_pd(xmm4, xmm1_3)
    int32_t ecx_1 = edx_2 << 1
    double xmm0_1[0x2] = _mm_sub_pd(xmm0, xmm3_2)
    double xmm1_4[0x2] = __mulpd_xmmpd_mempd(xmm1_3, data_5a36f0)
    double xmm0_2[0x2] = _mm_sub_pd(xmm0_1, xmm4_1)
    double xmm5_2 = __andpd_xmmxuq_memxuq(6.7164665968574641e-14 f* xmm1_3 f+ xmm0_1, data_5a3710)
    double xmm3_3 = xmm0_2[0]
    double xmm2_2[0x2] = _mm_sub_pd(xmm0_1, xmm0_2)
    double xmm0_3[0x2] = _mm_unpackhi_pd(xmm0_2, xmm0_2)
    uint64_t xmm6[0x2] = 1.0 / xmm5_2
    double xmm2_3[0x2] = _mm_sub_pd(xmm2_2, xmm4_1)
    double xmm7_1[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1b80), xmm0_3)
    double xmm2_4 = _mm_sub_pd(xmm2_3, xmm1_4)
    double xmm1_6[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1ba0), xmm0_3)
    double xmm4_3[0x2] = _mm_mul_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1bd0), xmm0_3)
    double xmm2_5[0x2] = xmm2_4 + xmm3_3 - xmm5_2
    double xmm0_4[0x2] = _mm_mul_pd(xmm0_3, xmm0_3)
    double xmm7_2[0x2] = __addpd_xmmpd_mempd(xmm7_1, *(0x5a1b70 + ((ecx_1 * 5 + edx_2) << 4)))
    double xmm1_8[0x2] =
        _mm_mul_pd(__addpd_xmmpd_mempd(xmm1_6, *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1b90)), xmm0_4)
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
    double xmm0_8 = xmm0_5 f* xmm0_5 f* xmm7_5 + _mm_unpackhi_pd(xmm7_5, xmm7_5)
    double xmm1_15 = _mm_unpackhi_pd(xmm1_14, xmm1_14)
    double xmm3_8 = xmm1_14.q f+ xmm1_15
    double xmm7_7 = *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1c00)
    double xmm2_6 = _mm_unpackhi_pd(xmm2_5, xmm2_5)
    double xmm7_10 = (xmm7_7 + *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1c08)) * xmm2_6
        + *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1bf8)
    double xmm2_8 = _mm_and_pd(*(((ecx_1 * 5 + edx_2) << 4) + 0x5a1c18), xmm6)
    double xmm2_9 = xmm2_8 - *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1bf0)
    double xmm3_9 = xmm3_8 - xmm2_9
    double xmm0_11 = xmm0_8 + xmm7_10 + xmm1_15 + xmm1_14.q f- xmm3_8 + xmm3_8 - (xmm2_9 + xmm3_9)
        - (1.0 - xmm5_2 * xmm2_8 - xmm2_5.q f* xmm6) * xmm6 f* *(((ecx_1 * 5 + edx_2) << 4) + 0x5a1c10)
    double var_c = xmm0_11 + xmm3_9
    return 0x5a1b70 + ((ecx_1 * 5 + edx_2) << 4)
}
