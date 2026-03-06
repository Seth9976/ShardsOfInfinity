// 函数名称: sub_510ec0
// 虚拟地址: 0x510ec0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_510ec0(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = 0x7fffffff
    arg1[0x11f0] = 0
    arg1[0x11ef] = 0
    arg1[0x11f2] = 0
    arg1[0x11e3] = 0
    arg1[0x11d1] = 0
    arg1[0x11bf] = 0
    arg1[0x11ad] = 0
    int32_t eax_2 = arg1[0x1201]
    arg1[0x11f1].b = 0xff
    
    if (eax_2 != 0)
        ecx = eax_2
    
    arg1[0x11f8] = 0
    bool cond:1 = arg1[0x11f3] != 0
    int32_t eax_3 = arg1[0x11fc]
    arg1[0x1202] = ecx
    
    if (cond:1)
        if (eax_3 != 1)
            uint32_t i = 0
            uint32_t i_4 = 0
            
            if (arg1[0x11a4] s> 0)
                do
                    int32_t j = 0
                    int32_t j_3 = 0
                    
                    if (arg1[0x11a3] s> 0)
                        do
                            int32_t k = 0
                            int32_t k_3 = 0
                            
                            if (arg1[0x11fc] s> 0)
                                i = &arg1[0x11fd]
                                uint32_t i_2 = i
                                
                                do
                                    int32_t eax_70 = *i
                                    int32_t ecx_30 = 0
                                    int32_t var_b4_1 = 0
                                    int32_t eax_71 = eax_70 * 9
                                    void* edi_7 = &arg1[eax_71 * 2]
                                    
                                    if (arg1[eax_71 * 2 + 0x11a9] s> 0)
                                        do
                                            int32_t eax_72 = *(edi_7 + 0x46a0)
                                            int32_t edx_15 = 0
                                            int32_t var_a8_3 = 0
                                            
                                            if (eax_72 s> 0)
                                                do
                                                    int32_t eax_73 = eax_72 * j_3
                                                    int32_t eax_74 = sub_50f860(eax_73, 
                                                        ((edx_15 + (*(edi_7 + 0x46a4) * i_4 + var_b4_1)
                                                            * *(edi_7 + 0x46dc) + eax_73) << 7)
                                                            + *(edi_7 + 0x46d8), 
                                                        arg1, *(edi_7 + 0x46ac) * 0x690 + 4 + arg1, 
                                                        eax_70)
                                                    
                                                    if (eax_74 == 0)
                                                        goto label_5117b0
                                                    
                                                    eax_72 = *(edi_7 + 0x46a0)
                                                    edx_15 = var_a8_3 + 1
                                                    var_a8_3 = edx_15
                                                while (edx_15 s< eax_72)
                                                
                                                ecx_30 = var_b4_1
                                            
                                            ecx_30 += 1
                                            var_b4_1 = ecx_30
                                        while (ecx_30 s< *(edi_7 + 0x46a4))
                                        
                                        k = k_3
                                    
                                    k += 1
                                    i = i_2 + 4
                                    k_3 = k
                                    i_2 = i
                                while (k s< arg1[0x11fc])
                                
                                j = j_3
                            
                            arg1[0x1202] -= 1
                            
                            if (arg1[0x1202] s<= 0)
                                if (arg1[0x11f0] s< 0x18)
                                    sub_50f380(arg1)
                                
                                i.b = arg1[0x11f1].b
                                i.b += 0x30
                                
                                if (i.b u> 7)
                                    goto label_51113c
                                
                                arg1[0x11f0] = 0
                                uint32_t i_7 = 0x7fffffff
                                arg1[0x11ef] = 0
                                arg1[0x11f2] = 0
                                arg1[0x11e3] = 0
                                arg1[0x11d1] = 0
                                arg1[0x11bf] = 0
                                arg1[0x11ad] = 0
                                i = arg1[0x1201]
                                arg1[0x11f1].b = 0xff
                                
                                if (i != 0)
                                    i_7 = i
                                
                                arg1[0x11f8] = 0
                                arg1[0x1202] = i_7
                            
                            j += 1
                            j_3 = j
                        while (j s< arg1[0x11a3])
                        
                        i = i_4
                    
                    i += 1
                    i_4 = i
                while (i s< arg1[0x11a4])
        else
            int32_t eax_56 = arg1[0x11fd]
            int32_t eax_57 = 0
            int32_t var_a8_2 = 0
            int32_t ecx_23 = (arg1[eax_56 * 0x12 + 0x11ae] + 7) s>> 3
            int32_t edx_9 = (arg1[eax_56 * 0x12 + 0x11af] + 7) s>> 3
            int32_t var_c0_2 = ecx_23
            int32_t var_b0_2 = edx_9
            
            if (edx_9 s> 0)
                do
                    int32_t edi_6 = 0
                    
                    if (ecx_23 s> 0)
                        do
                            uint32_t (* edx_14)[0x4] = ((arg1[eax_56 * 0x12 + 0x11b7] * eax_57 + edi_6)
                                << 7) + arg1[eax_56 * 0x12 + 0x11b6]
                            uint32_t eax_61
                            
                            if (arg1[0x11f4] != 0)
                                int32_t ecx_26 = arg1[eax_56 * 0x12 + 0x11ac]
                                void* eax_68 = ecx_26 * 0x690 + 0x1a44 + arg1
                                eax_61 = sub_50fa70(eax_68, edx_14, arg1, eax_68, 
                                    (ecx_26 << 0xa) + 0x3684 + arg1)
                            else
                                void* eax_60 = arg1[eax_56 * 0x12 + 0x11ab] * 0x690 + 4 + arg1
                                eax_61 = sub_50f860(eax_60, edx_14, arg1, eax_60, eax_56)
                            
                            if (eax_61 == 0)
                                goto label_5117b0
                            
                            arg1[0x1202] -= 1
                            
                            if (arg1[0x1202] s<= 0)
                                if (arg1[0x11f0] s< 0x18)
                                    sub_50f380(arg1)
                                
                                eax_61.b = arg1[0x11f1].b
                                eax_61.b += 0x30
                                
                                if (eax_61.b u> 7)
                                    goto label_51113c
                                
                                arg1[0x11f0] = 0
                                int32_t ecx_29 = 0x7fffffff
                                arg1[0x11ef] = 0
                                arg1[0x11f2] = 0
                                arg1[0x11e3] = 0
                                arg1[0x11d1] = 0
                                arg1[0x11bf] = 0
                                arg1[0x11ad] = 0
                                int32_t eax_69 = arg1[0x1201]
                                arg1[0x11f1].b = 0xff
                                
                                if (eax_69 != 0)
                                    ecx_29 = eax_69
                                
                                arg1[0x11f8] = 0
                                arg1[0x1202] = ecx_29
                            
                            ecx_23 = var_c0_2
                            edi_6 += 1
                            eax_57 = var_a8_2
                        while (edi_6 s< ecx_23)
                        
                        edx_9 = var_b0_2
                    
                    eax_57 += 1
                    var_a8_2 = eax_57
                while (eax_57 s< edx_9)
    else
        uint32_t var_a0[0x8][0x4]
        
        if (eax_3 != 1)
            void* i_1 = nullptr
            void* i_3 = nullptr
            
            if (arg1[0x11a4] s> 0)
                do
                    int32_t j_1 = 0
                    int32_t j_2 = 0
                    
                    if (arg1[0x11a3] s> 0)
                        do
                            int32_t k_1 = 0
                            int32_t k_2 = 0
                            
                            if (arg1[0x11fc] s> 0)
                                i_1 = &arg1[0x11fd]
                                void* i_5 = i_1
                                
                                do
                                    int32_t eax_29 = *i_1
                                    int32_t edx_3 = 0
                                    int32_t var_b8_2 = 0
                                    int32_t eax_30 = eax_29 * 9
                                    void* edi_5 = &arg1[eax_30 * 2]
                                    
                                    if (arg1[eax_30 * 2 + 0x11a9] s> 0)
                                        do
                                            int32_t eax_54 = *(edi_5 + 0x46a0)
                                            int32_t ecx_13 = 0
                                            int32_t var_ac_2 = 0
                                            
                                            if (eax_54 s> 0)
                                                do
                                                    int32_t ecx_14 = *(edi_5 + 0x46b0)
                                                    int32_t eax_35 = *(edi_5 + 0x46a4) * i_3 + edx_3
                                                    void* eax_49 = *(edi_5 + 0x46ac) * 0x690 + 4 + arg1
                                                    
                                                    if (sub_50f4c0(eax_49, &var_a0, arg1, eax_49, 
                                                            ecx_14 * 0x690 + 0x1a44 + arg1, 
                                                            (ecx_14 << 0xa) + 0x3684 + arg1, eax_29, 
                                                            (*(edi_5 + 0x46a8) << 7) + 0x3484 + arg1) == 0)
                                                        goto label_5117b0
                                                    
                                                    int32_t ecx_16 = *(edi_5 + 0x46c0)
                                                    arg1[0x1203](
                                                        *(edi_5 + 0x46c8) + ((ecx_16 * eax_35
                                                            + eax_54 * j_2 + ecx_13) << 3), 
                                                        ecx_16, &var_a0)
                                                    eax_54 = *(edi_5 + 0x46a0)
                                                    ecx_13 = var_ac_2 + 1
                                                    edx_3 = var_b8_2
                                                    var_ac_2 = ecx_13
                                                while (ecx_13 s< eax_54)
                                            
                                            edx_3 += 1
                                            var_b8_2 = edx_3
                                        while (edx_3 s< *(edi_5 + 0x46a4))
                                        
                                        k_1 = k_2
                                    
                                    k_1 += 1
                                    i_1 = i_5 + 4
                                    k_2 = k_1
                                    i_5 = i_1
                                while (k_1 s< arg1[0x11fc])
                                
                                j_1 = j_2
                            
                            arg1[0x1202] -= 1
                            
                            if (arg1[0x1202] s<= 0)
                                if (arg1[0x11f0] s< 0x18)
                                    sub_50f380(arg1)
                                
                                i_1.b = arg1[0x11f1].b
                                i_1.b += 0x30
                                
                                if (i_1.b u> 7)
                                    goto label_51113c
                                
                                arg1[0x11f0] = 0
                                void* i_6 = 0x7fffffff
                                arg1[0x11ef] = 0
                                arg1[0x11f2] = 0
                                arg1[0x11e3] = 0
                                arg1[0x11d1] = 0
                                arg1[0x11bf] = 0
                                arg1[0x11ad] = 0
                                i_1 = arg1[0x1201]
                                arg1[0x11f1].b = 0xff
                                
                                if (i_1 != 0)
                                    i_6 = i_1
                                
                                arg1[0x11f8] = 0
                                arg1[0x1202] = i_6
                            
                            j_1 += 1
                            j_2 = j_1
                        while (j_1 s< arg1[0x11a3])
                        
                        i_1 = i_3
                    
                    i_1 += 1
                    i_3 = i_1
                while (i_1 s< arg1[0x11a4])
        else
            int32_t eax_4 = arg1[0x11fd]
            int32_t eax_5 = eax_4 * 9
            void* edx_1 = &arg1[eax_5 * 2]
            int32_t edi_3 = (arg1[eax_5 * 2 + 0x11af] + 7) s>> 3
            int32_t ecx_3 = (*(edx_1 + 0x46b8) + 7) s>> 3
            int32_t eax_6 = 0
            void* var_ac_1 = edx_1
            int32_t var_b0_1 = ecx_3
            int32_t var_a4_1 = 0
            
            if (edi_3 s> 0)
                do
                    int32_t edi_4 = 0
                    
                    if (ecx_3 s> 0)
                        do
                            int32_t ecx_4 = *(edx_1 + 0x46b0)
                            void* eax_20 = *(edx_1 + 0x46ac) * 0x690 + 4 + arg1
                            
                            if (sub_50f4c0(eax_20, &var_a0, arg1, eax_20, 
                                ecx_4 * 0x690 + 0x1a44 + arg1, (ecx_4 << 0xa) + 0x3684 + arg1, eax_4, 
                                (*(edx_1 + 0x46a8) << 7) + 0x3484 + arg1) == 0)
                            label_5117b0:
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 0
                            
                            int32_t ecx_6 = *(var_ac_1 + 0x46c0)
                            arg1[0x1203](*(var_ac_1 + 0x46c8) + ((ecx_6 * var_a4_1 + edi_4) << 3), 
                                ecx_6, &var_a0)
                            arg1[0x1202] -= 1
                            
                            if (arg1[0x1202] s<= 0)
                                if (arg1[0x11f0] s< 0x18)
                                    sub_50f380(arg1)
                                
                                if (arg1[0x11f1].b + 0x30 u> 7)
                                    goto label_51113c
                                
                                arg1[0x11f0] = 0
                                int32_t ecx_10 = 0x7fffffff
                                arg1[0x11ef] = 0
                                arg1[0x11f2] = 0
                                arg1[0x11e3] = 0
                                arg1[0x11d1] = 0
                                arg1[0x11bf] = 0
                                arg1[0x11ad] = 0
                                int32_t eax_27 = arg1[0x1201]
                                arg1[0x11f1].b = 0xff
                                
                                if (eax_27 != 0)
                                    ecx_10 = eax_27
                                
                                arg1[0x11f8] = 0
                                arg1[0x1202] = ecx_10
                            
                            ecx_3 = var_b0_1
                            edi_4 += 1
                            edx_1 = var_ac_1
                        while (edi_4 s< ecx_3)
                        
                        eax_6 = var_a4_1
                    
                    eax_6 += 1
                    var_a4_1 = eax_6
                while (eax_6 s< edi_3)
    
    label_51113c:
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
