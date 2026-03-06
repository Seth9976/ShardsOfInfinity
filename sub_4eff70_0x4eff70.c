// 函数名称: sub_4eff70
// 虚拟地址: 0x4eff70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4eff70(uint32_t arg1, int32_t** arg2, char* arg3, int32_t* arg4)
{
    // 第一条实际指令: arg1.b = *arg3
    arg1.b = *arg3
    char* var_18 = arg3
    int32_t* j_1
    int32_t* var_14
    void* var_10
    
    if (arg1.b == 0x2d)
        int32_t* j_6 = *arg4
        
        if (j_6 == 0)
            return arg1
        
        while (true)
            j_1 = j_6
            
            if (j_6 == 0)
                break
            
            int32_t* edx = *j_6
            void* eax = &j_6[1]
            j_6 = *eax
            var_10 = eax
            var_14 = edx
            arg1 = sub_4ec6e0(&arg3[1], edx)
            
            if (arg1.b != 0)
                sub_429090(arg2, &var_14)
                int32_t* j_2 = j_1
                void* ecx_2 = j_2[2]
                void* ecx_3 = var_10
                int32_t edx_1 = *ecx_3
                
                if (ecx_2 == 0)
                    *arg4 = edx_1
                else
                    *(ecx_2 + 4) = edx_1
                    j_2 = j_1
                
                void* edx_2 = *ecx_3
                int32_t ecx_4 = j_2[2]
                
                if (edx_2 == 0)
                    arg4[1] = ecx_4
                else
                    *(edx_2 + 8) = ecx_4
                
                arg4[2] -= 1
                arg1 = sub_45d050(j_2, 0xc)
            
            arg3 = var_18
            
            if (j_6 == 0)
                return arg1
    else if (arg1.b != 0x21)
        int32_t* i = *arg2
        
        if (i == 0)
            return arg1
        
        while (i != 0)
            void* esi_4 = *i
            var_14 = &i[1]
            var_10 = esi_4
            int32_t* i_1 = i[1]
            arg1 = sub_4ec6e0(var_18, esi_4)
            
            if (arg1.b != 0)
                if (*(esi_4 + 4) == 3)
                    int32_t*** eax_10 = data_cdf454
                    int32_t j = 0
                    int32_t** eax_11 = *eax_10
                    int32_t* j_5
                    
                    do
                        j_5 = *eax_11
                        
                        if (j_5 != 0)
                            break
                        
                        j += 1
                        eax_11 = &eax_11[1]
                    while (j u<= eax_10[1])
                    
                    j_1 = j_5
                    
                    if (j_5 != 0)
                        do
                            int32_t* ecx_13 = sub_48e8d0(&j_1)[1]
                            
                            if (ecx_13[1] == 0x12)
                                void* eax_13 = sub_4459f0(ecx_13)
                                int32_t ecx_14 = 0
                                int32_t edx_6 = *(eax_13 + 0x14)
                                
                                if (edx_6 s> 0)
                                    int32_t* eax_14 = *(eax_13 + 0x18)
                                    
                                    do
                                        if (*eax_14 == esi_4)
                                            goto label_4f01f8
                                        
                                        ecx_14 += 1
                                        eax_14 = &eax_14[7]
                                    while (ecx_14 s< edx_6)
                        while (j_1 != 0)
                
                sub_429090(arg4, &var_10)
            label_4f01f8:
                int32_t* edx_7 = var_14
                void* ecx_16 = i[2]
                int32_t* eax_15 = *edx_7
                
                if (ecx_16 == 0)
                    *arg2 = eax_15
                else
                    *(ecx_16 + 4) = eax_15
                
                void* ecx_17 = *edx_7
                int32_t eax_16 = i[2]
                
                if (ecx_17 == 0)
                    arg2[1] = eax_16
                else
                    *(ecx_17 + 8) = eax_16
                
                arg2[2] -= 1
                arg1 = sub_45d050(i, 0xc)
            
            i = i_1
            
            if (i == 0)
                return arg1
    else
        arg1 = __atoi64(&arg3[1])
        var_10 = arg1
        
        if (arg1 s<= 0)
            return arg1
        
        int32_t* edi_4 = *arg4
        
        if (edi_4 == 0)
            return arg1
        
        while (true)
            int32_t* var_18_1 = edi_4
            
            if (edi_4 == 0)
                break
            
            int32_t* esi_1 = *edi_4
            int32_t* j_3 = &edi_4[1]
            edi_4 = *j_3
            j_1 = j_3
            var_14 = esi_1
            
            if (esi_1[1] == 3)
                int32_t* eax_3 = *esi_1
                
                if (eax_3 == 0)
                    sub_4aa5d0(esi_1, 0)
                    eax_3 = *esi_1
                    
                    if (eax_3 == 0)
                        sub_48dac0(esi_1)
                        eax_3 = *esi_1
                
                float xmm2_1 = float.s(var_10)
                int32_t* ecx_8 = **eax_3
                int32_t eax_5 = *ecx_8
                int32_t eax_7 = ecx_8[1]
                arg1 = eax_7 u>> 0x1f
                
                if (_mm_cvtpd_ps(float.d(eax_5) f+ *((eax_5 u>> 0x1f << 3) + &data_59e4f0)) f* ecx_8[2]
                        > xmm2_1 || not(
                        _mm_cvtpd_ps(float.d(eax_7) f+ *((arg1 << 3) + &data_59e4f0)) f* ecx_8[2]
                        <= xmm2_1))
                    sub_429090(arg2, &var_14)
                    int32_t* j_4 = j_1
                    void* eax_8 = var_18_1[2]
                    int32_t esi_2 = *j_4
                    int32_t* eax_9
                    
                    if (eax_8 == 0)
                        eax_9 = arg4
                        *eax_9 = esi_2
                    else
                        *(eax_8 + 4) = esi_2
                        eax_9 = arg4
                    
                    void* esi_3 = *j_4
                    int32_t edx_4 = var_18_1[2]
                    
                    if (esi_3 == 0)
                        eax_9[1] = edx_4
                    else
                        *(esi_3 + 8) = edx_4
                    
                    eax_9[2] -= 1
                    arg1 = sub_45d050(var_18_1, 0xc)
            
            if (edi_4 == 0)
                return arg1
    sub_44e4d0(arg1, &data_5559b1, "iter != NULL", "c:\ax2017\engine\xlist.h", 0x1a1, 
        "XList<struct XAsset *>::GetNextIter")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
