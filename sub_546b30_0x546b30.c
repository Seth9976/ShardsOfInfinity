// 函数名称: sub_546b30
// 虚拟地址: 0x546b30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_546b30()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5411e0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0)
        result = data_5bb2ac
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&data_5bb2ac)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, &result[3][2])
                data_5bb2ac = &data_5559b1
    
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        result = data_5bb2a8
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&data_5bb2a8)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                result = sub_45d050(result, &result[3][2])
                data_5bb2a8 = &data_5559b1
    
    int32_t var_8_3 = 2
    
    if (data_cdf414 != 0)
        result = data_5bb2a4
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&data_5bb2a4)
            int32_t temp2_1 = result[1]
            result[1] -= 1
            
            if (temp2_1 == 1)
                result = sub_45d050(result, &result[3][2])
                data_5bb2a4 = &data_5559b1
    
    int32_t var_8_4 = 3
    
    if (data_cdf414 != 0)
        result = data_5bb2a0
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&data_5bb2a0)
            int32_t temp3_1 = result[1]
            result[1] -= 1
            
            if (temp3_1 == 1)
                result = sub_45d050(result, &result[3][2])
                data_5bb2a0 = &data_5559b1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
