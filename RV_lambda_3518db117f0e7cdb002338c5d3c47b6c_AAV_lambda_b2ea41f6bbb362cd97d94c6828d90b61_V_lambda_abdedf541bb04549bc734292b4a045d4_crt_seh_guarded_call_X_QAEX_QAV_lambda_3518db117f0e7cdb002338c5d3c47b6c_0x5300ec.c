// 函数名称: ??$?RV<lambda_3518db117f0e7cdb002338c5d3c47b6c>@@AAV<lambda_b2ea41f6bbb362cd97d94c6828d90b61>@@V<lambda_abdedf541bb04549bc734292b4a045d4>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_3518db117f0e7cdb002338c5d3c47b6c>@@AAV<lambda_b2ea41f6bbb362cd97d94c6828d90b61>@@$$QAV<lambda_abdedf541bb04549bc734292b4a045d4>@@@Z
// 虚拟地址: 0x5300ec
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_3518db117f0e7cdb002338c5d3c47b6c>@@AAV<lambda_b2ea41f6bbb362cd97d94c6828d90b61>@@V<lambda_abdedf541bb04549bc734292b4a045d4>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_3518db117f0e7cdb002338c5d3c47b6c>@@AAV<lambda_b2ea41f6bbb362cd97d94c6828d90b61>@@$$QAV<lambda_abdedf541bb04549bc734292b4a045d4>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x5ac740
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac740 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30_2 = &data_5300f8
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    ___acrt_lock(*arg1)
    int32_t var_8_1 = 0
    replace_current_thread_locale_nolock(**arg2, **arg2[1])
    int32_t var_8_2 = 0xfffffffe
    int32_t result = $LN16(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_53012d
    return result
}
