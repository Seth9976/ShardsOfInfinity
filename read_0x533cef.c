// 函数名称: __read
// 虚拟地址: 0x533cef
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__read(int32_t arg1, wchar16* arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x5ac880
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac880 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_2 = &data_533cfb
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    
    if (arg1 != 0xfffffffe)
        int32_t ecx_1
        int32_t ebx_2
        
        if (arg1 s>= 0 && arg1 u< data_65a978)
            ebx_2 = arg1 s>> 6
            ecx_1 = (arg1 & 0x3f) * 0x30
        
        if (arg1 s< 0 || arg1 u>= data_65a978 || (*(ecx_1 + (&data_65a778)[ebx_2] + 0x28) & 1) == 0)
            *___doserrno() = 0
            *__errno() = 9
            __invalid_parameter_noinfo()
            result = 0xffffffff
        else if (arg3 u<= 0x7fffffff)
            ___acrt_lowio_lock_fh(arg1)
            int32_t result_1 = 0xffffffff
            int32_t var_20_1 = 0xffffffff
            int32_t var_8_1 = 0
            
            if ((*(ecx_1 + (&data_65a778)[ebx_2] + 0x28) & 1) != 0)
                result_1 = __read_nolock(arg1, arg2, arg3)
                int32_t result_2 = result_1
            else
                *__errno() = 9
                *___doserrno() = 0
            
            int32_t var_8_2 = 0xfffffffe
            $LN14(arg1)
            result = result_1
        else
            *___doserrno() = 0
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result = 0xffffffff
    else
        *___doserrno() = 0
        *__errno() = 9
        result = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_533df8
    return result
}
