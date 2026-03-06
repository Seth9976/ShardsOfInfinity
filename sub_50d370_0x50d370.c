// 函数名称: sub_50d370
// 虚拟地址: 0x50d370
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_50d370(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5, char* arg6, char* arg7, char* arg8, char* arg9)
{
    // 第一条实际指令: int32_t ebx = arg2
    int32_t ebx = arg2
    char* edx = arg6
    int32_t esi = 0x659b14
    
    if (edx == 0)
        esi = 0x659b00
    
    char* i_1 = *(esi + (arg8 << 2))
    int32_t esi_1 = data_dfc4d4
    arg6 = i_1
    void* ecx_2
    
    if (esi_1 == 0)
        ecx_2 = edx
    else
        ecx_2 = arg5 - edx - 1
    
    char* ecx_4 = ecx_2 * ebx + arg3
    
    if (esi_1 != 0)
        ebx = neg.d(ebx)
    
    char* edx_1 = arg7
    
    if (edx_1 s> 0)
        char* esi_2 = arg9
        void* edi_2 = ecx_4 - ebx
        i_1 = ecx_4 - esi_2
        char* ebx_1 = edx_1
        arg8 = i_1
        char* i
        
        do
            if (arg6 u<= 6)
                char* edx_2
                
                switch (arg6)
                    case nullptr
                        edx_1 = arg7
                        
                        while (true)
                            i_1.b = *(i_1 + esi_2)
                            edi_2 += 1
                            *esi_2 = i_1.b
                            esi_2 = &esi_2[1]
                            char* temp11_1 = ebx_1
                            ebx_1 -= 1
                            
                            if (temp11_1 == 1)
                                break
                            
                            i_1 = arg8
                    case 1
                        edx_1 = arg7
                        
                        while (true)
                            i_1.b = *(i_1 + esi_2)
                            edi_2 += 1
                            *esi_2 = i_1.b
                            esi_2 = &esi_2[1]
                            char* temp12_1 = ebx_1
                            ebx_1 -= 1
                            
                            if (temp12_1 == 1)
                                break
                            
                            i_1 = arg8
                    case 2
                        edx_1 = arg7
                        
                        while (true)
                            i_1.b = *(i_1 + esi_2)
                            edi_2 += 1
                            i_1.b -= *(edi_2 - 1)
                            esi_2 = &esi_2[1]
                            esi_2[0xffffffff] = i_1.b
                            char* temp13_1 = ebx_1
                            ebx_1 -= 1
                            
                            if (temp13_1 == 1)
                                break
                            
                            i_1 = arg8
                    case 3
                        while (true)
                            edx_2.b = *edi_2
                            edi_2 += 1
                            i_1.b = *(i_1 + esi_2)
                            esi_2 = &esi_2[1]
                            edx_2.b u>>= 1
                            i_1.b -= edx_2.b
                            esi_2[0xffffffff] = i_1.b
                            char* temp2_1 = ebx_1
                            ebx_1 -= 1
                            
                            if (temp2_1 == 1)
                                break
                            
                            i_1 = arg8
                        
                        edx_1 = arg7
                    case 4
                        char* j
                        
                        do
                            edi_2 += 1
                            edx_2.b = 0
                            esi_2 = &esi_2[1]
                            edx_2.b = sbb.b(0, 0, 0 u< *(edi_2 - 1))
                            edx_2.b &= *(edi_2 - 1)
                            i_1.b = *(arg8 + esi_2 - 1) - edx_2.b
                            esi_2[0xffffffff] = i_1.b
                            j = ebx_1
                            ebx_1 -= 1
                        while (j != 1)
                        edx_1 = arg7
                    case 5
                        edx_1 = arg7
                        
                        while (true)
                            i_1.b = *(i_1 + esi_2)
                            edi_2 += 1
                            *esi_2 = i_1.b
                            esi_2 = &esi_2[1]
                            char* temp14_1 = ebx_1
                            ebx_1 -= 1
                            
                            if (temp14_1 == 1)
                                break
                            
                            i_1 = arg8
                    case 6
                        edx_1 = arg7
                        char* j_1
                        
                        do
                            i_1.b = *(i_1 + esi_2)
                            edi_2 += 1
                            *esi_2 = i_1.b
                            esi_2 = &esi_2[1]
                            i_1 = arg8
                            j_1 = ebx_1
                            ebx_1 -= 1
                        while (j_1 != 1)
                
                break
            
            edx_1 = arg7
            edi_2 += 1
            esi_2 = &esi_2[1]
            i = ebx_1
            ebx_1 -= 1
        while (i != 1)
    
    int32_t esi_4 = arg4 * edx_1
    
    if (edx_1 s< esi_4)
        char* edi_4 = ecx_4 - ebx
        char* ebx_3 = arg9 + edx_1
        void* i_9 = esi_4 - edx_1
        char* var_8_1 = edx_1 - ebx
        i_1 = arg6
        char* var_10_1 = ebx_3
        char* var_c_1 = edi_4
        arg4 = i_9
        
        while (i_1 u> 6)
            edi_4 = &edi_4[1]
            ebx_3 = &ebx_3[1]
            ecx_4 = &ecx_4[1]
            var_c_1 = edi_4
            void* i_10 = i_9
            i_9 -= 1
            var_10_1 = ebx_3
            arg4 = i_9
            
            if (i_10 == 1)
                return i_1
        
        switch (i_1)
            case nullptr
                void* i_2
                
                do
                    i_1.b = *(ecx_4 + edx_1)
                    edi_4 = &edi_4[1]
                    *ebx_3 = i_1.b
                    ecx_4 = &ecx_4[1]
                    ebx_3 = &ebx_3[1]
                    i_2 = i_9
                    i_9 -= 1
                while (i_2 != 1)
            case 1
                void* i_3
                
                do
                    i_1.b = *(ecx_4 + edx_1)
                    edi_4 = &edi_4[1]
                    i_1.b -= *ecx_4
                    ecx_4 = &ecx_4[1]
                    *ebx_3 = i_1.b
                    ebx_3 = &ebx_3[1]
                    i_3 = i_9
                    i_9 -= 1
                while (i_3 != 1)
            case 2
                void* i_4
                
                do
                    i_1.b = *(ecx_4 + edx_1)
                    edi_4 = &edi_4[1]
                    ecx_4 = &ecx_4[1]
                    ebx_3 = &ebx_3[1]
                    i_1.b -= *(var_8_1 + ecx_4 - 1)
                    edx_1 = arg7
                    ebx_3[0xffffffff] = i_1.b
                    i_4 = i_9
                    i_9 -= 1
                while (i_4 != 1)
            case 3
                char* eax_7
                void* i_5
                
                do
                    edi_4 = &edi_4[1]
                    ecx_4 = &ecx_4[1]
                    ebx_3 = &ebx_3[1]
                    eax_7.b = *(ecx_4 + arg7 - 1)
                    eax_7.b -= ((zx.d(*(var_8_1 + ecx_4 - 1)) + zx.d(ecx_4[0xffffffff])) u>> 1).b
                    ebx_3[0xffffffff] = eax_7.b
                    i_5 = i_9
                    i_9 -= 1
                while (i_5 != 1)
                return eax_7
            case 4
                void* i_6
                
                do
                    i_1.b = *edi_4
                    uint32_t ebx_4 = zx.d(i_1.b)
                    arg8:3.b = i_1.b
                    char* eax_8
                    eax_8.b = *(var_8_1 + ecx_4)
                    arg6:3.b = eax_8.b
                    eax_8.b = *ecx_4
                    uint32_t edx_7 = zx.d(eax_8.b)
                    uint32_t esi_6 = edx_7 - ebx_4
                    uint32_t edi_6 = zx.d(arg6:3.b) + esi_6
                    int32_t eax_11
                    int32_t edx_8
                    edx_8:eax_11 = sx.q(edi_6 - edx_7)
                    int32_t eax_13 = (eax_11 ^ edx_8) - edx_8
                    int32_t eax_15
                    int32_t edx_9
                    edx_9:eax_15 = sx.q(esi_6)
                    int32_t eax_17 = (eax_15 ^ edx_9) - edx_9
                    int32_t eax_19
                    int32_t edx_10
                    edx_10:eax_19 = sx.q(edi_6 - ebx_4)
                    int32_t esi_9 = (eax_19 ^ edx_10) - edx_10
                    char edx_11
                    
                    if (eax_13 s> eax_17 || eax_13 s> esi_9)
                        edx_11 = arg8:3.b
                        
                        if (eax_17 s<= esi_9)
                            edx_11 = arg6:3.b
                    else
                        edx_11 = eax_8.b
                    
                    edi_4 = &var_c_1[1]
                    var_c_1 = edi_4
                    i_1.b = *(ecx_4 + arg7)
                    ecx_4 = &ecx_4[1]
                    i_1.b -= edx_11
                    *var_10_1 = i_1.b
                    i_6 = arg4
                    arg4 -= 1
                    var_10_1 = &var_10_1[1]
                while (i_6 != 1)
            case 5
                char* eax_22
                void* i_7
                
                do
                    edi_4 = &edi_4[1]
                    edx_1.b = *ecx_4
                    ecx_4 = &ecx_4[1]
                    edx_1.b u>>= 1
                    ebx_3 = &ebx_3[1]
                    eax_22.b = *(ecx_4 + arg7 - 1)
                    eax_22.b -= edx_1.b
                    ebx_3[0xffffffff] = eax_22.b
                    i_7 = i_9
                    i_9 -= 1
                while (i_7 != 1)
                return eax_22
            case 6
                void* i_8
                
                do
                    edx_1.b = *(ecx_4 + edx_1)
                    edi_4 = &edi_4[1]
                    edx_1.b -= *ecx_4
                    ecx_4 = &ecx_4[1]
                    *ebx_3 = edx_1.b
                    ebx_3 = &ebx_3[1]
                    edx_1 = arg7
                    i_8 = i_9
                    i_9 -= 1
                while (i_8 != 1)
    
    return i_1
}
