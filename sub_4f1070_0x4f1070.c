// 函数名称: sub_4f1070
// 虚拟地址: 0x4f1070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4f1070()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_546508
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const i_10 = &data_5559b1
    char* result_2
    char* result_4 = result_2
    char* const result_11 = &data_5559b1
    char* const i_2 = 0x2e
    
    if (result_4 != 0)
        result_11 = result_4
    
    char* const result_3 = result_11
    void* eax_3 = _strrchr(result_3, i_2.b)
    
    if (eax_3 == 0)
        i_2 = "AtlasMakerMakeNoScan"
        result_3 = 0x7b1
        sub_44e4d0(eax_3, &data_5559b1, "ext", "c:\ax2017\engine\editor\atlasmaker.cpp", result_3, i_2)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char const* const i_7
    
    if (data_65acf3 != 0)
        i_7 = "xbin/ios/"
    else if (data_65acf2 == 0)
        i_7 = "xbin/"
    else
        i_7 = "xbin/web/"
    
    i_2 = i_7
    var_8_1.b = 0
    result_3 = "%satlases/"
    char* const result_1
    sub_44f980(&result_1, result_3)
    var_8_1.b = 7
    char* const result_5 = result_2
    char* i_9
    
    if (result_5 != 0)
        i_9 = eax_3 - result_5
    else
        i_9 = eax_3 - &data_5559b1
        result_5 = &data_5559b1
    
    i_2 = i_9
    result_3 = result_5
    sub_44f690(&result_1, result_3, i_2)
    char* result_6 = result_2
    char* const result_12 = &data_5559b1
    
    if (result_6 != 0)
        result_12 = result_6
    
    int32_t** i_11 = sub_494c50(data_e471b8, result_12)
    char* result
    
    if (i_11 != 0)
        void** i_5 = nullptr
        void** i_3 = nullptr
        int32_t ebx_1 = 0
        int32_t var_2c_1 = 0
        int32_t var_28_1 = 0
        var_8_1.b = 0xa
        void** i = nullptr
        int32_t* eax_4 = data_cdf454
        int32_t* eax_5 = *eax_4
        void** i_4
        
        do
            i_4 = *eax_5
            
            if (i_4 != 0)
                break
            
            i += 1
            eax_5 = &eax_5[1]
        while (i u<= eax_4[1])
        
        void** i_1 = i_4
        
        if (i_4 != 0)
            do
                i_2 = &i_1
                int32_t* eax_6
                eax_6, i = sub_48e8d0(i_2)
                void* eax_7 = eax_6[1]
                int32_t eax_8 = *(eax_7 + 4)
                
                if (eax_8 == 3 || eax_8 == 0x12)
                    void*** eax_9 = sub_45cfa0(0xc)
                    eax_9[3] += 1
                    i = *eax_9
                    
                    if (i == 0)
                        sub_45ce30(eax_9)
                        i = *eax_9
                    
                    *eax_9 = *i
                    *i = eax_7
                    i[1] = 0
                    i[2] = i_5
                    
                    if (i_5 == 0)
                        i_3 = i
                    else
                        i_5[1] = i
                    
                    ebx_1 += 1
                    i_5 = i
                    int32_t var_28_2 = ebx_1
                    void** i_6 = i_5
            while (i_1 != 0)
        
        int32_t** i_8 = i_11
        i_1 = nullptr
        int32_t* edi_2 = *i_8
        
        if (edi_2[1] s> 0)
            int32_t esi_1 = 0
            
            do
                int32_t eax_12 = *edi_2
                i_2 = i
                char* const* ecx_5 = &i_2
                bool cond:1_1 = *(esi_1 + eax_12 + 0x14) != 1
                i_2 = result_1
                char* const result_8 = result_1
                
                if (cond:1_1)
                    char* const* var_24_1 = &i_2
                    
                    if (result_8 != 0 && *result_8 != 0)
                        char* eax_17 = sub_44f000(ecx_5)
                        *(eax_17 + 4) += 1
                    
                    result_3 = &i_2
                    var_8_1.b = 0xc
                    int32_t* ebx_5 = *edi_2 + esi_1
                    result_3 = result_2
                    char* result_10 = result_2
                    
                    if (result_10 != 0 && *result_10 != 0)
                        char* eax_19 = sub_44f000(&result_3)
                        *(eax_19 + 4) += 1
                    
                    var_8_1.b = 0xa
                    sub_4f03e0(ebx_5, &i_3)
                else
                    char* const* var_20_2 = &i_2
                    
                    if (result_8 != 0 && *result_8 != 0)
                        char* eax_14 = sub_44f000(ecx_5)
                        *(eax_14 + 4) += 1
                    
                    result_3 = &i_2
                    var_8_1.b = 0xb
                    int32_t* ebx_3 = *edi_2 + esi_1
                    result_3 = result_2
                    char* result_9 = result_2
                    
                    if (result_9 != 0 && *result_9 != 0)
                        char* eax_16 = sub_44f000(&result_3)
                        *(eax_16 + 4) += 1
                    
                    var_8_1.b = 0xa
                    sub_4f0a60(ebx_3, &i_3)
                
                i = i_1 + 1
                esi_1 += 0x18
                i_1 = i
            while (i s< edi_2[1])
            
            i_8 = i_11
        
        if ((i_8[2].b & 1) == 0)
            i_8[3]
            sub_48b5b0(*i_8)
            *i_8 = nullptr
        
        char** ecx_12 = i_8[1]
        
        if (ecx_12 != 0)
            sub_491590(ecx_12)
            i_8[1] = 0
        
        i_2 = i_8
        _aligned_free_base(i_2)
        i_2 = "AtlasMaker: done."
        sub_44e260(i_2)
        var_8_1.b = 0xd
        result = sub_429100(&i_3)
        var_8_1.b = 0xe
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5559b1
        
        int32_t var_8_3 = 0xf
    else
        char* result_7 = result_2
        
        if (result_7 != 0)
            i_10 = result_7
        
        i_2 = i_10
        result_3 = "failed to read %s"
        result = sub_44e260(result_3)
        var_8_1.b = 8
        
        if (data_cdf414 != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_45d050(result, *(result + 0xc) + 0x10)
                    result_1 = &data_5559b1
        
        int32_t var_8_2 = 9
    
    if (data_cdf414 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&result_2)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
