// 函数名称: __query_new_handler
// 虚拟地址: 0x52f5cc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__query_new_handler()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac700
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac700 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34 = &data_52f5d8
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    ___acrt_lock(0)
    int32_t var_8_1 = 0
    uint32_t __security_cookie_2 = __security_cookie
    int32_t result = ror.d(__security_cookie_2 ^ data_65a680, __security_cookie_2.b & 0x1f)
    int32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN7()
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_52f611
    return result
}
