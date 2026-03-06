// 函数名称: sub_5121c0
// 虚拟地址: 0x5121c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5121c0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* var_c = ebx
    uint32_t* esi = *ebx
    int32_t var_10 = 1
    int32_t var_8 = 1
    uint32_t eax = sub_50ecf0(esi)
    
    if (eax s>= 0xb)
        char* eax_1 = esi[0x2a]
        
        if (eax_1 u< esi[0x2b])
            goto label_512218
        
        if (esi[8] != 0)
            sub_50ebb0(esi)
            eax_1 = esi[0x2a]
        label_512218:
            char ecx_1 = *eax_1
            esi[0x2a] = &eax_1[1]
            
            if (ecx_1 == 8)
                uint32_t eax_3 = sub_50ecf0(esi)
                esi[1] = eax_3
                
                if (eax_3 != 0)
                    uint32_t eax_4 = sub_50ecf0(esi)
                    *esi = eax_4
                    
                    if (eax_4 != 0)
                        char* eax_5 = esi[0x2a]
                        char i_4
                        
                        if (eax_5 u< esi[0x2b])
                            i_4 = *eax_5
                            esi[0x2a] = &eax_5[1]
                        else if (esi[8] == 0)
                            i_4 = 0
                        else
                            sub_50ebb0(esi)
                            char* eax_7 = esi[0x2a]
                            i_4 = *eax_7
                            esi[0x2a] = &eax_7[1]
                        
                        uint32_t i_2 = zx.d(i_4)
                        
                        if (i_2 == 3 || i_2 == 1 || i_2 == 4)
                            esi[2] = i_2
                            
                            if (i_4 != 0)
                                void* ecx_6 = &ebx[0x11b5]
                                uint32_t i
                                
                                do
                                    *(ecx_6 - 0xc) = 0
                                    ecx_6 += 0x48
                                    *(ecx_6 - 0x48) = 0
                                    i = i_2
                                    i_2 -= 1
                                while (i != 1)
                                i_2 = esi[2]
                            
                            if (eax == i_2 * 3 + 8)
                                ebx[0x11fb] = 0
                                int32_t edx = 0
                                int32_t ecx_7 = esi[2]
                                int32_t var_14_1 = 0
                                
                                if (ecx_7 s> 0)
                                    void* edi_1 = &ebx[0x11a8]
                                    
                                    do
                                        char* eax_11 = esi[0x2a]
                                        
                                        if (eax_11 u< esi[0x2b])
                                            ecx_7.b = *eax_11
                                            esi[0x2a] = &eax_11[1]
                                        else if (esi[8] == 0)
                                            ecx_7.b = 0
                                        else
                                            sub_50ebb0(esi)
                                            char* eax_13 = esi[0x2a]
                                            edx = var_14_1
                                            ecx_7.b = *eax_13
                                            esi[0x2a] = &eax_13[1]
                                        
                                        uint32_t ecx_9 = zx.d(ecx_7.b)
                                        *(edi_1 - 4) = ecx_9
                                        
                                        if (esi[2] == 3 && ecx_9 == zx.d(*(edx + &data_59d45c)))
                                            ebx[0x11fb] += 1
                                        
                                        char* eax_16 = esi[0x2a]
                                        
                                        if (eax_16 u< esi[0x2b])
                                            ecx_9.b = *eax_16
                                            esi[0x2a] = &eax_16[1]
                                        else if (esi[8] == 0)
                                            ecx_9.b = 0
                                        else
                                            sub_50ebb0(esi)
                                            char* eax_18 = esi[0x2a]
                                            ecx_9.b = *eax_18
                                            esi[0x2a] = &eax_18[1]
                                        
                                        uint32_t eax_20 = zx.d(ecx_9.b)
                                        uint32_t ecx_12 = eax_20 u>> 4
                                        *edi_1 = ecx_12
                                        
                                        if (ecx_12 == 0)
                                            return 0
                                        
                                        if (ecx_12 u> 4)
                                            return 0
                                        
                                        int32_t eax_21 = eax_20 & 0xf
                                        *(edi_1 + 4) = eax_21
                                        
                                        if (eax_21 == 0)
                                            return 0
                                        
                                        if (eax_21 u> 4)
                                            return 0
                                        
                                        char* eax_22 = esi[0x2a]
                                        
                                        if (eax_22 u< esi[0x2b])
                                            ecx_12.b = *eax_22
                                            esi[0x2a] = &eax_22[1]
                                        else if (esi[8] == 0)
                                            ecx_12.b = 0
                                        else
                                            sub_50ebb0(esi)
                                            char* eax_24 = esi[0x2a]
                                            ecx_12.b = *eax_24
                                            esi[0x2a] = &eax_24[1]
                                        
                                        uint32_t eax_26 = zx.d(ecx_12.b)
                                        *(edi_1 + 8) = eax_26
                                        
                                        if (eax_26 u> 3)
                                            return 0
                                        
                                        edi_1 += 0x48
                                        ecx_7 = esi[2]
                                        edx = var_14_1 + 1
                                        var_14_1 = edx
                                    while (edx s< ecx_7)
                                
                                if (arg2 != 0)
                                    return 1
                                
                                uint32_t edi_2 = *esi
                                int32_t eax_27 = esi[1]
                                
                                if (edi_2 s>= 0 && eax_27 s>= 0)
                                    if (eax_27 == 0)
                                        goto label_512454
                                    
                                    esi[1]
                                    
                                    if (edi_2 s<= divs.dp.d(0x7fffffff, esi[1]))
                                        eax_27 = esi[1]
                                    label_512454:
                                        int32_t edi_3 = edi_2 * eax_27
                                        
                                        if (edi_3 s>= 0 && ecx_7 s>= 0)
                                            int32_t eax_30
                                            int32_t edx_4
                                            
                                            if (ecx_7 != 0)
                                                edx_4:eax_30 = 0x7fffffff
                                            
                                            if (ecx_7 == 0 || edi_3 s<= divs.dp.d(edx_4:eax_30, ecx_7))
                                                int32_t i_3 = esi[2]
                                                int32_t eax_34
                                                int32_t edx_7
                                                
                                                if (i_3 s<= 0)
                                                    eax_34 = 1
                                                    edx_7 = 1
                                                else
                                                    void* edx_6 = &ebx[0x11a9]
                                                    int32_t ebx_1 = 1
                                                    int32_t eax_32 = 1
                                                    int32_t i_1
                                                    
                                                    do
                                                        int32_t ecx_14 = eax_32
                                                        edx_6 += 0x48
                                                        int32_t eax_33 = ebx_1
                                                        ebx_1 = *(edx_6 - 0x4c)
                                                        
                                                        if (ebx_1 s<= eax_33)
                                                            ebx_1 = eax_33
                                                        
                                                        eax_32 = *(edx_6 - 0x48)
                                                        
                                                        if (eax_32 s<= ecx_14)
                                                            eax_32 = ecx_14
                                                        
                                                        i_1 = i_3
                                                        i_3 -= 1
                                                    while (i_1 != 1)
                                                    eax_34 = ebx_1
                                                    edx_7 = eax_32
                                                    int32_t var_10_1 = ebx_1
                                                    ebx = var_c
                                                    var_10 = eax_34
                                                    var_8 = edx_7
                                                
                                                int32_t ecx_15 = eax_34 << 3
                                                ebx[0x11a1] = eax_34
                                                int32_t edi_4 = edx_7 << 3
                                                ebx[0x11a2] = edx_7
                                                ebx[0x11a5] = ecx_15
                                                ebx[0x11a6] = edi_4
                                                ebx[0x11a3] = divu.dp.d(0:(*esi - 1 + ecx_15), ecx_15)
                                                ebx[0x11a4] = divu.dp.d(0:(esi[1] - 1 + edi_4), edi_4)
                                                int32_t var_14_2 = 0
                                                
                                                if (esi[2] s> 0)
                                                    void* ebx_2 = &ebx[0x11ae]
                                                    
                                                    while (true)
                                                        *ebx_2 = divu.dp.d(
                                                            0:(*esi * *(ebx_2 - 0x18) - 1 + var_10), 
                                                            var_10)
                                                        *(ebx_2 + 4) = divu.dp.d(
                                                            0:(esi[1] * *(ebx_2 - 0x14) + var_8 - 1), 
                                                            var_8)
                                                        int32_t eax_54 =
                                                            (var_c[0x11a3] * *(ebx_2 - 0x18)) << 3
                                                        *(ebx_2 + 8) = eax_54
                                                        int32_t edi_6 = var_c[0x11a4] * *(ebx_2 - 0x14)
                                                        int32_t var_18_1 = eax_54
                                                        *(ebx_2 + 0x20) = 0
                                                        *(ebx_2 + 0x18) = 0
                                                        *(ebx_2 + 0x1c) = 0
                                                        int32_t edi_7 = edi_6 << 3
                                                        *(ebx_2 + 0xc) = edi_7
                                                        
                                                        if (eax_54 s< 0 || edi_7 s< 0)
                                                            *(ebx_2 + 0x14) = 0
                                                        else
                                                            if (edi_7 == 0)
                                                                goto label_5125af
                                                            
                                                            eax_54 = divs.dp.d(0x7fffffff, edi_7)
                                                            
                                                            if (var_18_1 s> eax_54)
                                                                *(ebx_2 + 0x14) = 0
                                                            else
                                                                eax_54 = var_18_1
                                                            label_5125af:
                                                                int32_t var_28_1 = eax_54 * edi_7 + 0xf
                                                                eax_54 = _malloc()
                                                                *(ebx_2 + 0x14) = eax_54
                                                                
                                                                if (eax_54 != 0)
                                                                    *(ebx_2 + 0x10) =
                                                                        (eax_54 + 0xf) & 0xfffffff0
                                                                    
                                                                    if (var_c[0x11f3] == 0)
                                                                        goto label_512648
                                                                    
                                                                    int32_t ecx_16 = *(ebx_2 + 8)
                                                                    int32_t edi_8 = *(ebx_2 + 0xc)
                                                                    int32_t eax_62
                                                                    int32_t edx_17
                                                                    edx_17:eax_62 = sx.q(ecx_16)
                                                                    *(ebx_2 + 0x24) =
                                                                        (eax_62 + (edx_17 & 7)) s>> 3
                                                                    int32_t eax_66
                                                                    int32_t edx_19
                                                                    edx_19:eax_66 = sx.q(edi_8)
                                                                    eax_54 = (eax_66 + (edx_19 & 7)) s>> 3
                                                                    *(ebx_2 + 0x28) = eax_54
                                                                    
                                                                    if (ecx_16 s< 0 || edi_8 s< 0)
                                                                        *(ebx_2 + 0x18) = 0
                                                                    else
                                                                        if (edi_8 != 0)
                                                                            eax_54 = divs.dp.d(0x7fffffff, edi_8)
                                                                        
                                                                        if (edi_8 != 0 && ecx_16 s> eax_54)
                                                                            *(ebx_2 + 0x18) = 0
                                                                        else
                                                                            int32_t ecx_17 = ecx_16 * edi_8
                                                                            
                                                                            if (ecx_17 s< 0 || ecx_17 s> 0x3fffffff)
                                                                                *(ebx_2 + 0x18) = 0
                                                                            else
                                                                                eax_54 = ecx_17 * 2
                                                                                
                                                                                if (eax_54 s> 0x7ffffff0)
                                                                                    *(ebx_2 + 0x18) = 0
                                                                                else
                                                                                    int32_t var_28_2 = eax_54 + 0xf
                                                                                    eax_54 = _malloc()
                                                                                    *(ebx_2 + 0x18) = eax_54
                                                                                    
                                                                                    if (eax_54 != 0)
                                                                                        *(ebx_2 + 0x20) =
                                                                                            (eax_54 + 0xf) & 0xfffffff0
                                                                                    label_512648:
                                                                                        ebx_2 += 0x48
                                                                                        int32_t eax_73 = var_14_2 + 1
                                                                                        var_14_2 = eax_73
                                                                                        
                                                                                        if (eax_73 s>= esi[2])
                                                                                            break
                                                                                        
                                                                                        continue
                                                        
                                                        return sub_512140(eax_54, var_14_2 + 1, var_c, 
                                                            0)
                                                
                                                return 1
    
    return 0
}
