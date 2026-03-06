// 函数名称: ??$?RV<lambda_e5124f882df8998aaf41531e079ba474>@@AAV<lambda_3e16ef9562a7dcce91392c22ab16ea36>@@V<lambda_e25ca0880e6ef98be67edffd8c599615>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_e5124f882df8998aaf41531e079ba474>@@AAV<lambda_3e16ef9562a7dcce91392c22ab16ea36>@@$$QAV<lambda_e25ca0880e6ef98be67edffd8c599615>@@@Z
// 虚拟地址: 0x52f444
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall??$?RV<lambda_e5124f882df8998aaf41531e079ba474>@@AAV<lambda_3e16ef9562a7dcce91392c22ab16ea36>@@V<lambda_e25ca0880e6ef98be67edffd8c599615>@@@?$__crt_seh_guarded_call@X@@QAEX$$QAV<lambda_e5124f882df8998aaf41531e079ba474>@@AAV<lambda_3e16ef9562a7dcce91392c22ab16ea36>@@$$QAV<lambda_e25ca0880e6ef98be67edffd8c599615>@@@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x5ac6e0
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac6e0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_52f450
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    ___acrt_lock(*arg1)
    int32_t var_8_1 = 0
    int32_t* esi = &data_65a774
    
    while (true)
        int32_t* var_20_1 = esi
        
        if (esi == &data_65a778)
            break
        
        if (*esi != &data_5b01d8)
            *esi = __updatetlocinfoEx_nolock(esi, &data_5b01d8)
        
        esi = &esi[1]
    
    int32_t var_8_2 = 0xfffffffe
    int32_t result = sub_52f49c(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_52f499
    return result
}
