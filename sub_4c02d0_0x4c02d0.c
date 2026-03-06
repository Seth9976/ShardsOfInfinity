// 函数名称: sub_4c02d0
// 虚拟地址: 0x4c02d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4c02d0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544fd8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_60 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_58 = arg1
    sub_4bd480(arg2)
    int32_t var_54
    sub_4bffc0(&var_54, arg2)
    int32_t var_8_1 = 0
    char* eax_5
    
    if (var_54 != 1)
        int32_t var_38
        *arg1 = var_38
        int32_t var_34
        arg1[1] = var_34
        char* var_30
        eax_5 = var_30
    else
        int32_t var_50
        *arg1 = var_50
        int32_t var_4c
        arg1[1] = var_4c
        char* var_48
        eax_5 = var_48
    
    arg1[2] = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_8 = sub_44f000(&arg1[2])
        *(eax_8 + 4) += 1
    
    sub_4c0240(&var_54)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return arg1
}
