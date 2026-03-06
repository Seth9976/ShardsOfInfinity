// 函数名称: sub_513180
// 虚拟地址: 0x513180
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_513180(int32_t (* arg1)[0x4], void* arg2, int64_t* arg3, void* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t edx = 0
    int32_t edx = 0
    int32_t xmm5_1[0x4]
    int16_t xmm7_1[0x8]
    
    if (arg6 == 4)
        xmm5_1 = data_59e5f0
        xmm7_1 = data_59e320
    
    int64_t* eax
    int32_t (* edi_3)[0x4]
    
    if (arg6 != 4 || arg5 s<= 7)
        edi_3 = arg1
    else
        int64_t* esi_1 = arg3
        int64_t* edi_1 = arg2 - esi_1
        eax = arg4 - esi_1
        int64_t* var_c_1 = eax
        void* edi_2 = 7 - esi_1
        edi_3 = arg1
        
        do
            int32_t xmm2_1[0x4] = _mm_unpacklo_epi8(zx.o(0), *(eax + esi_1) ^ xmm5_1[0].q)
            int64_t xmm0_4 = *esi_1 ^ xmm5_1[0].q
            int16_t xmm2_2[0x8] = __pmulhw_xmmdq_memdq(xmm2_1, data_59e640)
            edx += 8
            int32_t xmm4_1[0x4] = _mm_unpacklo_epi8(zx.o(0), xmm0_4)
            int64_t xmm0_5 = *(edi_1 + esi_1)
            esi_1 = &esi_1[1]
            int32_t xmm1_2[0x4] = _mm_unpacklo_epi8(xmm5_1, xmm0_5)
            int16_t xmm0_7[0x8] = __pmulhw_xmmdq_memdq(xmm4_1, data_59e330)
            int16_t xmm4_2[0x8] = __pmulhw_xmmdq_memdq(xmm4_1, data_59e660)
            int16_t xmm3_2[0x8] = _mm_mulhi_epi16(xmm2_1, xmm7_1)
            int16_t xmm1_3[0x8] = _mm_srli_epi16(xmm1_2, 4)
            int16_t xmm0_8[0x8] = _mm_add_epi16(xmm0_7, xmm1_3)
            int16_t xmm4_3[0x8] = _mm_add_epi16(xmm4_2, xmm1_3)
            int16_t xmm0_9[0x8] = _mm_srai_epi16(xmm0_8, 4)
            int16_t xmm4_4[0x8] = _mm_add_epi16(xmm4_3, xmm2_2)
            int16_t xmm3_3[0x8] = _mm_add_epi16(xmm3_2, xmm1_3)
            int16_t xmm4_5[0x8] = _mm_srai_epi16(xmm4_4, 4)
            int16_t xmm3_4[0x8] = _mm_srai_epi16(xmm3_3, 4)
            int64_t xmm4_6 = __packuswb_xmmdq_memdq(xmm4_5, data_59e2c0)
            int16_t xmm3_5[0x8] = _mm_packus_epi16(xmm3_4, xmm0_9)
            int64_t xmm3_6 = _mm_unpackhi_epi8(xmm3_5, xmm4_6)
            int32_t xmm1_5[0x4] = _mm_unpacklo_epi8(xmm3_5, xmm4_6)
            int32_t xmm1_6[0x4] = _mm_unpackhi_epi16(xmm1_5, xmm3_6)
            *edi_3 = _mm_unpacklo_epi16(xmm1_5, xmm3_6)
            edi_3[1] = xmm1_6
            edi_3 = &edi_3[2]
            eax = var_c_1
        while (edi_2 + esi_1 s< arg5)
    
    if (edx s>= arg5)
        return 
    
    int64_t* esi_3 = arg3 - arg4
    void* edi_5 = arg2 - arg4
    void* var_14_2 = edi_3 + 2
    eax = arg4 + edx
    arg2 = edi_5
    int64_t* var_10_1 = eax
    arg3 = esi_3
    arg5 -= edx
    int32_t i
    
    do
        uint32_t edx_1 = zx.d(*eax)
        uint32_t esi_4 = zx.d(*(esi_3 + eax))
        int32_t edi_8 = (zx.d(*(edi_5 + eax)) << 0x14) + 0x80000
        int32_t var_18_2 = ((edx_1 - 0x80) * 0x166f00 + edi_8) s>> 0x14
        int32_t edx_4 =
            ((0x80 - edx_1) * 0xb6d00 + (((0x80 - esi_4) * 0x58200) & 0xffff0000) + edi_8) s>> 0x14
        int32_t eax_16 = ((esi_4 - 0x80) * 0x1c5a00 + edi_8) s>> 0x14
        
        if (var_18_2 u> 0xff)
            int32_t ecx_5 = 0xff
            
            if (var_18_2 s< 0)
                ecx_5 = 0
            
            var_18_2 = ecx_5
        
        if (edx_4 u> 0xff)
            int32_t ecx_6 = 0xff
            
            if (edx_4 s< 0)
                ecx_6 = 0
            
            edx_4 = ecx_6
        
        if (eax_16 u> 0xff)
            int32_t ecx_7 = 0xff
            
            if (eax_16 s< 0)
                ecx_7 = 0
            
            eax_16 = ecx_7
        
        edi_5 = arg2
        *var_14_2 = eax_16.b
        *(var_14_2 - 2) = var_18_2.b
        eax = var_10_1 + 1
        *(var_14_2 - 1) = edx_4.b
        *(var_14_2 + 1) = 0xff
        i = arg5
        arg5 -= 1
        var_14_2 += arg6
        esi_3 = arg3
        var_10_1 = eax
    while (i != 1)
}
