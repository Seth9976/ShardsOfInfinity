// 函数名称: ??1?$source_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAE@XZ
// 虚拟地址: 0x4bd5e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcall??1?$source_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAE@XZ(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544bb9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    arg1[2] = &data_5559b1
    int32_t var_8_1 = 0
    int32_t var_14_1 = 1
    *arg1 = 4
    sub_44f510(&arg1[2], arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
