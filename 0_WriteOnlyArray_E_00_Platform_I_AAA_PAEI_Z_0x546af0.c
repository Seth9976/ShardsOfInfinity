// 函数名称: ??0?$WriteOnlyArray@E$00@Platform@@I$AAA@PAEI@Z
// 虚拟地址: 0x546af0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??0?$WriteOnlyArray@E$00@Platform@@I$AAA@PAEI@Z()
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
    int32_t result = sub_414390()
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
