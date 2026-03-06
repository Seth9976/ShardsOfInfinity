// 函数名称: ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z
// 虚拟地址: 0x51ed1b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x3c
    int32_t __saved_ebp_1 = 0x3c
    int32_t var_8 = 0x5ac3a0
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_5 = 0x5ac3a0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_60 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_60
    void* const var_64_2 = &data_51ed27
    int32_t var_8_6 = 0xfffffffe
    int32_t var_c = var_8_5
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = arg5
    int32_t var_44 = 0
    int32_t var_34 = arg2[-1]
    void var_50
    int32_t* var_38 = __CreateFrameInfo(&var_50, arg1[6])
    int32_t var_3c = *(sub_51e354() + 0x10)
    int32_t var_40 = *(sub_51e354() + 0x14)
    *(sub_51e354() + 0x10) = arg1
    *(sub_51e354() + 0x14) = arg3
    int32_t var_8_1 = 0
    int32_t var_48 = 1
    int32_t var_8_2 = 1
    int32_t result = _CallCatchBlock2(arg2, arg4, arg5, arg6, arg7)
    int32_t result_1 = result
    int32_t var_8_3 = 0
    int32_t var_8_4 = 0xfffffffe
    int32_t var_48_1 = 0
    $LN14(&__saved_ebp, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
