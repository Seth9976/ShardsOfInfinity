// 函数名称: sub_5143f0
// 虚拟地址: 0x5143f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5143f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i = arg1[2]
    int32_t edi = arg1[3]
    int32_t eax_6
    
    if (i s>= 5)
        eax_6 = edi
    else
        int32_t ebx_1 = arg1[1]
        
        do
            char* eax_2 = *arg1
            char edx
            
            if (eax_2 u< ebx_1)
                edx = *eax_2
                *arg1 = &eax_2[1]
            else
                edx = 0
            
            uint32_t eax_5 = zx.d(edx) << i.b
            i += 8
            eax_6 = eax_5 | edi
            arg1[2] = i
            edi = eax_6
            arg1[3] = edi
        while (i s<= 0x18)
    
    int32_t i_1 = i - 5
    uint32_t edx_2 = eax_6 u>> 5
    arg1[3] = edx_2
    arg1[2] = i_1
    
    if (i_1 s< 5)
        int32_t ebx_2 = arg1[1]
        uint32_t edi_1 = edx_2
        
        do
            char* eax_9 = *arg1
            
            if (eax_9 u< ebx_2)
                edx_2.b = *eax_9
                *arg1 = &eax_9[1]
            else
                edx_2.b = 0
            
            uint32_t edx_4 = zx.d(edx_2.b) << i_1.b
            i_1 += 8
            edx_2 = edx_4 | edi_1
            arg1[2] = i_1
            edi_1 = edx_2
            arg1[3] = edi_1
        while (i_1 s<= 0x18)
    
    int32_t i_2 = i_1 - 5
    uint32_t eax_12 = edx_2 u>> 5
    int32_t edx_6 = (edx_2 & 0x1f) + 1
    arg1[3] = eax_12
    arg1[2] = i_2
    int32_t var_9e0 = edx_6
    
    if (i_2 s< 4)
        int32_t ebx_3 = arg1[1]
        uint32_t edi_2 = eax_12
        
        do
            char* eax_13 = *arg1
            
            if (eax_13 u< ebx_3)
                edx_6.b = *eax_13
                *arg1 = &eax_13[1]
            else
                edx_6.b = 0
            
            uint32_t eax_16 = zx.d(edx_6.b) << i_2.b
            i_2 += 8
            eax_12 = eax_16 | edi_2
            arg1[2] = i_2
            edi_2 = eax_12
            arg1[3] = edi_2
        while (i_2 s<= 0x18)
        
        edx_6 = var_9e0
    
    int32_t edx_7 = edx_6 + (eax_6 & 0x1f) + 0x101
    uint32_t edi_4 = eax_12 u>> 4
    int32_t i_7 = (eax_12 & 0xf) + 4
    arg1[3] = edi_4
    int32_t i_3 = i_2 - 4
    int32_t i_8 = i_7
    arg1[2] = i_3
    void* var_9d0 = nullptr
    int128_t var_1c
    __builtin_memset(&var_1c, 0, 0x13)
    
    if (i_7 != 0)
        i_7 = i_3
        uint32_t ebx_4 = edi_4
        bool cond:0_1
        
        do
            uint32_t edx_8 = edi_4
            
            if (i_3 s< 3)
                int32_t edi_5 = arg1[1]
                i_3 = i_7
                
                do
                    char* eax_18 = *arg1
                    
                    if (eax_18 u< edi_5)
                        edx_8.b = *eax_18
                        *arg1 = &eax_18[1]
                    else
                        edx_8.b = 0
                    
                    uint32_t edx_10 = zx.d(edx_8.b) << i_3.b
                    i_3 += 8
                    edx_8 = edx_10 | ebx_4
                    arg1[2] = i_3
                    ebx_4 = edx_8
                    arg1[3] = ebx_4
                while (i_3 s<= 0x18)
            
            i_3 -= 3
            edi_4 = edx_8 u>> 3
            int32_t i_6 = i_3
            edx_8.b &= 7
            arg1[2] = i_3
            ebx_4 = edi_4
            arg1[3] = ebx_4
            *(&var_1c + zx.d(*(var_9d0 + 0x59d448))) = edx_8.b
            cond:0_1 = var_9d0 + 1 s< i_8
            var_9d0 += 1
            i_7 = i_3
        while (cond:0_1)
    
    uint32_t var_9c8[0x7e][0x4]
    int32_t eax_25
    uint32_t ecx_1
    eax_25, ecx_1 = sub_513d80(i_7, &var_1c, &var_9c8, 0x13)
    
    if (eax_25 != 0)
        void* ebx_5 = nullptr
        void* var_9d0_1 = nullptr
        
        while (true)
            uint32_t i_4 = arg1[2]
            int32_t edi_7 = arg1[3]
            
            if (i_4 s< 0x10)
                int32_t ebx_6 = arg1[1]
                
                do
                    char* eax_26 = *arg1
                    
                    if (eax_26 u< ebx_6)
                        ecx_1.b = *eax_26
                        *arg1 = &eax_26[1]
                    else
                        ecx_1.b = 0
                    
                    uint32_t eax_29 = zx.d(ecx_1.b) << i_4.b
                    i_4 += 8
                    edi_7 |= eax_29
                    arg1[2] = i_4
                    arg1[3] = edi_7
                while (i_4 s<= 0x18)
                
                ebx_5 = var_9d0_1
            
            uint32_t eax_32 = zx.d(*(&var_9c8 + ((edi_7 & 0x1ff) << 1)))
            uint32_t eax_33
            uint32_t edx_12
            
            if (eax_32 == 0)
                eax_33, ecx_1, edx_12 = sub_514000(arg1, &var_9c8)
            else
                ecx_1 = eax_32 u>> 9
                arg1[3] = edi_7 u>> ecx_1.b
                eax_33 = eax_32 & 0x1ff
                arg1[2] = i_4 - ecx_1
            
            if (eax_33 s< 0)
                break
            
            if (eax_33 s>= 0x13)
                break
            
            char var_1e4[0x1c8]
            void* edi_9
            
            if (eax_33 s>= 0x10)
                int32_t i_5 = arg1[2]
                edx_12.b = 0
                
                if (eax_33 != 0x10)
                    int32_t eax_44
                    
                    if (eax_33 != 0x11)
                        uint32_t edi_20
                        
                        if (i_5 s>= 7)
                            edi_20 = arg1[3]
                        else
                            int32_t ebx_9 = arg1[1]
                            uint32_t var_9d4_1 = arg1[3]
                            
                            do
                                char* eax_46 = *arg1
                                
                                if (eax_46 u< ebx_9)
                                    edx_12.b = *eax_46
                                    *arg1 = &eax_46[1]
                                else
                                    edx_12.b = 0
                                
                                uint32_t edi_19 = zx.d(edx_12.b) << i_5.b
                                i_5 += 8
                                edi_20 = edi_19 | var_9d4_1
                                arg1[2] = i_5
                                var_9d4_1 = edi_20
                                arg1[3] = edi_20
                            while (i_5 s<= 0x18)
                            
                            edx_12.b = 0
                        
                        edi_9 = (edi_20 & 0x7f) + 0xb
                        arg1[3] = edi_20 u>> 7
                        eax_44 = i_5 - 7
                    else
                        uint32_t edi_16
                        
                        if (i_5 s>= 3)
                            edi_16 = arg1[3]
                        else
                            int32_t ebx_8 = arg1[1]
                            uint32_t var_9d4 = arg1[3]
                            
                            do
                                char* eax_40 = *arg1
                                
                                if (eax_40 u< ebx_8)
                                    edx_12.b = *eax_40
                                    *arg1 = &eax_40[1]
                                else
                                    edx_12.b = 0
                                
                                uint32_t edi_15 = zx.d(edx_12.b) << i_5.b
                                i_5 += 8
                                edi_16 = edi_15 | var_9d4
                                arg1[2] = i_5
                                var_9d4 = edi_16
                                arg1[3] = edi_16
                            while (i_5 s<= 0x18)
                            
                            edx_12.b = 0
                        
                        edi_9 = (edi_16 & 7) + 3
                        arg1[3] = edi_16 u>> 3
                        eax_44 = i_5 - 3
                    
                    ebx_5 = var_9d0_1
                    arg1[2] = eax_44
                else
                    int32_t edi_12
                    
                    if (i_5 s>= 2)
                        edi_12 = arg1[3]
                    else
                        int32_t ebx_7 = arg1[3]
                        
                        do
                            char* eax_34 = *arg1
                            
                            if (eax_34 u< arg1[1])
                                edx_12.b = *eax_34
                                *arg1 = &eax_34[1]
                            else
                                edx_12.b = 0
                            
                            uint32_t edi_11 = zx.d(edx_12.b) << i_5.b
                            i_5 += 8
                            edi_12 = edi_11 | ebx_7
                            arg1[2] = i_5
                            ebx_7 = edi_12
                            arg1[3] = ebx_7
                        while (i_5 s<= 0x18)
                        
                        ebx_5 = var_9d0_1
                    
                    edi_9 = (edi_12 & 3) + 3
                    arg1[3] = edi_12 u>> 2
                    arg1[2] = i_5 - 2
                    
                    if (ebx_5 == 0)
                        break
                    
                    void var_1e5
                    edx_12.b = *(&var_1e5 + ebx_5)
                
                if (edx_7 - ebx_5 s< edi_9)
                    break
                
                eax_33, ecx_1 = _memset(&var_1e4 + ebx_5, edx_12.b, edi_9)
            else
                *(&var_1e4 + ebx_5) = eax_33.b
                edi_9 = 1
            
            ebx_5 += edi_9
            var_9d0_1 = ebx_5
            
            if (ebx_5 s>= edx_7)
                if (ebx_5 == edx_7)
                    int32_t eax_54 = sub_513d80(eax_33, &var_1e4, &arg1[8], (eax_6 & 0x1f) + 0x101)
                    
                    if (eax_54 != 0 &&
                            sub_513d80(eax_54, &var_1e4[(eax_6 & 0x1f) + 0x101], &arg1[0x201], var_9e0) != 0)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 1
                
                break
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
