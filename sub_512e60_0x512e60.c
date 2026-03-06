// 函数名称: sub_512e60
// 虚拟地址: 0x512e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint8_t*sub_512e60(uint8_t* arg1, char* arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: char* edx = arg2
    char* edx = arg2
    int32_t edi = arg4
    void* esi = nullptr
    uint32_t ecx_1 = zx.d(*edx) * 3 + zx.d(*arg3)
    uint32_t var_14 = ecx_1
    
    if (edi == 1)
        uint8_t ecx_3 = ((ecx_1 + 2) u>> 2).b
        arg1[1] = ecx_3
        *arg1 = ecx_3
        return arg1
    
    int32_t eax_5 = (edi - 1) & 0xfffffff8
    
    if (eax_5 s> 0)
        char* edi_1 = arg3
        int16_t xmm5_1[0x8] = data_59e2b0
        uint8_t* var_18_1 = arg1
        uint32_t ecx_5 = var_14
        
        do
            edi_1 = &edi_1[8]
            int32_t xmm3_2[0x4] = _mm_unpacklo_epi8(zx.o(*(edi_1 - 8)), 0)
            int32_t xmm0_2[0x4] = _mm_unpacklo_epi8(zx.o(*(edx - arg3 + edi_1 - 8)), 0)
            int16_t xmm3_3[0x8] = _mm_sub_epi16(xmm3_2, xmm0_2)
            uint16_t xmm0_3[0x8] = _mm_slli_epi16(xmm0_2, 2)
            uint32_t eax_10 = zx.d(*(&edx[7] + esi + 1))
            int16_t xmm3_4[0x8] = _mm_add_epi16(xmm3_3, xmm0_3)
            int32_t xmm2_3[0x4] = _mm_insert_epi16(_mm_slli_si128(xmm3_4, 2), ecx_5, 0)
            uint16_t xmm0_5[0x8] = _mm_slli_epi16(xmm3_4, 2)
            uint32_t eax_11 = zx.d(*edi_1)
            int32_t xmm2_4[0x4] = _mm_sub_epi16(xmm2_3, xmm3_4)
            uint128_t xmm1_2 = _mm_bsrli_si128(xmm3_4, 2)
            uint8_t* eax_12 = var_18_1
            int16_t xmm0_6[0x8] = _mm_add_epi16(xmm0_5, xmm5_1)
            var_18_1 = &var_18_1[0x10]
            int16_t xmm2_5[0x8] = _mm_add_epi16(xmm2_4, xmm0_6)
            int64_t xmm1_5 = _mm_add_epi16(
                _mm_sub_epi16(_mm_insert_epi16(xmm1_2, eax_10 * 3 + eax_11, 7), xmm3_4), xmm0_6)
            int32_t xmm0_8[0x4] = _mm_unpacklo_epi16(xmm2_5, xmm1_5)
            int32_t xmm2_6[0x4] = _mm_unpackhi_epi16(xmm2_5, xmm1_5)
            *eax_12 = _mm_packus_epi16(_mm_srli_epi16(xmm0_8, 4), _mm_srli_epi16(xmm2_6, 4))
            uint32_t eax_14 = zx.d(*(&edx[7] + esi))
            esi += 8
            ecx_5 = eax_14 * 3 + zx.d(edi_1[0xffffffff])
        while (esi s< eax_5)
        
        edx = arg2
        edi = arg4
        var_14 = ecx_5
    
    uint32_t eax_18 = zx.d(*(esi + edx)) * 3 + zx.d(*(esi + arg3))
    arg1[esi << 1] = ((var_14 + (eax_18 << 1) + 8 + eax_18) u>> 4).b
    void* esi_1 = esi + 1
    
    if (esi_1 s< edi)
        char* ecx_17 = arg2 - arg3
        arg2 = ecx_17
        void* edi_2 = esi_1 + arg3
        
        do
            uint32_t edx_4 = eax_18
            edi_2 += 1
            eax_18 = zx.d(*(edi_2 + ecx_17 - 1)) * 3 + zx.d(*(edi_2 - 1))
            arg1[(esi_1 << 1) - 1] = ((eax_18 + (edx_4 << 1) + edx_4 + 8) u>> 4).b
            arg1[esi_1 << 1] = ((eax_18 * 3 + edx_4 + 8) u>> 4).b
            esi_1 += 1
            ecx_17 = arg2
        while (esi_1 s< arg4)
        
        edi = arg4
    
    arg1[(edi << 1) - 1] = ((eax_18 + 2) u>> 2).b
    return arg1
}
