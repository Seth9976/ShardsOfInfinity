// 函数名称: sub_4a93d0
// 虚拟地址: 0x4a93d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4a93d0(char** arg1, char* arg2)
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
        sub_44e4d0(eax_3, &data_5559b1, "AssetPathIsValid(assetPath)", "c:\ax2017\engine\defload.cpp", 
            0xc2, "DefLoadXbinPathFromAssetPath")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_4 = _strrchr(arg2, 0x2e)
    
    if (eax_4 != 0 && __stricmp(eax_4, ".xpack") == 0)
        sub_44f2d0(arg1, arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    char* var_14
    sub_4a9200(&var_14, arg2)
    int32_t var_8_1 = 1
    char* const edx_1 = &data_5559b1
    char* eax_7 = var_14
    
    if (eax_7 != 0)
        edx_1 = eax_7
    
    sub_4a8b60(arg1, edx_1)
    int32_t var_18_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0)
        char* eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
