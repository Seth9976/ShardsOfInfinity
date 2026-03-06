// 函数名称: ?common_fseek@@YAHV__crt_stdio_stream@@_JH@Z
// 虚拟地址: 0x52a8b8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?common_fseek@@YAHV__crt_stdio_stream@@_JH@Z(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac5f8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac5f8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_2 = &data_52a8c4
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    
    if (arg1 != 0 && (arg4 == 0 || arg4 == 1 || arg4 == 2))
        int32_t var_20_1 = 0xffffffff
        __lock_file(arg1)
        int32_t var_8_1 = 0
        int32_t result_1 = common_fseek_nolock(arg1, arg2, arg3, arg4)
        int32_t result_2 = result_1
        int32_t var_8_2 = 0xfffffffe
        $LN11(&__saved_ebp)
        result = result_1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_52a92b
    return result
}
