// 函数名称: sub_4bf0e0
// 虚拟地址: 0x4bf0e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4bf0e0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544e90
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14 = arg2
    void** const ebx = &data_59699c
    int32_t* result
    
    while (true)
        int32_t eax_3 = *(arg2 + 4)
        void var_38
        int32_t* eax_5 = (*ebx)(&var_38, arg2, eax_2)
        int32_t var_8_1 = 0
        char* esi_1 = eax_5[2]
        int32_t ecx = eax_5[1]
        int32_t edi_1 = *eax_5
        int32_t var_2c_1 = edi_1
        int32_t var_28_1 = ecx
        char* const var_24 = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            char* eax_6 = sub_44f000(&var_24)
            *(eax_6 + 4) += 1
        
        var_8_1.b = 3
        int32_t ecx_2 = data_cdf414
        
        if (ecx_2 != 0)
            char* const var_30
            char* eax_7 = var_30
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_44f000(&var_30)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_30 = &data_5559b1
                
                ecx_2 = data_cdf414
        
        arg2 = var_14
        var_8_1.b = 2
        
        if (**(arg2 + 4) == 0)
            if (edi_1 == 1)
                result = arg1
                *result = 1
                result[1] = ecx
                result[2] = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_21 = sub_44f000(&result[2])
                    ecx_2 = data_cdf414
                    *(eax_21 + 4) += 1
                
                int32_t var_8_6 = 5
            label_4bf2d9:
                
                if (ecx_2 == 0)
                    break
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_22 = sub_44f000(&var_24)
                    int32_t temp2_1 = *(eax_22 + 4)
                    *(eax_22 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                
                break
            
            if (edi_1 == 2 || edi_1 == 3 || edi_1 == 4)
                result = arg1
                *result = edi_1
                result[1] = ecx
                result[2] = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    char* eax_19 = sub_44f000(&result[2])
                    ecx_2 = data_cdf414
                    *(eax_19 + 4) += 1
                
                int32_t var_8_5 = 6
                goto label_4bf2d9
            
            int32_t var_8_3 = 7
        else
            *(arg2 + 4) = eax_3
            int32_t var_8_2 = 4
        
        if (ecx_2 != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_11 = sub_44f000(&var_24)
            int32_t temp1_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                var_24 = &data_5559b1
            
            arg2 = var_14
        
        ebx = &ebx[1]
        int32_t var_8_4 = 0xffffffff
        
        if (ebx s>= "mActionName")
            result = arg1
            *result = data_e47140
            result[1] = data_e47144
            result[2] = data_e47148
            char* eax_15 = data_e47148
            
            if (eax_15 == 0 || *eax_15 == 0)
                break
            
            char* eax_16 = sub_44f000(&result[2])
            *(eax_16 + 4) += 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
