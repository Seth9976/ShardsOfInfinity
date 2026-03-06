// 函数名称: ?atomic_exchange_explicit@std@@YAJPAU_Atomic_long@1@JW4memory_order@1@@Z
// 虚拟地址: 0x546e40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?atomic_exchange_explicit@std@@YAJPAU_Atomic_long@1@JW4memory_order@1@@Z()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540ea0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t result = sub_429100(&data_dfc4d8)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
