// 函数名称: sub_4ec450
// 虚拟地址: 0x4ec450
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4ec450(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t i_3 = arg4
    int32_t i_3 = arg4
    int32_t eax = 0
    int32_t result_1 = 1
    char* esi = arg2
    char* var_10 = esi
    int32_t* edi = arg3
    int32_t* var_20 = edi
    
    if (i_3 s> 0)
        int32_t* esi_1 = &esi[0xc]
        
        do
            *esi_1 = eax
            esi_1 = &esi_1[4]
            eax += 1
        while (eax s< i_3)
        
        esi = arg2
    
    _qsort(esi, i_3, 0x10, sub_4ec3e0)
    
    if (i_3 s> 0)
        void* esi_2 = &esi[0xa]
        int32_t i_4 = i_3
        int32_t i_2 = i_3
        int32_t i
        
        do
            uint32_t eax_1 = zx.d(*(esi_2 - 6))
            
            if (eax_1.w == 0)
                *(esi_2 - 2) = 0
            else
                uint32_t ecx = zx.d(*(esi_2 - 4))
                int16_t var_18_1 = ecx.w
                
                if (ecx.w == 0)
                    i_2 = i_4
                    *(esi_2 - 2) = 0
                else
                    void var_3c
                    int32_t* eax_2 = sub_4ec230(eax_1, eax_1, edi, &var_3c, ecx)
                    int16_t** edx_1 = eax_2[2]
                    int64_t xmm0_1 = *eax_2
                    
                    if (edx_1 == 0)
                        i_2 = i_4
                        *(esi_2 - 2) = 0xffffffff
                    else
                        int32_t ecx_2 = xmm0_1:4.d
                        
                        if (ecx_2 + ecx s> edi[1])
                            i_2 = i_4
                            *(esi_2 - 2) = 0xffffffff
                        else
                            int16_t* ebx_1 = edi[7]
                            
                            if (ebx_1 == 0)
                                i_2 = i_4
                                *(esi_2 - 2) = 0xffffffff
                            else
                                int32_t eax_3
                                eax_3.w = xmm0_1.w
                                *ebx_1 = eax_3.w
                                ebx_1[1] = var_18_1 + ecx_2.w
                                edi[7] = *(ebx_1 + 4)
                                int16_t* edx_2 = *edx_1
                                int16_t** eax_8
                                
                                if (zx.d(*edx_2) s>= xmm0_1.d)
                                    eax_8 = edx_1
                                else
                                    eax_8 = &edx_2[2]
                                    edx_2 = *eax_8
                                
                                *eax_8 = ebx_1
                                int16_t* ecx_3 = *(edx_2 + 4)
                                
                                if (ecx_3 != 0)
                                    edi = var_20
                                    
                                    while (zx.d(*ecx_3) s<= xmm0_1.d + eax_1)
                                        *(edx_2 + 4) = edi[7]
                                        edi[7] = edx_2
                                        edx_2 = ecx_3
                                        ecx_3 = *(edx_2 + 4)
                                        
                                        if (ecx_3 == 0)
                                            break
                                
                                *(ebx_1 + 4) = edx_2
                                int32_t ebx_2 = xmm0_1.d
                                
                                if (zx.d(*edx_2) s< eax_1 + ebx_2)
                                    *edx_2 = (eax_1 + ebx_2).w
                                
                                uint32_t eax_13
                                eax_13.w = xmm0_1.w
                                i_2 = i_4
                                *(esi_2 - 2) = eax_13.w
                                *esi_2 = xmm0_1:4.w
            
            esi_2 += 0x10
            i = i_2
            i_2 -= 1
            i_4 = i_2
        while (i != 1)
        i_3 = arg4
        esi = var_10
    
    _qsort(esi, i_3, 0x10, sub_4ec420)
    
    if (i_3 s<= 0)
        return 1
    
    void* ecx_6 = &esi[0xa]
    int32_t result
    int32_t i_1
    
    do
        int32_t edx_3
        
        if (*(ecx_6 - 2) != 0xffff || *ecx_6 != 0xffff)
            edx_3 = 1
        else
            edx_3 = 0
        
        result = 0
        *(ecx_6 + 2) = edx_3
        
        if (edx_3 != 0)
            result = result_1
        
        ecx_6 += 0x10
        result_1 = result
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    return result
}
