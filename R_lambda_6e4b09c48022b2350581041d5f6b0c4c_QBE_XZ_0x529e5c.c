// 函数名称: ??R<lambda_6e4b09c48022b2350581041d5f6b0c4c>@@QBE@XZ
// 虚拟地址: 0x529e5c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcall??R<lambda_6e4b09c48022b2350581041d5f6b0c4c>@@QBE@XZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac5b8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac5b8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t eax_5 = __security_cookie_1 ^ &__saved_ebp
    int32_t var_30 = eax_5
    int32_t* var_1c = &var_30
    void* const var_34_2 = &data_529e68
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_65a3c0 == 0)
        data_65a3b8 = 1
        int32_t var_8_1 = 0
        int32_t eax_1 = **arg1
        int32_t var_34_1
        
        if (eax_1 == 0)
            uint32_t __security_cookie_2 = __security_cookie
            char edx_2 = __security_cookie_2.b & 0x1f
            int32_t var_34 = 0x20
            int32_t ecx_1 = data_65a3bc
            
            if (ecx_1 != (ror.d(eax_1, 0x20 - edx_2) ^ __security_cookie_2))
                ror.d(__security_cookie_2 ^ ecx_1, edx_2)(0, 0, 0)
            
            var_34_1 = 0x65a650
            __execute_onexit_table()
        else if (eax_1 == 1)
            var_34_1 = 0x65a65c
            __execute_onexit_table()
        int32_t var_8_2 = 0xfffffffe
        
        if (**arg1 == 0)
            __initterm(0x54a0a8, 0x54a0b8)
        
        __initterm(0x54a0bc, 0x54a0c0)
        result = arg1[1]
        
        if (*result == 0)
            data_65a3c0 = 1
            result = arg1[2]
            *result = 1
    
    @__security_check_cookie@4(eax_5 ^ &__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_529f1e
    return result
}
