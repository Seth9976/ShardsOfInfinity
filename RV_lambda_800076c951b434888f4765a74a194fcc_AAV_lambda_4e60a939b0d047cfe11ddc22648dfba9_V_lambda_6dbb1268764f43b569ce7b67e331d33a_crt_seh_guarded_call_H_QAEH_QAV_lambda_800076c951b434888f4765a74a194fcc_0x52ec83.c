// 函数名称: ??$?RV<lambda_800076c951b434888f4765a74a194fcc>@@AAV<lambda_4e60a939b0d047cfe11ddc22648dfba9>@@V<lambda_6dbb1268764f43b569ce7b67e331d33a>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_800076c951b434888f4765a74a194fcc>@@AAV<lambda_4e60a939b0d047cfe11ddc22648dfba9>@@$$QAV<lambda_6dbb1268764f43b569ce7b67e331d33a>@@@Z
// 虚拟地址: 0x52ec83
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_800076c951b434888f4765a74a194fcc>@@AAV<lambda_4e60a939b0d047cfe11ddc22648dfba9>@@V<lambda_6dbb1268764f43b569ce7b67e331d33a>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_800076c951b434888f4765a74a194fcc>@@AAV<lambda_4e60a939b0d047cfe11ddc22648dfba9>@@$$QAV<lambda_6dbb1268764f43b569ce7b67e331d33a>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac680
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac680 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_52ec8f
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    ___acrt_lock(*arg1)
    int32_t var_8_1 = 0
    int32_t result = <lambda_4e60a939b0d047cfe11ddc22648dfba9>::operator()(arg2)
    int32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN7(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_52ecc2
    return result
}
