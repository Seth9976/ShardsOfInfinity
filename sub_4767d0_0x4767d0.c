// 函数名称: sub_4767d0
// 虚拟地址: 0x4767d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4767d0(char** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542d09
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_20 = arg1
    char* var_30 = arg1
    int32_t var_18 = 0
    char* eax_3 = *arg2
    var_30 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_44f000(&var_30)
        *(eax_4 + 4) += 1
    
    char* var_14
    sub_44fd60(&var_14)
    int32_t var_8_1 = 1
    char* const esi = &data_5559b1
    char* eax_5 = var_14
    char* const ecx_2 = &data_5559b1
    var_30 = 0x2e
    
    if (eax_5 != 0)
        ecx_2 = eax_5
    
    void* eax_6 = _strchr(ecx_2, var_30.b)
    char* eax_7 = var_14
    
    if (eax_6 != 0)
        if (eax_7 != 0)
            esi = eax_7
        
        var_30 = eax_6 - esi
        char* var_1c
        sub_44f320(&var_1c, esi, var_30)
        var_8_1.b = 3
        char* esi_1 = var_1c
        *arg1 = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            char* eax_9 = sub_44f000(arg1)
            *(eax_9 + 4) += 1
        
        int32_t var_18_2 = 1
        var_8_1.b = 4
        
        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_10 = sub_44f000(&var_1c)
            int32_t temp0_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
        
        int32_t var_8_3 = 5
        
        if (data_cdf414 != 0)
            eax_7 = var_14
        label_4768fc:
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_11 = sub_44f000(&var_14)
                int32_t temp1_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
    else
        *arg1 = eax_7
        
        if (eax_7 != 0 && *eax_7 != eax_6.b)
            char* eax_8 = sub_44f000(arg1)
            *(eax_8 + 4) += 1
            eax_7 = var_14
        
        int32_t var_18_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cdf414 != 0)
            goto label_4768fc
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
