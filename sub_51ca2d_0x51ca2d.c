// 函数名称: sub_51ca2d
// 虚拟地址: 0x51ca2d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_51ca2d(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: if (arg1 == 0x123)
    if (arg1 == 0x123)
        *arg2 = 0x51cadc
        return 1
    
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = nullptr
    int32_t (__convention("regparm")* var_38_1)(int32_t arg1, int32_t arg2, int32_t arg3, 
        EXCEPTION_RECORD* arg4, void* arg5, void* arg6) = __TranslatorGuardHandler
    int32_t var_34_1 = __security_cookie ^ &ExceptionList
    int32_t var_30_1 = arg4
    int32_t* var_2c_1 = arg2
    int32_t var_28_1 = arg5
    int32_t var_24_1 = arg6
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t __saved_ebx
    int32_t* var_20_2 = &__saved_ebx
    int32_t __saved_ebp
    int32_t* var_1c_2 = &__saved_ebp
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c_1 = 1
    int32_t* var_14 = arg1
    int32_t var_10_1 = arg3
    int32_t eax_11 = *(sub_51e354() + 8)
    eax_11(*arg1, &var_14)
    int32_t result = 0
    
    if (var_18_1 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList
        ExceptionList_1->Next = fsbase->NtTib.ExceptionList->Next
        fsbase->NtTib.ExceptionList = ExceptionList_1
    
    return result
}
