// 函数名称: sub_4a52d0
// 虚拟地址: 0x4a52d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4a52d0(char** arg1, char const (** arg2)[0x5])
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543f59
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_4c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char const (** var_34)[0x5] = arg2
    int32_t var_20 = 0
    void* eax_3 = _strrchr(arg2, 0x2e)
    void* var_2c = eax_3
    
    if (eax_3 == 0)
        sub_44f240(arg1, &data_5559b1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    void* eax_5 = eax_3 - arg2
    char* var_1c
    sub_44f320(&var_1c, arg2, eax_5)
    int32_t var_8_1 = 1
    char* edi_1 = var_1c
    char* edx = &data_5559b1
    
    if (edi_1 != 0)
        edx = edi_1
    
    char* var_14
    sub_4a8d30(&var_14, edx)
    var_8_1.b = 2
    char** ebx_2
    char const (** var_38)[0x5]
    
    if (__stricmp(eax_3, ".xml") != 0)
        int32_t eax_31 = 0
        int32_t var_30_2 = 0
        
        while (true)
            sub_4a9500(eax_31, &var_34, eax_31, &var_38)
            char const (** ebx_3)[0x5] = var_38
            int32_t esi_2 = 0
            
            if (ebx_3 s> 0)
                while (true)
                    if (__stricmp(var_34[esi_2], var_2c) == 0)
                        void* eax_39 = &data_572068
                        char* ebx_4
                        
                        while (true)
                            if (*eax_39 == var_30_2)
                                ebx_4 = *(eax_39 + 4)
                                break
                            
                            eax_39 += 8
                            
                            if (*(eax_39 + 4) == 0)
                                ebx_4 = &data_5559b1
                                break
                        
                        char* eax_40 = var_14
                        
                        if (eax_40 == 0 || *eax_40 == 0)
                            sub_44f240(&var_14, &data_556c38)
                        else
                            char* eax_41 = sub_44f000(&var_14)
                            int16_t* esi_3 = *(eax_41 + 8)
                            sub_44f100(eax_41, esi_3 + 1, &var_14, 1)
                            *(esi_3 + var_14) = 0x2e
                        
                        if (*ebx_4 != 0)
                            char* eax_43 = var_14
                            
                            if (eax_43 == 0 || *eax_43 == 0)
                                sub_44f240(&var_14, ebx_4)
                            else
                                char* esi_4 = ebx_4
                                char const (** ecx_49)[0x5] = *(sub_44f000(&var_14) + 8)
                                var_38 = ecx_49
                                char* eax_44
                                
                                do
                                    eax_44.b = *esi_4
                                    esi_4 = &esi_4[1]
                                while (eax_44.b != 0)
                                
                                void* esi_5 = esi_4 - &esi_4[1]
                                sub_44f100(eax_44, esi_5 + ecx_49, &var_14, 1)
                                sub_51d5b0(var_14 + var_38, ebx_4, esi_5 + 1)
                        
                        ebx_2 = arg1
                        char* eax_48 = var_14
                        *ebx_2 = eax_48
                        
                        if (eax_48 != 0 && *eax_48 != 0)
                            char* eax_49 = sub_44f000(ebx_2)
                            *(eax_49 + 4) += 1
                            eax_48 = var_14
                        
                        int32_t var_20_6 = 1
                        var_8_1.b = 0x11
                        
                        if (data_cdf414 != 0 && eax_48 != 0 && *eax_48 != 0)
                            char* eax_50 = sub_44f000(&var_14)
                            int32_t temp6_1 = *(eax_50 + 4)
                            *(eax_50 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_45d050(eax_50, *(eax_50 + 0xc) + 0x10)
                                var_14 = &data_5559b1
                        
                        int32_t var_8_7 = 0x12
                        break
                    
                    esi_2 += 1
                    
                    if (esi_2 s>= ebx_3)
                        goto label_4a5731
                
                break
            
        label_4a5731:
            eax_31 = var_30_2 + 1
            var_30_2 = eax_31
            
            if (eax_31 s>= 0x23)
                ebx_2 = arg1
                sub_44f240(ebx_2, &data_5559b1)
                int32_t var_20_5 = 1
                var_8_1.b = 0x13
                
                if (data_cdf414 != 0)
                    char* eax_35 = var_14
                    
                    if (eax_35 != 0 && *eax_35 != 0)
                        char* eax_36 = sub_44f000(&var_14)
                        int32_t temp1_1 = *(eax_36 + 4)
                        *(eax_36 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_45d050(eax_36, *(eax_36 + 0xc) + 0x10)
                            var_14 = &data_5559b1
                
                int32_t var_8_6 = 0x14
                break
    else
        char* eax_7 = var_14
        char* const ecx_5 = &data_5559b1
        
        if (eax_7 != 0)
            ecx_5 = eax_7
        
        int32_t eax_8 = sub_495050(ecx_5)
        
        if (eax_8 == 0)
            sub_44f240(arg1, &data_5559b1)
            int32_t var_20_1 = 1
            var_8_1.b = 3
            
            if (data_cdf414 != 0)
                char* eax_9 = var_14
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_44f000(&var_14)
                    int32_t temp0_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_14 = &data_5559b1
            
            int32_t var_8_2 = 4
            goto label_4a5403
        
        sub_4a9500(&var_2c, &var_38, eax_8, &var_2c)
        
        if (var_2c == 0)
            char* eax_14 = var_14
            *arg1 = eax_14
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_44f000(arg1)
                *(eax_15 + 4) += 1
                eax_14 = var_14
            
            int32_t var_20_2 = 1
            var_8_1.b = 5
            
            if (data_cdf414 != 0 && eax_14 != 0 && *eax_14 != 0)
                char* eax_16 = sub_44f000(&var_14)
                int32_t temp2_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                    var_14 = &data_5559b1
            
            int32_t var_8_3 = 6
            goto label_4a5403
        
        char* eax_17 = sub_48d060(&data_572068, eax_8)
        char i
        
        do
            i = *eax_17
            eax_17 = &eax_17[1]
        while (i != 0)
        int32_t ebx_1 = 0
        
        if (var_2c s<= 0)
        label_4a5689:
            char* eax_29 = var_14
            *arg1 = eax_29
            
            if (eax_29 != 0 && *eax_29 != 0)
                char* eax_28 = sub_44f000(arg1)
                *(eax_28 + 4) += 1
                eax_29 = var_14
            
            int32_t var_20_4 = 1
            var_8_1.b = 0xf
            
            if (data_cdf414 != 0 && eax_29 != 0 && *eax_29 != 0)
                char* eax_30 = sub_44f000(&var_14)
                int32_t temp5_1 = *(eax_30 + 4)
                *(eax_30 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
                    var_14 = &data_5559b1
            
            int32_t var_8_5 = 0x10
        label_4a5403:
            
            if (data_cdf414 != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_11 = sub_44f000(&var_1c)
                int32_t temp3_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        void* ecx_18 = eax_5 - (eax_17 - &eax_17[1] + 1)
        void* var_30_1 = ecx_18
        
        while (true)
            char* const var_24 = &data_5559b1
            var_8_1.b = 7
            sub_44f690(&var_24, var_34, ecx_18)
            sub_44f620(&var_24, var_38[ebx_1])
            char* const esi_1 = var_24
            char* edx_10 = &data_5559b1
            
            if (esi_1 != 0)
                edx_10 = esi_1
            
            char* const lpFileName_2
            sub_4a8b60(&lpFileName_2, edx_10)
            var_8_1.b = 8
            char* const lpFileName = &data_5559b1
            char* const lpFileName_1 = lpFileName_2
            
            if (lpFileName_1 != 0)
                lpFileName = lpFileName_1
            
            if (GetFileAttributesA(lpFileName) != 0xffffffff)
                ebx_2 = arg1
                sub_44f240(ebx_2, &data_5559b1)
                int32_t var_20_3 = 1
                var_8_1.b = 9
                
                if (data_cdf414 != 0)
                    char* const lpFileName_4 = lpFileName_2
                    
                    if (lpFileName_4 != 0 && *lpFileName_4 != 0)
                        char* eax_24 = sub_44f000(&lpFileName_2)
                        int32_t temp7_1 = *(eax_24 + 4)
                        *(eax_24 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_45d050(eax_24, *(eax_24 + 0xc) + 0x10)
                            lpFileName_2 = &data_5559b1
                
                var_8_1.b = 0xa
                
                if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_25 = sub_44f000(&var_24)
                    int32_t temp9_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
                
                var_8_1.b = 0xb
                
                if (data_cdf414 != 0)
                    char* eax_26 = var_14
                    
                    if (eax_26 != 0 && *eax_26 != 0)
                        char* eax_27 = sub_44f000(&var_14)
                        int32_t temp11_1 = *(eax_27 + 4)
                        *(eax_27 + 4) -= 1
                        
                        if (temp11_1 == 1)
                            sub_45d050(eax_27, *(eax_27 + 0xc) + 0x10)
                            var_14 = &data_5559b1
                
                int32_t var_8_4 = 0xc
                break
            
            var_8_1.b = 0xd
            
            if (data_cdf414 != 0)
                char* lpFileName_3 = lpFileName_2
                
                if (lpFileName_3 != 0 && *lpFileName_3 != 0)
                    char* eax_22 = sub_44f000(&lpFileName_2)
                    int32_t temp8_1 = *(eax_22 + 4)
                    *(eax_22 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                        lpFileName_2 = &data_5559b1
            
            var_8_1.b = 0xe
            
            if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_23 = sub_44f000(&var_24)
                int32_t temp10_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
            
            ebx_1 += 1
            var_8_1.b = 2
            
            if (ebx_1 s>= var_2c)
                goto label_4a5689
            
            ecx_18 = var_30_1
    
    if (data_cdf414 != 0 && edi_1 != 0 && *edi_1 != 0)
        char* eax_37 = sub_44f000(&var_1c)
        int32_t temp4_1 = *(eax_37 + 4)
        *(eax_37 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_45d050(eax_37, *(eax_37 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return ebx_2
}
