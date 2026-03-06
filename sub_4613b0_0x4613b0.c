// 函数名称: sub_4613b0
// 虚拟地址: 0x4613b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4613b0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_54287b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14 = arg1
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24)(struct _EXCEPTION_REGISTRATION_RECORD**
        * arg1) = sub_44f380
    void* var_18 = arg1 + 0x3c
    `eh vector constructor iterator'(arg1 + 0x4c, 4, 4, sub_44f290)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_1)(struct _EXCEPTION_REGISTRATION_RECORD
        *** arg1) = sub_44f380
    int32_t var_8_1 = 0
    void* var_18_1 = arg1 + 0x104
    `eh vector constructor iterator'(arg1 + 0x114, 4, 4, sub_44f290)
    *(arg1 + 0x204) = &data_5559b1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
