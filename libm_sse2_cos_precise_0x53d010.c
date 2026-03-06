// 函数名称: __libm_sse2_cos_precise
// 虚拟地址: 0x53d010
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

double*__libm_sse2_cos_precise(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, double arg3 @ xmm0)
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
        int16_t eax_2 = (_mm_extract_epi16(arg3, 3) & 0x7fff) - 0x3030
        
        if (eax_2 u<= 0x10c5)
            double xmm1 = 10.185916357881302 * arg3
            double xmm1_2[0x2] = xmm1 + 6755399441055744.0 - 6755399441055744.0
            double xmm2[0x2] = data_59e9d0
            double xmm3 = 0.098174770420882851 f* xmm1_2
            double xmm1_3[0x2] = _mm_unpacklo_pd(xmm1_2, xmm1_2)
            double xmm5[0x2] = data_59e9b0
            double xmm2_1[0x2] = _mm_mul_pd(xmm2, xmm1_3)
            double xmm0[0x2] = arg3 - xmm3
            *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0728)
            double xmm0_1[0x2] = _mm_unpacklo_pd(xmm0, xmm0)
            double xmm5_1[0x2] = _mm_mul_pd(xmm5, xmm0_1)
            double xmm0_2[0x2] = _mm_sub_pd(xmm0_1, xmm2_1)
            double xmm6[0x2] = data_59e990
            double xmm5_2[0x2] = _mm_mul_pd(xmm5_1, xmm0_2)
            double xmm0_3[0x2] = _mm_mul_pd(xmm0_2, xmm0_2)
            double xmm2_3 = (*(0x5a0720 + (((int.d(xmm1) + 0x1c7610) & 0x3f) << 5))).q f+
                *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0738)
            double xmm6_1[0x2] = _mm_mul_pd(xmm6, xmm0_3)
            double xmm2_5[0x2] = _mm_mul_pd(xmm2_3 * (arg3.q - xmm3 f- xmm2_1), xmm0_3)
            double xmm0_4[0x2] = _mm_mul_pd(xmm0_3, xmm0_3)
            double xmm5_3[0x2] = __addpd_xmmpd_mempd(xmm5_2, data_59e9a0)
            *(0x5a0720 + (((int.d(xmm1) + 0x1c7610) & 0x3f) << 5))
            double xmm6_2[0x2] = __addpd_xmmpd_mempd(xmm6_1, *"UUUUUU")
            double xmm5_4[0x2] = _mm_mul_pd(xmm5_3, xmm0_4)
            *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0728)
            double xmm6_3[0x2] = _mm_add_pd(xmm6_2, xmm5_4)
            *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0728)
            *((((int.d(xmm1) + 0x1c7610) & 0x3f) << 5) + 0x5a0730)
            double xmm6_4[0x2] = _mm_mul_pd(xmm6_3, xmm2_5)
            _mm_unpackhi_pd(xmm6_4, xmm6_4)
            return 0x5a0720 + (((int.d(xmm1) + 0x1c7610) & 0x3f) << 5)
        
        if (eax_2 s<= 0x10c5)
            uint32_t eax_4
            eax_4.w = _mm_extract_epi16(arg3, 3).w & 0x7fff
            _mm_insert_epi16(arg3, eax_4, 3)
            return eax_4
    
    int16_t var_8
    var_8.q = arg3
    int32_t eax_5
    int80_t st0
    st0, eax_5 = sub_53f14f()
    var_8.q = fconvert.d(st0)
    return eax_5
}
