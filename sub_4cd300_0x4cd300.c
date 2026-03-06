// 函数名称: sub_4cd300
// 虚拟地址: 0x4cd300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4cd300(int32_t arg1, char** arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545438
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c
    int32_t* var_34 = &var_1c
    int32_t var_20
    int32_t* var_38 = &var_20
    
    if (sub_4529c0(&var_20, arg2, arg3, *arg2, " %f %f") != 0)
        *arg3 = var_20
        arg3[1] = var_1c
    
    var_38.q = _mm_cvtps_pd(arg3[1])
    char* var_40
    var_40.q = _mm_cvtps_pd(*arg3)
    char* var_18
    sub_44f980(&var_18, "%g %g")
    int32_t var_8_1 = 0
    sub_44f510(arg4, &var_18)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* eax_7 = var_18
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_44f000(&var_18)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
    
    char* result = *arg4
    char* result_1 = &data_5559b1
    
    if (result != 0)
        result_1 = result
    
    *arg2 = result_1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
