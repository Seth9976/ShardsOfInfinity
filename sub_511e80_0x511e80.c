// 函数名称: sub_511e80
// 虚拟地址: 0x511e80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_511e80(int32_t* arg1)
{
    // 第一条实际指令: uint32_t eax = sub_50ecf0(*arg1)
    uint32_t eax = sub_50ecf0(*arg1)
    void* esi = *arg1
    char* ecx_1 = *(esi + 0xa8)
    char edx
    
    if (ecx_1 u< *(esi + 0xac))
        edx = *ecx_1
        *(esi + 0xa8) = &ecx_1[1]
    else if (*(esi + 0x20) == 0)
        edx = 0
    else
        sub_50ebb0(esi)
        char* eax_1 = *(esi + 0xa8)
        edx = *eax_1
        *(esi + 0xa8) = &eax_1[1]
    
    uint32_t ecx_4 = zx.d(edx)
    arg1[0x11fc] = ecx_4
    
    if (ecx_4 u>= 1 && ecx_4 u<= 4)
        void* esi_1 = *arg1
        
        if (ecx_4 s<= *(esi_1 + 8) && eax == (ecx_4 << 1) + 6)
            int32_t i_1 = 0
            
            if (edx != 0)
                uint32_t var_c_1 = &arg1[0x11fd]
                int32_t i
                
                do
                    void* esi_2 = *arg1
                    char* eax_5 = *(esi_2 + 0xa8)
                    
                    if (eax_5 u< *(esi_2 + 0xac))
                        ecx_4.b = *eax_5
                        *(esi_2 + 0xa8) = &eax_5[1]
                    else if (*(esi_2 + 0x20) == 0)
                        ecx_4.b = 0
                    else
                        sub_50ebb0(esi_2)
                        char* eax_7 = *(esi_2 + 0xa8)
                        ecx_4.b = *eax_7
                        *(esi_2 + 0xa8) = &eax_7[1]
                    
                    void* esi_3 = *arg1
                    uint32_t j = zx.d(ecx_4.b)
                    char* eax_9 = *(esi_3 + 0xa8)
                    
                    if (eax_9 u< *(esi_3 + 0xac))
                        ecx_4.b = *eax_9
                        *(esi_3 + 0xa8) = &eax_9[1]
                    else if (*(esi_3 + 0x20) == 0)
                        ecx_4.b = 0
                    else
                        sub_50ebb0(esi_3)
                        char* eax_11 = *(esi_3 + 0xa8)
                        ecx_4.b = *eax_11
                        *(esi_3 + 0xa8) = &eax_11[1]
                    
                    int32_t edx_1 = 0
                    uint32_t esi_4 = zx.d(ecx_4.b)
                    int32_t ecx_7 = *(*arg1 + 8)
                    
                    if (ecx_7 s> 0)
                        int32_t* eax_14 = &arg1[0x11a7]
                        
                        while (*eax_14 != j)
                            edx_1 += 1
                            eax_14 = &eax_14[0x12]
                            
                            if (edx_1 s>= ecx_7)
                                break
                    
                    if (edx_1 == ecx_7)
                        return 0
                    
                    int32_t eax_15 = edx_1 * 9
                    uint32_t ecx_9 = esi_4 u>> 4
                    arg1[eax_15 * 2 + 0x11ab] = ecx_9
                    
                    if (ecx_9 u> 3)
                        return 0
                    
                    int32_t esi_5 = esi_4 & 0xf
                    arg1[eax_15 * 2 + 0x11ac] = esi_5
                    
                    if (esi_5 u> 3)
                        return 0
                    
                    *var_c_1 = edx_1
                    i = i_1 + 1
                    var_c_1 += 4
                    i_1 = i
                while (i s< arg1[0x11fc])
                esi_1 = *arg1
            
            char* eax_16 = *(esi_1 + 0xa8)
            
            if (eax_16 u< *(esi_1 + 0xac))
                ecx_4.b = *eax_16
                *(esi_1 + 0xa8) = &eax_16[1]
            else if (*(esi_1 + 0x20) == 0)
                ecx_4.b = 0
            else
                sub_50ebb0(esi_1)
                char* eax_18 = *(esi_1 + 0xa8)
                ecx_4.b = *eax_18
                *(esi_1 + 0xa8) = &eax_18[1]
            
            void* esi_6 = *arg1
            arg1[0x11f4] = zx.d(ecx_4.b)
            char* eax_21 = *(esi_6 + 0xa8)
            
            if (eax_21 u< *(esi_6 + 0xac))
                ecx_4.b = *eax_21
                *(esi_6 + 0xa8) = &eax_21[1]
            else if (*(esi_6 + 0x20) == 0)
                ecx_4.b = 0
            else
                sub_50ebb0(esi_6)
                char* eax_23 = *(esi_6 + 0xa8)
                ecx_4.b = *eax_23
                *(esi_6 + 0xa8) = &eax_23[1]
            
            void* esi_7 = *arg1
            arg1[0x11f5] = zx.d(ecx_4.b)
            char* eax_26 = *(esi_7 + 0xa8)
            
            if (eax_26 u< *(esi_7 + 0xac))
                ecx_4.b = *eax_26
                *(esi_7 + 0xa8) = &eax_26[1]
            else if (*(esi_7 + 0x20) == 0)
                ecx_4.b = 0
            else
                sub_50ebb0(esi_7)
                char* eax_28 = *(esi_7 + 0xa8)
                ecx_4.b = *eax_28
                *(esi_7 + 0xa8) = &eax_28[1]
            
            int32_t edx_3 = arg1[0x11f4]
            uint32_t eax_30 = zx.d(ecx_4.b)
            int32_t eax_31 = eax_30 & 0xf
            uint32_t ecx_15 = eax_30 u>> 4
            bool cond:0_1 = arg1[0x11f3] == 0
            arg1[0x11f6] = ecx_15
            arg1[0x11f7] = eax_31
            
            if (cond:0_1)
                if (edx_3 == 0 && ecx_15 == 0 && eax_31 == 0)
                    arg1[0x11f5] = 0x3f
                    return 1
            else if (edx_3 s<= 0x3f)
                int32_t esi_8 = arg1[0x11f5]
                
                if (esi_8 s<= 0x3f && edx_3 s<= esi_8 && ecx_15 u<= 0xd && eax_31 u<= 0xd)
                    return 1
    
    return 0
}
