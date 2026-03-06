// 函数名称: ??1_Init_atexit@@QAE@XZ
// 虚拟地址: 0x51b187
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**??1_Init_atexit@@QAE@XZ()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542290
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    while (true)
        int32_t ecx_3 = data_5b005c
        
        if (ecx_3 u>= 0xa)
            break
        
        int32_t eax_3 = *((ecx_3 << 2) + &data_659e44)
        data_5b005c = ecx_3 + 1
        result = DecodePointer(eax_3)
        
        if (result != 0)
            result = result(eax_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
