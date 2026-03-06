// 函数名称: sub_42a740
// 虚拟地址: 0x42a740
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_42a740(void* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_541a2b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_7cc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t var_798[0x77][0x4]
    _memset(&var_798, 0, 0x770)
    void var_7c0
    int128_t var_7ac = *sub_429fb0(&var_7c0, &var_798, arg1, &var_7c0)
    int32_t var_7d0_1 = sub_44ebe0()
    char* result_1
    sub_44f980(&result_1, "%sprofiles.xml")
    int32_t var_14_1 = 0
    int32_t* eax_6 = sub_494290(&var_7ac, data_dfc53c)
    char* result_3 = result_1
    char* const result_5 = &data_5559b1
    char* const result_4 = &data_5559b1
    
    if (result_3 != 0)
        result_4 = result_3
    
    if (sub_494520(eax_6, data_dfc53c, eax_6, result_4) == 0)
        char* result_2 = result_1
        
        if (result_2 != 0)
            result_5 = result_2
        
        char* const result_6 = result_5
        sub_44e260("Failed to write file: '%s'")
    
    char* result = sub_491590(eax_6)
    int32_t var_14_2 = 1
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
