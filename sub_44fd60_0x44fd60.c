// 函数名称: sub_44fd60
// 虚拟地址: 0x44fd60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_44fd60(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542381
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_18 = arg1
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    char* const edx = &data_5559b1
    char* arg_4
    char* eax_3 = arg_4
    
    if (eax_3 != 0)
        edx = eax_3
    
    void* eax_4 = _strrchr(edx, 0x2f)
    char* eax_6
    
    if (eax_4 != 0)
    label_44fe08:
        
        if (eax_4 == 0xffffffff)
            sub_44e4d0(eax_4, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_44f240(arg1, eax_4 + 1)
        int32_t var_14_2 = 1
        int32_t var_8_3 = 3
        
        if (data_cdf414 != 0)
            eax_6 = arg_4
        label_44fe2d:
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_8 = sub_44f000(&arg_4)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
    else
        char* eax_5 = arg_4
        char* const ecx = &data_5559b1
        
        if (eax_5 != 0)
            ecx = eax_5
        
        eax_4 = _strrchr(ecx, 0x5c)
        
        if (eax_4 != 0)
            goto label_44fe08
        
        eax_6 = arg_4
        *arg1 = eax_6
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(arg1)
            *(eax_7 + 4) += 1
            eax_6 = arg_4
        
        int32_t var_14_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cdf414 != 0)
            goto label_44fe2d
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
