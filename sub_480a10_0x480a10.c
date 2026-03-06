// 函数名称: sub_480a10
// 虚拟地址: 0x480a10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_480a10(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    char* const ecx = &data_5559b1
    char* eax = *arg2
    
    if (eax != 0)
        ecx = eax
    
    int32_t eax_1 = sub_4950a0(ecx, 0)
    int32_t ecx_3 = (arg1[1] & eax_1) << 2
    int32_t* esi = *(ecx_3 + *arg1)
    
    if (esi != 0)
        char* edi_1 = *arg2
        
        while (true)
            char* eax_3 = *esi
            char* const ecx_4 = &data_5559b1
            
            if (eax_3 != 0)
                ecx_4 = eax_3
            
            char* const eax_4 = &data_5559b1
            
            if (edi_1 != 0)
                eax_4 = edi_1
            
            int32_t eax_6
            
            while (true)
                char edx_1 = *eax_4
                char temp1_1 = *ecx_4
                bool c_1 = edx_1 u< temp1_1
                
                if (edx_1 == temp1_1)
                    if (edx_1 == 0)
                        eax_6 = 0
                        break
                    
                    edx_1 = eax_4[1]
                    char temp2_1 = ecx_4[1]
                    c_1 = edx_1 u< temp2_1
                    
                    if (edx_1 == temp2_1)
                        eax_4 = &eax_4[2]
                        ecx_4 = &ecx_4[2]
                        
                        if (edx_1 != 0)
                            continue
                        
                        eax_6 = 0
                        break
                
                eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
                break
            
            if (eax_6 == 0)
                esi[1] = *arg3
                int32_t eax_18 = arg3[1]
                esi[2] = eax_18
                return eax_18
            
            esi = esi[3]
            
            if (esi == 0)
                break
    
    int32_t* eax_7 = sub_45cfa0(0x10)
    eax_7[3] += 1
    int32_t* esi_1 = *eax_7
    
    if (esi_1 == 0)
        sub_45ce30(eax_7)
        esi_1 = *eax_7
    
    *eax_7 = *esi_1
    char* eax_10 = *arg2
    *esi_1 = eax_10
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_44f000(esi_1)
        *(eax_11 + 4) += 1
    
    esi_1[1] = *arg3
    esi_1[2] = arg3[1]
    esi_1[3] = *(ecx_3 + *arg1)
    int32_t eax_16 = *arg1
    *(ecx_3 + eax_16) = esi_1
    arg1[2] += 1
    return eax_16
}
