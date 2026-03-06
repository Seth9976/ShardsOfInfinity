// 函数名称: sub_44f810
// 虚拟地址: 0x44f810
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_44f810(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5422c9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_14_1 = 0
    char* eax_3 = *arg1
    *arg2 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_44f000(arg2)
        *(eax_4 + 4) += 1
    
    char* const edx = &data_5559b1
    int32_t var_8_2 = 0
    int32_t var_14_2 = 1
    char* ecx_2 = *arg3
    
    if (ecx_2 != 0)
        edx = ecx_2
    
    sub_44f620(arg2, edx)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2
}
