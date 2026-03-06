// 函数名称: sub_44f9f0
// 虚拟地址: 0x44f9f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_44f9f0(int32_t arg1, char* arg2, char** arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_54233a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** result = arg3
    int32_t* result_1 = result
    int32_t var_14 = 0
    
    if (arg2 == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t xmm0[0x4] = sub_44f240(arg3, arg2)
    void* esi = arg4
    char* ecx = esi
    int32_t var_14_1 = 1
    char i
    
    do
        i = *ecx
        ecx = &ecx[1]
    while (i != 0)
    void* ecx_1 = ecx - &ecx[1]
    void* eax_11
    
    while (true)
        char* eax_4 = *result
        char* ecx_2 = &data_5559b1
        
        if (eax_4 != 0)
            ecx_2 = eax_4
        
        void* eax_5 = _strstr(xmm0, ecx_2, esi)
        
        if (eax_5 == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        char* edx_1 = *result
        char* const ecx_3 = &data_5559b1
        char* const var_28 = &data_5559b1
        char* eax_6 = &data_5559b1
        
        if (edx_1 != 0)
            ecx_3 = edx_1
        
        void* edi_1 = eax_5 - ecx_3
        
        if (edx_1 != 0)
            eax_6 = edx_1
        
        sub_44f690(&var_28, eax_6, edi_1)
        int32_t var_8_1 = 0
        char* eax_7 = *result_1
        int32_t eax_9
        
        if (eax_7 == 0 || *eax_7 == 0)
            eax_9 = 0
        else
            eax_9 = *(sub_44f000(result_1) + 8)
        
        void* eax_10 = eax_9 - edi_1
        eax_11 = eax_10 - ecx_1
        
        if (eax_10 - ecx_1 s< 0)
            sub_44e4d0(eax_11, &data_5559b1, "rightLen >= 0", "c:\ax2017\engine\xstring.cpp", 0x1dc, 
                "StringReplace")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (ecx_1 == neg.d(eax_5))
            break
        
        char* const var_20 = &data_5559b1
        sub_44f690(&var_20, ecx_1 + eax_5, eax_11)
        var_8_1.b = 1
        char* var_24
        sub_44f240(&var_24, &data_583aa8)
        var_8_1.b = 3
        char* const edi_2 = var_28
        char* const var_1c = edi_2
        
        if (edi_2 != 0 && *edi_2 != 0)
            char* eax_12 = sub_44f000(&var_1c)
            *(eax_12 + 4) += 1
        
        char* eax_13 = var_24
        int32_t var_14_2 = 3
        char* const ecx_11 = &data_5559b1
        
        if (eax_13 != 0)
            ecx_11 = eax_13
        
        sub_44f620(&var_1c, ecx_11)
        var_8_1.b = 4
        char* const esi_2 = var_1c
        char* const var_18 = esi_2
        
        if (esi_2 != 0 && *esi_2 != 0)
            char* eax_14 = sub_44f000(&var_18)
            *(eax_14 + 4) += 1
        
        char* const eax_15 = var_20
        int32_t var_14_3 = 7
        
        if (eax_15 == 0)
            eax_15 = &data_5559b1
        
        sub_44f620(&var_18, eax_15)
        xmm0 = sub_44f510(result_1, &var_18)
        int32_t var_14_4 = 3
        var_8_1.b = 5
        
        if (data_cdf414 != 0)
            char* const eax_16 = var_18
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_44f000(&var_18)
                int32_t temp2_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp2_1 == 1)
                    xmm0 = sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_18 = &data_5559b1
        
        int32_t var_14_5 = 1
        var_8_1.b = 6
        
        if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_18 = sub_44f000(&var_1c)
            int32_t temp3_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp3_1 == 1)
                xmm0 = sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                var_1c = &data_5559b1
        
        var_8_1.b = 7
        
        if (data_cdf414 != 0)
            char* eax_19 = var_24
            
            if (eax_19 != 0 && *eax_19 != 0)
                char* eax_20 = sub_44f000(&var_24)
                int32_t temp4_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp4_1 == 1)
                    xmm0 = sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                    var_24 = &data_5559b1
        
        var_8_1.b = 8
        
        if (data_cdf414 != 0)
            char* const eax_21 = var_20
            
            if (eax_21 != 0 && *eax_21 != 0)
                char* eax_22 = sub_44f000(&var_20)
                int32_t temp5_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp5_1 == 1)
                    xmm0 = sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                    var_20 = &data_5559b1
        
        int32_t var_8_2 = 9
        
        if (data_cdf414 != 0 && edi_2 != 0 && *edi_2 != 0)
            char* eax_23 = sub_44f000(&var_28)
            int32_t temp6_1 = *(eax_23 + 4)
            *(eax_23 + 4) -= 1
            
            if (temp6_1 == 1)
                xmm0 = sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
        
        result = result_1
        esi = arg4
        int32_t var_8_3 = 0xffffffff
    
    sub_44e4d0(eax_11, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x9a, "XString::XString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
