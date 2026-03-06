// 函数名称: ?CheckFCreateWriter@Mod1@@AAE_N_NPAPAVIDebugSSectionWriter@@K0@Z
// 虚拟地址: 0x44e6a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")?CheckFCreateWriter@Mod1@@AAE_N_NPAPAVIDebugSSectionWriter@@K0@Z(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xfffffffe
    int32_t var_8 = 0xfffffffe
    int32_t var_c = 0x5a6700
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_c_1 = var_c ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = &var_38
    int32_t var_24 = arg2
    int32_t* var_28 = arg3
    int32_t var_20 = 0
    int32_t var_8_1 = 0
    int32_t var_3c = arg5
    int32_t result = sub_412b90(&ExceptionList, arg2, arg3, arg4, arg3)
    int32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    
    if (result == 0xffffffff)
        *(arg3 + arg2 - 1) = 0
        result = arg2 - 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
