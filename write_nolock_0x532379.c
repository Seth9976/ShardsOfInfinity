// 函数名称: __write_nolock
// 虚拟地址: 0x532379
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__write_nolock(int32_t arg1, int16_t* arg2, enum CONSOLE_MODE arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    enum CONSOLE_MODE nNumberOfBytesToWrite_1 = arg3
    enum CONSOLE_MODE nNumberOfBytesToWrite = nNumberOfBytesToWrite_1
    int32_t result
    
    if (nNumberOfBytesToWrite_1 == 0)
        result = 0
    else if (arg2 != 0)
        int32_t edx_2 = arg1 s>> 6
        int32_t edi
        int32_t var_3c_1 = edi
        int32_t edi_1 = (arg1 & 0x3f) * 0x30
        int32_t edx_3 = (&data_65a778)[edx_2]
        int32_t ebx
        ebx.b = *(edx_3 + edi_1 + 0x29)
        
        if ((ebx.b == 2 || ebx.b == 1) && ((not.d(nNumberOfBytesToWrite_1)).b & 1) == 0)
            *___doserrno() = 0
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result = 0xffffffff
        else
            if ((*(edx_3 + edi_1 + 0x28) & 0x20) != 0)
                nNumberOfBytesToWrite_1, edx_3 = __lseeki64_nolock(arg1, 0, 0, FILE_END)
            
            int32_t var_24_1 = 0
            int32_t var_20
            int32_t* edi_2 = &var_20
            *edi_2 = 0
            edi_2[1] = 0
            int32_t ecx_1
            int32_t edx_4
            int16_t* lpBuffer
            enum WIN32_ERROR var_30
            int32_t* eax_12
            int32_t* esi_1
            
            if (write_requires_double_translation_nolock(0, edx_3, nNumberOfBytesToWrite_1, arg1) == 0)
                ecx_1 = edx_2
                edx_4 = edi_1
                int32_t eax_13 = (&data_65a778)[ecx_1]
                
                if (*(eax_13 + edx_4 + 0x28) s>= 0)
                    HANDLE hFile = *(eax_13 + edx_4 + 0x18)
                    lpBuffer = arg2
                    var_30 = NO_ERROR
                    uint32_t numberOfBytesWritten
                    uint32_t* edi_5 = &numberOfBytesWritten
                    *edi_5 = 0
                    edi_5[1] = 0
                    
                    if (WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, &numberOfBytesWritten, 
                            nullptr) == 0)
                        var_30 = GetLastError()
                    
                    esi_1 = &var_30
                    goto label_53250d
                
                int32_t eax_14 = sx.d(ebx.b)
                lpBuffer = arg2
                
                if (eax_14 == 0)
                    eax_12 = write_text_ansi_nolock(&var_30, arg1, lpBuffer, nNumberOfBytesToWrite)
                    goto label_532464
                
                if (eax_14 == 1)
                    eax_12 = write_text_utf8_nolock(&var_30, arg1, lpBuffer, nNumberOfBytesToWrite)
                    goto label_532464
                
                if (eax_14 == 2)
                    eax_12 = write_text_utf16le_nolock(&var_30, arg1, lpBuffer, nNumberOfBytesToWrite)
                    goto label_532464
            else if (ebx.b == 0)
                lpBuffer = arg2
                eax_12 =
                    write_double_translated_ansi_nolock(&var_30, arg1, lpBuffer, nNumberOfBytesToWrite)
            label_532464:
                esi_1 = eax_12
            label_53250d:
                var_24_1 = *esi_1
                int32_t* edi_8 = &var_20
                void* esi_2 = &esi_1[1]
                *edi_8 = *esi_2
                edi_8[1] = *(esi_2 + 4)
                ecx_1 = edx_2
                edx_4 = edi_1
            else
                ebx.b -= 1
                lpBuffer = arg2
                
                if (ebx.b u<= 1)
                    eax_12 =
                        write_double_translated_unicode_nolock(&var_30, lpBuffer, nNumberOfBytesToWrite)
                    goto label_532464
                
                ecx_1 = edx_2
                edx_4 = edi_1
            int32_t eax_20 = var_20
            int32_t var_1c
            
            if (eax_20 != 0)
                result = eax_20 - var_1c
            else if (var_24_1 != 0)
                if (var_24_1 != 5)
                    ___acrt_errno_map_os_error(var_24_1)
                else
                    *__errno() = 9
                    *___doserrno() = 5
                
                result = 0xffffffff
            else if ((*((&data_65a778)[ecx_1] + edx_4 + 0x28) & 0x40) == 0 || *lpBuffer != 0x1a)
                *__errno() = 0x1c
                *___doserrno() = 0
                result = 0xffffffff
            else
                result = 0
    else
        *___doserrno() = 0
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
