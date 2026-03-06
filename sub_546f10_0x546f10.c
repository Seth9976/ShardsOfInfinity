// 函数名称: sub_546f10
// 虚拟地址: 0x546f10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_546f10()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540ea0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_5bcd7c != 0)
        sub_445000(&data_5bcd7c)
        result = data_5bcd7c
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(&data_5bcd7c, 0, 0x14)
        data_5bcd94 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
