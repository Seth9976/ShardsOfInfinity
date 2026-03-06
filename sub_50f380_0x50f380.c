// 函数名称: sub_50f380
// 虚拟地址: 0x50f380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_50f380(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t eax_13
    
    do
        uint32_t ebx_1
        
        if (edi[0x11f2] == 0)
            void* esi_1 = *edi
            char* eax_1 = *(esi_1 + 0xa8)
            
            if (eax_1 u< *(esi_1 + 0xac))
                arg1.b = *eax_1
                *(esi_1 + 0xa8) = &eax_1[1]
            else if (*(esi_1 + 0x20) == 0)
                arg1.b = 0
            else
                sub_50ebb0(esi_1)
                char* eax_3 = *(esi_1 + 0xa8)
                arg1.b = *eax_3
                *(esi_1 + 0xa8) = &eax_3[1]
            
            ebx_1 = zx.d(arg1.b)
            
            if (ebx_1 == 0xff)
                void* esi_2 = *edi
                char* eax_5 = *(esi_2 + 0xa8)
                
                if (eax_5 u< *(esi_2 + 0xac))
                    arg1.b = *eax_5
                    *(esi_2 + 0xa8) = &eax_5[1]
                else if (*(esi_2 + 0x20) == 0)
                    arg1.b = 0
                else
                    sub_50ebb0(esi_2)
                    char* eax_7 = *(esi_2 + 0xa8)
                    arg1.b = *eax_7
                    *(esi_2 + 0xa8) = &eax_7[1]
                
                uint32_t i
                
                for (i = zx.d(arg1.b); i == 0xff; i = zx.d(arg1.b))
                    void* esi_3 = *edi
                    char* eax_9 = *(esi_3 + 0xa8)
                    
                    if (eax_9 u< *(esi_3 + 0xac))
                        arg1.b = *eax_9
                        *(esi_3 + 0xa8) = &eax_9[1]
                    else if (*(esi_3 + 0x20) == 0)
                        arg1.b = 0
                    else
                        sub_50ebb0(esi_3)
                        char* eax_11 = *(esi_3 + 0xa8)
                        arg1.b = *eax_11
                        *(esi_3 + 0xa8) = &eax_11[1]
                
                if (i != 0)
                    edi[0x11f1].b = i.b
                    edi[0x11f2] = 1
                    return i
        else
            ebx_1 = 0
        
        eax_13 = edi[0x11f0]
        edi[0x11ef] |= ebx_1 << (0x18 - eax_13).b
        edi[0x11f0] = eax_13 + 8
    while (eax_13 + 8 s<= 0x18)
    
    return eax_13 + 8
}
