// 函数名称: sub_4a9f90
// 虚拟地址: 0x4a9f90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4a9f90(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544493
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_178 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx = 0
    int32_t var_8_1 = 0
    char const* const var_168 = ".hlslinc"
    int32_t var_164 = 0
    char* result_1
    char* result
    int32_t ebx
    
    while (true)
        char* const var_160 = &data_5559b1
        var_8_1.b = 1
        char* const result_3 = &data_5559b1
        char* result_2 = result_1
        int32_t var_17c_1 = (&var_168)[edx]
        
        if (result_2 != 0)
            result_3 = result_2
        
        char* const result_4 = result_3
        sub_44f8c0(&var_160, "%s*%s")
        char* const esi_1 = var_160
        char* ecx_1 = &data_5559b1
        
        if (esi_1 != 0)
            ecx_1 = esi_1
        
        WIN32_FIND_DATAA findFileData
        
        if (sub_44e750(ecx_1, &findFileData).b != 0)
            while (true)
                if (((findFileData.dwFileAttributes u>> 4).b & 1) == 0)
                    uint32_t dwHighDateTime = findFileData.ftLastWriteTime.dwHighDateTime
                    
                    if (dwHighDateTime u> arg2)
                    label_4aa126:
                        var_8_1.b = 2
                        
                        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                            result = sub_44f000(&var_160)
                            int32_t temp3_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_45d050(result, *(result + 0xc) + 0x10)
                        
                        ebx.b = 1
                        break
                    
                    if (dwHighDateTime u>= arg2 && findFileData.ftLastWriteTime.dwLowDateTime u> arg1)
                        goto label_4aa126
                
                HANDLE hFindFile
                
                if (FindNextFileA(hFindFile, &findFileData) != 1)
                    FindClose(hFindFile)
                    goto label_4aa085
            
            break
        
    label_4aa085:
        var_8_1.b = 4
        
        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
            result = sub_44f000(&var_160)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
        
        edx = var_164 + 1
        var_164 = edx
        
        if (edx u>= 1)
            ebx.b = 0
            break
    
    int32_t var_8_2 = 5
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
