// 函数名称: sub_5400ee
// 虚拟地址: 0x5400ee
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

double*sub_5400ee(int32_t arg1[0x4] @ xmm0)
{
    // 第一条实际指令: int16_t eax = (_mm_extract_epi16(arg1, 3) & 0x7fff) - 0x3030
    int16_t eax = (_mm_extract_epi16(arg1, 3) & 0x7fff) - 0x3030
    
    if (eax u> 0x10c5)
        if (eax s> 0x10c5)
            return sub_53f14f() __tailcall
        
        uint32_t result
        result.w = _mm_extract_epi16(arg1, 3).w & 0x7fff
        double var_c_1 = 1.0 - _mm_insert_epi16(arg1, result, 3)
        return result
    
    double xmm1 = 10.185916357881302 f* arg1
    double xmm1_2[0x2] = xmm1 + 6755399441055744.0 - 6755399441055744.0
    double xmm2[0x2] = data_5a33c0
    double xmm3 = 0.098174770420882851 f* xmm1_2
    double xmm1_3[0x2] = _mm_unpacklo_pd(xmm1_2, xmm1_2)
    double xmm5[0x2] = data_5a33a0
    double xmm2_1[0x2] = _mm_mul_pd(xmm2, xmm1_3)
    double xmm0[0x2] = arg1 f- xmm3
    double xmm4_1 = arg1.q - xmm3
    double xmm7 = *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0728)
    double xmm0_1[0x2] = _mm_unpacklo_pd(xmm0, xmm0)
    double xmm4_2 = xmm4_1 f- xmm2_1
    double xmm5_1[0x2] = _mm_mul_pd(xmm5, xmm0_1)
    double xmm0_2[0x2] = _mm_sub_pd(xmm0_1, xmm2_1)
    double xmm6[0x2] = data_5a3380
    double xmm5_2[0x2] = _mm_mul_pd(xmm5_1, xmm0_2)
    double xmm0_3[0x2] = _mm_mul_pd(xmm0_2, xmm0_2)
    double xmm3_4 = *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0738)
    double xmm2_3 = (*(0x5a0720 + (((int.d(xmm1) + 0x1c7610) & 0x3f) << 5))).q f+ xmm3_4
    double xmm6_1[0x2] = _mm_mul_pd(xmm6, xmm0_3)
    double xmm3_5 = xmm3_4 * xmm4_2
    double xmm2_5[0x2] = _mm_mul_pd(xmm2_3 * xmm4_2, xmm0_3)
    double xmm0_4[0x2] = _mm_mul_pd(xmm0_3, xmm0_3)
    double xmm5_3[0x2] = __addpd_xmmpd_mempd(xmm5_2, data_5a3390)
    double xmm4_3 = xmm4_2 * *(0x5a0720 + (((int.d(xmm1) + 0x1c7610) & 0x3f) << 5))
    double xmm6_2[0x2] = __addpd_xmmpd_mempd(xmm6_1, *"UUUUUU")
    double xmm5_4[0x2] = _mm_mul_pd(xmm5_3, xmm0_4)
    double xmm3_6 = xmm3_5 f+ *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0728)
    double xmm4_4 = xmm4_3 + xmm3_6
    double xmm6_3[0x2] = _mm_add_pd(xmm6_2, xmm5_4)
    double xmm5_6 = *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0728) - xmm3_6
    double xmm1_7 = (xmm1_3 f* 1.2639164054974691e-22 - (xmm4_1 - xmm4_2 f- xmm2_1))
        * (xmm7 * xmm4_2 - xmm2_3) f+ *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0730)
    double xmm6_4[0x2] = _mm_mul_pd(xmm6_3, xmm2_5)
    double var_c = xmm4_4 + xmm1_7 + xmm5_6 + xmm3_5 + xmm3_6 - xmm4_4 + xmm4_3 f+ xmm6_4
        + _mm_unpackhi_pd(xmm6_4, xmm6_4)
    return 0x5a0720 + (((int.d(xmm1) + 0x1c7610) & 0x3f) << 5)
}
