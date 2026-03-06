// 函数名称: sub_518b20
// 虚拟地址: 0x518b20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_518b20(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5, uint32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    int32_t var_64 = ebx
    void* edx = arg3
    int32_t eax_4 = 0
    void* var_2c = edx
    void var_28
    void* edi = &var_28
    int32_t var_38 = 0
    int32_t eax_5
    
    while (true)
        if (eax_4 != 0xa)
            int32_t ecx = *(edx + 0xac)
            eax_5 = eax_4 + 1
            void* esi_1 = edi
            char* eax_6 = *(edx + 0xa8)
            edi += 3
            
            if (eax_6 u< ecx)
                ebx:1.b = *eax_6
                eax_6 = &eax_6[1]
                *(edx + 0xa8) = eax_6
            else if (*(edx + 0x20) == 0)
                ebx:1.b = 0
            else
                sub_50ebb0(edx)
                edx = var_2c
                char* eax_7 = *(edx + 0xa8)
                ecx = *(edx + 0xac)
                ebx:1.b = *eax_7
                eax_6 = &eax_7[1]
                *(edx + 0xa8) = eax_6
            
            if (eax_6 u< ecx)
                ebx.b = *eax_6
                eax_6 = &eax_6[1]
                *(edx + 0xa8) = eax_6
            else if (*(edx + 0x20) == 0)
                ebx.b = 0
            else
                sub_50ebb0(edx)
                edx = var_2c
                char* eax_8 = *(edx + 0xa8)
                ecx = *(edx + 0xac)
                ebx.b = *eax_8
                eax_6 = &eax_8[1]
                *(edx + 0xa8) = eax_6
            
            *esi_1 = ebx.b
            
            if (eax_6 u< ecx)
                edx.b = *eax_6
                eax_6 = &eax_6[1]
                *(var_2c + 0xa8) = eax_6
            else if (*(edx + 0x20) == 0)
                edx.b = 0
            else
                sub_50ebb0(edx)
                char* eax_9 = *(var_2c + 0xa8)
                edx.b = *eax_9
                eax_6 = &eax_9[1]
                *(var_2c + 0xa8) = eax_6
                ecx = *(var_2c + 0xac)
            
            *(esi_1 + 1) = edx.b
            edx = var_2c
            
            if (eax_6 u< ecx)
                ecx.b = *eax_6
                *(edx + 0xa8) = &eax_6[1]
            else if (*(edx + 0x20) == 0)
                ecx.b = 0
            else
                sub_50ebb0(edx)
                edx = var_2c
                char* eax_11 = *(edx + 0xa8)
                ecx.b = *eax_11
                *(edx + 0xa8) = &eax_11[1]
            
            var_38 |= zx.d(ecx.b)
            bool cond:0_1 = *(edx + 0x10) == 0
            *(esi_1 + 2) = ecx.b
            
            if (cond:0_1)
            label_518c8a:
                
                if (*(edx + 0xa8) u< *(edx + 0xac))
                    goto label_518c96
            else
                int32_t eax_15 = (*(edx + 0x18))(*(edx + 0x1c))
                edx = var_2c
                
                if (eax_15 == 0)
                label_518c96:
                    
                    if (ebx.b == 8)
                        eax_4 = eax_5
                        
                        if (ebx:1.b == 0)
                            break
                        
                        continue
                else if (*(edx + 0x20) != 0)
                    goto label_518c8a
        
    label_51901d:
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t eax_18
    eax_18.b = (var_38.b & 0x10) != 0
    int32_t esi_3 = 0
    int32_t var_50_2 = 0
    *arg5 = eax_18 + 3
    
    if (arg4 s> 0)
        uint32_t ebx_1 = arg6
        int32_t i_4 = arg2
        int32_t eax_20 = eax_5
        uint32_t var_38_1 = ebx_1
        
        while (true)
            int32_t var_4c_1 = 0
            
            if (eax_20 s> 0)
                void var_26
                void* eax_21 = &var_26
                void* var_3c_1 = &var_26
                int32_t edx_6
                
                do
                    uint32_t eax_22 = zx.d(*(eax_21 - 1))
                    uint32_t esi_4 = ebx_1
                    
                    if (eax_22 == 0)
                        int32_t edi_5 = 0
                        
                        if (i_4 s> 0)
                            void* eax_49 = var_3c_1
                            uint32_t ebx_5 = zx.d(*eax_49)
                            
                            do
                                eax_49 = sub_518a60(eax_49, ebx_5, var_2c, esi_4)
                                
                                if (eax_49 == 0)
                                    goto label_51901d
                                
                                i_4 = arg2
                                edi_5 += 1
                                esi_4 += 4
                            while (edi_5 s< i_4)
                            
                            ebx_1 = var_38_1
                    else if (eax_22 == 1)
                        int32_t i_3 = i_4
                        
                        if (i_4 s> 0)
                            int32_t i
                            
                            do
                                char* eax_38 = *(edx + 0xa8)
                                
                                if (eax_38 u< *(edx + 0xac))
                                    ebx_1.b = *eax_38
                                    *(edx + 0xa8) = &eax_38[1]
                                else if (*(edx + 0x20) == 0)
                                    ebx_1.b = 0
                                else
                                    sub_50ebb0(edx)
                                    edx = var_2c
                                    char* eax_40 = *(edx + 0xa8)
                                    ebx_1.b = *eax_40
                                    *(edx + 0xa8) = &eax_40[1]
                                
                                if (*(edx + 0x10) == 0)
                                label_518ef4:
                                    
                                    if (*(edx + 0xa8) u>= *(edx + 0xac))
                                        goto label_51901d
                                else if ((*(edx + 0x18))(*(edx + 0x1c)) != 0)
                                    edx = var_2c
                                    
                                    if (*(edx + 0x20) == 0)
                                        goto label_51901d
                                    
                                    goto label_518ef4
                                
                                uint32_t eax_46 = zx.d(*var_3c_1)
                                void var_5c
                                
                                if (sub_518a60(eax_46, eax_46, var_2c, &var_5c) == 0)
                                    goto label_51901d
                                
                                int32_t i_5 = i_3
                                char j_8 = i_5.b
                                
                                if (zx.d(ebx_1.b) s<= i_5)
                                    j_8 = ebx_1.b
                                
                                uint32_t j_5 = zx.d(j_8)
                                uint32_t j_6 = j_5
                                
                                if (j_8 != 0)
                                    void* edi_4 = &var_5c - esi_4
                                    uint32_t j_3 = j_5
                                    uint32_t j
                                    
                                    do
                                        int32_t ecx_13 = 0x80
                                        int32_t k_3 = 4
                                        int32_t k
                                        
                                        do
                                            if ((eax_46 & ecx_13) != 0)
                                                j_5.b = *(edi_4 + esi_4)
                                                *esi_4 = j_5.b
                                            
                                            esi_4 += 1
                                            ecx_13 s>>= 1
                                            k = k_3
                                            k_3 -= 1
                                        while (k != 1)
                                        edi_4 -= 4
                                        j = j_3
                                        j_3 -= 1
                                    while (j != 1)
                                    j_5 = j_6
                                    i_5 = i_3
                                
                                i = i_5 - j_5
                                i_3 = i
                                edx = var_2c
                            while (i s> 0)
                            i_4 = arg2
                            ebx_1 = var_38_1
                    else
                        if (eax_22 != 2)
                            goto label_51901d
                        
                        int32_t i_2 = i_4
                        int32_t i_1 = i_4
                        
                        if (i_4 s> 0)
                            do
                                char* eax_26 = *(edx + 0xa8)
                                
                                if (eax_26 u< *(edx + 0xac))
                                    i_4.b = *eax_26
                                    *(edx + 0xa8) = &eax_26[1]
                                else if (*(edx + 0x20) == 0)
                                    i_4.b = 0
                                else
                                    sub_50ebb0(edx)
                                    edx = var_2c
                                    char* eax_28 = *(edx + 0xa8)
                                    i_4.b = *eax_28
                                    *(edx + 0xa8) = &eax_28[1]
                                
                                uint32_t ebx_2 = zx.d(i_4.b)
                                
                                if (*(edx + 0x10) == 0)
                                label_518d97:
                                    
                                    if (*(edx + 0xa8) u>= *(edx + 0xac))
                                        goto label_51901d
                                else
                                    int32_t eax_31
                                    eax_31, i_4 = (*(edx + 0x18))(*(edx + 0x1c))
                                    edx = var_2c
                                    
                                    if (eax_31 != 0)
                                        if (*(edx + 0x20) == 0)
                                            goto label_51901d
                                        
                                        goto label_518d97
                                
                                uint32_t j_10
                                
                                if (ebx_2 u< 0x80)
                                    j_10 = ebx_2 + 1
                                    
                                    if (j_10 s> i_1)
                                        goto label_51901d
                                    
                                    int32_t edi_2 = 0
                                    
                                    if (j_10 == 0)
                                        i_1 = i_2
                                    else
                                        void* eax_37 = var_3c_1
                                        uint32_t ebx_4 = zx.d(*eax_37)
                                        
                                        do
                                            eax_37, i_4 = sub_518a60(eax_37, ebx_4, var_2c, esi_4)
                                            
                                            if (eax_37 == 0)
                                                goto label_51901d
                                            
                                            edi_2 += 1
                                            esi_4 += 4
                                        while (edi_2 s< j_10)
                                        
                                        j_10 = j_10
                                        i_1 = i_2
                                else
                                    uint32_t j_4
                                    uint32_t j_9
                                    
                                    if (ebx_2 != 0x80)
                                        j_9 = ebx_2 - 0x7f
                                        j_4 = j_9
                                    else
                                        uint32_t j_7 = sub_50ecf0(edx)
                                        j_9 = j_7
                                        j_4 = j_7
                                    
                                    if (j_9 s> i_1)
                                        goto label_51901d
                                    
                                    uint32_t ebx_3 = zx.d(*var_3c_1)
                                    void var_58
                                    int32_t eax_35
                                    eax_35, i_4 = sub_518a60(&var_58, ebx_3, var_2c, &var_58)
                                    
                                    if (eax_35 == 0)
                                        goto label_51901d
                                    
                                    if (j_4 s<= 0)
                                        j_10 = j_4
                                    else
                                        uint32_t j_2 = j_4
                                        void* edi_1 = &var_58 - esi_4
                                        uint32_t j_1
                                        
                                        do
                                            i_4 = 0x80
                                            int32_t k_2 = 4
                                            int32_t k_1
                                            
                                            do
                                                if ((ebx_3 & i_4) != 0)
                                                    uint32_t eax_36
                                                    eax_36.b = *(edi_1 + esi_4)
                                                    *esi_4 = eax_36.b
                                                
                                                esi_4 += 1
                                                i_4 s>>= 1
                                                k_1 = k_2
                                                k_2 -= 1
                                            while (k_1 != 1)
                                            edi_1 -= 4
                                            j_1 = j_2
                                            j_2 -= 1
                                        while (j_1 != 1)
                                        j_10 = j_4
                                        i_1 = i_2
                                
                                edx = var_2c
                                i_1 -= j_10
                                i_2 = i_1
                            while (i_1 s> 0)
                            
                            i_4 = arg2
                            ebx_1 = var_38_1
                    
                    edx_6 = var_4c_1 + 1
                    eax_21 = var_3c_1 + 3
                    var_4c_1 = edx_6
                    edx = var_2c
                    var_3c_1 = eax_21
                while (edx_6 s< eax_5)
                eax_20 = eax_5
                esi_3 = var_50_2
            
            esi_3 += 1
            ebx_1 += i_4 << 2
            var_50_2 = esi_3
            var_38_1 = ebx_1
            
            if (esi_3 s>= arg4)
                break
            
            edx = var_2c
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg6
}
