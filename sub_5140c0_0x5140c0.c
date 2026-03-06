// 函数名称: sub_5140c0
// 虚拟地址: 0x5140c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5140c0(uint32_t arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    char* ebx = esi[4]
    
    while (true)
        char* var_c_1 = ebx
        
        while (true)
            int32_t i = esi[2]
            uint32_t edx_3
            
            if (i s>= 0x10)
                edx_3 = esi[3]
            else
                uint32_t var_10_1 = esi[3]
                
                do
                    char* eax_2 = *esi
                    
                    if (eax_2 u< esi[1])
                        arg1.b = *eax_2
                        *esi = &eax_2[1]
                    else
                        arg1.b = 0
                    
                    uint32_t edx_2 = zx.d(arg1.b) << i.b
                    i += 8
                    edx_3 = edx_2 | var_10_1
                    esi[2] = i
                    var_10_1 = edx_3
                    esi[3] = edx_3
                while (i s<= 0x18)
            
            uint32_t eax_6 = zx.d(*(esi + ((edx_3 & 0x1ff) << 1) + 0x20))
            uint32_t eax_7
            
            if (eax_6 == 0)
                eax_7, arg1 = sub_514000(esi, &esi[8])
            else
                arg1 = eax_6 u>> 9
                esi[3] = edx_3 u>> arg1.b
                eax_7 = eax_6 & 0x1ff
                esi[2] = i - arg1
            
            if (eax_7 s>= 0x100)
                if (eax_7 == 0x100)
                    esi[4] = ebx
                    return 1
                
                int32_t eax_11 = (&data_572c0c)[eax_7]
                int32_t i_1 = esi[2]
                void* i_7 = (&data_572c8c)[eax_7]
                
                if (eax_11 != 0)
                    int32_t ecx_5 = esi[3]
                    int32_t var_10_3 = ecx_5
                    int32_t edi_6
                    
                    if (i_1 s>= eax_11)
                        edi_6 = ecx_5
                    else
                        do
                            char* eax_12 = *esi
                            
                            if (eax_12 u< esi[1])
                                ecx_5.b = *eax_12
                                *esi = &eax_12[1]
                            else
                                ecx_5.b = 0
                            
                            uint32_t edi_5 = zx.d(ecx_5.b) << i_1.b
                            i_1 += 8
                            edi_6 = edi_5 | var_10_3
                            esi[2] = i_1
                            var_10_3 = edi_6
                            esi[3] = edi_6
                        while (i_1 s<= 0x18)
                    
                    i_1 -= eax_11
                    esi[3] = edi_6 u>> eax_11.b
                    esi[2] = i_1
                    i_7 += ((1 << eax_11.b) - 1) & edi_6
                
                void* ecx_8 = &esi[0x201]
                void* edi_9
                
                if (i_1 s>= 0x10)
                    edi_9 = esi[3]
                else
                    void* var_10_4 = esi[3]
                    
                    do
                        char* eax_21 = *esi
                        
                        if (eax_21 u< esi[1])
                            ecx_8.b = *eax_21
                            *esi = &eax_21[1]
                        else
                            ecx_8.b = 0
                        
                        uint32_t edi_8 = zx.d(ecx_8.b) << i_1.b
                        i_1 += 8
                        edi_9 = edi_8 | var_10_4
                        esi[2] = i_1
                        var_10_4 = edi_9
                        esi[3] = edi_9
                    while (i_1 s<= 0x18)
                    
                    ecx_8 = &esi[0x201]
                
                uint32_t eax_25 = zx.d(*(ecx_8 + ((edi_9 & 0x1ff) << 1)))
                uint32_t eax_26
                
                if (eax_25 == 0)
                    eax_26 = sub_514000(esi, ecx_8)
                else
                    uint32_t ecx_11 = eax_25 u>> 9
                    esi[3] = edi_9 u>> ecx_11.b
                    eax_26 = eax_25 & 0x1ff
                    esi[2] = i_1 - ecx_11
                
                if (eax_26 s>= 0)
                    int32_t edi_11 = *((eax_26 << 2) + &data_572f90)
                    int32_t eax_27 = *((eax_26 << 2) + &data_572f10)
                    int32_t var_10_5 = edi_11
                    
                    if (eax_27 != 0)
                        int32_t i_2 = esi[2]
                        int32_t ecx_13 = esi[3]
                        int32_t var_14_2 = ecx_13
                        int32_t edx_10
                        
                        if (i_2 s>= eax_27)
                            edx_10 = ecx_13
                        else
                            do
                                char* eax_28 = *esi
                                
                                if (eax_28 u< esi[1])
                                    ecx_13.b = *eax_28
                                    *esi = &eax_28[1]
                                else
                                    ecx_13.b = 0
                                
                                uint32_t edx_9 = zx.d(ecx_13.b) << i_2.b
                                i_2 += 8
                                edx_10 = edx_9 | var_14_2
                                esi[2] = i_2
                                var_14_2 = edx_10
                                esi[3] = edx_10
                            while (i_2 s<= 0x18)
                        
                        esi[3] = edx_10 u>> eax_27.b
                        esi[2] = i_2 - eax_27
                        edi_11 = var_10_5 + (((1 << eax_27.b) - 1) & edx_10)
                        var_10_5 = edi_11
                    
                    int32_t edx_11 = esi[5]
                    void* ecx_17 = ebx - edx_11
                    
                    if (ecx_17 s>= edi_11)
                        int32_t edi_14 = esi[6]
                        
                        if (i_7 + ebx u<= edi_14)
                            goto label_514379
                        
                        bool cond:2_1 = esi[7] == 0
                        esi[4] = ebx
                        
                        if (not(cond:2_1))
                            int32_t i_3
                            
                            for (i_3 = edi_14 - edx_11; i_7 + ecx_17 s> i_3; i_3 *= 2)
                            
                            int32_t i_5 = i_3
                            int32_t var_2c_2 = edx_11
                            void* eax_39
                            eax_39, edx_11 = sub_52383b()
                            
                            if (eax_39 != 0)
                                ebx = ecx_17 + eax_39
                                esi[5] = eax_39
                                var_c_1 = ebx
                                esi[4] = ebx
                                esi[6] = eax_39 + i_3
                            label_514379:
                                arg1 = ebx - var_10_5
                                
                                if (var_10_5 != 1)
                                    void* i_6 = i_7
                                    
                                    if (i_6 == 0)
                                        continue
                                    
                                    void* i_4
                                    
                                    do
                                        void* eax_36
                                        eax_36.b = *arg1
                                        arg1 += 1
                                        *ebx = eax_36.b
                                        ebx = &ebx[1]
                                        i_4 = i_6
                                        i_6 -= 1
                                    while (i_4 != 1)
                                    break
                                else
                                    edx_11.b = *arg1
                                    
                                    if (i_7 == 0)
                                        continue
                                    
                                    void* eax_40
                                    eax_40.b = edx_11.b
                                    int32_t eax_42 = zx.d(eax_40.b) * 0x1010101
                                    int32_t ecx_21
                                    int32_t edi_16
                                    edi_16, ecx_21 = __memfill_u32(ebx, eax_42, i_7 u>> 2)
                                    ebx = var_c_1 + i_7
                                    int32_t edi_17
                                    edi_17, arg1 = __memfill_u8(edi_16, eax_42.b, i_7 & 3)
                                    break
            else if (eax_7 s>= 0)
                int32_t edi_2 = esi[6]
                
                if (ebx u< edi_2)
                    goto label_51419e
                
                bool cond:1_1 = esi[7] == 0
                esi[4] = ebx
                
                if (not(cond:1_1))
                    int32_t ecx_3 = esi[5]
                    void* ebx_1 = ebx - ecx_3
                    int32_t edi_3 = edi_2 - ecx_3
                    
                    if (ebx_1 + 1 s> edi_3)
                        do
                            edi_3 *= 2
                        while (ebx_1 s>= edi_3)
                    
                    int32_t var_28_1 = edi_3
                    int32_t var_2c_1 = ecx_3
                    int32_t eax_9
                    eax_9, arg1 = sub_52383b()
                    
                    if (eax_9 != 0)
                        ebx = ebx_1 + eax_9
                        esi[5] = eax_9
                        esi[4] = ebx
                        esi[6] = eax_9 + edi_3
                    label_51419e:
                        *ebx = eax_7.b
                        ebx = &ebx[1]
                        break
            
            return 0
}
