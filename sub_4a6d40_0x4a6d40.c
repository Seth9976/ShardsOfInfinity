// 函数名称: sub_4a6d40
// 虚拟地址: 0x4a6d40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4a6d40()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544148
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* result_1
    int32_t* result = sub_44f510(data_ce1794, &result_1)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, result[3] + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
