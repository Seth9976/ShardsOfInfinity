// 函数名称: ?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z
// 虚拟地址: 0x51c9cf
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: uint32_t __security_cookie_1 = __security_cookie
    uint32_t __security_cookie_1 = __security_cookie
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = nullptr
    int32_t var_14 = __security_cookie_1 ^ &ExceptionList
    int32_t var_10 = arg2
    int32_t (* var_18)(int32_t* arg1, void** arg2, void* arg3) = __CatchGuardHandler
    int32_t* var_c = arg1
    int32_t var_8 = arg4 + 1
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = __CallSettingFrame@12(arg1, arg3, arg1, arg5)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
