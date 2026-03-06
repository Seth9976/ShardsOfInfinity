// 函数名称: ___std_fs_remove@4
// 虚拟地址: 0x411220
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**___std_fs_remove@4()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540cc8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_65aac8:4 == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    char* const var_24 = &data_5559b1
    int32_t var_8_1 = 0
    char* var_20
    sub_44f240(&var_20, "Shards")
    var_8_1.b = 1
    int32_t eax_5 = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x22c)
    char* var_1c
    sub_44f240(&var_1c, "-Steam")
    var_8_1.b = 2
    var_8_1.b = 3
    char* const var_18
    sub_44f510(&var_24, sub_44f810(&var_20, &var_18, &var_1c))
    var_8_1.b = 4
    
    if (data_cdf414 != 0)
        char* eax_7 = var_18
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_44f000(&var_18)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                var_18 = &data_5559b1
    
    var_8_1.b = 5
    
    if (data_cdf414 != 0)
        char* eax_9 = var_1c
        
        if (eax_9 != 0 && *eax_9 != 0)
            char* eax_10 = sub_44f000(&var_1c)
            int32_t temp1_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
    
    int32_t ecx
    int32_t var_3c_2 = ecx
    var_8_1.b = 1
    char* const ecx_13 = &data_5559b1
    char* const esi = var_24
    char* const eax_11 = &data_5559b1
    char* edi = var_20
    
    if (esi != 0)
        eax_11 = esi
    
    char* const var_40_1 = eax_11
    
    if (edi != 0)
        ecx_13 = edi
    
    int32_t var_44 = *(data_65ae00 + 0x10)
    char* const var_48 = ecx_13
    int32_t var_4c = eax_5
    char* var_14
    sub_44f980(&var_14, "v=1&tid=UA-34292269-5&cid=%d&t=screenview&an=%s&av=%s&aid=%s&cd=%s")
    var_8_1.b = 6
    char* const ecx_14 = &data_5559b1
    char* eax_13 = var_14
    
    if (eax_13 != 0)
        ecx_14 = eax_13
    
    void* eax_14
    char* ecx_15
    int32_t edx_5
    eax_14, ecx_15, edx_5 = sub_4501f0()
    char* const var_3c_3 = ecx_14
    *eax_14 = data_65aac8
    *(eax_14 + 0x14) = 1
    *(eax_14 + 0x24) = 1
    *(eax_14 + 0x28) = 2
    sub_452690(eax_14, edx_5, eax_14, ecx_15)
    var_8_1.b = 7
    char* eax_15
    
    if (data_cdf414 != 0)
        eax_15 = var_14
        
        if (eax_15 != 0 && *eax_15 != 0)
            eax_15 = sub_44f000(&var_14)
            int32_t temp2_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    var_8_1.b = 8
    
    if (data_cdf414 != 0 && edi != 0 && *edi != 0)
        eax_15 = sub_44f000(&var_20)
        int32_t temp3_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
    
    int32_t var_8_2 = 9
    
    if (data_cdf414 != 0 && esi != 0 && *esi != 0)
        eax_15 = sub_44f000(&var_24)
        int32_t temp4_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
    
    eax_15.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_15
}
