// 函数名称: ?system_category@std@@YAABVerror_category@1@XZ
// 虚拟地址: 0x429050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?system_category@std@@YAABVerror_category@1@XZ()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540db0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx
    int32_t result = sub_429100(ecx)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
