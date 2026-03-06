// 函数名称: ?write_double_translated_ansi_nolock@@YA?AUwrite_result@?A0x17268360@@HQBDI@Z
// 虚拟地址: 0x531ce6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*?write_double_translated_ansi_nolock@@YA?AUwrite_result@?A0x17268360@@HQBDI@Z(int32_t* arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = (arg2 & 0x3f) * 0x30
    int32_t ecx_1 = arg2 s>> 6
    int32_t edi
    int32_t var_50 = edi
    HANDLE hFile = *(ebx + (&data_65a778)[ecx_1] + 0x18)
    void* eax_6 = arg4 + arg3
    uint32_t eax_7
    int32_t* ecx_2
    eax_7, ecx_2 = GetConsoleCP()
    int32_t* result = arg1
    *result = 0
    void* edi_2 = &result[1]
    *edi_2 = 0
    *(edi_2 + 4) = 0
    char* edi_5 = arg3
    
    if (arg3 u< eax_6)
        void* var_28_1 = &arg3[1]
        
        while (true)
            ecx_2:1.b = *edi_5
            wchar16 var_1c = 0
            char var_23_1 = ecx_2:1.b
            int32_t edx_1 = (&data_65a778)[ecx_1]
            ecx_2.b = *(ebx + edx_1 + 0x2d)
            void* eax_15
            char* var_58_1
            uint32_t var_54_1
            int32_t eax_10
            
            if ((ecx_2.b & 4) == 0)
                eax_10.b = *edi_5
                char var_1d_1 = eax_10.b
                result = arg1
                
                if (*(___pctype_func(ecx_2) + (zx.d(var_1d_1) << 1)) s>= 0)
                    var_54_1 = 1
                    var_58_1 = edi_5
                    goto label_531dd1
                
                if (var_28_1 u>= eax_6)
                    *(ebx + (&data_65a778)[ecx_1] + 0x2e) = var_1d_1
                    int32_t eax_25 = (&data_65a778)[ecx_1]
                    *(ebx + eax_25 + 0x2d) |= 4
                    result[1] += 1
                    break
                
                if (_mbtowc(&var_1c, edi_5, 2) == 0xffffffff)
                    break
                
                edi_5 = &edi_5[1]
                eax_15 = var_28_1 + 1
            else
                eax_10.b = *(edx_1 + ebx + 0x2e)
                ecx_2.b &= 0xfb
                char var_10 = eax_10.b
                var_54_1 = 2
                char var_f_1 = ecx_2:1.b
                *(ebx + edx_1 + 0x2d) = ecx_2.b
                var_58_1 = &var_10
            label_531dd1:
                
                if (_mbtowc(&var_1c, var_58_1, var_54_1) == 0xffffffff)
                    break
                
                eax_15 = var_28_1
            edi_5 = &edi_5[1]
            var_28_1 = eax_15 + 1
            uint8_t buffer_1
            int32_t nNumberOfBytesToWrite =
                ___acrt_WideCharToMultiByte(eax_7, 0, &var_1c, 1, &buffer_1, 5, 0, 0)
            
            if (nNumberOfBytesToWrite == 0)
                break
            
            uint32_t numberOfBytesWritten
            BOOL eax_18
            eax_18, ecx_2 =
                WriteFile(hFile, &buffer_1, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr)
            
            if (eax_18 != 0)
                result[1] = result[2] - arg3 + edi_5
                
                if (numberOfBytesWritten u< nNumberOfBytesToWrite)
                    break
                
                if (var_23_1 != 0xa)
                label_531e70:
                    
                    if (edi_5 u>= eax_6)
                        break
                    
                    continue
                else
                    int16_t buffer = 0xd
                    BOOL eax_23
                    eax_23, ecx_2 = WriteFile(hFile, &buffer, 1, &numberOfBytesWritten, nullptr)
                    
                    if (eax_23 != 0)
                        if (numberOfBytesWritten u< 1)
                            break
                        
                        result[2] += 1
                        result[1] += 1
                        goto label_531e70
            
            *result = GetLastError()
            break
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
