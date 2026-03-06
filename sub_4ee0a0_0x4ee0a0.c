// 函数名称: sub_4ee0a0
// 虚拟地址: 0x4ee0a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4ee0a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541870
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* i = arg1[6]
    
    while (i != 0)
        int32_t* i_3 = i
        i = i[5]
        result = sub_45d050(i_3, 0x1c)
    
    arg1[8] = 0
    arg1[6] = 0
    arg1[7] = 0
    int32_t var_8_2 = 1
    int32_t* i_1 = arg1[3]
    
    while (i_1 != 0)
        int32_t* i_4 = i_1
        i_1 = i_1[2]
        result = sub_45d050(i_4, 0x10)
    
    arg1[5] = 0
    arg1[3] = 0
    arg1[4] = 0
    int32_t var_8_3 = 2
    int32_t* i_2 = *arg1
    
    while (i_2 != 0)
        int32_t* i_5 = i_2
        i_2 = i_2[4]
        result = sub_45d050(i_5, 0x18)
    
    arg1[2] = 0
    *arg1 = 0
    arg1[1] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
