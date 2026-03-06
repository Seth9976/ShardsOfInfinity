// 函数名称: ___acrt_lowio_ensure_fh_exists
// 虚拟地址: 0x537824
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_lowio_ensure_fh_exists(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x5ac988
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac988 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_2 = &data_537830
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    
    if (arg1 u< 0x2000)
        result = 0
        int32_t var_20_1 = 0
        ___acrt_lock(7)
        int32_t var_8_1 = 0
        int32_t edi_1 = 0
        int32_t eax_2 = data_65a978
        
        while (true)
            int32_t var_24_1 = edi_1
            
            if (arg1 s< eax_2)
                break
            
            if ((&data_65a778)[edi_1] == 0)
                void* eax_3 = ___acrt_lowio_create_handle_array()
                (&data_65a778)[edi_1] = eax_3
                
                if (eax_3 == 0)
                    int32_t var_38_1 = 0xc
                    result = 0xc
                    int32_t var_20_2 = 0xc
                    break
                
                eax_2 = data_65a978 + 0x40
                data_65a978 = eax_2
            
            edi_1 += 1
        
        int32_t var_8_2 = 0xfffffffe
        $LN13()
    else
        int32_t var_38 = 9
        result = 9
        *__errno() = 9
        __invalid_parameter_noinfo()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_53784f
    return result
}
