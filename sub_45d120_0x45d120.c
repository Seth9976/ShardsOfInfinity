// 函数名称: sub_45d120
// 虚拟地址: 0x45d120
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_45d120()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542558
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_7c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_80)(struct _EXCEPTION_REGISTRATION_RECORD**
        * arg1) = sub_44f380
    int128_t var_74 = zx.o(0)
    void var_64
    `eh vector constructor iterator'(&var_64, 4, 4, sub_44f290)
    int32_t var_8_1 = 0
    uint32_t var_54[0x4][0x4]
    _memset(&var_54, 0, 0x40)
    var_74:4.d = 0
    var_74.d = 2
    __builtin_memcpy(&var_54, "\x00\x00\x80\x3f", 4)
    sub_45d230(0xdff6b0, &var_74)
    int32_t var_8_2 = 1
    `eh vector vbase constructor iterator'(&var_64, 4, 4, sub_44f380)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return 0xdff6b0
}
