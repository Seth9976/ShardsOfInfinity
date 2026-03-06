// 函数名称: sub_432070
// 虚拟地址: 0x432070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_432070(int32_t arg1, int32_t* arg2, char* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541d80
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const result_2
    char* const result_5 = result_2
    char* result = *arg2 + result_5
    
    if (result s>= 0x1000)
        sub_44e4d0(result, &data_5559b1, "curInput + end < MAX_INPUTS", 
            "c:\ax2017\jams\shards\code\shardsai.cpp", 0xfd0, "AddInputPlayerRangeCount")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi = arg5
    
    while (esi s< result_5)
        char* var_2c_1 = arg3
        char* result_1
        sub_44f980(&result_1, "Player-%d")
        int32_t var_8_1 = 0
        char* const result_6 = &data_5559b1
        char* result_3 = result_1
        int32_t var_38_1 = esi
        
        if (result_3 != 0)
            result_6 = result_3
        
        char* const result_9 = result_6
        sub_44f980(&result_2, arg4)
        char* const result_7 = &data_5559b1
        var_8_1.b = 1
        char* result_4 = result_2
        
        if (result_4 != 0)
            result_7 = result_4
        
        char* const result_8 = result_7
        result = sub_42fec0(result_4, arg2, result_7, arg3)
        var_8_1.b = 2
        
        if (data_cdf414 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_2)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_2 = &data_5559b1
        
        int32_t var_8_2 = 3
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp1_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp1_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5559b1
        
        esi += 1
        int32_t var_8_3 = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
