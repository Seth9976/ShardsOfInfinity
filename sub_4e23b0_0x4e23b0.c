// 函数名称: sub_4e23b0
// 虚拟地址: 0x4e23b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4e23b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545c80
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* i = *arg1
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[2]
        sub_4a3060(i_1)
        result = sub_45d050(i_1, 0x10)
    
    arg1[2] = 0
    *arg1 = 0
    arg1[1] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
