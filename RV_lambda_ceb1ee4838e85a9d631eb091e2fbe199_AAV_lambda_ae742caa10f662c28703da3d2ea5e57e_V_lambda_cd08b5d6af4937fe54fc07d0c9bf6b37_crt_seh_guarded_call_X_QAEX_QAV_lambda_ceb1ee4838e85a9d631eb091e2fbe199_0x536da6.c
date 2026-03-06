// 函数名称: ??$?RV<lambda_ceb1ee4838e85a9d631eb091e2fbe199>@@AAV<lambda_ae742caa10f662c28703da3d2ea5e57e>@@V<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_ceb1ee4838e85a9d631eb091e2fbe199>@@AAV<lambda_ae742caa10f662c28703da3d2ea5e57e>@@$$QAV<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>@@@Z
// 虚拟地址: 0x536da6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_ceb1ee4838e85a9d631eb091e2fbe199>@@AAV<lambda_ae742caa10f662c28703da3d2ea5e57e>@@V<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_ceb1ee4838e85a9d631eb091e2fbe199>@@AAV<lambda_ae742caa10f662c28703da3d2ea5e57e>@@$$QAV<lambda_cd08b5d6af4937fe54fc07d0c9bf6b37>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x5ac948
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac948 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30_1 = &data_536db2
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    ___acrt_lock(*arg1)
    int32_t var_8_1 = 0
    <lambda_ae742caa10f662c28703da3d2ea5e57e>::operator()(arg2)
    int32_t var_8_2 = 0xfffffffe
    int32_t result = sub_536ddd(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_536dda
    return result
}
