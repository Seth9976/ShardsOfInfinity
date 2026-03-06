// 函数名称: sub_46fab0
// 虚拟地址: 0x46fab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_46fab0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: char* const esi = &data_5559b1
    char* const esi = &data_5559b1
    void* ebx = arg3
    char* eax = *arg4
    
    if (eax != 0)
        esi = eax
    
    char* const eax_1 = &data_5559b1
    char* result
    
    while (true)
        arg3.b = *esi
        char temp0_1 = *eax_1
        bool c_1 = arg3.b u< temp0_1
        
        if (arg3.b == temp0_1)
            if (arg3.b == 0)
                result = nullptr
                break
            
            arg3.b = esi[1]
            char temp1_1 = eax_1[1]
            c_1 = arg3.b u< temp1_1
            
            if (arg3.b == temp1_1)
                esi = &esi[2]
                eax_1 = &eax_1[2]
                
                if (arg3.b != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(eax_1, eax_1, c_1) | 1
        break
    
    if (result == 0)
        return result
    
    if (sub_46ad40(ebx, arg2) == 0)
        return sub_46f950(ebx, arg4)
    
    int32_t* eax_5 = sub_45d320(ebx)
    char const (** ecx_2)[0xa] = &data_5b1d6c
    int32_t* eax_6 = sub_4b8ac0(eax_5, eax_5, &data_5b1d6c, data_dff67c, 0x68)
    int32_t* ebx_1 = eax_6
    int32_t* var_18 = ebx_1
    
    if (ebx_1 == 0)
        var_18.q = 0
        ecx_2 = &data_5b1d6c
        ebx_1 = sub_4b8ac0(sub_4b8610(&var_18, eax_5, &data_5b1d6c, 0x68, &var_18), eax_5, 
            &data_5b1d6c, data_dff67c, 0x68)
    else
        int32_t esi_2 = 0
        
        if (ebx_1[1] s> 0)
            char* ebx_2 = *arg4
            char const (*** edi_2)[0xa] = *eax_6
            int32_t* eax_9
            
            while (true)
                ecx_2 = *edi_2
                char* const eax_7 = &data_5559b1
                
                if (ebx_2 != 0)
                    eax_7 = ebx_2
                
                while (true)
                    char edx_2 = *ecx_2
                    char temp2_1 = *eax_7
                    bool c_2 = edx_2 u< temp2_1
                    
                    if (edx_2 == temp2_1)
                        if (edx_2 == 0)
                            result = nullptr
                            break
                        
                        edx_2 = *(ecx_2 + 1)
                        char temp3_1 = eax_7[1]
                        c_2 = edx_2 u< temp3_1
                        
                        if (edx_2 == temp3_1)
                            ecx_2 += 2
                            eax_7 = &eax_7[2]
                            
                            if (edx_2 != 0)
                                continue
                            
                            result = nullptr
                            break
                    
                    result = sbb.d(eax_7, eax_7, c_2) | 1
                    break
                
                if (result == 0)
                    return result
                
                eax_9 = var_18
                esi_2 += 1
                edi_2 = &edi_2[3]
                
                if (esi_2 s>= eax_9[1])
                    break
            
            ebx_1 = eax_9
    
    int32_t var_2c_2 = ebx_1[1]
    char const (** var_30_2)[0xa] = ecx_2
    int32_t* eax_12 = sub_48c3c0(data_dff67c, 0)
    sub_4d2b10(eax_12, eax_12, ebx_1, var_2c_2)
    void* eax_13 = sub_46ad40(ebx, arg2)
    int32_t i = 0
    void** eax_16 = *ebx_1 + ((ebx_1[1] * 3 - 3) << 2)
    
    if (*(eax_13 + 4) s> 0)
        do
            int32_t eax_17 = *(eax_13 + 8)
            sub_4b8610(eax_17, &eax_16[1], &data_5b1d6c, *(eax_17 + (i << 3)), *(eax_17 + (i << 3) + 4))
            i += 1
        while (i s< *(eax_13 + 4))
    
    char* const edx_8 = &data_5559b1
    char* eax_19 = *arg4
    
    if (eax_19 != 0)
        edx_8 = eax_19
    
    return sub_48b620(eax_16, edx_8)
}
