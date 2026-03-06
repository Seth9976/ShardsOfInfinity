// 函数名称: ?__ArrayUnwind@@YGXPAXIIP6EX0@Z@Z
// 虚拟地址: 0x51b9b4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __stdcall?__ArrayUnwind@@YGXPAXIIP6EX0@Z@Z(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x18
    int32_t __saved_ebp_1 = 0x18
    int32_t var_8 = 0x5ac2c0
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac2c0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_3c
    void* const var_40 = &data_51b9c0
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = 0
    int32_t var_8_1 = 0
    int32_t edi = arg1
    
    while (true)
        int32_t var_20_1 = esi
        
        if (esi == arg3)
            break
        
        edi -= arg2
        arg1 = edi
        result = arg4()
        esi += 1
    
    int32_t var_8_2 = 0xfffffffe
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
