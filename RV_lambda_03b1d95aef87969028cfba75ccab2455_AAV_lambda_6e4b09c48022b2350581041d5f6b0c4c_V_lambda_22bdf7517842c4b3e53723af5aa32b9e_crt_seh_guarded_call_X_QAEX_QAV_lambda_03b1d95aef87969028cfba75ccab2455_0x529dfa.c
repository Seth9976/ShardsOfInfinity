// 函数名称: ??$?RV<lambda_03b1d95aef87969028cfba75ccab2455>@@AAV<lambda_6e4b09c48022b2350581041d5f6b0c4c>@@V<lambda_22bdf7517842c4b3e53723af5aa32b9e>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_03b1d95aef87969028cfba75ccab2455>@@AAV<lambda_6e4b09c48022b2350581041d5f6b0c4c>@@$$QAV<lambda_22bdf7517842c4b3e53723af5aa32b9e>@@@Z
// 虚拟地址: 0x529dfa
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_03b1d95aef87969028cfba75ccab2455>@@AAV<lambda_6e4b09c48022b2350581041d5f6b0c4c>@@V<lambda_22bdf7517842c4b3e53723af5aa32b9e>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_03b1d95aef87969028cfba75ccab2455>@@AAV<lambda_6e4b09c48022b2350581041d5f6b0c4c>@@$$QAV<lambda_22bdf7517842c4b3e53723af5aa32b9e>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x5ac5d8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac5d8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30_1 = &data_529e06
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    ___acrt_lock(*arg1)
    int32_t var_8_1 = 0
    <lambda_6e4b09c48022b2350581041d5f6b0c4c>::operator()(arg2)
    int32_t var_8_2 = 0xfffffffe
    int32_t result = $LN14(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_529e2e
    return result
}
