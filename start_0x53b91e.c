// 函数名称: start
// 虚拟地址: 0x53b91e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublestart(double arg1[0x2] @ xmm0, double arg2)
{
    // 第一条实际指令: int32_t edx = 0
    int32_t edx = 0
    double var_c
    void* eax_2
    uint32_t ecx_1
    double xmm0_4[0x2]
    double xmm0_5[0x2]
    double xmm6_4[0x2]
    int64_t xmm7_1
    
    while (true)
        double xmm0[0x2] = _mm_unpacklo_pd(arg1, arg1)
        ecx_1 = _mm_extract_epi16(_mm_srli_epi64(arg1, 0x34), 0)
        double xmm2_1[0x2] = data_554e20
        double xmm4_1[0x2] = data_554e30
        uint64_t xmm6_1[0x2] = data_554e40
        uint64_t xmm0_2[0x2] = _mm_or_pd(_mm_and_pd(xmm0, data_554e10), data_554e80)
        eax_2 = _mm_extract_epi16(_mm_add_pd(xmm4_1, xmm0_2), 0) & 0x7f0
        double xmm4_3[0x2] = *(eax_2 + 0x555320)
        xmm7_1 = (*(eax_2 + 0x554f10)).q
        uint64_t xmm6_2[0x2] = _mm_and_pd(xmm6_1, xmm0_2)
        double xmm0_3[0x2] = _mm_sub_pd(xmm0_2, xmm6_2)
        xmm6_4 = _mm_sub_pd(_mm_mul_pd(xmm6_2, xmm4_3), xmm2_1)
        xmm0_4 = _mm_mul_pd(xmm0_3, xmm4_3)
        xmm0_5 = _mm_add_pd(xmm0_4, xmm6_4)
        
        if ((ecx_1 & 0xfff) - 1 u<= 0x7fd)
            break
        
        double xmm0_11 = arg2
        double xmm1_10[0x2] = _mm_cmpeq_sd((data_554e90).q, xmm0_11, 0)
        int32_t edx_2
        
        if (_mm_extract_epi16(xmm1_10, 0) u> 0)
            xmm1_10 = -0x10000000000000
            edx_2 = 8
        label_53bb2d:
            var_c = xmm1_10
            sub_534d94(&arg2, &arg2, &var_c, edx_2)
            return fconvert.t(var_c)
        
        if ((ecx_1 & 0xfff) != 0)
            if ((ecx_1 & 0xfff) - 1 u> 0x7fe)
                int32_t eax_7
                
                if ((ecx_1 & 0x7ff) u>= 0x7ff)
                    uint64_t xmm2_9[0x2] = arg2
                    eax_7 = xmm2_9 | (_mm_srli_epi64(xmm2_9, 0x20) & 0xfffff)
                
                if ((ecx_1 & 0x7ff) u< 0x7ff || eax_7 == 0)
                    double xmm1_11 = _mm_xor_pd(xmm1_10, xmm1_10)
                    xmm1_10 = xmm1_11 / xmm1_11
                    edx_2 = 9
                else
                    edx_2 = 0x3e9
            else
                xmm1_10 = data_554e10
                uint64_t xmm2_6[0x2] = data_554e80
                
                if (_mm_extract_epi16(
                        _mm_cmpeq_sd(xmm2_6, _mm_or_pd(_mm_and_pd(arg2, xmm1_10), xmm2_6), 0), 0) != 0)
                    return fconvert.t(inf.0)
                
                edx_2 = 0x3e9
            
            goto label_53bb2d
        
        arg1 = xmm0_11 * 4503599627370496.0
        edx = 0xffffffcc
    
    int32_t ecx_5 = (ecx_1 & 0xfff) - 0x3ff + edx
    double xmm6_5[0x2] = float.d(ecx_5)
    double xmm6_6[0x2] = _mm_unpacklo_pd(xmm6_5, xmm6_5)
    void* const edx_1 = nullptr
    
    if (eax_2 + (ecx_5 << 0xa) == 0)
        edx_1 = 0x10
    
    double xmm2_2[0x2] = data_554ee0
    double xmm1_3[0x2] = _mm_mul_pd(data_554ed0, xmm0_5)
    double xmm3_3 = _mm_mul_pd(xmm0_5, xmm0_5)
    double xmm1_4[0x2] = _mm_add_pd(xmm1_3, xmm2_2)
    double xmm2_3[0x2] = data_554ef0
    double xmm6_7[0x2] = _mm_mul_pd(xmm6_6, data_554e50)
    uint64_t xmm4_5[0x2] = _mm_and_pd(xmm0_4, *(edx_1 + 0x554e60))
    double xmm7_4[0x2] = _mm_add_pd(_mm_add_pd(xmm7_1 f+ xmm6_4, xmm6_7), xmm4_5)
    double xmm1_6[0x2] = _mm_add_pd(_mm_mul_pd(xmm1_4, xmm0_5), xmm2_3)
    double xmm2_5[0x2] = _mm_mul_pd(data_554f00, xmm0_5)
    double xmm6_9 = _mm_unpackhi_pd(xmm7_4, xmm7_4)
    double xmm1_7[0x2] = _mm_mul_pd(xmm1_6, xmm3_3 * xmm3_3 f* xmm0_5)
    double xmm1_8 = _mm_add_pd(xmm1_7, xmm2_5)
    var_c = _mm_unpackhi_pd(xmm1_7, xmm1_7) + xmm1_8 + xmm6_9 f+ xmm7_4
    return fconvert.t(var_c)
}
