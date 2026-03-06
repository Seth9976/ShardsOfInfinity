// 函数名称: __read_nolock
// 虚拟地址: 0x533df9
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__read_nolock(int32_t arg1, wchar16* arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_34 = edi
    
    if (arg1 != 0xfffffffe)
        char var_24_1
        int32_t eax_5
        int32_t ecx_2
        char edx
        int32_t edi_1
        
        if (arg1 s>= 0 && arg1 u< data_65a978)
            ecx_2 = arg1 s>> 6
            edi_1 = (arg1 & 0x3f) * 0x30
            eax_5 = (&data_65a778)[ecx_2]
            var_24_1 = 1
            edx = *(eax_5 + edi_1 + 0x28)
        
        if (arg1 s< 0 || arg1 u>= data_65a978 || (1 & edx) == 0)
            *___doserrno() = 0
            *__errno() = 9
        else
            uint32_t nNumberOfBytesToRead_1 = arg3
            
            if (nNumberOfBytesToRead_1 u<= 0x7fffffff)
                if (nNumberOfBytesToRead_1 == 0 || (edx & 2) != 0)
                    return 0
                
                if (arg2 != 0)
                    HANDLE var_1c_1 = *(eax_5 + edi_1 + 0x18)
                    HANDLE edx_1
                    edx_1.b = *(eax_5 + edi_1 + 0x29)
                    char var_5_1 = edx_1.b
                    int32_t edx_2 = sx.d(edx_1.b)
                    void* lpBuffer_2 = nullptr
                    int32_t result
                    void* lpBuffer
                    uint32_t nNumberOfBytesToRead
                    char* lpBuffer_1
                    
                    if (edx_2 != 1)
                        if (edx_2 == 2)
                            if (((not.d(nNumberOfBytesToRead_1)).b & 1) == 0)
                                goto label_533ed6
                            
                            lpBuffer_1 = arg2
                            nNumberOfBytesToRead = nNumberOfBytesToRead_1
                            lpBuffer = lpBuffer_1
                            eax_5 = (&data_65a778)[ecx_2]
                            goto label_533f8c
                        
                        lpBuffer_1 = arg2
                        nNumberOfBytesToRead = nNumberOfBytesToRead_1
                        lpBuffer = lpBuffer_1
                    label_533f8c:
                        int32_t edi_3 = 0
                        int16_t* lpBuffer_3 = lpBuffer_1
                        int32_t ebx_2 = arg1
                        
                        if ((*(edi_1 + eax_5 + 0x28) & 0x48) != 0)
                            eax_5.b = *(edi_1 + eax_5 + 0x2a)
                            ebx_2 = arg1
                            
                            if (eax_5.b != 0xa && nNumberOfBytesToRead_1 != 0)
                                edi_3 = 1
                                *lpBuffer_1 = eax_5.b
                                lpBuffer = &lpBuffer_1[1]
                                nNumberOfBytesToRead = nNumberOfBytesToRead_1 - 1
                                *(edi_1 + (&data_65a778)[ecx_2] + 0x2a) = 0xa
                                ebx_2 = arg1
                                
                                if (var_5_1 != 0)
                                    int32_t eax_22
                                    eax_22.b = *(edi_1 + (&data_65a778)[ecx_2] + 0x2b)
                                    ebx_2 = arg1
                                    
                                    if (eax_22.b != 0xa && nNumberOfBytesToRead_1 != 1)
                                        lpBuffer_1[1] = eax_22.b
                                        lpBuffer = &lpBuffer_1[2]
                                        edi_3 = 2
                                        nNumberOfBytesToRead = nNumberOfBytesToRead_1 - 2
                                        *(edi_1 + (&data_65a778)[ecx_2] + 0x2b) = 0xa
                                        ebx_2 = arg1
                                        
                                        if (var_5_1 == 1)
                                            int32_t eax_26
                                            eax_26.b = *(edi_1 + (&data_65a778)[ecx_2] + 0x2c)
                                            ebx_2 = arg1
                                            
                                            if (eax_26.b != 0xa && nNumberOfBytesToRead_1 != 2)
                                                lpBuffer_1[2] = eax_26.b
                                                nNumberOfBytesToRead = nNumberOfBytesToRead_1 - 3
                                                lpBuffer = &lpBuffer_1[3]
                                                edi_3 = 3
                                                *(edi_1 + (&data_65a778)[ecx_2] + 0x2c) = 0xa
                        
                        int32_t eax_29 = __isatty(ebx_2)
                        BOOL eax_32
                        enum CONSOLE_MODE mode
                        
                        if (eax_29 != 0 && *(edi_1 + (&data_65a778)[ecx_2] + 0x28) s< 0)
                            eax_32 = GetConsoleMode(var_1c_1, &mode)
                        uint32_t var_20
                        uint32_t ecx_13
                        
                        if (eax_29 == 0 || *(edi_1 + (&data_65a778)[ecx_2] + 0x28) s>= 0 || eax_32 == 0)
                            var_24_1 = 0
                        label_5340ee:
                            BOOL eax_40 =
                                ReadFile(var_1c_1, lpBuffer, nNumberOfBytesToRead, &var_20, nullptr)
                            
                            if (eax_40 != 0)
                                ecx_13 = arg3
                            
                            if (eax_40 == 0 || var_20 u> ecx_13)
                                enum WIN32_ERROR eax_36 = GetLastError()
                                
                                if (eax_36 == ERROR_ACCESS_DENIED)
                                    *__errno() = 9
                                    *___doserrno() = 5
                                    result = 0xffffffff
                                else if (eax_36 != ERROR_BROKEN_PIPE)
                                    ___acrt_errno_map_os_error(eax_36)
                                    result = 0xffffffff
                                else
                                    result = 0
                            else
                                result = edi_3 + var_20
                            label_534110:
                                
                                if (*(edi_1 + (&data_65a778)[ecx_2] + 0x28) s< 0)
                                    int32_t result_1
                                    
                                    if (var_5_1 == 2)
                                        uint32_t edi_4 = result u>> 1
                                        
                                        if (var_24_1 == 0)
                                            result_1 = translate_text_mode_nolock<wchar_t>(ebx_2, 
                                                lpBuffer_3, edi_4)
                                        else
                                            result_1 = translate_utf16_from_console_nolock(ebx_2, 
                                                lpBuffer_3, edi_4)
                                    else
                                        result_1 = translate_ansi_or_utf8_nolock(ebx_2, lpBuffer, 
                                            result, arg2, ecx_13 u>> 1)
                                    
                                    result = result_1
                        else
                            if (var_5_1 != 2)
                                goto label_5340ee
                            
                            if (ReadConsoleW(var_1c_1, lpBuffer, nNumberOfBytesToRead u>> 1, &var_20, 
                                    nullptr) != 0)
                                ecx_13 = arg3
                                result = edi_3 + (var_20 << 1)
                                goto label_534110
                            
                            ___acrt_errno_map_os_error(GetLastError())
                            result = 0xffffffff
                    else if (((not.d(nNumberOfBytesToRead_1)).b & 1) == 0)
                    label_533ed6:
                        *___doserrno() = 0
                        *__errno() = 0x16
                        __invalid_parameter_noinfo()
                        result = 0xffffffff
                    else
                        uint32_t nNumberOfBytesToRead_3 = 4
                        uint32_t nNumberOfBytesToRead_2 = nNumberOfBytesToRead_1 u>> 1
                        nNumberOfBytesToRead = 4
                        
                        if (nNumberOfBytesToRead_2 u>= 4)
                            nNumberOfBytesToRead_3 = nNumberOfBytesToRead_2
                            nNumberOfBytesToRead = nNumberOfBytesToRead_2
                        
                        lpBuffer_2 = __malloc_base(nNumberOfBytesToRead_3)
                        __free_base(0)
                        __free_base(0)
                        lpBuffer = lpBuffer_2
                        
                        if (lpBuffer_2 != 0)
                            int32_t eax_17
                            int32_t edx_5
                            eax_17, edx_5 = __lseeki64_nolock(arg1, 0, 0, FILE_CURRENT)
                            int32_t ecx_4 = (&data_65a778)[ecx_2]
                            *(edi_1 + ecx_4 + 0x20) = eax_17
                            *(edi_1 + ecx_4 + 0x24) = edx_5
                            lpBuffer_1 = lpBuffer_2
                            nNumberOfBytesToRead_1 = nNumberOfBytesToRead
                            eax_5 = (&data_65a778)[ecx_2]
                            goto label_533f8c
                        
                        *__errno() = 0xc
                        *___doserrno() = 8
                        result = 0xffffffff
                    __free_base(lpBuffer_2)
                    return result
            
            *___doserrno() = 0
            *__errno() = 0x16
        
        __invalid_parameter_noinfo()
    else
        *___doserrno() = 0
        *__errno() = 9
    
    return 0xffffffff
}
