// 函数名称: ?notify_all@condition_variable@std@@QAEXXZ
// 虚拟地址: 0x429d90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?notify_all@condition_variable@std@@QAEXXZ(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540db0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = `eh vector vbase constructor iterator'(arg1, 0x2c8, 4, sub_429de0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
