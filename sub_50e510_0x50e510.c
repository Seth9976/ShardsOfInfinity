// 函数名称: sub_50e510
// 虚拟地址: 0x50e510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50e510(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: uint32_t* esi = arg4
    uint32_t* esi = arg4
    int32_t* ecx
    int32_t* var_24 = ecx
    int32_t var_14
    int32_t* var_28 = &var_14
    int32_t eax_1 = sub_50dd00(&var_14, arg2, ecx, arg3, esi, ecx)
    int32_t edi = eax_1
    
    if (edi == 0)
        return eax_1
    
    if (var_14 != 8)
        void* esi_3 = *arg2 * *arg3 * *arg4
        void* var_24_1 = esi_3
        int64_t* eax_4
        int32_t ecx_1
        eax_4, ecx_1 = _malloc()
        
        if (eax_4 != 0)
            char* i = nullptr
            
            if (esi_3 s> 0)
                if (esi_3 u>= 0x20 && (eax_4 u> edi + ((esi_3 - 1) << 1) || esi_3 - 1 + eax_4 u< edi))
                    void* ecx_4 = esi_3 & 0x8000001f
                    
                    if (ecx_4 s< 0)
                        ecx_4 = ((ecx_4 - 1) | 0xffffffe0) + 1
                    
                    uint128_t xmm1_1 = 8
                    ecx_1 = edi + 0x20
                    
                    do
                        int32_t xmm0_1[0x4] = *(ecx_1 - 0x20)
                        ecx_1 += 0x40
                        int16_t xmm0_3[0x8] = _mm_srl_epi16(xmm0_1, xmm1_1) & data_59e2c0
                        *(eax_4 + i) = _mm_packus_epi16(xmm0_3, xmm0_3)
                        int16_t xmm0_7[0x8] = _mm_srl_epi16(*(ecx_1 - 0x50), xmm1_1) & data_59e2c0
                        *(eax_4 + i + 8) = _mm_packus_epi16(xmm0_7, xmm0_7)
                        int16_t xmm0_11[0x8] = _mm_srl_epi16(*(ecx_1 - 0x40), xmm1_1) & data_59e2c0
                        *(eax_4 + i + 0x10) = _mm_packus_epi16(xmm0_11, xmm0_11)
                        int16_t xmm0_15[0x8] = _mm_srl_epi16(*(ecx_1 - 0x30), xmm1_1) & data_59e2c0
                        *(eax_4 + i + 0x18) = _mm_packus_epi16(xmm0_15, xmm0_15)
                        i = &i[0x20]
                    while (i s< esi_3 - ecx_4)
                
                for (; i s< esi_3; i = &i[1])
                    ecx_1.b = *(edi + (i << 1) + 1)
                    *(i + eax_4) = ecx_1.b
            
            _free(edi)
            edi = eax_4
        else
            edi = 0
        
        esi = arg4
    
    if (data_d76c5c != 0)
        sub_50e420(arg3, *arg2, edi, *arg3, *esi)
    
    return edi
}
