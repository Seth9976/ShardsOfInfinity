// 函数名称: ?initialize_inherited_file_handles_nolock@@YAXXZ
// 虚拟地址: 0x5310f6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*?initialize_inherited_file_handles_nolock@@YAXXZ()
{
    // 第一条实际指令: STARTUPINFOW startupInfo
    STARTUPINFOW startupInfo
    void* result = GetStartupInfoW(&startupInfo)
    
    if (startupInfo.cbReserved2 != 0)
        BYTE* lpReserved2 = startupInfo.lpReserved2
        
        if (lpReserved2 != 0)
            void* result_2 = *lpReserved2
            void* result_1 = &lpReserved2[4] + result_2
            
            if (result_2 s>= 0x2000)
                result_2 = 0x2000
            
            ___acrt_lowio_ensure_fh_exists(result_2)
            result = data_65a978
            
            if (result_2 s> result)
                result_2 = result
            
            int32_t edi
            int32_t var_58_2 = edi
            int32_t edi_1 = 0
            
            if (result_2 != 0)
                result = result_1
                
                do
                    HANDLE hFile = *result
                    
                    if (hFile != 0xffffffff && hFile != 0xfffffffe)
                        void* edx_1
                        edx_1.b = lpReserved2[edi_1 + 4]
                        
                        if ((edx_1.b & 1) != 0)
                            if ((edx_1.b & 8) != 0)
                            label_531186:
                                edx_1 = (edi_1 & 0x3f) * 0x30 + (&data_65a778)[edi_1 s>> 6]
                                *(edx_1 + 0x18) = *result_1
                                int32_t eax_6
                                eax_6.b = lpReserved2[edi_1 + 4]
                                *(edx_1 + 0x28) = eax_6.b
                            else
                                enum FILE_TYPE eax_2
                                eax_2, edx_1 = GetFileType(hFile)
                                
                                if (eax_2 != FILE_TYPE_UNKNOWN)
                                    goto label_531186
                            
                            result = result_1
                    
                    edi_1 += 1
                    result += 4
                    result_1 = result
                while (edi_1 != result_2)
    
    return result
}
