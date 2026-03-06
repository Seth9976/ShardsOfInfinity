// 函数名称: sub_492d70
// 虚拟地址: 0x492d70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_492d70(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543828
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* esi = data_cdf47c
    esi[3] += 1
    int32_t* edi = *esi
    
    if (edi == 0)
        sub_494390(esi)
        edi = *esi
    
    *esi = *edi
    edi[2] = 0
    edi[3] = 0
    edi[4] = 0
    *edi = &data_5559b1
    edi[1] = &data_5559b1
    int32_t* var_14 = edi
    sub_429090(arg1 + 4, &var_14)
    char* arg_4
    sub_44f510(edi, &arg_4)
    void* ebx_1 = data_cdf47c
    *(ebx_1 + 0x1c) += 1
    int32_t* result = *(ebx_1 + 0x10)
    
    if (result == 0)
        sub_494310(ebx_1 + 0x10)
        result = *(ebx_1 + 0x10)
    
    *(ebx_1 + 0x10) = *result
    result[2] = 0
    result[3] = 0
    result[4] = 0
    *result = &data_5559b1
    result[1] = 0
    result[2] = 0
    result[3] = 0
    edi[2] = result
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* eax_5 = arg_4
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_44f000(&arg_4)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
