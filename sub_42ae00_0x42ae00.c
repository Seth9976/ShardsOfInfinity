// 函数名称: sub_42ae00
// 虚拟地址: 0x42ae00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_42ae00(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    sub_44f510(arg1, arg2)
    sub_44f510(&arg1[1], &arg2[1])
    arg1[2] = arg2[2]
    __builtin_memcpy(&arg1[4], &arg2[4], 0x108)
    __builtin_memcpy(&arg1[0x46], &arg2[0x46], 0x108)
    char* const esi_2 = &data_5559b1
    char* const edx = &data_5559b1
    char* const ecx_1 = &data_5559b1
    char* eax_2 = arg1[0x88]
    
    if (eax_2 != 0)
        edx = eax_2
    
    char* eax_3 = arg2[0x88]
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    if (edx != ecx_1)
        if (data_cdf414 != 0)
            char* eax_4 = arg1[0x88]
            
            if (eax_4 != 0 && *eax_4 != 0)
                char* eax_5 = sub_44f000(&arg1[0x88])
                int32_t temp1_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
                    arg1[0x88] = &data_5559b1
        
        char* eax_6 = arg2[0x88]
        arg1[0x88] = eax_6
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&arg1[0x88])
            *(eax_7 + 4) += 1
    
    char* eax_8 = arg1[0x89]
    char* const edx_3 = &data_5559b1
    char* const ecx_5 = &data_5559b1
    
    if (eax_8 != 0)
        edx_3 = eax_8
    
    char* eax_9 = arg2[0x89]
    
    if (eax_9 != 0)
        ecx_5 = eax_9
    
    if (edx_3 != ecx_5)
        void* ecx_6 = &arg1[0x89]
        
        if (data_cdf414 != 0)
            char* eax_10 = arg1[0x89]
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_44f000(ecx_6)
                int32_t temp2_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp2_1 != 1)
                    ecx_6 = &arg1[0x89]
                else
                    sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                    ecx_6 = &arg1[0x89]
                    *ecx_6 = &data_5559b1
        
        char* eax_12 = arg2[0x89]
        *ecx_6 = eax_12
        
        if (eax_12 != 0 && *eax_12 != 0)
            char* eax_13 = sub_44f000(ecx_6)
            *(eax_13 + 4) += 1
    
    char* const edx_6 = &data_5559b1
    arg1[0x8a] = arg2[0x8a]
    char* const ecx_8 = &data_5559b1
    arg1[0x8b] = arg2[0x8b]
    arg1[0x8c] = arg2[0x8c]
    char* eax_17 = arg1[0x8d]
    
    if (eax_17 != 0)
        edx_6 = eax_17
    
    char* eax_18 = arg2[0x8d]
    
    if (eax_18 != 0)
        ecx_8 = eax_18
    
    if (edx_6 != ecx_8)
        void* ecx_9 = &arg1[0x8d]
        
        if (data_cdf414 != 0)
            char* eax_19 = arg1[0x8d]
            
            if (eax_19 != 0 && *eax_19 != 0)
                char* eax_20 = sub_44f000(ecx_9)
                int32_t temp3_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp3_1 != 1)
                    ecx_9 = &arg1[0x8d]
                else
                    sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                    ecx_9 = &arg1[0x8d]
                    *ecx_9 = &data_5559b1
        
        char* eax_21 = arg2[0x8d]
        *ecx_9 = eax_21
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_44f000(ecx_9)
            *(eax_22 + 4) += 1
    
    char* eax_23 = arg1[0x8e]
    void* edx_9 = &arg1[0x8e]
    char* const ecx_11 = &data_5559b1
    
    if (eax_23 != 0)
        ecx_11 = eax_23
    
    char* eax_24 = arg2[0x8e]
    
    if (eax_24 != 0)
        esi_2 = eax_24
    
    if (ecx_11 != esi_2)
        if (data_cdf414 != 0)
            char* eax_25 = *edx_9
            
            if (eax_25 != 0 && *eax_25 != 0)
                char* eax_26 = sub_44f000(edx_9)
                int32_t temp4_1 = *(eax_26 + 4)
                *(eax_26 + 4) -= 1
                
                if (temp4_1 != 1)
                    edx_9 = &arg1[0x8e]
                else
                    sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
                    edx_9 = &arg1[0x8e]
                    *edx_9 = &data_5559b1
        
        char* eax_27 = arg2[0x8e]
        *edx_9 = eax_27
        
        if (eax_27 != 0 && *eax_27 != 0)
            char* eax_28 = sub_44f000(edx_9)
            *(eax_28 + 4) += 1
    
    arg1[0x8f] = arg2[0x8f]
    arg1[0x90] = arg2[0x90]
    arg1[0x91] = arg2[0x91]
    arg1[0x92] = arg2[0x92]
    arg1[0x93] = arg2[0x93]
    arg1[0x94] = arg2[0x94]
    arg1[0x95] = arg2[0x95]
    arg1[0x96] = arg2[0x96]
    __builtin_memcpy(&arg1[0x97], &arg2[0x97], 0x6c)
    return arg1
}
