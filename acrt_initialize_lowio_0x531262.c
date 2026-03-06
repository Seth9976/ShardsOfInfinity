// 函数名称: ___acrt_initialize_lowio
// 虚拟地址: 0x531262
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_initialize_lowio()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac7a0
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac7a0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34 = &data_53126e
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    ___acrt_lock(7)
    char ebx = 0
    char var_1d = 0
    int32_t var_8_1 = 0
    
    if (___acrt_lowio_ensure_fh_exists(0) == 0)
        initialize_inherited_file_handles_nolock()
        initialize_stdio_handles_nolock()
        ebx = 1
        char var_1d_1 = 1
    
    int32_t var_8_2 = 0xfffffffe
    $LN8()
    int32_t result
    result.b = ebx
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5312ab
    return result
}
