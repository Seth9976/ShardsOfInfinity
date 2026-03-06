// 函数名称: sub_5127a0
// 虚拟地址: 0x5127a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5127a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* var_c = ebx
    ebx[0x11b3] = 0
    ebx[0x11b4] = 0
    ebx[0x11c5] = 0
    ebx[0x11c6] = 0
    ebx[0x11d7] = 0
    ebx[0x11d8] = 0
    ebx[0x11e9] = 0
    ebx[0x11ea] = 0
    ebx[0x1201] = 0
    
    if (sub_5126a0(arg1, 0) == 0)
        return 0
    
    uint32_t eax_2 = zx.d(sub_510e20(ebx))
    
    if (eax_2 != 0xd9)
        while (true)
            if (eax_2 == 0xda)
                if (sub_511e80(ebx) == 0)
                    return 0
                
                if (sub_510ec0(ebx) == 0)
                    return 0
                
                if (ebx[0x11f1].b == 0xff)
                    while (true)
                        void* esi_1 = *ebx
                        
                        if (*(esi_1 + 0x10) == 0)
                        label_51288d:
                            
                            if (*(esi_1 + 0xa8) u>= *(esi_1 + 0xac))
                                break
                        else if ((*(esi_1 + 0x18))(*(esi_1 + 0x1c)) != 0)
                            if (*(esi_1 + 0x20) == 0)
                                break
                            
                            goto label_51288d
                        
                        void* esi_2 = *ebx
                        char* eax_8 = *(esi_2 + 0xa8)
                        
                        if (eax_8 u>= *(esi_2 + 0xac))
                            if (*(esi_2 + 0x20) == 0)
                                continue
                            else
                                sub_50ebb0(esi_2)
                                eax_8 = *(esi_2 + 0xa8)
                        
                        char ecx_3 = *eax_8
                        *(esi_2 + 0xa8) = &eax_8[1]
                        
                        if (ecx_3 == 0xff)
                            void* esi_3 = *ebx
                            char* eax_10 = *(esi_3 + 0xa8)
                            
                            if (eax_10 u< *(esi_3 + 0xac))
                                ecx_3 = *eax_10
                                *(esi_3 + 0xa8) = &eax_10[1]
                                ebx[0x11f1].b = ecx_3
                            else if (*(esi_3 + 0x20) == 0)
                                ebx[0x11f1].b = 0
                            else
                                sub_50ebb0(esi_3)
                                char* eax_12 = *(esi_3 + 0xa8)
                                char ecx_6 = *eax_12
                                *(esi_3 + 0xa8) = &eax_12[1]
                                ebx[0x11f1].b = ecx_6
                            
                            break
            else if (eax_2 != 0xdc)
                if (sub_5117c0(ebx, eax_2) == 0)
                    return 0
            else
                uint32_t eax_14 = sub_50ecf0(*ebx)
                uint32_t eax_15 = sub_50ecf0(*ebx)
                
                if (eax_14 != 4)
                    return 0
                
                if (eax_15 != *(*ebx + 4))
                    return 0
            
            eax_2 = zx.d(sub_510e20(ebx))
            
            if (eax_2 == 0xd9)
                break
    
    if (ebx[0x11f3] != 0)
        int32_t i = 0
        int32_t i_1 = 0
        
        if (*(*ebx + 8) s> 0)
            void* edi_1 = &ebx[0x11b6]
            void* var_18_1 = edi_1
            
            do
                int32_t eax_20 = 0
                int32_t edx_4 = (*(edi_1 - 0x1c) + 7) s>> 3
                int32_t ecx_14 = (*(edi_1 - 0x20) + 7) s>> 3
                int32_t var_24_1 = ecx_14
                int32_t var_28_1 = edx_4
                int32_t var_8_1 = 0
                
                if (edx_4 s> 0)
                    do
                        int32_t ebx_1 = 0
                        int32_t var_10_1 = 0
                        
                        if (ecx_14 s> 0)
                            do
                                void* ecx_17 = &var_c[0xd21 + *(edi_1 - 0x30) * 0x20]
                                int32_t j_1 = 0x10
                                void* esi_9 = ((*(edi_1 + 4) * eax_20 + ebx_1) << 7) + *edi_1
                                void* edi_2 = ecx_17 + 6
                                void* ecx_18 = ecx_17 - esi_9
                                void* var_1c_1 = ecx_18
                                void* eax_23 = esi_9 + 2
                                int32_t j
                                
                                do
                                    int16_t edx_5 = *(edi_2 - 6)
                                    eax_23 += 8
                                    edi_2 += 8
                                    int16_t ecx_20 = *(eax_23 - 8)
                                    *(eax_23 - 0xa) *= edx_5
                                    int16_t ecx_21 = *(eax_23 - 6)
                                    *(eax_23 - 8) = *(ecx_18 + eax_23 - 8) * ecx_20
                                    int16_t ecx_22 = *(eax_23 - 4)
                                    *(eax_23 - 6) = *(edi_2 - 0xa) * ecx_21
                                    *(eax_23 - 4) = *(edi_2 - 8) * ecx_22
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                                edi_1 = var_18_1
                                int32_t ecx_23 = *(edi_1 - 0x18)
                                var_c[0x1203](*(edi_1 - 0x10) + ((ecx_23 * var_8_1 + var_10_1) << 3), 
                                    ecx_23, esi_9)
                                ecx_14 = var_24_1
                                ebx_1 = var_10_1 + 1
                                eax_20 = var_8_1
                                var_10_1 = ebx_1
                            while (ebx_1 s< ecx_14)
                            
                            edx_4 = var_28_1
                        
                        eax_20 += 1
                        var_8_1 = eax_20
                    while (eax_20 s< edx_4)
                    
                    ebx = var_c
                    i = i_1
                
                i += 1
                edi_1 += 0x48
                i_1 = i
                var_18_1 = edi_1
            while (i s< *(*ebx + 8))
    
    return 1
}
