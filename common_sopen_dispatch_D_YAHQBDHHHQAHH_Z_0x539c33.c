// 函数名称: ??$common_sopen_dispatch@D@@YAHQBDHHHQAHH@Z
// 虚拟地址: 0x539c33
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_sopen_dispatch@D@@YAHQBDHHHQAHH@Z(uint8_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x5ac9c8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac9c8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_2 = &data_539c3f
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    
    if (arg5 != 0)
        *arg5 = 0xffffffff
        
        if (arg1 == 0 || (arg6 != 0 && (arg4 & 0xfffffe7f) != 0))
            goto label_539c4b
        
        int32_t var_24 = 0
        int32_t var_20_1 = 0
        int32_t var_8_1 = 0
        int32_t result_1 = __sopen_nolock(&var_24, arg5, arg1, arg2, arg3, arg4.b, arg6)
        int32_t result_2 = result_1
        int32_t var_8_2 = 0xfffffffe
        $LN14(&__saved_ebp, arg5, result_1)
        
        if (result_1 != 0)
            *arg5 = 0xffffffff
        
        result = result_1
    else
    label_539c4b:
        int32_t var_38 = 0x16
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0x16
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_539cb7
    return result
}
