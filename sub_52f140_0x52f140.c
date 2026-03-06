// 函数名称: sub_52f140
// 虚拟地址: 0x52f140
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_52f140() __noreturn
{
    // 第一条实际指令: int32_t var_4 = 0xc
    int32_t var_4 = 0xc
    int32_t var_8 = 0x5ac6c0
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac6c0 ^ __security_cookie_1
    int32_t eax_1 = __security_cookie_1 ^ &var_4
    int32_t var_20 = eax_1
    int32_t var_30 = eax_1
    int32_t* var_1c = &var_30
    void* const var_34 = &data_52f14c
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = sub_530312()[3]
    
    if (esi != 0)
        int32_t var_8_1 = 0
        esi()
        int32_t var_8_2 = 0xfffffffe
    
    sub_52e289()
    noreturn
}
