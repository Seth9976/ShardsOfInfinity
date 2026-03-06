// 函数名称: sub_4c7820
// 虚拟地址: 0x4c7820
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4c7820(char** arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5451f1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    int32_t var_8_1 = 0
    void* const eax_3 = &data_572068
    int32_t var_18 = 0
    char* ecx_1
    
    while (true)
        if (*eax_3 == *(arg2 + 4))
            ecx_1 = *(eax_3 + 4)
            break
        
        eax_3 += 8
        
        if (*(eax_3 + 4) == 0)
            ecx_1 = &data_5559b1
            break
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    
    void* var_30 = arg2
    char* var_14
    sub_490250(&var_14, data_ce26e4)
    int32_t var_8_2 = 1
    *arg1 = &data_5559b1
    char* eax_4 = var_14
    int32_t var_18_1 = 1
    int32_t edx_1
    
    if (eax_4 == 0 || *eax_4 == 0)
        edx_1 = 0
    else
        edx_1 = *(sub_44f000(&var_14) + 8)
        eax_4 = var_14
    
    char* ecx_5 = &data_5559b1
    
    if (eax_4 != 0)
        ecx_5 = eax_4
    
    sub_44f690(arg1, ecx_5, edx_1 - (ecx_1 - &ecx_1[1] + 1))
    int32_t var_8_3 = 2
    
    if (data_cdf414 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
