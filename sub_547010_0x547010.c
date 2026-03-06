// 函数名称: sub_547010
// 虚拟地址: 0x547010
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_547010()
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
    
    if (data_5c6384 != 0)
        sub_44ddd0(&data_5c6384)
        result = data_5c6384
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(&data_5c6384, 0, 0x14)
        data_5c639c = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
