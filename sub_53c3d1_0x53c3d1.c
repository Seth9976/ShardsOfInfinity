// 函数名称: sub_53c3d1
// 虚拟地址: 0x53c3d1
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_53c3d1(int16_t arg1 @ x87control, uint128_t arg2 @ xmm0, uint64_t arg3[0x2] @ xmm6)
{
    // 第一条实际指令: int32_t ecx_1 = 1
    int32_t ecx_1 = 1
    int32_t eax_1 = _mm_bsrli_si128(arg2, 4) & 0x7fffffff
    
    if (eax_1 u< 0x7ff00000 && not(arg2 f>= 0x43e0000000000000))
        arg3 = -0x3c20000000000000
        
        if (not(arg2 f< arg3))
            uint64_t xmm1_4[0x2] = _mm_srli_epi64(_mm_slli_epi64(arg2, 1), 1)
            
            if (ecx_1 != 1)
                uint128_t xmm2_7 = 0x380ffffff0000000
                
                if (not(xmm1_4 f> xmm2_7) && not(xmm1_4 f== _mm_xor_pd(xmm2_7, xmm2_7)))
                    int32_t var_4_1 = eax_1
                    int16_t x87status_1
                    int16_t temp0_1
                    temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
                    var_4_1.w = temp0_1
                    eax_1.w = var_4_1.w
                    
                    if ((eax_1.w & 0x10) == 0)
                        __ftol3_except(ecx_1, 2, arg1, arg2.q)
                        return 
            
            uint64_t xmm6_3[0x2] = _mm_xor_pd(arg3, arg3)
            
            if (not(xmm1_4 f== xmm6_3))
                int32_t xmm5_1[0x4] = 0x433
                double xmm6_1[0x2] = _mm_cmpeq_sd(arg2.q, xmm1_4, 0)
                int32_t xmm2_11[0x4] = (xmm1_4 & 0xfffffffffffff) | 0x10000000000000
                uint64_t xmm1_7[0x2] = _mm_srli_epi64(xmm1_4, 0x34)
                uint64_t xmm3_4[0x2] = _mm_sll_epi64(xmm2_11, _mm_sub_epi64(xmm1_7, xmm5_1))
                int32_t xmm4_8[0x4] = _mm_sub_epi64(xmm5_1, xmm1_7)
                uint64_t xmm7_2[0x2] = _mm_srl_epi64(xmm2_11, xmm4_8)
                int32_t xmm1_8[0x4] = _mm_cmpgt_epi32(xmm1_7, xmm5_1)
                int32_t xmm1_9[0x4] = _mm_unpacklo_epi32(xmm1_8, xmm1_8)
                int32_t xmm1_11[0x4] = (xmm1_9 & not.o(xmm7_2)) | (xmm3_4 & xmm1_9)
                xmm6_3 = (xmm6_1 & not.o(_mm_sub_epi64(zx.o(0), xmm1_11))) | (xmm1_11 & xmm6_1)
                
                if (xmm4_8 s> 0)
                    uint128_t xmm2_12 = xmm2_11 ^ _mm_sll_epi64(xmm7_2, xmm4_8)
                    
                    if ((xmm2_12 | _mm_bsrli_si128(xmm2_12, 4)) != 0)
                        __ftol3_except(ecx_1, 0x10, arg1, arg2.q)
            
            _mm_bsrli_si128(xmm6_3, 4)
            return 
    
    __ftol3_except(ecx_1, 8, arg1, arg2.q)
}
