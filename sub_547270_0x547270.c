// 函数名称: sub_547270
// 虚拟地址: 0x547270
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_547270()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541310
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    sub_48ab10(&data_654eb8)
    int32_t var_8_2 = 1
    int32_t result = sub_48aa50(&data_654e9c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
