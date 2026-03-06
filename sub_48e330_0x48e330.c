// 函数名称: sub_48e330
// 虚拟地址: 0x48e330
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_48e330(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543411
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = arg3
    int32_t var_18 = 0
    void* const var_34
    
    if (*arg2 != 0)
        var_34 = 0x5c
        void* eax_3 = _strchr(arg2, var_34.b)
        void* eax_4
        
        if (eax_3 == 0)
            var_34 = 0x2f
            eax_4 = _strchr(arg2, var_34.b)
        
        if (eax_3 == 0 && eax_4 == 0)
        label_48e45c:
            var_34 = "AssetPathFromName"
            sub_44e4d0(eax_4, &data_5559b1, "AssetNameIsValid(assetName)", 
                "c:\ax2017\engine\assetcatalog.cpp", 0x248, var_34)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_4 = sub_495050(arg2)
        
        if (eax_4 != 0)
            goto label_48e45c
    
    void* const eax_5 = &data_572068
    
    do
        if (*eax_5 == arg4)
            eax_5 = *(eax_5 + 4)
            
            if (*eax_5 == 0)
                break
            
            var_34 = eax_5
            char* var_38_3 = arg2
            void* var_14
            sub_44f980(&var_14, "%s.%s")
            int32_t var_8_1 = 1
            void* eax_6 = var_14
            var_34 = eax_6
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_44f000(&var_34)
                *(eax_7 + 4) += 1
            
            sub_48e630(arg3)
            int32_t var_18_1 = 1
            int32_t var_8_2 = 2
            
            if (data_cdf414 != 0)
                void* eax_8 = var_14
                
                if (eax_8 != 0 && *eax_8 != 0)
                    char* eax_9 = sub_44f000(&var_14)
                    int32_t temp0_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3
        
        eax_5 += 8
    while (*(eax_5 + 4) != 0)
    
    var_34 = "AssetPathFromName"
    sub_44e4d0(eax_5, &data_5559b1, "typeString[0] != 0", "c:\ax2017\engine\assetcatalog.cpp", 0x24b, 
        var_34)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
