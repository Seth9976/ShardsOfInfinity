// 函数名称: sub_519740
// 虚拟地址: 0x519740
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_519740(void* arg1, void* arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    void* var_c = arg2
    char* eax = *(esi + 0xa8)
    
    if (eax u< *(esi + 0xac))
        goto label_519770
    
    if (*(esi + 0x20) == 0)
        arg1.b = 0
    else
        sub_50ebb0(arg1)
        eax = *(esi + 0xa8)
        arg2 = var_c
    label_519770:
        arg1.b = *eax
        *(esi + 0xa8) = &eax[1]
        
        if (arg1.b u> 0xc)
            return 0
    
    uint32_t ecx = zx.d(arg1.b)
    int32_t ebx_1 = 1 << ecx.b
    int32_t var_24_1 = 1
    int32_t var_10_1 = 0
    uint32_t var_8_1 = ecx + 1
    int32_t ecx_2 = 0
    int32_t eax_5 = (1 << (ecx + 1).b) - 1
    int32_t var_1c_1 = 0
    int32_t var_30_1 = eax_5
    int32_t var_18_1 = eax_5
    
    if (ebx_1 s> 0)
        char* eax_6 = arg2 + 0x82a
        
        do
            *eax_6 = ecx_2.b
            eax_6 = &eax_6[4]
            eax_6[0xfffffffd] = ecx_2.b
            ecx_2 += 1
            *(eax_6 - 6) = 0xffff
        while (ecx_2 s< ebx_1)
        
        eax_5 = var_18_1
    
    int32_t edx = ebx_1 + 2
    void* const var_20_1 = 0xffffffff
    uint32_t ebx_2 = 0
    int32_t var_14_1 = edx
    int32_t edi_1 = 0
    
    while (true)
        uint32_t ecx_4 = var_8_1
        
        while (edi_1 s>= ecx_4)
            int32_t edi_2 = var_10_1
            var_10_1 s>>= ecx_4.b
            void* edi_3 = edi_2 & eax_5
            var_1c_1 -= ecx_4
            
            if (edi_3 == ebx_1)
                ecx_4 = ecx + 1
                eax_5 = var_30_1
                edx = ebx_1 + 2
                edi_1 = var_1c_1
                var_8_1 = ecx_4
                var_18_1 = eax_5
                var_14_1 = edx
                var_20_1 = 0xffffffff
                var_24_1 = 0
            else if (edi_3 == ebx_1 + 1)
                void* eax_21
                
                if (ebx_2 s>= 0)
                    ecx_4 = *(esi + 0xa8)
                    
                    if (*(esi + 0x10) != 0)
                        int32_t edx_4 = *(esi + 0xac)
                        int32_t eax_23 = edx_4 - ecx_4
                        
                        if (eax_23 s< ebx_2)
                            *(esi + 0xa8) = edx_4
                            (*(esi + 0x14))(*(esi + 0x1c), ebx_2 - eax_23)
                            goto label_5199d0
                    
                    eax_21 = ecx_4 + ebx_2
                else
                    eax_21 = *(esi + 0xac)
                
                while (true)
                    *(esi + 0xa8) = eax_21
                label_5199d0:
                    char* eax_25
                    
                    while (true)
                        eax_25 = *(esi + 0xa8)
                        
                        if (eax_25 u< *(esi + 0xac))
                            ecx_4.b = *eax_25
                            eax_25 = &eax_25[1]
                            *(esi + 0xa8) = eax_25
                        else if (*(esi + 0x20) == 0)
                            ecx_4.b = 0
                        else
                            sub_50ebb0(esi)
                            char* eax_26 = *(esi + 0xa8)
                            ecx_4.b = *eax_26
                            eax_25 = &eax_26[1]
                            *(esi + 0xa8) = eax_25
                        
                        ecx_4 = zx.d(ecx_4.b)
                        
                        if (ecx_4 == 0)
                            return *(var_c + 8)
                        
                        if (*(esi + 0x10) == 0)
                            break
                        
                        int32_t edi_4 = *(esi + 0xac)
                        void* edx_6 = edi_4 - eax_25
                        
                        if (edx_6 s>= ecx_4)
                            break
                        
                        int32_t eax_27 = *(esi + 0x14)
                        int32_t var_48_2 = *(esi + 0x1c)
                        *(esi + 0xa8) = edi_4
                        eax_27(var_48_2, ecx_4 - edx_6)
                    
                    eax_21 = &eax_25[ecx_4]
            else
                if (edi_3 s> edx)
                    return 0
                
                if (var_24_1 != 0)
                    return 0
                
                if (var_20_1 s>= 0)
                    void* ecx_9 = var_c + (edx << 2)
                    var_14_1 = edx + 1
                    
                    if (edx + 1 s> 0x2000)
                        return 0
                    
                    *(ecx_9 + 0x828) = var_20_1.w
                    void* const eax_19
                    eax_19.b = *(var_c + (var_20_1 << 2) + 0x82a)
                    *(ecx_9 + 0x82a) = eax_19.b
                    
                    if (edi_3 != var_14_1)
                        eax_19.b = *(var_c + (edi_3 << 2) + 0x82a)
                    
                    *(ecx_9 + 0x82b) = eax_19.b
                else if (edi_3 == edx)
                    return 0
                
                sub_519640(var_c, edi_3.w)
                edx = var_14_1
                eax_5 = var_18_1
                ecx_4 = var_8_1
                
                if ((eax_5 & edx) == 0 && edx s<= 0xfff)
                    ecx_4 += 1
                    eax_5 = (1 << ecx_4.b) - 1
                    var_8_1 = ecx_4
                    var_18_1 = eax_5
                
                var_20_1 = edi_3
                edi_1 = var_1c_1
        
        if (ebx_2 == 0)
            char* eax_7 = *(esi + 0xa8)
            
            if (eax_7 u< *(esi + 0xac))
                ecx_4.b = *eax_7
                *(esi + 0xa8) = &eax_7[1]
            else if (*(esi + 0x20) == 0)
                ecx_4.b = 0
            else
                sub_50ebb0(esi)
                char* eax_9 = *(esi + 0xa8)
                ecx_4.b = *eax_9
                *(esi + 0xa8) = &eax_9[1]
            
            ebx_2 = zx.d(ecx_4.b)
            
            if (ecx_4.b == 0)
                return *(var_c + 8)
        
        char* eax_11 = *(esi + 0xa8)
        ebx_2 -= 1
        
        if (eax_11 u< *(esi + 0xac))
            ecx_4.b = *eax_11
            *(esi + 0xa8) = &eax_11[1]
        else if (*(esi + 0x20) == 0)
            ecx_4.b = 0
        else
            sub_50ebb0(esi)
            char* eax_13 = *(esi + 0xa8)
            ecx_4.b = *eax_13
            *(esi + 0xa8) = &eax_13[1]
        
        edx = var_14_1
        var_10_1 |= zx.d(ecx_4.b) << edi_1.b
        edi_1 += 8
        eax_5 = var_18_1
        var_1c_1 = edi_1
}
