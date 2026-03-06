// 函数名称: __seh_filter_exe
// 虚拟地址: 0x52e5bb
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*__seh_filter_exe(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    int32_t* result = ___acrt_getptd_noexit()
    
    if (result != 0)
        int32_t* edx_1 = *result
        int32_t* ecx_1 = edx_1
        int32_t ebx
        int32_t var_14 = ebx
        int32_t edi
        int32_t var_18 = edi
        int32_t* esp_1 = &var_18
        
        if (edx_1 == &edx_1[0x24])
        label_52e5fc:
            ecx_1 = nullptr
        else
            while (*ecx_1 != arg1)
                ecx_1 = &ecx_1[3]
                
                if (ecx_1 == &edx_1[0x24])
                    goto label_52e5fc
        
        int32_t edi_2
        
        if (ecx_1 != 0)
            edi_2 = ecx_1[2]
        
        if (ecx_1 == 0 || edi_2 == 0)
            result = nullptr
        else if (edi_2 != 5)
            if (edi_2 != 1)
                int32_t eax_3 = result[1]
                result[1] = arg2
                
                if (ecx_1[1] != 8)
                    int32_t var_1c_2 = ecx_1[1]
                    ecx_1[2] = 0
                    edi_2(var_1c_2)
                else
                    void* i = &edx_1[9]
                    
                    for (void* edx_2 = i + 0x6c; i != edx_2; i += 0xc)
                        *(i + 8) = 0
                    
                    int32_t ebx_1 = result[2]
                    int32_t temp0_1 = *ecx_1
                    int32_t eax_5
                    
                    if (temp0_1 u> 0xc0000091)
                        if (*ecx_1 == 0xc0000092)
                            eax_5 = 0x8a
                            result[2] = eax_5
                        else if (*ecx_1 == 0xc0000093)
                            eax_5 = 0x85
                            result[2] = eax_5
                        else if (*ecx_1 == 0xc00002b4)
                            eax_5 = 0x8e
                            result[2] = eax_5
                        else
                            eax_5 = ebx_1
                            
                            if (*ecx_1 == 0xc00002b5)
                                eax_5 = 0x8d
                                result[2] = eax_5
                    else if (temp0_1 == 0xc0000091)
                        eax_5 = 0x84
                        result[2] = eax_5
                    else if (*ecx_1 == 0xc000008d)
                        eax_5 = 0x82
                        result[2] = eax_5
                    else if (*ecx_1 == 0xc000008e)
                        eax_5 = 0x83
                        result[2] = eax_5
                    else if (*ecx_1 == 0xc000008f)
                        eax_5 = 0x86
                        result[2] = eax_5
                    else
                        eax_5 = ebx_1
                        
                        if (*ecx_1 == 0xc0000090)
                            eax_5 = 0x81
                            result[2] = eax_5
                    
                    int32_t var_1c_1 = eax_5
                    edi_2(8)
                    result[2] = ebx_1
                
                esp_1 = &var_14
                result[1] = eax_3
            
            result = 0xffffffff
        else
            ecx_1[2] = 0
            result = 1
        
        *esp_1
        esp_1[1]
        esp = &esp_1[2]
    
    *esp
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
