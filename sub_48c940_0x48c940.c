// 函数名称: sub_48c940
// 虚拟地址: 0x48c940
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

bool __fastcallsub_48c940(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    void* edx = data_cdf428
    
    if (edx != 0)
        void* edi_1 = edx
        
        if (*arg1 == 1)
            int32_t eax_1 = arg1[2]
            int32_t ecx = arg1[1]
            int32_t ebx_2 = eax_1 & 7
            
            if (ecx != 0xd)
                if (ecx != 0x71)
                    if (ecx != 0x73)
                        if (ecx == 0x43)
                            int32_t ecx_6 = eax_1 & 0xa
                            int32_t var_8_1 = ecx_6
                            ecx_6.b = ecx_6 != 0
                            eax_1.b = (eax_1.b & 1) != 0
                            
                            if ((eax_1.b & ecx_6.b) != 0)
                                sub_4ab900()
                                edx = data_cdf428
                            else if (var_8_1 != 0)
                                int32_t* ecx_7 = data_ce19c8
                                
                                if (ecx_7 != 0)
                                    (*(*ecx_7 + 0x24))(1)
                                    data_ce1acc = data_5724f8
                                    edx = data_cdf428
                    else if (eax_1 == 4)
                        PostMessageA(data_ce1790, 0x10, 0, 0)
                        BOOL eax_6
                        eax_6.b = 1
                        return eax_6
                else if (ebx_2 == 0)
                    int32_t edx_1 = *(edi_1 + 0x1c)
                    int32_t edx_2 = edx_1 | 0x200
                    
                    if (((edx_1 u>> 9).b & 1) != 0)
                        edx_2 = edx_1 & 0xfffffdff
                    
                    int32_t eax_5
                    eax_5.b = 1
                    *(edi_1 + 0x1c) = edx_2
                    return eax_5
            else if (eax_1 == 4)
                void* ecx_1 = data_65ae00
                
                if (*(ecx_1 + 0x24) == 0)
                    eax_1.b = *(ecx_1 + 0x22) == 0
                    *(ecx_1 + 0x22) = eax_1.b
                    (*(*data_ce19b4 + 0xb0))()
                    return 1
            
            int32_t eax_8 = arg1[1]
            
            if (eax_8 != 0x44)
                if (eax_8 != 0xbe)
                    if (eax_8 == 0xbc)
                        char ecx_8 = (arg1[2]).b
                        
                        if ((ecx_8 & 6) == 6)
                            if ((ecx_8 & 1) != 0)
                                *data_ce19c4 = 0
                                int32_t* eax_16
                                eax_16.b = 1
                                return eax_16
                            
                            int32_t* ecx_9 = data_ce19c4
                            int32_t temp0 = *ecx_9
                            *ecx_9 -= 1
                            int32_t eax_17 = *ecx_9
                            
                            if (temp0 - 1 s< 0)
                                *ecx_9 = 0
                                int32_t eax_18
                                eax_18.b = 1
                                return 1
                            
                            if (eax_17 s> 0x2710)
                                eax_17 = 0x2710
                            
                            *ecx_9 = eax_17
                            eax_17.b = 1
                            return eax_17
                    else if (eax_8 != 0x73)
                        if (eax_8 != 0x72)
                            if (eax_8 == 0x46 && (arg1[2].b & 0xa) != 0)
                                goto label_48cb36
                        else if (ebx_2 == 0)
                        label_48cb36:
                            
                            if (*(edx + 0x20) != 0)
                                int32_t edx_5 = *(edi_1 + 0x1c)
                                int32_t edx_6 = edx_5 | 0x20
                                
                                if (((edx_5 u>> 5).b & 1) != 0)
                                    edx_6 = edx_5 & 0xffffffdf
                                
                                int32_t eax_22
                                eax_22.b = 1
                                *(edi_1 + 0x1c) = edx_6
                                return eax_22
                    else if (ebx_2 == 0 && *(edx + 0x20) != ebx_2.b)
                        int32_t edx_3 = *(edi_1 + 0x1c)
                        int32_t edx_4 = edx_3 | 0x40
                        
                        if (((edx_3 u>> 6).b & 1) != 0)
                            edx_4 = edx_3 & 0xffffffbf
                        
                        int32_t eax_20
                        eax_20.b = 1
                        *(edi_1 + 0x1c) = edx_4
                        return eax_20
                else if (((arg1[2]).b & 6) == 6)
                    int32_t* eax_13 = data_ce19c4
                    *eax_13 += 1
                    eax_13.b = 1
                    return eax_13
            else if (((arg1[2]).b & 6) == 6)
                *(edx + 0x20) = *(edx + 0x20) == 0
                return true
        
        if (sub_4a8610(arg1) != 0)
            return 1
        
        char eax = (*(*data_65ae00 + 0x28))(arg1)
        
        if (eax != 0)
            return eax
        
        sub_481120(&data_e46ee8, arg1)
    
    return 0
}
