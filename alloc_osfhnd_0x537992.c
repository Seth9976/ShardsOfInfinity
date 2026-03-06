// 函数名称: __alloc_osfhnd
// 虚拟地址: 0x537992
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__alloc_osfhnd()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x1c
    int32_t __saved_ebp_1 = 0x1c
    int32_t var_8 = 0x5ac968
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x5ac968 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_40
    void* const var_44_6 = &data_53799e
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    ___acrt_lock(7)
    int32_t result = 0xffffffff
    int32_t var_20 = 0xffffffff
    int32_t edi = 0
    int32_t var_8_1 = 0
    label_5379b1:
    int32_t var_30_1 = edi
    
    if (edi s< 0x80)
        CRITICAL_SECTION* lpCriticalSection_2 = (&data_65a778)[edi]
        int32_t result_1
        
        if (lpCriticalSection_2 != 0)
            void* __offset(_RTL_CRITICAL_SECTION, 0xc00) ecx_2 = &lpCriticalSection_2[0x80]
            void* __offset(_RTL_CRITICAL_SECTION, 0xc00) var_24_1 = ecx_2
            CRITICAL_SECTION* lpCriticalSection = lpCriticalSection_2
            int32_t var_44_1 = 0x30
            
            while (true)
                CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
                
                if (lpCriticalSection == ecx_2)
                    edi += 1
                    goto label_5379b1
                
                if ((lpCriticalSection->__offset(0x28).b & 1) == 0)
                    EnterCriticalSection(lpCriticalSection)
                    
                    if ((lpCriticalSection->__offset(0x28).b & 1) == 0)
                        int32_t var_44_5 = 0x30
                        int32_t result_2 =
                            (edi << 6) + divs.dp.d(sx.q(lpCriticalSection - lpCriticalSection_2), 0x30)
                        int32_t edx_3 = result_2 s>> 6
                        int32_t ecx_5 = (result_2 & 0x3f) * 0x30
                        *((&data_65a778)[edx_3] + ecx_5 + 0x28) = 1
                        *((&data_65a778)[edx_3] + ecx_5 + 0x18) = 0xffffffff
                        result = result_2
                        break
                    
                    LeaveCriticalSection(lpCriticalSection)
                    ecx_2 = var_24_1
                    int32_t var_44_4 = 0x30
                
                lpCriticalSection = &lpCriticalSection[2]
            
            result_1 = result
        else
            void* eax = ___acrt_lowio_create_handle_array()
            (&data_65a778)[edi] = eax
            
            if (eax != 0)
                data_65a978 += 0x40
                result = edi << 6
                ___acrt_lowio_lock_fh(result)
                *((&data_65a778)[result s>> 6] + 0x28) = 1
                result_1 = result
    
    int32_t var_8_2 = 0xfffffffe
    $LN17()
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_537a13
    return result
}
