// 函数名称: sub_5380e3
// 虚拟地址: 0x5380e3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_5380e3()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac9a8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac9a8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_5380ef
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    int32_t* eax = sub_530312()
    void* result
    
    if ((eax[0xd4] & data_5b03e4) != 0)
        result = eax[0x13]
    
    if ((eax[0xd4] & data_5b03e4) == 0 || result == 0)
        ___acrt_lock(4)
        int32_t var_8_1 = 0
        result = __updatetlocinfoEx_nolock(&eax[0x13], data_65a774)
        void* result_1 = result
        int32_t var_8_2 = 0xfffffffe
        __unlock_locales()
        
        if (result == 0)
            sub_52e289()
            noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_538153
    return result
}
