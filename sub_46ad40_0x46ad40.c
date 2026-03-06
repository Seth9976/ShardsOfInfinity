// 函数名称: sub_46ad40
// 虚拟地址: 0x46ad40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_46ad40(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_24 = data_dff67c
    int32_t var_24 = data_dff67c
    int32_t* eax = sub_45d320(arg1)
    int32_t* eax_1 = sub_4b8ac0(eax, eax, &data_5b1d6c, var_24, 0x68)
    
    if (eax_1 != 0)
        int32_t ebx_1 = eax_1[1]
        int32_t esi_1 = 0
        
        if (ebx_1 s> 0)
            int32_t* eax_2 = *eax_1
            char* edx_1 = *arg2
            int32_t* edi_1 = eax_2
            char* var_8_1 = edx_1
            
            while (true)
                char* ecx = *edi_1
                char* const eax_3 = &data_5559b1
                
                if (edx_1 != 0)
                    eax_3 = edx_1
                
                int32_t eax_5
                
                while (true)
                    edx_1.b = *eax_3
                    char temp0_1 = *ecx
                    bool c_1 = edx_1.b u< temp0_1
                    
                    if (edx_1.b == temp0_1)
                        if (edx_1.b == 0)
                            eax_5 = 0
                            break
                        
                        edx_1.b = eax_3[1]
                        char temp1_1 = ecx[1]
                        c_1 = edx_1.b u< temp1_1
                        
                        if (edx_1.b == temp1_1)
                            eax_3 = &eax_3[2]
                            ecx = &ecx[2]
                            
                            if (edx_1.b != 0)
                                continue
                            
                            eax_5 = 0
                            break
                    
                    eax_5 = sbb.d(eax_3, eax_3, c_1) | 1
                    break
                
                if (eax_5 == 0)
                    return &eax_2[esi_1 * 3]
                
                edx_1 = var_8_1
                esi_1 += 1
                edi_1 = &edi_1[3]
                
                if (esi_1 s>= ebx_1)
                    break
    
    return 0
}
