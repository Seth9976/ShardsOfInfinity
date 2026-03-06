// 函数名称: sub_480260
// 虚拟地址: 0x480260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_480260(int32_t arg1, void* arg2, int32_t* arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542f71
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = arg2
    int32_t var_20 = 0
    char* var_14
    int32_t xmm0[0x4] = sub_44f240(&var_14, &data_5559b1)
    char* ebx = arg4
    int32_t var_8_1 = 1
    char i
    
    do
        i = *ebx
        ebx = &ebx[1]
    while (i != 0)
    
    char* ecx_2 = arg5
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    
    void* i_2
    int32_t xmm0_1[0x4]
    i_2, xmm0_1 = _strstr(xmm0, esi, arg4)
    char* const var_18
    char* esi_3
    int32_t* result
    
    for (void* i_1 = i_2; i_1 != 0; i_1 = i_2)
        void* eax_3 = _strstr(xmm0_1, esi + ebx - &ebx[1], arg5)
        
        if (eax_3 == 0)
            sub_44e4d0(eax_3, &data_5559b1, "Halt", "c:\ax2017\engine\localization.cpp", 0x6f, 
                "RemoveMarkup")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (esi == 0)
            sub_44e4d0(eax_3, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x9a, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        var_18 = &data_5559b1
        sub_44f690(&var_18, esi, i_1 - esi)
        var_8_1.b = 5
        char* const esi_1 = var_18
        char* const eax_4 = &data_5559b1
        
        if (esi_1 != 0)
            eax_4 = esi_1
        
        int32_t xmm0_2[0x4] = sub_44f620(&var_14, eax_4)
        var_8_1.b = 6
        
        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_5 = sub_44f000(&var_18)
            int32_t temp1_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp1_1 == 1)
                xmm0_2 = sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        esi = eax_3 + ecx_2 - &ecx_2[1]
        var_8_1.b = 1
        
        if (*esi == 0)
            result = arg3
            esi_3 = var_14
            *result = esi_3
            
            if (esi_3 != 0 && *esi_3 != 0)
                char* eax_6 = sub_44f000(result)
                *(eax_6 + 4) += 1
            
            int32_t var_20_1 = 1
            int32_t var_8_2 = 7
            goto label_480446
        
        i_2, xmm0_1 = _strstr(xmm0_2, esi, arg4)
    
    if (esi == 0)
        sub_44e4d0(i_2, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_18, esi)
    var_8_1.b = 2
    char* const esi_4 = var_18
    char* const eax_7 = &data_5559b1
    
    if (esi_4 != 0)
        eax_7 = esi_4
    
    sub_44f620(&var_14, eax_7)
    var_8_1.b = 3
    
    if (data_cdf414 != 0 && esi_4 != 0 && *esi_4 != 0)
        char* eax_8 = sub_44f000(&var_18)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
    
    var_8_1.b = 1
    result = arg3
    esi_3 = var_14
    *result = esi_3
    
    if (esi_3 != 0 && *esi_3 != 0)
        char* eax_9 = sub_44f000(result)
        *(eax_9 + 4) += 1
    
    int32_t var_20_2 = 1
    int32_t var_8_3 = 4
    label_480446:
    
    if (data_cdf414 != 0 && esi_3 != 0 && *esi_3 != 0)
        char* eax_10 = sub_44f000(&var_14)
        int32_t temp2_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
