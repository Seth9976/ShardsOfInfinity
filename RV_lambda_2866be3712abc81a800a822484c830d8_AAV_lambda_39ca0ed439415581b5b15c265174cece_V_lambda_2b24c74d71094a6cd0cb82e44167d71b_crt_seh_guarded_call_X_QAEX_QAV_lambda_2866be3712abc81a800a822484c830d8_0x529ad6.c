// 函数名称: ??$?RV<lambda_2866be3712abc81a800a822484c830d8>@@AAV<lambda_39ca0ed439415581b5b15c265174cece>@@V<lambda_2b24c74d71094a6cd0cb82e44167d71b>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_2866be3712abc81a800a822484c830d8>@@AAV<lambda_39ca0ed439415581b5b15c265174cece>@@$$QAV<lambda_2b24c74d71094a6cd0cb82e44167d71b>@@@Z
// 虚拟地址: 0x529ad6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_2866be3712abc81a800a822484c830d8>@@AAV<lambda_39ca0ed439415581b5b15c265174cece>@@V<lambda_2b24c74d71094a6cd0cb82e44167d71b>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_2866be3712abc81a800a822484c830d8>@@AAV<lambda_39ca0ed439415581b5b15c265174cece>@@$$QAV<lambda_2b24c74d71094a6cd0cb82e44167d71b>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x5ac558
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac558 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30_3 = &data_529ae2
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    __lock_file(*arg1)
    int32_t var_8_1 = 0
    
    if (common_flush_all_should_try_to_flush_stream(**arg2, arg2[1]) != 0
            && (*arg2[2] != 0 || ((*(**arg2 + 0xc) u>> 1).b & 1) != 0))
        if (__fflush_nolock(**arg2) == 0xffffffff)
            *arg2[3] = 0xffffffff
        else
            int32_t* eax_10 = arg2[1]
            *eax_10 += 1
    
    int32_t var_8_2 = 0xfffffffe
    int32_t result = sub_529b4b(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_529b48
    return result
}
