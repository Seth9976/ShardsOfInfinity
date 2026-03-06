// 函数名称: sub_484ab0
// 虚拟地址: 0x484ab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_484ab0(int32_t arg1, char*** arg2, char* arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543168
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_3c = 0x2e
    void* eax_3
    char* ecx
    eax_3, ecx = _strrchr(arg3, var_3c.b)
    
    if (eax_3 != 0)
        var_3c = ".zip"
        eax_3, ecx = __stricmp(eax_3, var_3c)
        
        if (eax_3 == 0)
            sub_484a70()
            noreturn
    
    var_3c = ecx
    
    if (arg3 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_3c, arg3)
    void var_24
    sub_48c750(&var_24, 2)
    int32_t var_8_1 = 0
    var_3c = nullptr
    int64_t var_1c = 0
    char* eax_4 = sub_48c610(&var_1c)
    char* var_20
    
    if (eax_4.b == 0)
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            eax_4 = var_20
            
            if (eax_4 != 0 && *eax_4 != 0)
                eax_4 = sub_44f000(&var_20)
                int32_t temp1_1 = *(eax_4 + 4)
                *(eax_4 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
        
        eax_4.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    var_3c = arg4
    int32_t ebx
    ebx.b = sub_484650(eax_4, arg2, &var_1c, var_3c.b)
    var_3c = var_1c.d
    _fclose(var_3c)
    int32_t var_8_3 = 2
    char* eax_6
    
    if (data_cdf414 != 0)
        eax_6 = var_20
        
        if (eax_6 != 0 && *eax_6 != 0)
            eax_6 = sub_44f000(&var_20)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
    
    eax_6.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6
}
