// 函数名称: ??$?RV<lambda_cd3bfd923e8d1349099e544c97b1bd8e>@@AAV<lambda_54dcfcba6f8e0c549fa430f4d53fb7dd>@@V<lambda_5e1d0fa2aa2b73b187bf8b7e1d30c7f8>@@@?$__crt_seh_guarded_call@I@@QAEI$$QAV<lambda_cd3bfd923e8d1349099e544c97b1bd8e>@@AAV<lambda_54dcfcba6f8e0c549fa430f4d53fb7dd>@@$$QAV<lambda_5e1d0fa2aa2b73b187bf8b7e1d30c7f8>@@@Z
// 虚拟地址: 0x529860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __stdcall??$?RV<lambda_cd3bfd923e8d1349099e544c97b1bd8e>@@AAV<lambda_54dcfcba6f8e0c549fa430f4d53fb7dd>@@V<lambda_5e1d0fa2aa2b73b187bf8b7e1d30c7f8>@@@?$__crt_seh_guarded_call@I@@QAEI$$QAV<lambda_cd3bfd923e8d1349099e544c97b1bd8e>@@AAV<lambda_54dcfcba6f8e0c549fa430f4d53fb7dd>@@$$QAV<lambda_5e1d0fa2aa2b73b187bf8b7e1d30c7f8>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac538
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac538 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_52986c
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    __lock_file(*arg1)
    int32_t var_8_1 = 0
    uint32_t result = <lambda_54dcfcba6f8e0c549fa430f4d53fb7dd>::operator()(arg2)
    uint32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN7(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_52989f
    return result
}
