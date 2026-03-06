// 函数名称: ??$common_fgets@D@@YAPADQADHV__crt_stdio_stream@@@Z
// 虚拟地址: 0x5238bd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*??$common_fgets@D@@YAPADQADHV__crt_stdio_stream@@@Z(char* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x18
    int32_t __saved_ebp_1 = 0x18
    int32_t var_8 = 0x5ac4f8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac4f8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_3c
    void* const var_40_3 = &data_5238c9
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0)
        if (not.d(arg2) u>> 0x1f == 0 || arg3 == 0)
            goto label_5238da
        
        goto label_5238fb
    
    char* result
    
    if (arg2 == arg1 && not.d(arg2) u>> 0x1f != 0 && arg3 != 0)
    label_5238fb:
        
        if (arg2 == 0)
            result = nullptr
        else
            char* result_1 = nullptr
            int32_t var_24_1 = 0
            __lock_file(arg3)
            int32_t var_8_1 = 0
            
            if (__acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(arg3) != 0)
                char* esi_1 = arg1
                char* var_28_1 = esi_1
                int32_t eax_5 = 1
                
                while (true)
                    if (eax_5 != arg2)
                        void* var_40_2 = arg3
                        int32_t eax_6 = sub_531b7b()
                        int32_t var_2c_1 = eax_6
                        
                        if (eax_6 != 0xffffffff)
                            *esi_1 = eax_6.b
                            esi_1 = &esi_1[1]
                            char* var_28_2 = esi_1
                            
                            if (eax_6.b != 0xa)
                                eax_5 += 1
                                continue
                        else if (esi_1 == arg1)
                            break
                    
                    *esi_1 = 0
                    result_1 = arg1
                    char* result_2 = result_1
                    break
            
            int32_t var_8_2 = 0xfffffffe
            $LN20(&__saved_ebp)
            result = result_1
    else
    label_5238da:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = nullptr
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_52395e
    return result
}
