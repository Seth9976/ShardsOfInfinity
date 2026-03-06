// 函数名称: sub_490030
// 虚拟地址: 0x490030
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_490030(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5436b1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_20 = arg1
    int32_t var_18 = 0
    int32_t var_8_1 = 1
    char* esi_1 = *data_ce1794
    char* var_14 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_3 = sub_44f000(&var_14)
        *(eax_3 + 4) += 1
    
    int32_t var_18_1 = 2
    var_8_1.b = 2
    int32_t edi
    
    if (esi_1 == 0 || *esi_1 == 0)
        edi = 0
    else
        edi = *(sub_44f000(&var_14) + 8)
    
    char* arg_4
    char* eax_6 = arg_4
    int32_t ecx_3
    
    if (eax_6 == 0 || *eax_6 == 0)
        ecx_3 = 0
    else
        ecx_3 = *(sub_44f000(&arg_4) + 8)
        eax_6 = arg_4
    
    bool cond:2_1
    
    if (ecx_3 s> edi)
        char* const ecx_4 = &data_5559b1
        
        if (eax_6 != 0)
            ecx_4 = eax_6
        
        char* eax_7 = &data_5559b1
        
        if (esi_1 != 0)
            eax_7 = esi_1
        
        cond:2_1 = __strnicmp(eax_7, ecx_4, edi) != 0
        eax_6 = arg_4
    
    if (ecx_3 s<= edi || cond:2_1)
        *arg1 = eax_6
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_13 = sub_44f000(arg1)
            *(eax_13 + 4) += 1
            eax_6 = arg_4
        
        int32_t var_18_3 = 3
        var_8_1.b = 7
        
        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_14 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
            
            eax_6 = arg_4
        
        int32_t var_8_3 = 8
        
        if (data_cdf414 != 0)
            goto label_490213
    else
        char* ecx_5 = &data_5559b1
        
        if (eax_6 != 0)
            ecx_5 = eax_6
        
        char* var_1c
        sub_44f2d0(&var_1c, &ecx_5[edi])
        var_8_1.b = 3
        char* edi_1 = var_1c
        *arg1 = edi_1
        
        if (edi_1 != 0 && *edi_1 != 0)
            char* eax_10 = sub_44f000(arg1)
            *(eax_10 + 4) += 1
        
        int32_t var_18_2 = 3
        var_8_1.b = 4
        
        if (data_cdf414 != 0 && edi_1 != 0 && *edi_1 != 0)
            char* eax_11 = sub_44f000(&var_1c)
            int32_t temp2_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
        
        var_8_1.b = 5
        
        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_12 = sub_44f000(&var_14)
            int32_t temp3_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
        
        int32_t var_8_2 = 6
        
        if (data_cdf414 != 0)
            eax_6 = arg_4
        label_490213:
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_15 = sub_44f000(&arg_4)
                int32_t temp1_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
