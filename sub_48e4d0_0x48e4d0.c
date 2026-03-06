// 函数名称: sub_48e4d0
// 虚拟地址: 0x48e4d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_48e4d0(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543451
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    int32_t var_18 = 0
    void* eax_3 = sub_48e2c0(arg2)
    
    if (eax_3.b == 0)
        sub_44e4d0(eax_3, &data_5559b1, "AssetPathIsValid(assetPath)", 
            "c:\ax2017\engine\assetcatalog.cpp", 0x253, "AssetNameFromPath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*arg2 == 0)
        sub_44f240(arg1, &data_5559b1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    void* eax_5 = _strrchr(arg2, 0x2e)
    
    if (eax_5 == 0)
        sub_44e4d0(eax_5, &data_5559b1, "ext", "c:\ax2017\engine\assetcatalog.cpp", 0x25b, 
            "AssetNameFromPath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* const var_14 = &data_5559b1
    int32_t var_8_1 = 1
    sub_44f690(&var_14, arg2, eax_5 - arg2)
    char* const esi_1 = var_14
    *arg1 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_7 = sub_44f000(arg1)
        *(eax_7 + 4) += 1
    
    int32_t var_18_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_8 = sub_44f000(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
