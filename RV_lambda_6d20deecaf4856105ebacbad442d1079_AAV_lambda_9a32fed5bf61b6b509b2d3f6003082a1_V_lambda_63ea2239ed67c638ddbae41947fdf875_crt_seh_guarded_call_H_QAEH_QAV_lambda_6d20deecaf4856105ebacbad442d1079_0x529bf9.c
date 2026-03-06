// 函数名称: ??$?RV<lambda_6d20deecaf4856105ebacbad442d1079>@@AAV<lambda_9a32fed5bf61b6b509b2d3f6003082a1>@@V<lambda_63ea2239ed67c638ddbae41947fdf875>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_6d20deecaf4856105ebacbad442d1079>@@AAV<lambda_9a32fed5bf61b6b509b2d3f6003082a1>@@$$QAV<lambda_63ea2239ed67c638ddbae41947fdf875>@@@Z
// 虚拟地址: 0x529bf9
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_6d20deecaf4856105ebacbad442d1079>@@AAV<lambda_9a32fed5bf61b6b509b2d3f6003082a1>@@V<lambda_63ea2239ed67c638ddbae41947fdf875>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_6d20deecaf4856105ebacbad442d1079>@@AAV<lambda_9a32fed5bf61b6b509b2d3f6003082a1>@@$$QAV<lambda_63ea2239ed67c638ddbae41947fdf875>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac598
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac598 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_2 = &data_529c05
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    __lock_file(*arg1)
    int32_t var_8_1 = 0
    int32_t result = __fflush_nolock(**arg2)
    int32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN7(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_529c3d
    return result
}
