// 函数名称: sub_44f980
// 虚拟地址: 0x44f980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char**sub_44f980(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5422c9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    *arg1 = &data_5559b1
    int32_t var_8_1 = 0
    int32_t var_14_2 = 1
    void arg_c
    sub_44f8e0(arg1, arg2, &arg_c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
