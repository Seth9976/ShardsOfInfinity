// 函数名称: sub_50ba70
// 虚拟地址: 0x50ba70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_50ba70(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i_10 = *(arg1 + 0x14)
    int32_t i_10 = *(arg1 + 0x14)
    int32_t ebx = *(arg1 + 0x40)
    int32_t esi = *(arg1 + 0xa4)
    void* esi_1 = *(arg1 + 0x7c)
    int32_t esi_3 = *(arg1 + 0x94) + arg2
    int32_t edx = *(arg1 + 0xb4)
    int32_t eax = *(arg1 + 0x6c)
    uint32_t edx_2 = *(arg1 + 0xa0) u>> 2
    int32_t edx_3 = *(eax + (esi_3 << 3))
    int32_t* result = *(eax + (esi_3 << 3) + 4)
    int32_t var_30 = edx_3
    int32_t* result_2 = result
    
    if (edx_3 s<= result)
        result = *(arg1 + 0x70) + ((esi_3 * *(arg1 + 0x84)) << 2)
        int32_t esi_6 = *(arg1 + 0xb0) - *(arg1 + 0xa8)
        int32_t* result_3 = result_2
        int32_t edi_1 = esi
        int32_t* result_1 = result
        int32_t var_18_1 = esi_6
        
        do
            float xmm1_1 = *result
            void* edx_7 = edx + ((mods.dp.d(sx.q(esi_6 + edx_3), edi_1) * edx_2) << 2)
            void* var_1c_1 = edx_7
            
            if (ebx - 1 u<= 3)
                switch (ebx)
                    case 1
                        int32_t i_11 = i_10
                        int32_t edi_2 = 0
                        
                        if (i_11 s>= 4)
                            void* eax_5 = edx_7 + 4
                            void* ecx = esi_1 + 0xc
                            int32_t i_7 = ((i_10 - 4) u>> 2) + 1
                            edi_2 = i_7 << 2
                            int32_t i
                            
                            do
                                *(eax_5 - 4) = *(ecx - 0xc) * xmm1_1 f+ *(eax_5 - 4)
                                *eax_5 = *(esi_1 - edx_7 + eax_5) * xmm1_1 f+ *eax_5
                                *(eax_5 + 4) = *(ecx - 4) * xmm1_1 f+ *(eax_5 + 4)
                                float xmm0_11 = xmm1_1 f* *ecx
                                ecx += 0x10
                                *(eax_5 + 8) = xmm0_11 f+ *(eax_5 + 8)
                                eax_5 += 0x10
                                i = i_7
                                i_7 -= 1
                            while (i != 1)
                            edx_7 = var_1c_1
                            i_11 = i_10
                        
                        if (edi_2 s< i_11)
                            void* eax_6 = edx_7 + (edi_2 << 2)
                            int32_t i_6 = i_11 - edi_2
                            int32_t i_1
                            
                            do
                                *eax_6 = *(eax_6 + esi_1 - var_1c_1) * xmm1_1 f+ *eax_6
                                eax_6 += 4
                                i_1 = i_6
                                i_6 -= 1
                            while (i_1 != 1)
                        
                        goto label_50bbc9
                    case 2
                        int32_t ecx_2 = 0
                        
                        if (i_10 s> 0)
                            void* eax_8 = edx_7 + 4
                            
                            do
                                float xmm0_16 = *(esi_1 + (ecx_2 << 3))
                                ecx_2 += 1
                                *(eax_8 - 4) = xmm0_16 * xmm1_1 f+ *(eax_8 - 4)
                                *eax_8 = *(eax_8 + esi_1 - var_1c_1) * xmm1_1 f+ *eax_8
                                eax_8 += 8
                            while (ecx_2 s< i_10)
                            
                            goto label_50bbc9
                        
                        result_3 = result_2
                        esi_6 = var_18_1
                    case 3
                        if (i_10 s> 0)
                            void* ecx_3 = esi_1
                            void* eax_9 = edx_7 + 4
                            void* esi_11 = ecx_3 - edx_7
                            int32_t i_8 = i_10
                            int32_t i_2
                            
                            do
                                *(eax_9 - 4) = *ecx_3 * xmm1_1 f+ *(eax_9 - 4)
                                *eax_9 = *(eax_9 + esi_11) * xmm1_1 f+ *eax_9
                                float xmm0_28 = *(ecx_3 + 8)
                                ecx_3 += 0xc
                                *(eax_9 + 4) = xmm0_28 * xmm1_1 f+ *(eax_9 + 4)
                                eax_9 += 0xc
                                i_2 = i_8
                                i_8 -= 1
                            while (i_2 != 1)
                            goto label_50bbc9
                    case 4
                        if (i_10 s> 0)
                            void* eax_10 = edx_7 + 4
                            void* ecx_4 = esi_1 + 0xc
                            int32_t i_9 = i_10
                            int32_t i_3
                            
                            do
                                *(eax_10 - 4) = *(ecx_4 - 0xc) * xmm1_1 f+ *(eax_10 - 4)
                                *eax_10 = *(esi_1 - edx_7 + eax_10) * xmm1_1 f+ *eax_10
                                *(eax_10 + 4) = *(ecx_4 - 4) * xmm1_1 f+ *(eax_10 + 4)
                                float xmm0_41 = xmm1_1 f* *ecx_4
                                ecx_4 += 0x10
                                *(eax_10 + 8) = xmm0_41 f+ *(eax_10 + 8)
                                eax_10 += 0x10
                                i_3 = i_9
                                i_9 -= 1
                            while (i_3 != 1)
                            goto label_50bbc9
                        
                        edi_1 = esi
            else if (i_10 s<= 0)
                edi_1 = esi
            else
                int32_t* eax_11 = edx_7 + 4
                int32_t esi_14 = 0
                int32_t* var_24_1 = eax_11
                void* ecx_6 = esi_1 + 8
                int32_t var_28_1 = 0
                void* var_20_1 = ecx_6
                int32_t i_5 = i_10
                int32_t i_4
                
                do
                    int32_t edi_6 = 0
                    
                    if (ebx s>= 4)
                        int32_t j_3 = ((ebx - 4) u>> 2) + 1
                        edi_6 = j_3 << 2
                        int32_t j
                        
                        do
                            eax_11[-1] = *(ecx_6 - 8) * xmm1_1 f+ eax_11[-1]
                            *eax_11 = *(eax_11 + esi_1 - edx_7) * xmm1_1 f+ *eax_11
                            eax_11[1] = *ecx_6 * xmm1_1 f+ eax_11[1]
                            float xmm0_52 = *(ecx_6 + 4)
                            ecx_6 += 0x10
                            eax_11[2] = xmm0_52 * xmm1_1 f+ eax_11[2]
                            eax_11 = &eax_11[4]
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                        esi_14 = var_28_1
                        eax_11 = var_24_1
                        ecx_6 = var_20_1
                        edx_7 = var_1c_1
                    
                    if (edi_6 s< ebx)
                        void* eax_13 = edx_7 + ((esi_14 + edi_6) << 2)
                        int32_t j_2 = ebx - edi_6
                        int32_t j_1
                        
                        do
                            *eax_13 = *(esi_1 - var_1c_1 + eax_13) * xmm1_1 f+ *eax_13
                            eax_13 += 4
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                        eax_11 = var_24_1
                        ecx_6 = var_20_1
                    
                    esi_14 += ebx
                    ecx_6 += ebx << 2
                    var_28_1 = esi_14
                    eax_11 = &eax_11[ebx]
                    var_20_1 = ecx_6
                    i_4 = i_5
                    i_5 -= 1
                    edx_7 = var_1c_1
                    var_24_1 = eax_11
                while (i_4 != 1)
            label_50bbc9:
                esi_6 = var_18_1
                result_3 = result_2
                edi_1 = esi
            
            edx_3 = var_30 + 1
            result = &result_1[1]
            var_30 = edx_3
            result_1 = result
        while (edx_3 s<= result_3)
    
    return result
}
