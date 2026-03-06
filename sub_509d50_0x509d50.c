// 函数名称: sub_509d50
// 虚拟地址: 0x509d50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_509d50(void* arg1, float* arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x14)
    int32_t eax = *(arg1 + 0x14)
    int32_t ebx = *(arg1 + 0x40)
    int32_t edi = 0
    float* var_24 = arg2
    int32_t var_28 = 0
    int32_t esi_2 = *(arg1 + 0x78) + ((*(arg1 + 0x90) * ebx) << 2)
    int32_t eax_2 = *(arg1 + 0x64)
    float* var_10 = *(arg1 + 0x68)
    int32_t result = *(arg1 + 0x80)
    int32_t var_14 = esi_2
    
    if (*(arg1 + 0x14) s> 0)
        result = 0
        int32_t result_1 = 0
        float* var_2c_1 = arg2
        
        do
            int32_t ecx_1 = *(eax_2 + (edi << 3))
            int32_t edi_1 = *(eax_2 + (edi << 3) + 4)
            int32_t ebx_3
            
            if (ebx - 1 u> 3)
                ebx_3 = ebx
                
                if (ecx_1 s<= edi_1)
                    float* ebx_6 = var_10
                    int32_t esi_6 = ecx_1 * ebx_3
                    int32_t i_5 = edi_1 - ecx_1 + 1
                    int32_t var_1c_1 = esi_6
                    void* eax_14 = var_14 + (esi_6 << 2)
                    void* var_18_1 = eax_14
                    int32_t i
                    
                    do
                        float xmm1_7 = *ebx_6
                        int32_t ebx_8 = 0
                        
                        if (ebx_3 s>= 4)
                            int32_t j_2 = ((ebx_3 - 4) u>> 2) + 1
                            float* eax_16 = &var_24[result_1]
                            void* ecx_3 = var_18_1
                            ebx_8 = j_2 << 2
                            int32_t j
                            
                            do
                                *eax_16 = xmm1_7 f* *ecx_3 + *eax_16
                                eax_16[1] = *(ecx_3 + 4) * xmm1_7 + eax_16[1]
                                eax_16[2] = *(ecx_3 + 8) * xmm1_7 + eax_16[2]
                                float xmm0_37 = *(ecx_3 + 0xc)
                                ecx_3 += 0x10
                                eax_16[3] = xmm0_37 * xmm1_7 + eax_16[3]
                                eax_16 = &eax_16[4]
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                            esi_6 = var_1c_1
                            eax_14 = var_18_1
                        
                        if (ebx_8 s< ebx_3)
                            float* ecx_5 = &var_24[result_1 + ebx_8]
                            float* eax_20 = var_14 + ((esi_6 + ebx_8) << 2)
                            int32_t j_3 = ebx_3 - ebx_8
                            int32_t j_1
                            
                            do
                                float xmm0_40 = *eax_20
                                eax_20 = &eax_20[1]
                                *ecx_5 = xmm0_40 * xmm1_7 + *ecx_5
                                ecx_5 = &ecx_5[1]
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                            esi_6 = var_1c_1
                            eax_14 = var_18_1
                        
                        esi_6 += ebx_3
                        eax_14 += ebx_3 << 2
                        var_1c_1 = esi_6
                        ebx_6 = &ebx_6[1]
                        var_18_1 = eax_14
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
                    arg2 = var_2c_1
                    ebx_3 = ebx
                    esi_2 = var_14
                    result = result_1
            else
                switch (ebx)
                    case 1
                        ebx_3 = ebx
                        
                        if (ecx_1 s<= edi_1)
                            float* eax_5 = var_10
                            
                            do
                                float xmm1_1 = *eax_5
                                eax_5 = &eax_5[1]
                                float xmm0_1 = *(esi_2 + (ecx_1 << 2))
                                ecx_1 += 1
                                *arg2 = xmm0_1 * xmm1_1 + *arg2
                            while (ecx_1 s<= edi_1)
                            
                            result = result_1
                    case 2
                        ebx_3 = ebx
                        
                        if (ecx_1 s<= edi_1)
                            float* eax_6 = var_10
                            
                            do
                                float xmm1_2 = *eax_6
                                eax_6 = &eax_6[1]
                                *arg2 = *(esi_2 + (ecx_1 << 3)) * xmm1_2 + *arg2
                                float xmm0_7 = *(esi_2 + (ecx_1 << 3) + 4)
                                ecx_1 += 1
                                arg2[1] = xmm0_7 * xmm1_2 + arg2[1]
                            while (ecx_1 s<= edi_1)
                            
                            result = result_1
                    case 3
                        ebx_3 = ebx
                        
                        if (ecx_1 s<= edi_1)
                            int32_t i_3 = edi_1 - ecx_1 + 1
                            float* eax_9 = esi_2 + ((ecx_1 + ((ecx_1 + 1) << 1)) << 2)
                            float* esi_3 = var_10
                            int32_t i_1
                            
                            do
                                float xmm1_3 = *esi_3
                                esi_3 = &esi_3[1]
                                *arg2 = eax_9[-2] * xmm1_3 + *arg2
                                arg2[1] = eax_9[-1] * xmm1_3 + arg2[1]
                                float xmm1_4 = xmm1_3 * *eax_9
                                eax_9 = &eax_9[3]
                                arg2[2] = xmm1_4 + arg2[2]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            esi_2 = var_14
                            result = result_1
                    case 4
                        ebx_3 = ebx
                        
                        if (ecx_1 s<= edi_1)
                            int32_t* esi_4 = var_10
                            float* eax_12 = (ecx_1 << 4) + var_14 + 8
                            ebx_3 = ebx
                            int32_t i_4 = edi_1 - ecx_1 + 1
                            int32_t i_2
                            
                            do
                                float xmm1_6 = *esi_4
                                esi_4 = &esi_4[1]
                                *arg2 = eax_12[-2] * xmm1_6 + *arg2
                                arg2[1] = eax_12[-1] * xmm1_6 + arg2[1]
                                arg2[2] = xmm1_6 * *eax_12 + arg2[2]
                                float xmm0_25 = eax_12[1]
                                eax_12 = &eax_12[4]
                                arg2[3] = xmm0_25 * xmm1_6 + arg2[3]
                                i_2 = i_4
                                i_4 -= 1
                            while (i_2 != 1)
                            esi_2 = var_14
                            result = result_1
            
            arg2 = &arg2[ebx_3]
            edi = var_28 + 1
            result += ebx_3
            var_10 = &var_10[result]
            var_28 = edi
            result_1 = result
            var_2c_1 = arg2
        while (edi s< eax)
    
    return result
}
