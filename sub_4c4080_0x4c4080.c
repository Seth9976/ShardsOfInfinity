// 函数名称: sub_4c4080
// 虚拟地址: 0x4c4080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t**sub_4c4080(int32_t** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5450e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_3 = &data_5559b1
    int32_t** result_1
    int32_t** result_2 = result_1
    
    if (result_2 != 0)
        result_3 = result_2
    
    int32_t** result = sub_494c50(data_e47184, result_3)
    int32_t ebx
    
    if (result != 0)
        sub_491590(arg1[1])
        int32_t* edx = *arg1
        arg1[1] = 0
        sub_4c3800(*result, edx)
        result[3]
        sub_48b5b0(*result)
        sub_491590(result[1])
        _aligned_free_base(result)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_2 = 2
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                sub_45d050(result, &result[3][4])
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
