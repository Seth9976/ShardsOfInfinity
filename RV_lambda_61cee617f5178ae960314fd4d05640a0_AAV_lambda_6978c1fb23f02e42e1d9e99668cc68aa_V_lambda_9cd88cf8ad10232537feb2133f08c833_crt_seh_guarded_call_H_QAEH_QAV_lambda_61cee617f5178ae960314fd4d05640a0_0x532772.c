// 函数名称: ??$?RV<lambda_61cee617f5178ae960314fd4d05640a0>@@AAV<lambda_6978c1fb23f02e42e1d9e99668cc68aa>@@V<lambda_9cd88cf8ad10232537feb2133f08c833>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_61cee617f5178ae960314fd4d05640a0>@@AAV<lambda_6978c1fb23f02e42e1d9e99668cc68aa>@@$$QAV<lambda_9cd88cf8ad10232537feb2133f08c833>@@@Z
// 虚拟地址: 0x532772
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_61cee617f5178ae960314fd4d05640a0>@@AAV<lambda_6978c1fb23f02e42e1d9e99668cc68aa>@@V<lambda_9cd88cf8ad10232537feb2133f08c833>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_61cee617f5178ae960314fd4d05640a0>@@AAV<lambda_6978c1fb23f02e42e1d9e99668cc68aa>@@$$QAV<lambda_9cd88cf8ad10232537feb2133f08c833>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac820
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac820 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_3 = &data_53277e
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = 0
    int32_t var_20 = 0
    ___acrt_lowio_lock_fh(*arg1)
    int32_t var_8_1 = 0
    int32_t edi = **arg2
    
    if ((*((&data_65a778)[edi s>> 6] + (edi & 0x3f) * 0x30 + 0x28) & 1) == 0)
        *__errno() = 9
        result = 0xffffffff
    else if (FlushFileBuffers(__get_osfhandle(edi)) == 0)
        void* eax_8 = ___doserrno()
        *eax_8 = GetLastError()
        *__errno() = 9
        result = 0xffffffff
    
    int32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN7(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5327f8
    return result
}
