// 函数名称: sub_4aa170
// 虚拟地址: 0x4aa170
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4aa170(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5444d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_28 = &data_ce18a0
    char const* const var_2c = "%s/res/"
    char* result_1
    char** result_5 = &result_1
    char** result_6 = sub_44f980(result_5, var_2c)
    int32_t var_28_1 = arg2
    int32_t var_8_1 = 0
    char* result_3 = result_1
    result_5 = result_6
    result_5 = result_3
    
    if (result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_44f000(&result_5)
        *(eax_3 + 4) += 1
    
    char* result
    int32_t ebx
    
    if (sub_4a9f90(result_5, arg1).b == 0)
        int32_t var_28_2 = 0xce1798
        char const* const var_2c_2 = "%s/sys/"
        char* result_2
        result_5 = &result_2
        char** result_7 = sub_44f980(result_5, var_2c_2)
        int32_t var_28_3 = arg2
        var_8_1.b = 2
        int32_t var_2c_3 = arg1
        char* result_4 = result_2
        result_5 = result_7
        result_5 = result_4
        
        if (result_4 != 0 && *result_4 != 0)
            char* eax_4 = sub_44f000(&result_5)
            *(eax_4 + 4) += 1
        
        ebx.b = sub_4a9f90().b != 0
        var_8_1.b = 5
        
        if (data_cdf414 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_2)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(result, *(result + 0xc) + 0x10)
                    result_2 = &data_5559b1
    else
        ebx.b = 1
    
    int32_t var_8_2 = 6
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
