// 函数名称: sub_42cf40
// 虚拟地址: 0x42cf40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_42cf40(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_8c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_3 = &data_5559b1
    int32_t* edi = *arg1
    char* result_1
    char* result_2 = result_1
    
    if (result_2 != 0)
        result_3 = result_2
    
    char* i_1 = _fopen(result_3, U"r")
    char* i_3 = i_1
    
    if (i_1 == 0)
    label_42d135:
        i_1.b = 0
    else
        void* var_90_1 = &edi[2]
        int32_t* var_94_1 = &edi[1]
        int32_t var_68
        int32_t* var_98_1 = &var_68
        
        if (sub_42c190(i_1, "%d %d %d\n") != 3)
        label_42d135_1:
            i_1.b = 0
        else
            int32_t ecx_2 = (edi[1] + 1) * edi[2]
            edi[6] = ecx_2
            edi[5] = sub_45cd70(ecx_2 << 3)
            int32_t i_5
            int32_t* var_90_2 = &i_5
            void* var_94_2 = &edi[7]
            
            if (sub_42c190(i_1, "%d %d\n") != 2)
            label_42d135_2:
                i_1.b = 0
            else
                void var_7c
                void* var_90_3 = &var_7c
                sub_42c190(i_1, 0x5742b8)
                int32_t esi_2 = 0
                
                if (var_68 s> 0)
                    do
                        int32_t var_70
                        int32_t* var_90_4 = &var_70
                        int32_t var_74
                        int32_t* var_94_3 = &var_74
                        sub_42c190(i_1, "%d %d\t")
                        char* i_2 = i_1
                        int32_t var_a4_1 = 0x50
                        void var_64
                        void* var_a8_1 = &var_64
                        sub_52397c()
                        int32_t edx_1 = var_74
                        void* ecx_4
                        
                        if (edx_1 s< 0)
                            ecx_4 = &edi[8]
                            
                            if (edi[8] s<= var_70)
                                goto label_42d052
                        else if (edi[edx_1 + 8] s<= var_70)
                            ecx_4 = &edi[8]
                        label_42d052:
                            int32_t i_4 = i_5
                            *edi += 1
                            
                            if (edx_1 s>= 0)
                                edi[edx_1 + 8] += 1
                            else if (i_4 s> 0)
                                int32_t i
                                
                                do
                                    *ecx_4 += 1
                                    ecx_4 += 4
                                    i = i_4
                                    i_4 -= 1
                                while (i != 1)
                            
                            if (esi_2 == var_68 - 1)
                                edi[8] += 1
                        esi_2 += 1
                    while (esi_2 s< var_68)
                
                int32_t ecx_6 = edi[7] * edi[8]
                edi[4] = ecx_6
                i_1 = nullptr
                edi[3] = sub_45cd70(ecx_6 << 3)
                
                if (edi[8] s> 0)
                    do
                        int32_t ecx_8 = edi[7]
                        int32_t esi_3 = 0
                        
                        if (ecx_8 s> 0)
                            do
                                int32_t var_90_5 = edi[3] + ((ecx_8 * i_1 + esi_3) << 3)
                                
                                if (sub_42c190(i_3, "%lf\n") != 1)
                                    goto label_42d135_2
                                
                                ecx_8 = edi[7]
                                esi_3 += 1
                            while (esi_3 s< ecx_8)
                        
                        i_1 = &i_1[1]
                    while (i_1 s< edi[8])
                
                i_1 = nullptr
                void* ecx_11 = &edi[2]
                
                if (*ecx_11 s> 0)
                    do
                        int32_t j = 0
                        
                        if (edi[1] + 1 s> 0)
                            do
                                int32_t var_90_6 = edi[5] + ((*ecx_11 * j + i_1) << 3)
                                
                                if (sub_42c190(i_3, "%lf\n") != 1)
                                    goto label_42d135_2
                                
                                ecx_11 = &edi[2]
                                j += 1
                            while (j s< edi[1] + 1)
                        
                        i_1 = &i_1[1]
                    while (i_1 s< *ecx_11)
                
                _fclose(i_3)
                i_1.b = 1
    
    int32_t var_8_2 = 6
    char* result
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = i_1.b
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
