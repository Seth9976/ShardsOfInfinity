// 函数名称: sub_5191c0
// 虚拟地址: 0x5191c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5191c0(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    char* eax = *(esi + 0xa8)
    
    if (eax u< *(esi + 0xac))
        goto label_5191e6
    
    if (*(esi + 0x20) != 0)
        sub_50ebb0(arg1)
        eax = *(esi + 0xa8)
    label_5191e6:
        arg1.b = *eax
        void* eax_1 = &eax[1]
        *(esi + 0xa8) = eax_1
        
        if (arg1.b == 0x47)
            if (eax_1 u< *(esi + 0xac))
                goto label_519217
            
            if (*(esi + 0x20) != 0)
                sub_50ebb0(esi)
                eax_1 = *(esi + 0xa8)
            label_519217:
                arg1.b = *eax_1
                void* eax_2 = eax_1 + 1
                *(esi + 0xa8) = eax_2
                
                if (arg1.b == 0x49)
                    if (eax_2 u< *(esi + 0xac))
                        goto label_519248
                    
                    if (*(esi + 0x20) != 0)
                        sub_50ebb0(esi)
                        eax_2 = *(esi + 0xa8)
                    label_519248:
                        arg1.b = *eax_2
                        void* eax_3 = eax_2 + 1
                        *(esi + 0xa8) = eax_3
                        
                        if (arg1.b == 0x46)
                            if (eax_3 u< *(esi + 0xac))
                                goto label_519279
                            
                            if (*(esi + 0x20) != 0)
                                sub_50ebb0(esi)
                                eax_3 = *(esi + 0xa8)
                            label_519279:
                                arg1.b = *eax_3
                                char* eax_4 = eax_3 + 1
                                *(esi + 0xa8) = eax_4
                                
                                if (arg1.b == 0x38)
                                    if (eax_4 u< *(esi + 0xac))
                                        arg1.b = *eax_4
                                        eax_4 = &eax_4[1]
                                        *(esi + 0xa8) = eax_4
                                    else if (*(esi + 0x20) == 0)
                                        arg1.b = 0
                                    else
                                        sub_50ebb0(esi)
                                        char* eax_5 = *(esi + 0xa8)
                                        arg1.b = *eax_5
                                        eax_4 = &eax_5[1]
                                        *(esi + 0xa8) = eax_4
                                    
                                    if (arg1.b == 0x39 || arg1.b == 0x37)
                                        if (eax_4 u< *(esi + 0xac))
                                            goto label_5192df
                                        
                                        if (*(esi + 0x20) != 0)
                                            sub_50ebb0(esi)
                                            eax_4 = *(esi + 0xa8)
                                        label_5192df:
                                            arg1.b = *eax_4
                                            *(esi + 0xa8) = &eax_4[1]
                                            
                                            if (arg1.b == 0x61)
                                                return 1
    
    return 0
}
