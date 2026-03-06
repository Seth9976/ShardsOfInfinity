// 函数名称: sub_494c50
// 虚拟地址: 0x494c50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t** __fastcallsub_494c50(char* arg1, char* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_543918
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** edi = arg1
    char* var_40 = arg1
    
    if (arg2 == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_40, arg2)
    void var_2c
    sub_48c750(&var_2c, 3)
    int32_t var_14_1 = 0
    int32_t* eax_4 = sub_494ad0(edi, &var_2c)
    int32_t** result
    
    if (eax_4 != 0)
        result = sub_45cd70(0x10)
        *result = zx.o(0)
        result[3] = edi
        result[1] = eax_4
        *result = sub_492a80(eax_4, edi)
    else
        result = nullptr
    
    int32_t var_14_2 = 2
    
    if (data_cdf414 != 0)
        char* var_28
        char* eax_7 = var_28
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_44f000(&var_28)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
