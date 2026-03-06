// 函数名称: ?_mbstowcs_l_helper@@YAIPA_WPBDIPAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x52cef5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?_mbstowcs_l_helper@@YAIPA_WPBDIPAU__crt_locale_pointers@@@Z(int16_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_2c = edi
    int16_t* edi_1 = arg1
    int32_t result = 0
    
    if (edi_1 != 0)
        if (arg2 == 0)
            return 0
        
        *edi_1 = 0
    
    char* arg_8
    
    if (arg_8 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    void* var_20
    int32_t edx_1 = _LocaleUpdate::_LocaleUpdate(&var_20, arg3)
    void* var_1c
    void* eax_3 = var_1c
    uint32_t ecx_2 = *(eax_3 + 8)
    
    if (ecx_2 == 0xfde9)
        int32_t var_10 = 0
        int32_t var_c_1 = 0
        result = __crt_mbstring::__mbsrtowcs_utf8(&arg_8, edx_1, ecx_2, edi_1, &arg_8, arg2, &var_10)
    else
        int32_t eax_6
        
        if (edi_1 == 0)
            if (*(eax_3 + 0xa8) != 0)
                result = 0xffffffff
                eax_6 = ___acrt_MultiByteToWideChar(ecx_2, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, 
                    arg_8, 0xffffffff, nullptr, 0)
                
                if (eax_6 != 0)
                    result = eax_6 - 1
                else
                    *__errno() = 0x2a
            else
                char* esi = arg_8
                
                do
                    eax_3.b = *esi
                    esi = &esi[1]
                while (eax_3.b != 0)
                
                result = esi - &esi[1]
        else if (*(eax_3 + 0xa8) != 0)
            result = 0xffffffff
            eax_6 = ___acrt_MultiByteToWideChar(ecx_2, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg_8, 
                0xffffffff, edi_1, arg2)
            
            if (eax_6 != 0)
                result = eax_6 - 1
            else
                enum WIN32_ERROR eax_7 = GetLastError()
                int32_t result_1
                
                if (eax_7 == ERROR_INSUFFICIENT_BUFFER)
                    char* ecx_4 = arg_8
                    char* eax_8 = ecx_4
                    char* var_8_1 = eax_8
                    int32_t edx_2 = arg2
                    
                    if (arg2 != 0)
                        while (true)
                            ecx_4.b = *eax_8
                            
                            if (ecx_4.b != 0)
                                char* eax_11 = var_8_1
                                
                                if (__isleadbyte_l(ecx_4.b, &var_1c) != 0)
                                    eax_11 = &eax_11[1]
                                    
                                    if (*eax_11 == 0)
                                        goto label_52d033
                                
                                edx_2 -= 1
                                eax_8 = &eax_11[1]
                                var_8_1 = eax_8
                                
                                if (edx_2 != 0)
                                    continue
                            
                            ecx_4 = arg_8
                            break
                    
                    result_1 = ___acrt_MultiByteToWideChar(*(var_1c + 8), MB_PRECOMPOSED, ecx_4, 
                        eax_8 - ecx_4, edi_1, arg2)
                
                if (eax_7 == ERROR_INSUFFICIENT_BUFFER && result_1 != 0)
                    result = result_1
                else
                label_52d033:
                    *__errno() = 0x2a
                    *edi_1 = 0
        else if (arg2 != 0)
            char* ecx_3 = arg_8
            
            do
                *edi_1 = zx.w(ecx_3[result])
                
                if (ecx_3[result] == 0)
                    break
                
                result += 1
                edi_1 = &edi_1[1]
            while (result u< arg2)
    
    char var_14
    
    if (var_14 != 0)
        void* ecx_6 = var_20
        *(ecx_6 + 0x350) &= 0xfffffffd
    
    return result
}
