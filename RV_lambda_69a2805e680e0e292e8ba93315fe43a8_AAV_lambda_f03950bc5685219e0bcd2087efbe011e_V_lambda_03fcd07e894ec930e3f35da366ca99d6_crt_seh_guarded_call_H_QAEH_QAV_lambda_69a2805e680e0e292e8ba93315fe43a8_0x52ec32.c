// 函数名称: ??$?RV<lambda_69a2805e680e0e292e8ba93315fe43a8>@@AAV<lambda_f03950bc5685219e0bcd2087efbe011e>@@V<lambda_03fcd07e894ec930e3f35da366ca99d6>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_69a2805e680e0e292e8ba93315fe43a8>@@AAV<lambda_f03950bc5685219e0bcd2087efbe011e>@@$$QAV<lambda_03fcd07e894ec930e3f35da366ca99d6>@@@Z
// 虚拟地址: 0x52ec32
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_69a2805e680e0e292e8ba93315fe43a8>@@AAV<lambda_f03950bc5685219e0bcd2087efbe011e>@@V<lambda_03fcd07e894ec930e3f35da366ca99d6>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_69a2805e680e0e292e8ba93315fe43a8>@@AAV<lambda_f03950bc5685219e0bcd2087efbe011e>@@$$QAV<lambda_03fcd07e894ec930e3f35da366ca99d6>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac6a0
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac6a0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_52ec3e
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    ___acrt_lock(*arg1)
    int32_t var_8_1 = 0
    int32_t result = <lambda_f03950bc5685219e0bcd2087efbe011e>::operator()(arg2)
    int32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN7(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_52ec71
    return result
}
