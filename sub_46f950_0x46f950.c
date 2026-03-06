// 函数名称: sub_46f950
// 虚拟地址: 0x46f950
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_46f950(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* const ebx = &data_5559b1
    char* const ebx = &data_5559b1
    char* eax_1 = *arg2
    char* const esi = &data_5559b1
    
    if (eax_1 != 0)
        esi = eax_1
    
    void* edi = arg1
    char* const eax_2 = &data_5559b1
    char* result
    
    while (true)
        arg1.b = *esi
        char temp0_1 = *eax_2
        bool c_1 = arg1.b u< temp0_1
        
        if (arg1.b == temp0_1)
            if (arg1.b == 0)
                result = nullptr
                break
            
            arg1.b = esi[1]
            char temp1_1 = eax_2[1]
            c_1 = arg1.b u< temp1_1
            
            if (arg1.b == temp1_1)
                esi = &esi[2]
                eax_2 = &eax_2[2]
                
                if (arg1.b != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(eax_2, eax_2, c_1) | 1
        break
    
    if (result == 0)
        return result
    
    int32_t* eax_4 = sub_45d320(edi)
    char const (** ecx_1)[0xa] = &data_5b1d6c
    int32_t* edi_1 = sub_4b8ac0(eax_4, eax_4, &data_5b1d6c, data_dff67c, 0x68)
    int32_t* var_14 = edi_1
    
    if (edi_1 == 0)
        var_14.q = 0
        ecx_1 = &data_5b1d6c
        edi_1 = sub_4b8ac0(sub_4b8610(&var_14, eax_4, &data_5b1d6c, 0x68, &var_14), eax_4, 
            &data_5b1d6c, data_dff67c, 0x68)
    else
        int32_t esi_2 = 0
        
        if (edi_1[1] s> 0)
            char const (*** edi_2)[0xa] = *edi_1
            char* ebx_2 = *arg2
            int32_t* eax_8
            
            while (true)
                ecx_1 = *edi_2
                char* const eax_6 = &data_5559b1
                
                if (ebx_2 != 0)
                    eax_6 = ebx_2
                
                while (true)
                    char edx_1 = *ecx_1
                    char temp2_1 = *eax_6
                    bool c_2 = edx_1 u< temp2_1
                    
                    if (edx_1 == temp2_1)
                        if (edx_1 == 0)
                            result = nullptr
                            break
                        
                        edx_1 = *(ecx_1 + 1)
                        char temp3_1 = eax_6[1]
                        c_2 = edx_1 u< temp3_1
                        
                        if (edx_1 == temp3_1)
                            ecx_1 += 2
                            eax_6 = &eax_6[2]
                            
                            if (edx_1 != 0)
                                continue
                            
                            result = nullptr
                            break
                    
                    result = sbb.d(eax_6, eax_6, c_2) | 1
                    break
                
                if (result == 0)
                    return result
                
                eax_8 = var_14
                esi_2 += 1
                edi_2 = &edi_2[3]
                
                if (esi_2 s>= eax_8[1])
                    break
            
            ebx = &data_5559b1
            edi_1 = eax_8
    
    int32_t var_24_2 = edi_1[1]
    char const (** var_28_2)[0xa] = ecx_1
    int32_t* eax_11 = sub_48c3c0(data_dff67c, 0)
    sub_4d2b10(eax_11, eax_11, edi_1, var_24_2)
    char* eax_15 = *arg2
    
    if (eax_15 != 0)
        ebx = eax_15
    
    return sub_48b620(*edi_1 + ((edi_1[1] * 3 - 3) << 2), ebx)
}
