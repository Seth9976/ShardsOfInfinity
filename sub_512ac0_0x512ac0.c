// 函数名称: sub_512ac0
// 虚拟地址: 0x512ac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_512ac0(void* arg1, void* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void* edi = arg4
    void* edi = arg4
    void* i = nullptr
    void* i_2 = nullptr
    
    if (edi s<= 0)
        return arg1
    
    void* edx = arg1
    void* ebx = arg2
    void* esi = arg3
    
    if (edi u>= 0x10 && data_65a2f4 s>= 2)
        i_2 = nullptr
        
        if ((edx u> edi - 1 + esi || edi - 1 + edx u< esi)
                && (edx u> edi - 1 + ebx || edi - 1 + edx u< ebx))
            void* eax_10 = edi & 0x8000000f
            
            if (eax_10 s< 0)
                eax_10 = ((eax_10 - 1) | 0xfffffff0) + 1
            
            int32_t xmm2_1[0x4] = data_59e000
            int32_t xmm3_1[0x4] = data_59ded0
            void* edi_4 = edx - esi
            void* edi_5 = edx + 4
            uint128_t xmm4_1 = 2
            void* eax_13 = esi
            void* esi_2 = ebx - edx
            
            do
                uint8_t xmm0_1[0x4] = *(ebx - esi + eax_13)
                eax_13 += 0x10
                uint32_t xmm1_1[0x4] = _mm_cvtepu8_epi32(xmm0_1)
                edi_5 += 0x10
                uint32_t xmm0_3[0x4] = _mm_cvtepu8_epi32(*(eax_13 - 0x10))
                int16_t xmm0_7[0x8] = _mm_shuffle_epi32(
                    _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_sra_epi32(
                                _mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(xmm1_1, xmm2_1), xmm0_3), 
                                    xmm3_1), 
                                xmm4_1), 
                            0xd8), 
                        0xd8), 
                    0xd8) & data_59e2c0
                *(edi_4 + eax_13 - 0x10) = _mm_packus_epi16(xmm0_7, xmm0_7)
                uint32_t xmm1_6[0x4] = _mm_cvtepu8_epi32(*(esi_2 + edi_5 - 0x10))
                uint32_t xmm0_11[0x4] = _mm_cvtepu8_epi32(*(eax_13 - 0xc))
                int16_t xmm0_15[0x8] = _mm_shuffle_epi32(
                    _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_sra_epi32(
                                _mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(xmm1_6, xmm2_1), xmm0_11), 
                                    xmm3_1), 
                                xmm4_1), 
                            0xd8), 
                        0xd8), 
                    0xd8) & data_59e2c0
                *(edi_5 - 0x10) = _mm_packus_epi16(xmm0_15, xmm0_15)
                uint32_t xmm1_11[0x4] = _mm_cvtepu8_epi32(*(ebx + 0xc + i - 4))
                int32_t xmm0_19[0x4] = _mm_cvtepu8_epi32(*(eax_13 - 8))
                int16_t xmm0_23[0x8] = _mm_shuffle_epi32(
                    _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_sra_epi32(
                                _mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(xmm1_11, xmm2_1), xmm0_19), 
                                    xmm3_1), 
                                xmm4_1), 
                            0xd8), 
                        0xd8), 
                    0xd8) & data_59e2c0
                *(edi_5 - 0xc) = _mm_packus_epi16(xmm0_23, xmm0_23)
                uint8_t xmm0_25[0x4] = *(ebx + 0xc + i)
                i += 0x10
                edx = arg1
                uint32_t xmm1_16[0x4] = _mm_cvtepu8_epi32(xmm0_25)
                uint32_t xmm0_27[0x4] = _mm_cvtepu8_epi32(*(eax_13 - 4))
                int16_t xmm0_31[0x8] = _mm_shuffle_epi32(
                    _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_sra_epi32(
                                _mm_add_epi32(_mm_add_epi32(_mm_mullo_epi32(xmm1_16, xmm2_1), xmm0_27), 
                                    xmm3_1), 
                                xmm4_1), 
                            0xd8), 
                        0xd8), 
                    0xd8) & data_59e2c0
                *(edi_5 - 8) = _mm_packus_epi16(xmm0_31, xmm0_31)
            while (i s< edi - eax_10)
            
            edi = arg4
            ebx = arg2
            esi = arg3
            i_2 = i
    
    if (i s>= edi)
        return edx
    
    void* ecx = i + esi
    void* i_3 = edi - i_2
    void* i_1
    
    do
        uint32_t eax_15 = zx.d(*(ebx - esi + ecx))
        ecx += 1
        *(edx - esi + ecx - 1) = ((zx.d(*(ecx - 1)) + 2 + eax_15 * 3) u>> 2).b
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    return arg1
}
