// 函数名称: ??$?RV<lambda_a048d3beccc847880fc8490e18b82769>@@AAV<lambda_ec61778202f4f5fc7e7711acc23c3bca>@@V<lambda_f7496a158712204296dd6628a163878e>@@@?$__crt_seh_guarded_call@P6AXH@Z@@QAEP6AXH@Z$$QAV<lambda_a048d3beccc847880fc8490e18b82769>@@AAV<lambda_ec61778202f4f5fc7e7711acc23c3bca>@@$$QAV<lambda_f7496a158712204296dd6628a163878e>@@@Z
// 虚拟地址: 0x536531
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_a048d3beccc847880fc8490e18b82769>@@AAV<lambda_ec61778202f4f5fc7e7711acc23c3bca>@@V<lambda_f7496a158712204296dd6628a163878e>@@@?$__crt_seh_guarded_call@P6AXH@Z@@QAEP6AXH@Z$$QAV<lambda_a048d3beccc847880fc8490e18b82769>@@AAV<lambda_ec61778202f4f5fc7e7711acc23c3bca>@@$$QAV<lambda_f7496a158712204296dd6628a163878e>@@@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac908
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac908 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_53653d
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    ___acrt_lock(*arg1)
    int32_t var_8_1 = 0
    uint32_t __security_cookie_2 = __security_cookie
    int32_t result = ror.d(__security_cookie_2 ^ data_65a98c, __security_cookie_2.b & 0x1f)
    int32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN7(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_536579
    return result
}
