// 函数名称: sub_490250
// 虚拟地址: 0x490250
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_490250(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543709
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** result = arg1
    char** result_1 = result
    int32_t var_8_1 = 0
    int32_t var_1c = 0
    char* esi_1 = *data_ce1794
    char* var_20 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        arg1 = &var_20
        char* eax_3 = sub_44f000(arg1)
        *(eax_3 + 4) += 1
    
    int32_t var_1c_1 = 2
    int32_t* var_3c = arg1
    int32_t var_8_2 = 1
    int32_t* eax_4 = *(arg2 + 0x20)
    var_3c = eax_4
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_44f000(&var_3c)
        *(eax_5 + 4) += 1
    
    char* const var_14
    sub_4a9d10(&var_14)
    var_8_2.b = 2
    char* edi_1 = var_14
    char* var_18 = edi_1
    
    if (edi_1 != 0 && *edi_1 != 0)
        char* eax_6 = sub_44f000(&var_18)
        *(eax_6 + 4) += 1
    
    var_8_2.b = 3
    int32_t* ecx_3 = data_ce1794
    var_3c = &var_18
    int32_t* ecx_4 = sub_44f510(ecx_3, var_3c)
    var_8_2.b = 4
    
    if (data_cdf414 != 0 && edi_1 != 0 && *edi_1 != 0)
        ecx_4 = &var_18
        char* eax_7 = sub_44f000(ecx_4)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            ecx_4 = sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
    
    var_8_2.b = 2
    char* arg_4
    char* eax_8 = arg_4
    var_3c = ecx_4
    int32_t* eax_9 = *(eax_8 + 0x20)
    var_3c = eax_9
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_44f000(&var_3c)
        *(eax_10 + 4) += 1
    
    sub_490030(result)
    int32_t var_1c_2 = 3
    arg_4 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_11 = sub_44f000(&arg_4)
        *(eax_11 + 4) += 1
    
    var_8_2.b = 5
    int32_t* ecx_9 = data_ce1794
    var_3c = &arg_4
    sub_44f510(ecx_9, var_3c)
    var_8_2.b = 6
    
    if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_12 = sub_44f000(&arg_4)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
    
    var_8_2.b = 7
    
    if (data_cdf414 != 0)
        char* eax_13 = var_14
        
        if (eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_44f000(&var_14)
            int32_t temp2_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_3 = 8
    
    if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_15 = sub_44f000(&var_20)
        int32_t temp3_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
