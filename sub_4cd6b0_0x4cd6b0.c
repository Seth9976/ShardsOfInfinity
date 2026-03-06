// 函数名称: sub_4cd6b0
// 虚拟地址: 0x4cd6b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4cd6b0(int32_t arg1, char** arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542268
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18
    int32_t* var_2c = &var_18
    bool cond:0 = sub_4529c0(&var_18, arg2, arg3, *arg2, &data_5828f8) == 0
    int32_t eax_5 = var_18
    
    if (not(cond:0))
        *arg3 = eax_5
    
    int32_t var_2c_1 = eax_5
    char* var_14
    sub_44f980(&var_14, &data_5828f8)
    int32_t var_8_1 = 0
    sub_44f510(arg4, &var_14)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
    
    char* result = *arg4
    char* result_1 = &data_5559b1
    
    if (result != 0)
        result_1 = result
    
    *arg2 = result_1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
