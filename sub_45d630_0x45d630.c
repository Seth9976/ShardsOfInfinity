// 函数名称: sub_45d630
// 虚拟地址: 0x45d630
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_45d630(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542599
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2c)(struct _EXCEPTION_REGISTRATION_RECORD**
        * arg1) = sub_44f380
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    `eh vector constructor iterator'(&arg1[4], 4, 4, sub_44f290)
    int32_t var_8_2 = 0
    int32_t var_14_1 = 1
    arg1[1] = 0
    *arg1 = 3
    sub_44f510(&arg1[4], arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
