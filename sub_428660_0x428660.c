// 函数名称: sub_428660
// 虚拟地址: 0x428660
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_428660(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541528
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_472550(arg1, sub_428600)
    void* eax_3 = sub_41ad20()
    void* edx = data_65aabc
    
    if (edx == 0)
        sub_44e4d0(eax_3, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_18
    int32_t* var_28 = &var_18
    void* eax_4 = sub_41af80(eax_3 + 8, *(edx + 0x648))
    char* result_1
    sub_4167e0(eax_4, eax_3 + 8, &result_1, eax_4)
    int32_t var_8_1 = 0
    sub_469cf0(&result_1, &data_5bb2dc, arg1, &result_1, 0xffffffff)
    sub_441db0(var_18)
    int32_t var_38 = 0xffffffff
    char* result = sub_469930(arg1)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
