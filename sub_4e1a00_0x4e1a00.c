// 函数名称: sub_4e1a00
// 虚拟地址: 0x4e1a00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4e1a00(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545bd0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_15 = &data_5559b1
    char* result_1
    char* result_2 = result_1
    char* const result_13 = &data_5559b1
    int32_t* result_10 = 0x2e
    
    if (result_2 != 0)
        result_13 = result_2
    
    char* const result_9 = result_13
    void* eax_3 = _strrchr(result_9, result_10.b)
    int32_t* ebx_2
    int32_t esi_2
    
    if (eax_3 == 0)
    label_4e1a79:
        esi_2 = 0
    label_4e1a7b:
        result_10 = 0x10
        result_9 = 0x1c
        int32_t* result_16 = sub_52a358(result_9, result_10)
        
        if (result_16 == 0)
            result_10 = "XMalloc"
            result_9 = 0x4f
            sub_44e4d0(result_16, &data_5559b1, "pBuffer", "c:\ax2017\engine\xmemory.cpp", result_9, 
                result_10)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_48b160(result_16, data_e46f34)
        int32_t* eax_7
        int32_t* result_19
        eax_7, result_19 = sub_492a80(arg2[1], data_e46f3c)
        int32_t* var_18_1 = eax_7
        char** esi_4
        
        if (data_65acf2 != 0)
            char* result_7 = result_1
            result_9 = result_7
            
            if (result_7 != 0 && *result_7 != 0)
                char* eax_8 = sub_44f000(&result_9)
                *(eax_8 + 4) += 1
            
            ebx_2.b = sub_4e1350(arg1, result_16)
            esi_4 = var_18_1
        else if (esi_2 != 3)
            if (esi_2 != 2)
                char* result_6 = result_1
                
                if (result_6 != 0)
                    result_15 = result_6
                
                result_10 = result_15
                result_9 = "unknown sound file type %s"
                sub_44e260(result_9)
                ebx_2.b = 0
            else
                char* result_8 = result_1
                char* result_11 = result_8
                
                if (result_8 != 0 && *result_8 != 0)
                    char* eax_12 = sub_44f000(&result_11)
                    *(eax_12 + 4) += 1
                    eax_7 = var_18_1
                
                var_8_1.b = 3
                
                if (*eax_7 != 2)
                    char* const result_12 = &data_5559b1
                    
                    if (result_8 != 0)
                        result_12 = result_8
                    
                    result_10 = result_12
                    result_9 = "unsupported ogg format conversion: %s"
                    sub_44e260(result_9)
                
                result_10 = &data_587590
                
                if (result_8 != 0)
                    result_15 = result_8
                
                result_9 = result_15
                int32_t* result_18 = _fopen(result_9)
                
                if (result_18 != 0)
                    result_10 = 2
                    result_9 = nullptr
                    _fseek(result_18, result_9, result_10)
                    int32_t* result_20 = result_18
                    int32_t eax_14 = sub_52b118()
                    _fseek(result_18, 0, 0)
                    
                    if (eax_14 == 0)
                        result_10 = result_18
                        _fclose(result_10)
                        var_8_1.b = 5
                        goto label_4e1bff
                    
                    result_16[4] = 2
                    result_16[5] = eax_14
                    uint32_t (* eax_16)[0x4] = sub_45cd70(eax_14)
                    result_10 = result_18
                    result_9 = 1
                    int32_t var_3c_2 = result_16[5]
                    result_16[6] = eax_16
                    uint32_t eax_17
                    int32_t edx_7
                    eax_17, edx_7 = _fread(eax_16, var_3c_2, result_9, result_10)
                    
                    if (eax_17 != 1)
                        result_10 = result_18
                        _fclose(result_10)
                        var_8_1.b = 6
                        goto label_4e1bff
                    
                    char eax_18 = sub_4d6400(eax_17, edx_7, result_16, eax_2)
                    result_10 = result_18
                    ebx_2.b = eax_18
                    _fclose(result_10)
                    var_8_1.b = 7
                    
                    if (data_cdf414 != 0 && result_8 != 0 && *result_8 != 0)
                        char* eax_19 = sub_44f000(&result_11)
                        int32_t temp2_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
                    
                    var_8_1.b = 0
                else
                    var_8_1.b = 4
                label_4e1bff:
                    
                    if (data_cdf414 != 0 && result_8 != 0 && *result_8 != 0)
                        char* eax_13 = sub_44f000(&result_11)
                        int32_t temp1_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                    
                    ebx_2.b = 0
                    var_8_1.b = 0
            
            esi_4 = var_18_1
        else
            char* result_5 = result_1
            result_10 = result_19
            result_10 = result_5
            
            if (result_5 != 0 && *result_5 != 0)
                char* eax_10 = sub_44f000(&result_10)
                *(eax_10 + 4) += 1
            
            esi_4 = var_18_1
            ebx_2.b = sub_4e1650(result_16, esi_4)
        
        data_e46f3c
        sub_48b5b0(esi_4)
        
        if (ebx_2.b != 0)
            *(*arg2 + 0x28) = result_16
            ebx_2.b = 1
        else
            result_10 = result_16
            _aligned_free_base(result_10)
    else
        void* const esi_1 = &data_571e20
        
        while (true)
            result_10 = eax_3 + 1
            result_9 = *(esi_1 + 4)
            
            if (__stricmp(result_9, result_10) == 0)
                break
            
            esi_1 += 8
            
            if (*(esi_1 + 4) == 0)
                goto label_4e1a79
        
        esi_2 = *esi_1
        
        if (esi_2 != 4)
            goto label_4e1a7b
        
        char* result_3 = result_1
        char* result_14 = &data_5559b1
        
        if (result_3 != 0)
            result_14 = result_3
        
        int32_t* result_17 = sub_494c50(arg2[3], result_14)
        
        if (result_17 != 0)
            arg2[3]
            sub_48b5b0(*arg2)
            sub_491590(arg2[1])
            arg2[1] = result_17[1]
            int32_t eax_6 = *result_17
            result_10 = result_17
            *arg2 = eax_6
            _aligned_free_base(result_10)
            ebx_2.b = 1
        else
            char* result_4 = result_1
            
            if (result_4 != 0)
                result_15 = result_4
            
            result_10 = result_15
            result_9 = "failed to read xmlsound %s"
            sub_44e260(result_9)
            ebx_2.b = 0
    int32_t var_8_2 = 9
    char* result
    
    if (data_cdf414 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = ebx_2.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
