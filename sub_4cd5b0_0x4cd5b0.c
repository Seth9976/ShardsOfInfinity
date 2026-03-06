// 函数名称: sub_4cd5b0
// 虚拟地址: 0x4cd5b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4cd5b0(int32_t arg1, int32_t* arg2, int32_t** arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542268
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    sub_4a8d30(&result_1, *arg2)
    int32_t var_8_1 = 0
    char* const result_2 = &data_5559b1
    char* result_3 = result_1
    char* const result_4 = &data_5559b1
    
    if (result_3 != 0)
        result_4 = result_3
    
    int32_t* eax_3 = sub_4d26e0(result_4)
    
    if (eax_3 == 0)
        eax_3 = *arg3
    else
        *arg3 = eax_3
    
    sub_44f510(arg4, &eax_3[8])
    char* result = *arg4
    
    if (result != 0)
        result_2 = result
    
    *arg2 = result_2
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
