// 函数名称: sub_4f1410
// 虚拟地址: 0x4f1410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4f1410(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_546567
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* hFindFile_3
    sub_4a8d30(&hFindFile_3, arg1)
    int32_t var_8_1 = 0
    int32_t* ecx_1 = data_ce1794
    int32_t* hFindFile_2 = &hFindFile_3
    sub_44f510(ecx_1, hFindFile_2)
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* hFindFile_4 = hFindFile_3
        
        if (hFindFile_4 != 0 && *hFindFile_4 != 0)
            char* eax_3 = sub_44f000(&hFindFile_3)
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0xffffffff
    char* const var_2a0
    WIN32_FIND_DATAA var_29c
    
    if (sub_44e750(arg1, &var_29c) != 0)
        int32_t* hFindFile
        BOOL i
        
        do
            if (((var_29c.dwFileAttributes u>> 4).b & 1) == 0)
                var_2a0 = &data_5559b1
                int32_t var_8_4 = 2
                var_270
                hFindFile_2 = &var_270
                char* var_2c0_1 = arg1
                int32_t xmm0_1[0x4] = sub_44f8c0(&var_2a0, "%s%s")
                char* const esi_1 = var_2a0
                char* const edi_1
                
                if (esi_1 != 0)
                    edi_1 = esi_1
                    
                    if (*esi_1 != 0x21)
                        goto label_4f151f
                else
                    edi_1 = &data_5559b1
                label_4f151f:
                    hFindFile_2 = &data_592b68
                    void* eax_7
                    int32_t xmm0_2[0x4]
                    eax_7, xmm0_2 = _strstr(xmm0_1, edi_1, hFindFile_2)
                    
                    if (eax_7 == 0)
                        hFindFile_2 = &data_592b6c
                        
                        if (_strstr(xmm0_2, edi_1, hFindFile_2) == 0)
                            char* const eax_9 = &data_5559b1
                            hFindFile_2 = 0x2e
                            
                            if (esi_1 != 0)
                                eax_9 = esi_1
                            
                            void* eax_10 = _strrchr(eax_9, hFindFile_2.b)
                            
                            if (eax_10 != 0)
                                hFindFile_2 = ".atlasmaker"
                                
                                if (__stricmp(eax_10, hFindFile_2) == 0)
                                    char* const edx_4 = &data_5559b1
                                    
                                    if (esi_1 != 0)
                                        edx_4 = esi_1
                                    
                                    hFindFile_2 = sub_4a8d30(&hFindFile_3, edx_4)
                                    var_8_4.b = 3
                                    hFindFile_2 = hFindFile_3
                                    char* hFindFile_5 = hFindFile_3
                                    
                                    if (hFindFile_5 != 0 && *hFindFile_5 != 0)
                                        char* eax_13 = sub_44f000(&hFindFile_2)
                                        *(eax_13 + 4) += 1
                                    
                                    sub_4f1070()
                                    var_8_4.b = 4
                                    
                                    if (data_cdf414 != 0)
                                        char* hFindFile_6 = hFindFile_3
                                        
                                        if (hFindFile_6 != 0 && *hFindFile_6 != 0)
                                            char* eax_14 = sub_44f000(&hFindFile_3)
                                            int32_t temp4_1 = *(eax_14 + 4)
                                            *(eax_14 + 4) -= 1
                                            
                                            if (temp4_1 == 1)
                                                sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
                                                hFindFile_3 = &data_5559b1
                int32_t var_8_5 = 5
                
                if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_15 = sub_44f000(&var_2a0)
                    int32_t temp2_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                
                int32_t var_8_6 = 0xffffffff
            
            hFindFile_2 = &var_29c
            i = FindNextFileA(hFindFile, hFindFile_2)
        while (i == 1)
        hFindFile_2 = hFindFile
        FindClose(hFindFile_2)
    
    sub_44f240(&var_2a0, &data_5559b1)
    int32_t var_8_7 = 6
    int32_t* ecx_13 = data_ce1794
    hFindFile_2 = &var_2a0
    sub_44f510(ecx_13, hFindFile_2)
    int32_t var_8_8 = 7
    
    if (data_cdf414 != 0)
        char* const eax_16 = var_2a0
        
        if (eax_16 != 0 && *eax_16 != 0)
            char* eax_17 = sub_44f000(&var_2a0)
            int32_t temp1_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
    
    int32_t var_8_9 = 0xffffffff
    WIN32_FIND_DATAA var_158
    char result = sub_44e750(arg1, &var_158)
    
    if (result != 0)
        HANDLE hFindFile_1
        BOOL i_1
        
        do
            if (((var_158.dwFileAttributes u>> 4).b & 1) != 0 && var_158.cFileName[0] != 0x2e)
                var_2a0 = &data_5559b1
                int32_t var_8_10 = 8
                var_12c
                hFindFile_2 = &var_12c
                char* var_2c0_7 = arg1
                sub_44f8c0(&var_2a0, "%s%s/")
                char* const esi_2 = var_2a0
                sub_4f1410(eax_2)
                int32_t var_8_11 = 9
                
                if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                    char* eax_20 = sub_44f000(&var_2a0)
                    int32_t temp3_1 = *(eax_20 + 4)
                    *(eax_20 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                
                int32_t var_8_12 = 0xffffffff
            
            hFindFile_2 = &var_158
            i_1 = FindNextFileA(hFindFile_1, hFindFile_2)
        while (i_1 == 1)
        hFindFile_2 = hFindFile_1
        result = FindClose(hFindFile_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
