// 函数名称: sub_401000
// 虚拟地址: 0x401000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_401000()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540d2a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_18)(void* arg1) = sub_411610
    int32_t var_8_1 = 0
    `eh vector constructor iterator'(0x5baaf4, 0x10, 0x40, sub_411600)
    __builtin_memset(&data_5baf14, 0, 0x14)
    data_5baf28 = 1
    data_5baf2c = 0
    data_5bb0f8 = 0
    data_5bb0fc = 0
    data_5bb100 = 0
    int32_t result = _atexit(sub_546910)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
