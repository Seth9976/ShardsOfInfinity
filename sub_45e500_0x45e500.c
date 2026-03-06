// 函数名称: sub_45e500
// 虚拟地址: 0x45e500
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_45e500(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, char* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542750
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg3
    int32_t eax_3 = sub_4c0b90(arg2)
    
    if (eax_3 == 3)
        sub_45d230(arg3, &arg2[1])
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    char* var_14
    
    if (eax_3 == 2)
        int32_t* edx_3 = arg2[0x1a]
        
        if (edx_3 == 0)
            sub_44f240(&var_14, "null root")
            int32_t var_8_3 = 2
            sub_45d630(arg3, &var_14)
            int32_t var_8_4 = 3
            goto label_45e580
        
        sub_45d980(eax_3, edx_3, arg3, arg4, arg5, arg6)
    else
        sub_44f2d0(&var_14, arg2[0x19])
        int32_t var_8_1 = 0
        sub_45d630(arg3, &var_14)
        int32_t var_8_2 = 1
    label_45e580:
        
        if (data_cdf414 != 0)
            char* eax_6 = var_14
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_44f000(&var_14)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg3
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
