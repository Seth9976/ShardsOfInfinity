// 函数名称: ___scrt_is_nonwritable_in_current_image
// 虚拟地址: 0x51b792
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*___scrt_is_nonwritable_in_current_image(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x5ac260
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_4 = 0x5ac260 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30_1 = &data_51b79e
    int32_t var_8_5 = 0xfffffffe
    int32_t var_c = var_8_4
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    void* result = find_pe_section(&__dos_header, arg1 - &__dos_header)
    
    if (result == 0 || *(result + 0x24) s< 0)
        int32_t var_8_3 = 0xfffffffe
        result.b = 0
    else
        int32_t var_8_2 = 0xfffffffe
        result.b = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
