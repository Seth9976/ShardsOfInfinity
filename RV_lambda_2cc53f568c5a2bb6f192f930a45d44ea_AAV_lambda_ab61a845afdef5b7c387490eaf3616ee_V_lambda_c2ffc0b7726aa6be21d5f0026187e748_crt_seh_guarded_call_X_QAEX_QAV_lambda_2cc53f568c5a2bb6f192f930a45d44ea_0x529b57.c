// 函数名称: ??$?RV<lambda_2cc53f568c5a2bb6f192f930a45d44ea>@@AAV<lambda_ab61a845afdef5b7c387490eaf3616ee>@@V<lambda_c2ffc0b7726aa6be21d5f0026187e748>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_2cc53f568c5a2bb6f192f930a45d44ea>@@AAV<lambda_ab61a845afdef5b7c387490eaf3616ee>@@$$QAV<lambda_c2ffc0b7726aa6be21d5f0026187e748>@@@Z
// 虚拟地址: 0x529b57
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_2cc53f568c5a2bb6f192f930a45d44ea>@@AAV<lambda_ab61a845afdef5b7c387490eaf3616ee>@@V<lambda_c2ffc0b7726aa6be21d5f0026187e748>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_2cc53f568c5a2bb6f192f930a45d44ea>@@AAV<lambda_ab61a845afdef5b7c387490eaf3616ee>@@$$QAV<lambda_c2ffc0b7726aa6be21d5f0026187e748>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x2c
    int32_t __saved_ebp_1 = 0x2c
    int32_t var_8 = 0x5ac578
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac578 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_50 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_50
    void* const var_54_3 = &data_529b63
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    ___acrt_lock(*arg1)
    int32_t var_8_1 = 0
    int32_t* esi = data_65a3c8
    void* ebx = &esi[data_65a3c4]
    int32_t* edi = arg2
    
    while (true)
        int32_t* var_30_1 = esi
        
        if (esi == ebx)
            break
        
        int32_t* eax_2 = *esi
        int32_t* var_24 = eax_2
        
        if (common_flush_all_should_try_to_flush_stream(eax_2, *edi) != 0)
            int32_t edx_1 = edi[2]
            int32_t ecx_2 = edi[1]
            int32_t eax_4 = *edi
            int32_t* var_40 = &var_24
            int32_t var_3c_1 = eax_4
            int32_t var_38_1 = ecx_2
            int32_t var_34_1 = edx_1
            int32_t* eax_5 = var_24
            int32_t* var_28 = eax_5
            int32_t* var_2c = eax_5
            int32_t* var_54_2 = &var_28
            __crt_seh_guarded_call<class <lambda_2866be3712abc81a800a822484c830d8>,class <lambda_39ca0ed439415581b5b15c265174cece>&,class <lambda_2b24c74d71094a6cd0cb82e44167d71b>,void>::operator()<class <lambda_2866be3712abc81a800a822484c830d8>,class <lambda_39ca0ed439415581b5b15c265174cece>&,class <lambda_2b24c74d71094a6cd0cb82e44167d71b> >(
                &var_2c, &var_40)
            edi = arg2
        
        esi = &esi[1]
    
    int32_t var_8_2 = 0xfffffffe
    int32_t result = sub_529bed(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_529bea
    return result
}
