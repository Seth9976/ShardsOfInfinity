// 函数名称: _fclose
// 虚拟地址: 0x5237c2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_fclose(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x5ac4d8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac4d8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_2 = &data_5237ce
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_24 = arg1
    int32_t result
    
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    else if (((arg1[3] u>> 0xc).b & 1) == 0)
        int32_t var_20_1 = 0
        __lock_file(arg1)
        int32_t var_8_1 = 0
        int32_t result_1 = __fclose_nolock(arg1)
        int32_t result_2 = result_1
        int32_t var_8_2 = 0xfffffffe
        $LN9(&__saved_ebp)
        result = result_1
    else
        __acrt_stdio_free_stream(arg1)
        result = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_52382d
    return result
}
