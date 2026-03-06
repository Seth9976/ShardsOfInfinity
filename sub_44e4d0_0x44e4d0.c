// 函数名称: sub_44e4d0
// 虚拟地址: 0x44e4d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_44e4d0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xfffffffe
    int32_t var_8 = 0xfffffffe
    int32_t var_c = 0x5a66e0
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_c_1 = var_c ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie_1 ^ &__saved_ebp
    int32_t var_858 = eax_1
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = &var_858
    int32_t var_85c = arg5
    int32_t var_860 = arg4
    int32_t var_864 = arg6
    int32_t var_868 = arg2
    void outputString
    
    if (*arg3 == 0)
        sub_44e240(&outputString, 0x400, "\nassertion failed\n%s\n%s (%s:%d)\n")
    else
        char* var_86c_1 = arg3
        sub_44e240(&outputString, 0x400, "\nassertion failed '%s'\n%s\n%s (%s:%d)\n")
    
    if (IsDebuggerPresent() == 1)
        int32_t result = OutputDebugStringA(&outputString)
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return result
    
    sub_44e2d0(&outputString)
    int32_t var_8_1 = 0
    RaiseException(0xc0000025, 1, 0, nullptr)
    noreturn
}
