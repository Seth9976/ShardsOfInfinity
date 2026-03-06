// 函数名称: sub_4bebd0
// 虚拟地址: 0x4bebd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4bebd0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544e31
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c = 0
    char* var_14
    sub_44f240(&var_14, &data_5559b1)
    int32_t var_8_1 = 1
    char* esi = var_14
    char* ebx = arg2[1]
    int32_t* result
    
    while (true)
        int32_t eax_3 = sx.d(*ebx)
        char* var_18 = ebx
        
        switch (eax_3)
            case 0, 0x5d
                int32_t edi_2 = arg2[1]
                void* eax_16 = sub_4bd420(*arg2)
                char* ecx_15 = var_18
                int32_t var_1c_3 = 1
                *(eax_16 + 4) = edi_2
                result = arg1
                *eax_16 = 1
                *(eax_16 + 8) = ebx - edi_2
                arg2[1] = ecx_15
                result[2] = &data_5559b1
                *result = 3
                result[1] = eax_16
                int32_t var_8_4 = 6
                break
            case 0x5b
                int32_t var_30_2 = 0x5b
                sub_44f980(&var_18, "invalid char %c")
                result = arg1
                int32_t var_1c_2 = 1
                result[2] = &data_5559b1
                *result = 1
                var_8_1.b = 4
                
                if (data_cdf414 != 0)
                    char* eax_14 = var_18
                    
                    if (eax_14 != 0 && *eax_14 != 0)
                        char* eax_15 = sub_44f000(&var_18)
                        int32_t temp0_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                            var_18 = &data_5559b1
                
                int32_t var_8_3 = 5
                break
            case 0x5c
                uint32_t eax_4
                eax_4.b = ebx[1]
                
                if (eax_4.b == 0x5b || eax_4.b == 0x5d)
                    sub_44f690(&var_14, ebx, 1)
                    esi = var_14
                    ebx = &ebx[2]
                    continue
                
                int32_t var_30_1 = sx.d(eax_4.b)
                sub_44f980(&var_18, "unknown escape char %c")
                result = arg1
                result[2] = &data_5559b1
                *result = 1
                int32_t var_1c_1 = 1
                var_8_1.b = 2
                
                if (data_cdf414 != 0)
                    char* eax_10 = var_18
                    
                    if (eax_10 != 0 && *eax_10 != 0)
                        char* eax_11 = sub_44f000(&var_18)
                        int32_t temp2_1 = *(eax_11 + 4)
                        *(eax_11 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                            var_18 = &data_5559b1
                
                int32_t var_8_2 = 3
                break
        
        if (esi != 0 && *esi != 0)
            char* edi_1 = *(sub_44f000(&var_14) + 8)
            void* eax_6 = edi_1 + esi
            
            if (eax_6 u>= ebx)
                eax_6 = &ebx[1]
                
                if (eax_6 u>= esi)
                    sub_44e4d0(eax_6, &data_5559b1, 
                        "mMagicDataPtr + originalLength < str || str + length < mMagicDataPtr", 
                        "c:\ax2017\engine\xstring.cpp", 0x11d, "XString::AppendLength")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
            
            sub_44f100(eax_6, &edi_1[1], &var_14, 1)
            esi = var_14
            char eax_7 = *ebx
            ebx = &ebx[1]
            *(edi_1 + esi) = eax_7
            *(edi_1 + esi + 1) = 0
            continue
        
        sub_44f060(&var_14, 1)
        esi = var_14
        char eax_8 = *ebx
        ebx = &ebx[1]
        *esi = eax_8
        *(esi + 1) = 0
    
    if (data_cdf414 != 0 && esi != 0 && *esi != 0)
        char* eax_12 = sub_44f000(&var_14)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
