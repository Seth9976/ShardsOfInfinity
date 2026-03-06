// 函数名称: ?_Task_scheduler_callback@?A0x8feb9fe6@details@Concurrency@@YGXPAU_TP_CALLBACK_INSTANCE@@PAXPAU_TP_WORK@@@Z
// 虚拟地址: 0x48c430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcall?_Task_scheduler_callback@?A0x8feb9fe6@details@Concurrency@@YGXPAU_TP_CALLBACK_INSTANCE@@PAXPAU_TP_WORK@@@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543250
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* i = *arg1
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[1]
        result = sub_45d050(i_1, 0xc)
    
    arg1[2] = 0
    *arg1 = 0
    arg1[1] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
