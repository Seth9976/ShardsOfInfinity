// 函数名称: sub_5193f0
// 虚拟地址: 0x5193f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_5193f0(int32_t arg1, uint32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* esi = arg3
    void* esi = arg3
    char* eax = *(esi + 0xa8)
    
    if (eax u< *(esi + 0xac))
        goto label_51941c
    
    if (*(esi + 0x20) != 0)
        sub_50ebb0(arg3)
        eax = *(esi + 0xa8)
    label_51941c:
        arg3.b = *eax
        void* eax_1 = &eax[1]
        *(esi + 0xa8) = eax_1
        
        if (arg3.b == 0x47)
            if (eax_1 u< *(esi + 0xac))
                goto label_51944d
            
            if (*(esi + 0x20) != 0)
                sub_50ebb0(esi)
                eax_1 = *(esi + 0xa8)
            label_51944d:
                arg3.b = *eax_1
                void* eax_2 = eax_1 + 1
                *(esi + 0xa8) = eax_2
                
                if (arg3.b == 0x49)
                    if (eax_2 u< *(esi + 0xac))
                        goto label_51947e
                    
                    if (*(esi + 0x20) != 0)
                        sub_50ebb0(esi)
                        eax_2 = *(esi + 0xa8)
                    label_51947e:
                        arg3.b = *eax_2
                        void* eax_3 = eax_2 + 1
                        *(esi + 0xa8) = eax_3
                        
                        if (arg3.b == 0x46)
                            if (eax_3 u< *(esi + 0xac))
                                goto label_5194af
                            
                            if (*(esi + 0x20) != 0)
                                sub_50ebb0(esi)
                                eax_3 = *(esi + 0xa8)
                            label_5194af:
                                arg3.b = *eax_3
                                void* eax_4 = eax_3 + 1
                                *(esi + 0xa8) = eax_4
                                
                                if (arg3.b == 0x38)
                                    if (eax_4 u< *(esi + 0xac))
                                        goto label_5194e0
                                    
                                    if (*(esi + 0x20) != 0)
                                        sub_50ebb0(esi)
                                        eax_4 = *(esi + 0xa8)
                                    label_5194e0:
                                        arg3.b = *eax_4
                                        char* eax_5 = eax_4 + 1
                                        *(esi + 0xa8) = eax_5
                                        
                                        if (arg3.b == 0x37 || arg3.b == 0x39)
                                            if (eax_5 u< *(esi + 0xac))
                                                goto label_519516
                                            
                                            if (*(esi + 0x20) != 0)
                                                sub_50ebb0(esi)
                                                eax_5 = *(esi + 0xa8)
                                            label_519516:
                                                arg3.b = *eax_5
                                                *(esi + 0xa8) = &eax_5[1]
                                                
                                                if (arg3.b == 0x61)
                                                    *arg2 = sub_50ed90(esi)
                                                    arg2[1] = sub_50ed90(esi)
                                                    char* eax_9 = *(esi + 0xa8)
                                                    char ecx_7
                                                    
                                                    if (eax_9 u< *(esi + 0xac))
                                                        ecx_7 = *eax_9
                                                        *(esi + 0xa8) = &eax_9[1]
                                                    else if (*(esi + 0x20) == 0)
                                                        ecx_7 = 0
                                                    else
                                                        sub_50ebb0(esi)
                                                        char* eax_11 = *(esi + 0xa8)
                                                        ecx_7 = *eax_11
                                                        *(esi + 0xa8) = &eax_11[1]
                                                    
                                                    arg2[5] = zx.d(ecx_7)
                                                    char* eax_14 = *(esi + 0xa8)
                                                    
                                                    if (eax_14 u< *(esi + 0xac))
                                                        ecx_7 = *eax_14
                                                        *(esi + 0xa8) = &eax_14[1]
                                                    else if (*(esi + 0x20) == 0)
                                                        ecx_7 = 0
                                                    else
                                                        sub_50ebb0(esi)
                                                        char* eax_16 = *(esi + 0xa8)
                                                        ecx_7 = *eax_16
                                                        *(esi + 0xa8) = &eax_16[1]
                                                    
                                                    arg2[6] = zx.d(ecx_7)
                                                    char* eax_19 = *(esi + 0xa8)
                                                    
                                                    if (eax_19 u< *(esi + 0xac))
                                                        ecx_7 = *eax_19
                                                        *(esi + 0xa8) = &eax_19[1]
                                                    else if (*(esi + 0x20) == 0)
                                                        ecx_7 = 0
                                                    else
                                                        sub_50ebb0(esi)
                                                        char* eax_21 = *(esi + 0xa8)
                                                        ecx_7 = *eax_21
                                                        *(esi + 0xa8) = &eax_21[1]
                                                    
                                                    arg2[7] = zx.d(ecx_7)
                                                    arg2[8] = 0xffffffff
                                                    
                                                    if (arg4 != 0)
                                                        *arg4 = 4
                                                    
                                                    char ecx_11 = (arg2[5]).b
                                                    
                                                    if (ecx_11 s< 0)
                                                        char* eax_25 = 2 << (ecx_11 & 7)
                                                        sub_519300(eax_25, &arg2[0xa], esi, eax_25, 
                                                            0xffffffff)
                                                    
                                                    return 1
    
    return 0
}
