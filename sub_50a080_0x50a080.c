// 函数名称: sub_50a080
// 虚拟地址: 0x50a080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_50a080(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x64)
    int32_t eax = *(arg1 + 0x64)
    int32_t esi = *(arg1 + 0x40)
    int32_t ebx = arg2
    int32_t* edx = *(arg1 + 0x78)
    int32_t edi = *(arg1 + 0x90)
    int32_t edi_1 = edi * esi
    int32_t* var_8 = *(arg1 + 0x68)
    int32_t* var_1c = edx
    int32_t var_2c = ebx
    void* edx_1 = &edx[edi_1]
    int32_t var_34 = esi
    int32_t edi_2 = *(arg1 + 0x80)
    void* var_30 = edx_1
    int32_t eax_3 = *(arg1 + 4) + (edi << 1)
    int32_t eax_4 = esi - 1
    
    if (eax_4 u> 3)
        eax_4 = 0
        int32_t var_20_2 = 0
        
        if (eax_3 s> 0)
            int32_t var_18_2 = neg.d(edi_1)
            int32_t ecx_16 = eax
            
            do
                int32_t eax_38 = *(ecx_16 + (eax_4 << 3))
                int32_t edi_14 = *(ecx_16 + (var_20_2 << 3) + 4)
                int32_t edi_18
                
                if (eax_38 s> edi_14)
                    edi_18 = esi << 2
                else
                    int32_t ecx_18 = eax_38 * esi
                    int32_t i_4 = edi_14 - eax_38 + 1
                    int32_t var_28_2 = ecx_18
                    float* var_24_2 = ebx + (ecx_18 << 2)
                    int32_t* var_14_1 = var_8
                    int32_t* eax_39 = var_14_1
                    int32_t i
                    
                    do
                        float xmm1_8 = *eax_39
                        int32_t edi_17 = 0
                        
                        if (esi s>= 4)
                            float* eax_40 = var_24_2
                            int32_t* ecx_19 = var_1c
                            int32_t j_2 = ((esi - 4) u>> 2) + 1
                            edi_17 = j_2 << 2
                            int32_t j
                            
                            do
                                *eax_40 = *ecx_19 * xmm1_8 + *eax_40
                                eax_40[1] = ecx_19[1] f* xmm1_8 + eax_40[1]
                                eax_40[2] = ecx_19[2] f* xmm1_8 + eax_40[2]
                                float xmm0_46 = ecx_19[3]
                                ecx_19 = &ecx_19[4]
                                eax_40[3] = xmm0_46 * xmm1_8 + eax_40[3]
                                eax_40 = &eax_40[4]
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                            esi = var_34
                            ecx_18 = var_28_2
                            eax_39 = var_14_1
                        
                        if (edi_17 s< esi)
                            float* ecx_20 = ebx + ((ecx_18 + edi_17) << 2)
                            int32_t j_3 = esi - edi_17
                            float* eax_44 = var_30 + ((var_18_2 + edi_17) << 2)
                            int32_t j_1
                            
                            do
                                float xmm0_50 = xmm1_8 * *eax_44
                                eax_44 = &eax_44[1]
                                *ecx_20 = xmm0_50 + *ecx_20
                                ecx_20 = &ecx_20[1]
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                            esi = var_34
                            ecx_18 = var_28_2
                            eax_39 = var_14_1
                        
                        edi_18 = esi << 2
                        eax_39 = &eax_39[1]
                        var_24_2 += edi_18
                        ecx_18 += esi
                        i = i_4
                        i_4 -= 1
                        var_14_1 = eax_39
                        var_28_2 = ecx_18
                    while (i != 1)
                    ecx_16 = eax
                
                var_1c += edi_18
                eax_4 = var_20_2 + 1
                var_18_2 += esi
                var_8 = &var_8[edi_2]
                var_20_2 = eax_4
            while (eax_4 s< eax_3)
    else
        switch (eax_4)
            case 0
                int32_t ecx_1 = 0
                int32_t var_2c_1 = 0
                
                if (eax_3 s> 0)
                    int32_t var_24_1 = 0
                    int32_t var_20_1 = neg.d(edi)
                    int32_t eax_8 = edi_2 << 2
                    float* esi_2 = edx_1 - (edi << 2)
                    float* var_18_1 = esi_2
                    void* var_28_1 = &var_8[2]
                    
                    do
                        int32_t eax_12 = *(eax + (ecx_1 << 3))
                        int32_t edi_5 = *(eax + (ecx_1 << 3) + 4)
                        int32_t ecx_2 = eax_12
                        
                        if (eax_12 s<= edi_5)
                            if (edi_5 - ecx_2 + 1 s>= 4)
                                void* esi_3 = var_28_1
                                void* eax_17 = ebx + ((ecx_2 + 2) << 2)
                                int32_t i_7 = ((edi_5 - ecx_2 - 3) u>> 2) + 1
                                ecx_2 += i_7 << 2
                                int32_t i_1
                                
                                do
                                    *(eax_17 - 8) = *(esi_3 - 8) * *var_18_1 f+ *(eax_17 - 8)
                                    *(eax_17 - 4) = *(esi_3 - 4) * *var_18_1 f+ *(eax_17 - 4)
                                    *eax_17 = *esi_3 * *var_18_1 f+ *eax_17
                                    float xmm0_10 = *(esi_3 + 4)
                                    esi_3 += 0x10
                                    *(eax_17 + 4) = xmm0_10 * *var_18_1 f+ *(eax_17 + 4)
                                    eax_17 += 0x10
                                    i_1 = i_7
                                    i_7 -= 1
                                while (i_1 != 1)
                                edx_1 = var_30
                                esi_2 = var_18_1
                            
                            if (ecx_2 s<= edi_5)
                                void* eax_21 = &var_8[var_24_1 - eax_12 + ecx_2]
                                
                                do
                                    float xmm0_13 = *eax_21
                                    eax_21 += 4
                                    *(ebx + (ecx_2 << 2)) =
                                        xmm0_13 f* *(edx_1 + (var_20_1 << 2)) f+ *(ebx + (ecx_2 << 2))
                                    ecx_2 += 1
                                while (ecx_2 s<= edi_5)
                                
                                esi_2 = var_18_1
                        
                        esi_2 = &esi_2[1]
                        ecx_1 = var_2c_1 + 1
                        var_24_1 += edi_2
                        var_20_1 += 1
                        var_28_1 += eax_8
                        var_2c_1 = ecx_1
                        var_18_1 = esi_2
                    while (ecx_1 s< eax_3)
                    
                    return eax_8
            case 1
                int32_t esi_6 = 0
                
                if (eax_3 s> 0)
                    int32_t ecx_4 = edi_2
                    int32_t* edx_3 = edx_1 - (edi << 3)
                    
                    do
                        int32_t eax_25 = *(eax + (esi_6 << 3))
                        int32_t edi_10 = *(eax + (esi_6 << 3) + 4)
                        
                        if (eax_25 s<= edi_10)
                            int32_t* ecx_5 = var_8
                            
                            do
                                float xmm1_1 = *ecx_5
                                ecx_5 = &ecx_5[1]
                                *(ebx + (eax_25 << 3)) = *edx_3 * xmm1_1 f+ *(ebx + (eax_25 << 3))
                                *(ebx + (eax_25 << 3) + 4) =
                                    xmm1_1 f* edx_3[1] f+ *(ebx + (eax_25 << 3) + 4)
                                eax_25 += 1
                            while (eax_25 s<= edi_10)
                            
                            ecx_4 = edi_2
                        
                        esi_6 += 1
                        var_8 = &var_8[ecx_4]
                        edx_3 = &edx_3[2]
                    while (esi_6 s< eax_3)
                    
                    return ecx_4 << 2
            case 2
                int32_t edi_11 = 0
                
                if (eax_3 s> 0)
                    int32_t* esi_7 = var_8
                    int32_t* edx_5 = edx_1 - edi * 0xc + 8
                    
                    do
                        int32_t eax_29 = *(eax + (edi_11 << 3))
                        int32_t ecx_7 = *(eax + (edi_11 << 3) + 4)
                        
                        if (eax_29 s<= ecx_7)
                            void* eax_32 = ebx + ((eax_29 * 3 + 2) << 2)
                            ebx = var_2c
                            int32_t i_5 = ecx_7 - *(eax + (edi_11 << 3)) + 1
                            int32_t i_2
                            
                            do
                                float xmm1_4 = *esi_7
                                esi_7 = &esi_7[1]
                                *(eax_32 - 8) = edx_5[-2] f* xmm1_4 f+ *(eax_32 - 8)
                                *(eax_32 - 4) = edx_5[-1] f* xmm1_4 f+ *(eax_32 - 4)
                                *eax_32 = *edx_5 * xmm1_4 f+ *eax_32
                                eax_32 += 0xc
                                i_2 = i_5
                                i_5 -= 1
                            while (i_2 != 1)
                            esi_7 = var_8
                        
                        edi_11 += 1
                        edx_5 = &edx_5[3]
                        esi_7 = &esi_7[edi_2]
                        var_8 = esi_7
                    while (edi_11 s< eax_3)
                    
                    return edi_2 << 2
            case 3
                int32_t edi_12 = 0
                
                if (eax_3 s> 0)
                    int32_t* esi_8 = var_8
                    int32_t* edx_7 = edx_1 - (edi << 4) + 8
                    
                    do
                        int32_t eax_34 = *(eax + (edi_12 << 3))
                        int32_t ecx_12 = *(eax + (edi_12 << 3) + 4)
                        
                        if (eax_34 s<= ecx_12)
                            void* eax_36 = (eax_34 << 4) + ebx + 8
                            ebx = var_2c
                            int32_t i_6 = ecx_12 - *(eax + (edi_12 << 3)) + 1
                            int32_t i_3
                            
                            do
                                float xmm1_5 = *esi_8
                                esi_8 = &esi_8[1]
                                *(eax_36 - 8) = edx_7[-2] f* xmm1_5 f+ *(eax_36 - 8)
                                *(eax_36 - 4) = edx_7[-1] f* xmm1_5 f+ *(eax_36 - 4)
                                *eax_36 = *edx_7 * xmm1_5 f+ *eax_36
                                *(eax_36 + 4) = xmm1_5 f* edx_7[1] f+ *(eax_36 + 4)
                                eax_36 += 0x10
                                i_3 = i_6
                                i_6 -= 1
                            while (i_3 != 1)
                            esi_8 = var_8
                        
                        edi_12 += 1
                        edx_7 = &edx_7[4]
                        esi_8 = &esi_8[edi_2]
                        var_8 = esi_8
                    while (edi_12 s< eax_3)
                    
                    return edi_2 << 2
    
    return eax_4
}
