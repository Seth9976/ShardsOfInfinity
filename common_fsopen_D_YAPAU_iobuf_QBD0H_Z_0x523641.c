// 函数名称: ??$common_fsopen@D@@YAPAU_iobuf@@QBD0H@Z
// 虚拟地址: 0x523641
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_fsopen@D@@YAPAU_iobuf@@QBD0H@Z(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x5ac4b8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac4b8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_2 = &data_52364d
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    
    if (arg1 == 0 || arg2 == 0 || *arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0
    else if (*arg1 != 0)
        int32_t var_20
        __acrt_stdio_allocate_stream(&var_20)
        
        if (var_20 != 0)
            int32_t var_24_1 = 0
            int32_t var_8_1 = 0
            int32_t var_38_1 = var_20
            int32_t var_3c_1 = arg3
            char* var_40_1 = arg2
            char* var_44_1 = arg1
            int32_t result_1 = sub_5318e0()
            int32_t result_2 = result_1
            int32_t var_8_2 = 0xfffffffe
            $LN13(&__saved_ebp, result_1)
            result = result_1
        else
            *__errno() = 0x18
            result = 0
    else
        *__errno() = 0x16
        result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5236d3
    return result
}
