// 函数名称: sub_48e840
// 虚拟地址: 0x48e840
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __stdcallsub_48e840(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* esi = data_cdf454
    char* const ecx_1 = &data_5559b1
    char* eax = *arg1
    
    if (eax != 0)
        ecx_1 = eax
    
    int32_t eax_1 = sub_4950a0(ecx_1, 0)
    int32_t* esi_1 = *(*esi + ((esi[1] & eax_1) << 2))
    
    if (esi_1 != 0)
        char* edi_1 = *arg1
        
        while (true)
            char* eax_3 = *esi_1
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
                return &esi_1[1]
            
            esi_1 = esi_1[2]
            
            if (esi_1 == 0)
                break
    
    return 0
}
