// 函数名称: _qsort
// 虚拟地址: 0x52d110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_qsort(char* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_2 = result
    int32_t ebx = arg4
    char* i_12 = arg1
    char* i_15 = i_12
    int32_t var_10c = ebx
    int32_t edi
    int32_t var_12c = edi
    void* i_13 = arg3
    void* i_16 = i_13
    
    if (i_12 != 0)
        if (i_13 != 0 && ebx != 0)
            goto label_52d177
        
        *__errno() = 0x16
        result = __invalid_parameter_noinfo()
    else if (arg2 == 0 && i_13 != 0 && ebx != 0)
    label_52d177:
        int32_t result_1 = 0
        
        if (arg2 u>= 2)
            void* ecx_5 = (arg2 - 1) * i_13 + i_12
            
            while (true)
            label_52d18c:
                void* var_100_1 = ecx_5
                int32_t var_f8[0x1e]
                int32_t var_80[0x1e]
                
                while (true)
                    if (divu.dp.d(0:(ecx_5 - i_12), i_13) + 1 u<= 8)
                        i_13 = i_16
                        
                        if (ecx_5 u> i_12)
                            char* i_6 = i_13 + i_12
                            char* i_9 = i_6
                            void* ecx_6 = ecx_5
                            
                            do
                                char* i_5 = i_12
                                char* i = i_6
                                char* i_10 = i_5
                                
                                for (; i u<= ecx_6; i += i_13)
                                    if (ebx(i, i_5) s<= 0)
                                        i_5 = i_10
                                    else
                                        i_5 = i
                                        i_10 = i_5
                                    
                                    ecx_6 = var_100_1
                                
                                void* edx_3 = ecx_6
                                
                                if (i_5 != ecx_6)
                                    char* eax_6 = i_5 - ecx_6
                                    void* i_7 = i_13
                                    char* var_fc_1 = eax_6
                                    void* i_1
                                    
                                    do
                                        ecx_6.b = *(eax_6 + edx_3)
                                        edx_3 += 1
                                        eax_6.b = *(edx_3 - 1)
                                        *(var_fc_1 + edx_3 - 1) = eax_6.b
                                        eax_6 = var_fc_1
                                        *(edx_3 - 1) = ecx_6.b
                                        i_1 = i_7
                                        i_7 -= 1
                                    while (i_1 != 1)
                                    ebx = var_10c
                                    ecx_6 = var_100_1
                                
                                i_12 = i_15
                                ecx_6 -= i_13
                                i_6 = i_9
                                var_100_1 = ecx_6
                            while (ecx_6 u> i_12)
                        
                        break
                    
                    char* i_17 = ((divu.dp.d(0:(ecx_5 - i_12), i_13) + 1) u>> 1) * i_16 + i_15
                    
                    if (ebx(i_15, i_17) s> 0)
                        swap(i_15, i_17, i_16)
                    
                    if (ebx(i_15, var_100_1) s> 0)
                        swap(i_15, var_100_1, i_16)
                    
                    int32_t eax_11
                    int32_t ecx_11
                    eax_11, ecx_11 = ebx(i_17, var_100_1)
                    
                    if (eax_11 s> 0)
                        swap(i_17, var_100_1, i_16)
                    
                    void* eax_12 = var_100_1
                    i_12 = i_15
                    void* i_11 = i_16
                    void* var_fc_2 = eax_12
                    void* ebx_2 = eax_12
                    char* i_14
                    void* eax_13
                    
                    while (true)
                        if (i_17 u<= i_12)
                            goto label_52d394
                        
                        int32_t i_2
                        
                        do
                            i_12 += i_11
                            i_14 = i_12
                            
                            if (i_12 u>= i_17)
                                goto label_52d365
                            
                            i_2, ecx_11 = var_10c(i_12, i_17)
                            i_11 = i_16
                        while (i_2 s<= 0)
                        
                        if (i_17 u<= i_12)
                        label_52d365:
                            eax_12 = var_100_1
                        label_52d394:
                            int32_t i_3
                            
                            do
                                i_12 += i_11
                                
                                if (i_12 u> eax_12)
                                    break
                                
                                i_3, ecx_11 = var_10c(i_12, i_17)
                                i_11 = i_16
                                eax_12 = var_100_1
                            while (i_3 s<= 0)
                            ebx_2 = var_fc_2
                            i_14 = i_12
                        
                        while (true)
                            i_11 = i_16
                            eax_13 = ebx_2
                            ebx_2 -= i_11
                            
                            if (ebx_2 u<= i_17)
                                break
                            
                            int32_t eax_14
                            eax_14, ecx_11 = var_10c(ebx_2, i_17)
                            
                            if (eax_14 s<= 0)
                                i_11 = i_16
                                break
                        
                        i_12 = i_14
                        var_fc_2 = ebx_2
                        
                        if (ebx_2 u< i_12)
                            break
                        
                        void* var_11c_1 = ebx_2
                        
                        if (i_12 != ebx_2)
                            void* esi_3 = i_12 - ebx_2
                            void* edx_4 = ebx_2
                            void* i_8 = i_11
                            void* i_4
                            
                            do
                                eax_13.b = *edx_4
                                edx_4 += 1
                                ecx_11.b = *(esi_3 + edx_4 - 1)
                                *(esi_3 + edx_4 - 1) = eax_13.b
                                *(edx_4 - 1) = ecx_11.b
                                i_4 = i_8
                                i_8 -= 1
                            while (i_4 != 1)
                            i_12 = i_14
                            ebx_2 = var_fc_2
                            i_11 = i_16
                        
                        eax_12 = var_100_1
                        
                        if (i_17 == ebx_2)
                            i_17 = i_12
                    
                    void* var_fc_4
                    
                    if (i_17 u>= eax_13)
                    label_52d485:
                        ebx = var_10c
                        bool cond:2_1
                        
                        do
                            eax_13 -= i_16
                            var_fc_4 = eax_13
                            
                            if (eax_13 u<= i_15)
                                break
                            
                            cond:2_1 = ebx(eax_13, i_17) == 0
                            eax_13 = var_fc_4
                        while (cond:2_1)
                        i_12 = i_14
                    else
                        ebx = var_10c
                        bool cond:3_1
                        
                        do
                            eax_13 -= i_11
                            var_fc_4 = eax_13
                            
                            if (eax_13 u<= i_17)
                                goto label_52d485
                            
                            i_11 = i_16
                            cond:3_1 = ebx(eax_13, i_17) == 0
                            eax_13 = var_fc_4
                        while (cond:3_1)
                        
                        if (i_17 u>= eax_13)
                            goto label_52d485
                    
                    if (eax_13 - i_15 s< var_100_1 - i_12)
                        if (i_12 u< var_100_1)
                            var_80[result_1] = i_12
                            var_f8[result_1] = var_100_1
                            result_1 += 1
                        
                        i_12 = i_15
                        i_13 = i_16
                        
                        if (i_12 u>= var_fc_4)
                            break
                        
                        ecx_5 = var_fc_4
                        goto label_52d18c
                    
                    if (i_15 u< var_fc_4)
                        var_80[result_1] = i_15
                        var_f8[result_1] = var_fc_4
                        result_1 += 1
                    
                    ecx_5 = var_100_1
                    i_13 = i_16
                    
                    if (i_12 u>= ecx_5)
                        break
                    
                    i_15 = i_12
                
                result = result_1 - 1
                bool cond:0_1 = result_1 - 1 s< 0
                result_1 = result
                
                if (cond:0_1)
                    break
                
                i_12 = var_80[result]
                ecx_5 = var_f8[result]
                i_15 = i_12
    else
        *__errno() = 0x16
        result = __invalid_parameter_noinfo()
    
    @__security_check_cookie@4(result_2 ^ &__saved_ebp)
    return result
}
