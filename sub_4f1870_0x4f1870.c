// 函数名称: sub_4f1870
// 虚拟地址: 0x4f1870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4f1870(struct _EXCEPTION_REGISTRATION_RECORD*** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540db0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_cdf414 != 0)
        result = *arg1
        
        if (result != 0)
            int32_t edx_1 = arg1[2]
            arg1[1] = 0
            result = sub_45d050(result, edx_1 << 2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
