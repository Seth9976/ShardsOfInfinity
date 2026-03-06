// 函数名称: ?_wcstombs_l_helper@@YAIPADPB_WIPAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x534679
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*?_wcstombs_l_helper@@YAIPADPB_WIPAU__crt_locale_pointers@@@Z(char* arg1, int16_t* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x30
    int32_t __saved_ebp_1 = 0x30
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_wcstombs_l_helper@@YAIPADPB_WIPAU__crt_locale_pointers@@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_18 = __security_cookie ^ &__saved_ebp
    int32_t var_50 = eax_18
    void* const var_54_7 = &data_534685
    int32_t var_8_1 = 0xffffffff
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result_2 = nullptr
    int32_t ebx = arg3
    int16_t* var_20 = arg2
    int32_t var_24 = 0
    void* result
    
    if (arg1 != 0 && ebx == 0)
        result = nullptr
    else if (arg2 != 0)
        void* var_40
        _LocaleUpdate::_LocaleUpdate(&var_40, arg4)
        int32_t var_8 = 0
        uint32_t var_3c
        uint32_t ecx_2 = *(var_3c + 8)
        void* result_1
        
        if (ecx_2 == 0xfde9)
            int32_t var_30 = 0
            int32_t var_2c_1 = 0
            result_2 = __crt_mbstring::__wcsrtombs_utf8(arg1, &var_20, ebx, &var_30)
        labelid_b:
            result_1 = result_2
        else if (arg1 == 0)
            if (*(var_3c + 0xa8) != 0)
                int32_t eax_15 =
                    ___acrt_WideCharToMultiByte(ecx_2, 0, var_20, 0xffffffff, nullptr, 0, 0, &var_24)
                
                if (eax_15 == 0 || var_24 != 0)
                label_534901:
                    result_1 = 0xffffffff
                    *__errno() = 0x2a
                else
                    result_1 = eax_15 - 1
            else
                int16_t* ecx_6 = var_20
                int16_t i_1 = *ecx_6
                
                if (i_1 != 0)
                    int16_t i = i_1
                    
                    while (i u<= 0xff)
                        ecx_6 = &ecx_6[1]
                        result_2 += 1
                        int16_t i_2 = *ecx_6
                        i = i_2
                        
                        if (i_2 == 0)
                            goto label_5348d3_2
                    
                    goto label_534901
                
            labelid_b:
                result_1 = result_2
        else if (*(var_3c + 0xa8) == 0)
            if (ebx != 0)
                int16_t* ecx_3 = var_20
                
                while (*ecx_3 u<= 0xff)
                    uint32_t eax_2
                    eax_2.b = *ecx_3
                    *(arg1 + result_2) = eax_2.b
                    eax_2 = zx.d(*ecx_3)
                    ecx_3 = &ecx_3[1]
                    var_20 = ecx_3
                    
                    if (eax_2.w == 0)
                        goto label_5348d3_2
                    
                    result_2 += 1
                    
                    if (result_2 u>= ebx)
                        goto label_5348d3_2
                
                goto label_53489b
            
        labelid_b:
            result_1 = result_2
        else if (*(var_3c + 4) != 1)
            result_1 = ___acrt_WideCharToMultiByte(ecx_2, 0, var_20, 0xffffffff, arg1, ebx, 0, &var_24)
            
            if (result_1 != 0)
                if (var_24 != 0)
                    goto label_53489b
                
            label_5348d3:
                result_1 -= 1
            else if (var_24 != 0)
            label_53489b:
                *__errno() = 0x2a
            label_5348d3_1:
                result_1 = 0xffffffff
            else
                if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
                    goto label_53489b
                
                if (ebx != 0)
                    void* eax_8 = var_20
                    
                    do
                        int32_t ecx_4 = *(var_3c + 4)
                        
                        if (ecx_4 s> 5)
                            int32_t var_54_4 = 5
                            ecx_4 = 5
                        
                        char var_1c[0x8]
                        int32_t eax_9 = ___acrt_WideCharToMultiByte(*(var_3c + 8), 0, eax_8, 1, 
                            &var_1c, ecx_4, 0, &var_24)
                        
                        if (eax_9 == 0)
                            goto label_534901
                        
                        if (var_24 != 0)
                            goto label_534901
                        
                        if (eax_9 s< 0)
                            goto label_534901
                        
                        if (eax_9 u> 5)
                            goto label_534901
                        
                        if (eax_9 + result_1 u> arg3)
                            break
                        
                        int32_t eax_11 = 0
                        int32_t var_28_1 = 0
                        
                        if (eax_9 s> 0)
                            while (true)
                                eax_11.b = var_1c[eax_11]
                                *(arg1 + result_1) = eax_11.b
                                
                                if (eax_11.b == 0)
                                    break
                                
                                eax_11 = var_28_1 + 1
                                result_1 += 1
                                var_28_1 = eax_11
                                
                                if (eax_11 s>= eax_9)
                                    goto label_534886
                            
                            break
                        
                    label_534886:
                        eax_8 = &var_20[1]
                        var_20 = eax_8
                    while (result_1 u< arg3)
        else
            if (ebx != 0)
                int16_t* eax_4 = var_20
                int32_t edx_1 = ebx
                
                while (*eax_4 != 0)
                    eax_4 = &eax_4[1]
                    int32_t temp0_1 = edx_1
                    edx_1 -= 1
                    
                    if (temp0_1 == 1)
                        break
                
                if (edx_1 != 0 && *eax_4 == 0)
                    ebx = ((eax_4 - var_20) s>> 1) + 1
            
            result_2 = ___acrt_WideCharToMultiByte(ecx_2, 0, var_20, ebx, arg1, ebx, 0, &var_24)
            
            if (result_2 == 0 || var_24 != 0)
                goto label_53489b
            
            if (*(arg1 + result_2 - 1) == 0)
                result_2 -= 1
            
        label_5348d3_2:
            result_1 = result_2
        
        char var_34
        
        if (var_34 != 0)
            void* ecx_7 = var_40
            *(ecx_7 + 0x350) &= 0xfffffffd
        
        result = result_1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    @__security_check_cookie@4(eax_18 ^ &__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_534921
    return result
}
