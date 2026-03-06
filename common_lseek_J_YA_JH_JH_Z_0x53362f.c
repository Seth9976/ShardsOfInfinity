// 函数名称: ??$common_lseek@_J@@YA_JH_JH@Z
// 虚拟地址: 0x53362f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_lseek@_J@@YA_JH_JH@Z(int32_t arg1, int32_t arg2, int32_t arg3, enum SET_FILE_POINTER_MOVE_METHOD arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x18
    int32_t __saved_ebp_1 = 0x18
    int32_t var_8 = 0x5ac860
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac860 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_3c
    void* const var_40_2 = &data_53363b
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    
    if (arg1 != 0xfffffffe)
        int32_t ecx_2
        int32_t edx_1
        
        if (arg1 s>= 0 && arg1 u< data_65a978)
            ecx_2 = arg1 s>> 6
            edx_1 = (arg1 & 0x3f) * 0x30
        
        if (arg1 s< 0 || arg1 u>= data_65a978 || (*((&data_65a778)[ecx_2] + edx_1 + 0x28) & 1) == 0)
            *___doserrno() = 0
            *__errno() = 9
            __invalid_parameter_noinfo()
            result = 0xffffffff
        else
            int32_t edx_2 = ___acrt_lowio_lock_fh(arg1)
            result = 0xffffffff
            int32_t var_2c_1 = 0xffffffff
            int32_t var_28_1 = 0xffffffff
            int32_t var_8_1 = 0
            int32_t eax_6 = (&data_65a778)[ecx_2]
            
            if ((*(eax_6 + edx_1 + 0x28) & 1) != 0)
                int32_t result_2
                int32_t edx_3
                result_2, edx_3 =
                    common_lseek_nolock<int64_t>(eax_6, edx_2, edx_1, arg1, arg2, arg3, arg4)
                result = result_2
                int32_t result_1 = result
                int32_t var_28_2 = edx_3
            else
                *__errno() = 9
                *___doserrno() = 0
            
            int32_t var_8_2 = 0xfffffffe
            $LN13(arg1)
    else
        *___doserrno() = 0
        *__errno() = 9
        result = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_533730
    return result
}
