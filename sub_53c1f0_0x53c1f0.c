// 函数名称: sub_53c1f0
// 虚拟地址: 0x53c1f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_53c1f0(int16_t arg1 @ x87control, float arg2 @ xmm0)
{
    // 第一条实际指令: int32_t ecx = 1
    int32_t ecx = 1
    int32_t eax_1 = arg2 & 0x7fffffff
    
    if (eax_1 u< 0x7f800000)
        arg2 = fconvert.d(arg2)
        
        if (not(arg2 f>= 0x43e0000000000000))
            uint128_t xmm6_1 = -0x3c20000000000000
            
            if (not(arg2 f< xmm6_1))
                uint64_t xmm1_2[0x2] = _mm_srli_epi64(_mm_slli_epi64(arg2, 1), 1)
                
                if (ecx != 1)
                    uint128_t xmm2_2 = 0x380ffffff0000000
                    
                    if (not(xmm1_2 f> xmm2_2) && not(xmm1_2 f== _mm_xor_pd(xmm2_2, xmm2_2)))
                        int32_t var_4_1 = eax_1
                        int16_t x87status_1
                        int16_t temp0_1
                        temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
                        var_4_1.w = temp0_1
                        eax_1.w = var_4_1.w
                        
                        if ((eax_1.w & 0x10) == 0)
                            __ftol3_except(ecx, 2, arg1, arg2.q)
                            return 
                
                uint64_t xmm6_2[0x2] = _mm_xor_pd(xmm6_1, xmm6_1)
                
                if (not(xmm1_2 f== xmm6_2))
                    int32_t xmm5_1[0x4] = 0x433
                    double xmm6_4[0x2] = _mm_cmpeq_sd(arg2.q, xmm1_2, 0)
                    int32_t xmm2_6[0x4] = (xmm1_2 & 0xfffffffffffff) | 0x10000000000000
                    uint64_t xmm1_3[0x2] = _mm_srli_epi64(xmm1_2, 0x34)
                    uint64_t xmm3_3[0x2] = _mm_sll_epi64(xmm2_6, _mm_sub_epi64(xmm1_3, xmm5_1))
                    int32_t xmm4_5[0x4] = _mm_sub_epi64(xmm5_1, xmm1_3)
                    uint64_t xmm7_2[0x2] = _mm_srl_epi64(xmm2_6, xmm4_5)
                    int32_t xmm1_4[0x4] = _mm_cmpgt_epi32(xmm1_3, xmm5_1)
                    int32_t xmm1_5[0x4] = _mm_unpacklo_epi32(xmm1_4, xmm1_4)
                    int32_t xmm1_7[0x4] = (xmm1_5 & not.o(xmm7_2)) | (xmm3_3 & xmm1_5)
                    xmm6_2 = (xmm6_4 & not.o(_mm_sub_epi64(zx.o(0), xmm1_7))) | (xmm1_7 & xmm6_4)
                    
                    if (xmm4_5 s> 0)
                        uint128_t xmm2_7 = xmm2_6 ^ _mm_sll_epi64(xmm7_2, xmm4_5)
                        
                        if ((xmm2_7 | _mm_bsrli_si128(xmm2_7, 4)) != 0)
                            __ftol3_except(ecx, 0x10, arg1, arg2.q)
                
                _mm_bsrli_si128(xmm6_2, 4)
                return 
    
    __ftol3_except(ecx, 8, arg1, arg2.q)
}
