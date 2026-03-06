// 函数名称: sub_4cb570
// 虚拟地址: 0x4cb570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4cb570()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545410
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = data_ce26e4
    int32_t var_24 = 0
    
    if (ecx != 0 && ecx[1] == 0x19)
        result = sub_4459f0(ecx)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
        
        if (result != 0)
            result = SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
            
            if (result != 0xffffffff)
                void* ecx_2 = sub_4c7540(result)
                int32_t i = 0
                void* var_40_1 = ecx_2
                int32_t i_1 = 0
                
                if (ecx_2 + 1 s> 0)
                    void* ebx_2 = result + 1 + ecx_2
                    void* edi_2 = (result + 1 + ecx_2) * 0x134
                    void* var_30_1 = ebx_2
                    void* var_34_1 = edi_2
                    void* var_1c_1 = result * 0x134
                    
                    do
                        void* var_5c_2 = ecx_2
                        int32_t* eax_9 = sub_48c3c0(data_e46fcc, 0)
                        sub_4d2b10(eax_9, eax_9, result_1, ebx_2)
                        sub_4caa40(ebx_2)
                        int32_t j = 0
                        struct _EXCEPTION_REGISTRATION_RECORD* eax_10 = *result_1
                        void* ecx_8 = var_1c_1 + eax_10
                        void* var_3c_1 = ecx_8
                        void* edx_2 = edi_2 + eax_10
                        void* var_28_1 = edx_2
                        *(edx_2 + 8) = *(ecx_8 + 8)
                        
                        if (*ecx_8 s> 0)
                            do
                                int32_t eax_12 = *(ecx_8 + 4)
                                int32_t ecx_9 = *(eax_12 + (j << 3))
                                void* eax_13 = eax_12 + (j << 3)
                                
                                if (ecx_9 != 1)
                                    sub_4b8610(eax_13, edx_2, &data_5b39c8, ecx_9, *(eax_13 + 4))
                                else
                                    char* edi_3 = *(eax_13 + 4)
                                    char* esi_1 = edi_3
                                    void* ecx_10 = &esi_1[1]
                                    
                                    do
                                        eax_13.b = *esi_1
                                        esi_1 = &esi_1[1]
                                    while (eax_13.b != 0)
                                    
                                    void* k_1 = esi_1 - ecx_10
                                    
                                    if (esi_1 != ecx_10)
                                        void* k
                                        
                                        do
                                            eax_13 = _isdigit(*(edi_3 + k_1 - 1))
                                            
                                            if (eax_13 == 0)
                                                break
                                            
                                            k = k_1
                                            k_1 -= 1
                                        while (k != 1)
                                    
                                    if (edi_3 == 0)
                                        sub_44e4d0(eax_13, &data_5559b1, "str", 
                                            "c:\ax2017\engine\xstring.cpp", 0x9a, "XString::XString")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    char* const var_18 = &data_5559b1
                                    sub_44f690(&var_18, edi_3, k_1)
                                    var_24 |= 1
                                    int32_t var_8_1 = 0
                                    char* const esi_2 = var_18
                                    char* var_14
                                    sub_4cb130(&var_14)
                                    char* ecx_13 = &data_5559b1
                                    var_8_1.b = 1
                                    char* eax_15 = var_14
                                    
                                    if (eax_15 != 0)
                                        ecx_13 = eax_15
                                    
                                    sub_4b8610(eax_15, var_28_1, &data_5b39c8, 1, ecx_13)
                                    var_8_1.b = 2
                                    
                                    if (data_cdf414 != 0)
                                        char* eax_16 = var_14
                                        
                                        if (eax_16 != 0 && *eax_16 != 0)
                                            char* eax_17 = sub_44f000(&var_14)
                                            int32_t temp2_1 = *(eax_17 + 4)
                                            *(eax_17 + 4) -= 1
                                            
                                            if (temp2_1 == 1)
                                                sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                                                var_14 = &data_5559b1
                                    
                                    int32_t var_8_2 = 3
                                    
                                    if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                                        char* eax_18 = sub_44f000(&var_18)
                                        int32_t temp3_1 = *(eax_18 + 4)
                                        *(eax_18 + 4) -= 1
                                        
                                        if (temp3_1 == 1)
                                            sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                                            var_18 = &data_5559b1
                                    
                                    int32_t var_8_3 = 0xffffffff
                                
                                ecx_8 = var_3c_1
                                j += 1
                                edx_2 = var_28_1
                            while (j s< *ecx_8)
                            
                            i = i_1
                            edi_2 = var_34_1
                        
                        ecx_2 = var_40_1
                        i += 1
                        edi_2 += 0x134
                        var_1c_1 += 0x134
                        ebx_2 = var_30_1 + 1
                        i_1 = i
                        var_30_1 = ebx_2
                        var_34_1 = edi_2
                    while (i s< ecx_2 + 1)
                
                void* eax_20 = data_ce26e4
                void* ecx_19 = ecx_2 + 1 + result
                
                if (eax_20 != 0)
                    int32_t eax_21 = *(eax_20 + 4)
                    
                    if (eax_21 == 0x19)
                        ecx_19 = sub_4c8660(ecx_19, 0xffffffff)
                    else if (eax_21 == 0x1b)
                        ecx_19 = sub_4c8c00(ecx_19)
                
                sub_4c68c0(ecx_19)
                sub_4f42d0()
                result = sub_4f4180()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
