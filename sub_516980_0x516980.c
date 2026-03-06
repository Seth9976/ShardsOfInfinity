// 函数名称: sub_516980
// 虚拟地址: 0x516980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_516980(uint32_t* arg1, uint32_t* arg2)
{
    // 第一条实际指令: uint32_t* esi = arg1
    uint32_t* esi = arg1
    char* eax = esi[0x2a]
    
    if (eax u< esi[0x2b])
        goto label_5169b0
    
    if (esi[8] != 0)
        sub_50ebb0(arg1)
        eax = esi[0x2a]
    label_5169b0:
        arg1.b = *eax
        char* eax_1 = &eax[1]
        esi[0x2a] = eax_1
        
        if (arg1.b == 0x42)
            if (eax_1 u< esi[0x2b])
                goto label_5169e1
            
            if (esi[8] != 0)
                sub_50ebb0(esi)
                eax_1 = esi[0x2a]
            label_5169e1:
                arg1.b = *eax_1
                esi[0x2a] = &eax_1[1]
                
                if (arg1.b == 0x4d)
                    sub_50ed90(esi)
                    sub_50ed90(esi)
                    sub_50ed90(esi)
                    sub_50ed90(esi)
                    uint32_t eax_3 = sub_50ed90(esi)
                    arg2[1] = (sub_50ed90(esi) << 0x10) + eax_3
                    uint32_t eax_7 = sub_50ed90(esi)
                    uint32_t eax_10 = (sub_50ed90(esi) << 0x10) + eax_7
                    arg2[6] = 0
                    arg2[2] = eax_10
                    arg2[5] = 0
                    arg2[4] = 0
                    arg2[3] = 0
                    
                    if (eax_10 == 0xc || eax_10 == 0x28 || eax_10 == 0x38 || eax_10 == 0x6c
                            || eax_10 == 0x7c)
                        uint32_t eax_11 = sub_50ed90(esi)
                        uint32_t edi_3 = eax_10
                        uint32_t eax_12
                        
                        if (edi_3 != 0xc)
                            *esi = (sub_50ed90(esi) << 0x10) + eax_11
                            uint32_t eax_16 = sub_50ed90(esi)
                            eax_12 = (sub_50ed90(esi) << 0x10) + eax_16
                            edi_3 = eax_10
                        else
                            *esi = eax_11
                            eax_12 = sub_50ed90(esi)
                        
                        esi[1] = eax_12
                        
                        if (sub_50ed90(esi) == 1)
                            *arg2 = sub_50ed90(esi)
                            
                            if (edi_3 == 0xc)
                                return 1
                            
                            uint32_t eax_21 = sub_50ed90(esi)
                            uint32_t eax_24 = (sub_50ed90(esi) << 0x10) + eax_21
                            
                            if (eax_24 != 1 && eax_24 != 2)
                                sub_50ee10(esi)
                                sub_50ee10(esi)
                                sub_50ee10(esi)
                                sub_50ee10(esi)
                                sub_50ee10(esi)
                                
                                if (eax_10 == 0x28)
                                    goto label_516bd9
                                
                                if (eax_10 == 0x38)
                                    sub_50ee10(esi)
                                    sub_50ee10(esi)
                                    sub_50ee10(esi)
                                    sub_50ee10(esi)
                                label_516bd9:
                                    uint32_t ecx_36 = *arg2
                                    
                                    if (ecx_36 != 0x10 && ecx_36 != 0x20)
                                        return 1
                                    
                                    if (eax_24 == 0)
                                        if (ecx_36 != 0x20)
                                            arg2[3] = 0x7c00
                                            arg2[4] = 0x3e0
                                            arg2[5] = 0x1f
                                            return 1
                                        
                                        arg2[7] = eax_24
                                        arg2[6] = 0xff000000
                                        arg2[3] = 0xff0000
                                        arg2[4] = 0xff00
                                        arg2[5] = 0xff
                                        return 1
                                    
                                    if (eax_24 == 3)
                                        arg2[3] = sub_50ee10(esi)
                                        arg2[4] = sub_50ee10(esi)
                                        uint32_t eax_35 = sub_50ee10(esi)
                                        int32_t ecx_40 = arg2[4]
                                        arg2[5] = eax_35
                                        
                                        if (arg2[3] != ecx_40 || ecx_40 != eax_35)
                                            return 1
                                else if (eax_10 == 0x6c || eax_10 == 0x7c)
                                    arg2[3] = sub_50ee10(esi)
                                    arg2[4] = sub_50ee10(esi)
                                    arg2[5] = sub_50ee10(esi)
                                    arg2[6] = sub_50ee10(esi)
                                    sub_50ee10(esi)
                                    int32_t i_1 = 0xc
                                    int32_t i
                                    
                                    do
                                        sub_50ee10(esi)
                                        i = i_1
                                        i_1 -= 1
                                    while (i != 1)
                                    
                                    if (eax_10 != 0x7c)
                                        return 1
                                    
                                    sub_50ee10(esi)
                                    sub_50ee10(esi)
                                    sub_50ee10(esi)
                                    sub_50ee10(esi)
                                    return i_1 + 1
    
    return 0
}
