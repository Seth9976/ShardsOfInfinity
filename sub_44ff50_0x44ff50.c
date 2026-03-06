// 函数名称: sub_44ff50
// 虚拟地址: 0x44ff50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_44ff50(int32_t arg1, char* arg2, int16_t* arg3, uint16_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5423a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edi = arg2
    void* eax_3 = _strchr(edi, 0x3a)
    char* const esi = &data_5559b1
    char* const var_14 = &data_5559b1
    int32_t var_8_1 = 0
    
    if (eax_3 != 0)
        sub_44f590(&var_14, edi)
        sub_44f690(&var_14, edi, eax_3 - edi)
        uint16_t eax_7 = __atoi64(eax_3 + 1)
        esi = var_14
        arg4 = eax_7
        edi = &data_5559b1
        
        if (esi != 0)
            edi = esi
    
    uint32_t eax_8 = inet_addr(edi)
    
    if (eax_8 != 0xffffffff)
        goto label_450007
    
    char* result = gethostbyname(edi)
    int16_t* ebx
    
    if (result == 0 || *(result + 0xa) != 4 || *(result + 8) != 2)
        ebx.b = 0
    else
        eax_8 = ***(result + 0xc)
    label_450007:
        *(arg3 + 4) = eax_8
        *arg3 = 2
        arg3[1] = htons(arg4).w
        ebx.b = 1
    
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0 && esi != 0 && *esi != 0)
        result = sub_44f000(&var_14)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
