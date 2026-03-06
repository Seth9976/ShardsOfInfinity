// 函数名称: sub_519a50
// 虚拟地址: 0x519a50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_519a50(int32_t arg1, uint32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* ebx = arg2
    int32_t* ebx = arg2
    int32_t var_c = 0
    
    if (ebx[2] != 0)
        char ecx_1 = (ebx[9]).b
        int32_t edi_2 = *ebx * ebx[1]
        
        if ((ecx_1 & 0x1c) == 0xc || (ecx_1 & 0x1c) == 8)
            char* edx = nullptr
            
            if (edi_2 s> 0)
                do
                    if (edx[ebx[4]] != 0)
                        *(ebx[2] + (edx << 2)) = *(ebx[3] + (edx << 2))
                    
                    edx = &edx[1]
                while (edx s< edi_2)
        
        sub_51d5b0(ebx[3], ebx[2], (*ebx * ebx[1]) << 2)
        goto label_519b64
    
    void* var_28 = arg3
    
    if (sub_5193f0(arg1, arg2, arg3, arg4) != 0)
        int32_t var_28_1 = (*ebx * ebx[1]) << 2
        ebx[2] = _malloc()
        int32_t var_2c_1 = (*ebx * ebx[1]) << 2
        ebx[3] = _malloc()
        int32_t var_30_1 = *ebx * ebx[1]
        int32_t eax_11 = _malloc()
        uint32_t (* ecx)[0x4] = ebx[2]
        ebx[4] = eax_11
        
        if (ecx != 0)
            _memset(ecx, 0, (*ebx * ebx[1]) << 2)
            _memset(ebx[3], 0, (*ebx * ebx[1]) << 2)
            _memset(ebx[4], 0, *ebx * ebx[1])
            var_c = 1
        label_519b64:
            void* ecx_3
            uint32_t edx_1
            ecx_3, edx_1 = _memset(ebx[4], 0, *ebx * ebx[1])
            
            while (true)
                char* eax_30 = *(arg3 + 0xa8)
                
                if (eax_30 u< *(arg3 + 0xac))
                    ecx_3.b = *eax_30
                    eax_30 = &eax_30[1]
                    *(arg3 + 0xa8) = eax_30
                else if (*(arg3 + 0x20) == 0)
                    ecx_3.b = 0
                else
                    ecx_3, edx_1 = sub_50ebb0(arg3)
                    char* eax_31 = *(arg3 + 0xa8)
                    ecx_3.b = *eax_31
                    eax_30 = &eax_31[1]
                    *(arg3 + 0xa8) = eax_30
                
                if (ecx_3.b != 0x21)
                    break
                
                ecx_3 = *(arg3 + 0xac)
                
                if (eax_30 u< ecx_3)
                    goto label_519bd9
                
                if (*(arg3 + 0x20) != 0)
                    sub_50ebb0(arg3)
                    eax_30 = *(arg3 + 0xa8)
                    ecx_3 = *(arg3 + 0xac)
                label_519bd9:
                    edx_1.b = *eax_30
                    void* eax_32 = &eax_30[1]
                    *(arg3 + 0xa8) = eax_32
                    
                    if (edx_1.b == 0xf9)
                        if (eax_32 u< ecx_3)
                            edx_1.b = *eax_32
                            eax_32 += 1
                            *(arg3 + 0xa8) = eax_32
                        else if (*(arg3 + 0x20) == 0)
                            edx_1.b = 0
                        else
                            sub_50ebb0(arg3)
                            char* eax_33 = *(arg3 + 0xa8)
                            ecx_3 = *(arg3 + 0xac)
                            edx_1.b = *eax_33
                            eax_32 = &eax_33[1]
                            *(arg3 + 0xa8) = eax_32
                        
                        edx_1 = zx.d(edx_1.b)
                        
                        if (edx_1 != 4)
                            if (*(arg3 + 0x10) != 0)
                                void* edi_5 = ecx_3 - eax_32
                                
                                if (edi_5 s< edx_1)
                                    int32_t eax_51 = *(arg3 + 0x14)
                                    int32_t var_2c_4 = *(arg3 + 0x1c)
                                    *(arg3 + 0xa8) = ecx_3
                                    edx_1, ecx_3 = eax_51(var_2c_4, edx_1 - edi_5)
                                    continue
                            
                            *(arg3 + 0xa8) = eax_32 + edx_1
                            continue
                        else
                            if (eax_32 u< ecx_3)
                                ecx_3.b = *eax_32
                                *(arg3 + 0xa8) = eax_32 + 1
                            else if (*(arg3 + 0x20) == 0)
                                ecx_3.b = 0
                            else
                                sub_50ebb0(arg3)
                                char* eax_35 = *(arg3 + 0xa8)
                                ecx_3.b = *eax_35
                                *(arg3 + 0xa8) = &eax_35[1]
                            
                            ebx[9] = zx.d(ecx_3.b)
                            uint32_t eax_38
                            eax_38, ecx_3 = sub_50ed90(arg3)
                            ebx[0x2215] = eax_38 * 0xa
                            int32_t eax_41 = ebx[8]
                            
                            if (eax_41 s>= 0)
                                *(&ebx[eax_41] + 0x2b) = 0xff
                            
                            char* eax_42 = *(arg3 + 0xa8)
                            
                            if ((ebx[9].b & 1) == 0)
                                int32_t edx_2
                                
                                if (*(arg3 + 0x10) != 0)
                                    edx_2 = *(arg3 + 0xac)
                                    ecx_3 = edx_2 - eax_42
                                
                                if (*(arg3 + 0x10) == 0 || ecx_3 s>= 1)
                                    *(arg3 + 0xa8) = &eax_42[1]
                                    ebx[8] = 0xffffffff
                                else
                                    *(arg3 + 0xa8) = edx_2
                                    (*(arg3 + 0x14))(*(arg3 + 0x1c), 1 - ecx_3)
                                    ebx[8] = 0xffffffff
                            else
                                if (eax_42 u< *(arg3 + 0xac))
                                    ecx_3.b = *eax_42
                                    *(arg3 + 0xa8) = &eax_42[1]
                                else if (*(arg3 + 0x20) == 0)
                                    ecx_3.b = 0
                                else
                                    sub_50ebb0(arg3)
                                    char* eax_44 = *(arg3 + 0xa8)
                                    ecx_3.b = *eax_44
                                    *(arg3 + 0xa8) = &eax_44[1]
                                
                                uint32_t eax_46 = zx.d(ecx_3.b)
                                ebx[8] = eax_46
                                *(&ebx[eax_46] + 0x2b) = 0
                
                while (true)
                    edx_1 = *(arg3 + 0xac)
                    char* eax_47 = *(arg3 + 0xa8)
                    
                    if (eax_47 u< edx_1)
                        ecx_3.b = *eax_47
                        eax_47 = &eax_47[1]
                        *(arg3 + 0xa8) = eax_47
                    else if (*(arg3 + 0x20) == 0)
                        ecx_3.b = 0
                    else
                        sub_50ebb0(arg3)
                        char* eax_53 = *(arg3 + 0xa8)
                        edx_1 = *(arg3 + 0xac)
                        ecx_3.b = *eax_53
                        eax_47 = &eax_53[1]
                        *(arg3 + 0xa8) = eax_47
                    
                    ecx_3 = zx.d(ecx_3.b)
                    
                    if (ecx_3 == 0)
                        break
                    
                    if (*(arg3 + 0x10) != 0)
                        void* edi_7 = edx_1 - eax_47
                        
                        if (edi_7 s< ecx_3)
                            int32_t eax_54 = *(arg3 + 0x14)
                            int32_t var_2c_5 = *(arg3 + 0x1c)
                            *(arg3 + 0xa8) = edx_1
                            eax_54(var_2c_5, ecx_3 - edi_7)
                            continue
                    
                    *(arg3 + 0xa8) = eax_47 + ecx_3
            
            if (ecx_3.b == 0x2c)
                uint32_t eax_57 = sub_50ed90(arg3)
                uint32_t eax_58 = sub_50ed90(arg3)
                uint32_t eax_59 = sub_50ed90(arg3)
                uint32_t eax_60 = sub_50ed90(arg3)
                
                if (eax_59 + eax_57 s<= *ebx && eax_60 + eax_58 s<= ebx[1])
                    int32_t eax_61 = *ebx
                    uint32_t edx_5 = eax_57 << 2
                    ebx[0x220e] = edx_5
                    ebx[0x2212] = edx_5
                    int32_t edi_9 = eax_61 << 2
                    ebx[0x2214] = edi_9
                    int32_t ecx_21 = edi_9 * eax_58
                    ebx[0x2210] = edx_5 + (eax_59 << 2)
                    ebx[0x220f] = ecx_21
                    ebx[0x2213] = ecx_21
                    ebx[0x2211] = edi_9 * eax_60 + ecx_21
                    char* eax_64 = *(arg3 + 0xa8)
                    
                    if (eax_64 u< *(arg3 + 0xac))
                        ecx_21.b = *eax_64
                        *(arg3 + 0xa8) = &eax_64[1]
                    else if (*(arg3 + 0x20) == 0)
                        ecx_21.b = 0
                    else
                        sub_50ebb0(arg3)
                        char* eax_66 = *(arg3 + 0xa8)
                        ecx_21.b = *eax_66
                        *(arg3 + 0xa8) = &eax_66[1]
                    
                    uint32_t edi_12 = zx.d(ecx_21.b)
                    int32_t ecx_23 = ebx[0x2214]
                    ebx[0x220d] = edi_12
                    int32_t edi_13 = edi_12 & 0x40
                    int32_t edx_7 = neg.d(edi_13)
                    int32_t eax_68 = ecx_23 << 3
                    
                    if (edi_13 == 0)
                        eax_68 = ecx_23
                    
                    ebx[0x220c] = eax_68
                    ebx[0x220b] = sbb.d(edx_7, edx_7, edi_13 != 0) & 3
                    char ecx_24 = (ebx[0x220d]).b
                    void* edi_14
                    
                    if (ecx_24 s< 0)
                        int32_t eax_69
                        
                        if ((ebx[9].b & 1) == 0)
                            eax_69 = 0xffffffff
                        else
                            eax_69 = ebx[8]
                        
                        edi_14 = &ebx[0x10a]
                        char* eax_70 = 2 << (ecx_24 & 7)
                        sub_519300(eax_70, edi_14, arg3, eax_70, eax_69)
                        goto label_519f26
                    
                    if ((ebx[5].b & 0x80) != 0)
                        edi_14 = &ebx[0xa]
                    label_519f26:
                        ebx[0x220a] = edi_14
                        int32_t eax_71 = sub_519740(arg3, ebx)
                        
                        if (eax_71 != 0)
                            if (var_c != 0 && ebx[6] s> 0)
                                char* edx_12 = nullptr
                                int32_t esi_2 = *ebx * ebx[1]
                                
                                if (esi_2 s> 0)
                                    do
                                        if (edx_12[ebx[4]] == 0)
                                            *(&ebx[ebx[6]] + 0x2b) = 0xff
                                            *(ebx[2] + (edx_12 << 2)) = ebx[ebx[6] + 0xa]
                                        
                                        edx_12 = &edx_12[1]
                                    while (edx_12 s< esi_2)
                            
                            return eax_71
            else if (ecx_3.b == 0x3b)
                return arg3
    
    return 0
}
