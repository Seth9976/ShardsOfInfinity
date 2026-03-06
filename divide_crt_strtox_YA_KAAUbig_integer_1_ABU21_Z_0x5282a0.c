// 函数名称: ?divide@__crt_strtox@@YA_KAAUbig_integer@1@ABU21@@Z
// 虚拟地址: 0x5282a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t?divide@__crt_strtox@@YA_KAAUbig_integer@1@ABU21@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    void* i_6 = *ebx
    
    if (i_6 != 0)
        void* i_10 = *arg2
        
        if (i_10 != 0)
            int32_t edi
            int32_t var_22c = edi
            void* var_c = i_6 - 1
            
            if (i_10 == 1)
                int32_t edx_3 = arg2[1]
                int32_t var_c_1 = edx_3
                char var_21c[0x1cc]
                
                if (edx_3 != 1)
                    if (i_6 == 1)
                        int32_t esi_1 = ebx[1]
                        void* var_220_1 = i_6 - 1
                        *ebx = i_6 - 1
                        _memcpy_s(&ebx[1], 0x1cc, &var_21c, i_6 - 1)
                        int32_t edx_5 = 0
                        uint32_t temp1 = modu.dp.d(edx_5:esi_1, var_c_1)
                        ebx[1] = temp1
                        *ebx = neg.d(sbb.d(0, 0, 0 u< temp1))
                        return divu.dp.d(edx_5:esi_1, var_c_1)
                    
                    uint32_t edi_5 = 0
                    int32_t var_10 = 0
                    int32_t var_28_1 = 0
                    int32_t* var_1c = nullptr
                    
                    if (i_6 != 0)
                        void* ecx_5 = &ebx[i_6]
                        void* var_20_1 = ecx_5
                        void* i
                        
                        do
                            uint32_t eax_6
                            uint32_t ecx_6
                            int32_t edx_8
                            eax_6, ecx_6, edx_8 = __aulldvrm(*ecx_5, edi_5, edx_3, 0)
                            var_1c = ebx
                            int32_t var_48_1 = edx_8
                            edi_5 = ecx_6
                            int32_t ecx_7 = var_10
                            var_10 = eax_6
                            edx_3 = var_c_1
                            var_28_1 = adc.d(ecx_7, 0, eax_6 u< 0)
                            ecx_5 = var_20_1 - 4
                            var_20_1 = ecx_5
                            i = i_6
                            i_6 -= 1
                        while (i != 1)
                        ebx = arg1
                    
                    int32_t var_220_2 = 0
                    *ebx = 0
                    _memcpy_s(&ebx[1], 0x1cc, &var_21c, nullptr)
                    ebx[1] = edi_5
                    ebx[2] = var_1c
                    *ebx = neg.d(sbb.d(0, 0, 0 u< var_1c)) + 1
                    return var_10
                
                int32_t esi = ebx[1]
                void* var_220 = i_10 - 1
                *ebx = i_10 - 1
                _memcpy_s(&ebx[1], 0x1cc, &var_21c, i_10 - 1)
                return esi
            
            if (i_10 - 1 u<= i_6 - 1)
                void* eax_9 = i_6 - 1
                void* edx_12 = i_6 - 1 - (i_10 - 1)
                int32_t ebx_1
                int32_t edi_7
                
                if (i_6 - 1 s>= edx_12)
                    void* ecx_14 = &ebx[i_6]
                    void* esi_5 = &arg2[i_10]
                    
                    while (true)
                        edi_7 = *esi_5
                        ebx_1 = *ecx_14
                        
                        if (edi_7 != ebx_1)
                            break
                        
                        eax_9 -= 1
                        esi_5 -= 4
                        ecx_14 -= 4
                        
                        if (eax_9 s< edx_12)
                            goto label_528438
                
                if (i_6 - 1 s< edx_12 || edi_7 u< ebx_1)
                label_528438:
                    edx_12 += 1
                
                if (edx_12 != 0)
                    int32_t esi_6 = arg2[i_10]
                    int32_t ecx_15 = arg2[i_10 - 1]
                    int32_t eflags
                    int32_t eax_12
                    eax_12, eflags = _bit_scan_reverse(esi_6)
                    int32_t var_34 = esi_6
                    int32_t var_24 = ecx_15
                    int32_t edi_9
                    
                    if (edx_12 == 0)
                        edi_9 = 0x20
                    else
                        edi_9 = 0x1f - eax_12
                    
                    int32_t var_10_1 = edi_9
                    char eax_13 = 0x20 - edi_9.b
                    
                    if (edi_9 != 0)
                        char ecx_17 = edi_9.b
                        var_24 <<= ecx_17
                        var_34 = esi_6 << ecx_17 | ecx_15 u>> eax_13
                        
                        if (i_10 u> 2)
                            var_24 |= arg2[i_10 - 2] u>> eax_13
                    
                    int32_t var_20_2 = 0
                    void* var_1c_1 = edx_12 - 1
                    
                    if (edx_12 - 1 s>= 0)
                        void* eax_18 = edx_12 - 1 + i_10
                        int32_t* ebx_3 = arg1
                        void* var_3c_1 = eax_18
                        void* var_40_1 = &ebx_3[edx_12]
                        void* ecx_22 = &ebx_3[-1 + eax_18]
                        void* var_50_1 = ecx_22
                        
                        while (true)
                            uint32_t eax_19
                            
                            if (eax_18 u> var_c)
                                eax_19 = 0
                            else
                                eax_19 = *(ecx_22 + 8)
                            
                            int32_t edx_15 = *(ecx_22 + 4)
                            int32_t ecx_23 = *ecx_22
                            uint32_t var_44_1 = eax_19
                            int32_t var_28_2 = 0
                            int32_t var_18_1 = ecx_23
                            
                            if (edi_9 != 0)
                                int32_t eax_21
                                int32_t edx_17
                                eax_21, edx_17 = __allshl(edx_15, eax_19, var_10_1.b)
                                eax_19 = edx_17
                                edx_15 = ecx_23 u>> eax_13 | eax_21
                                int32_t esi_12 = var_18_1 << var_10_1.b
                                var_18_1 = esi_12
                                
                                if (var_3c_1 u>= 3)
                                    var_18_1 = esi_12 | ebx_3[i_10 + var_1c_1 - 2] u>> eax_13
                            
                            int32_t* var_230_4 = ebx_3
                            uint32_t eax_26
                            int32_t ecx_28
                            int32_t edx_18
                            eax_26, ecx_28, edx_18 = __aulldvrm(edx_15, eax_19, var_34, 0)
                            int32_t* var_28_3 = ebx_3
                            uint32_t ebx_4 = eax_26
                            int32_t esi_14 = 0
                            int32_t eax_27 = edx_18
                            uint32_t var_8_3 = ebx_4
                            int32_t var_14_1 = eax_27
                            int32_t edi_13 = ecx_28
                            uint32_t var_4c_1 = ebx_4
                            int32_t var_48_2 = eax_27
                            int32_t var_28_4 = 0
                            
                            if (eax_27 != 0 || ebx_4 u> 0xffffffff)
                                int32_t eax_29
                                int32_t edx_19
                                eax_29, edx_19 = __allmul(ebx_4 + 1, 
                                    adc.d(eax_27, 0xffffffff, ebx_4 u>= 0xffffffff), var_34, 0)
                                int32_t temp9_1 = edi_13
                                edi_13 += eax_29
                                esi_14 = adc.d(0, edx_19, temp9_1 + eax_29 u< temp9_1)
                                ebx_4 = 0xffffffff
                                eax_27 = 0
                                var_28_4 = esi_14
                                var_8_3 = 0xffffffff
                                var_4c_1 = 0xffffffff
                                var_14_1 = 0
                                var_48_2 = 0
                            
                            if (esi_14 u<= 0 && (esi_14 u< 0 || edi_13 u<= 0xffffffff))
                                while (true)
                                    int32_t eax_30
                                    int32_t edx_20
                                    eax_30, edx_20 = __allmul(var_24, 0, ebx_4, eax_27)
                                    
                                    if (edx_20 u< edi_13 || (edx_20 u<= edi_13 && eax_30 u<= var_18_1))
                                        eax_27 = var_14_1
                                        break
                                    
                                    uint32_t temp13_1 = ebx_4
                                    ebx_4 -= 1
                                    var_4c_1 = ebx_4
                                    eax_27 = adc.d(var_14_1, 0xffffffff, temp13_1 u>= 1)
                                    int32_t temp14_1 = edi_13
                                    edi_13 += var_34
                                    var_14_1 = eax_27
                                    int32_t temp16_1 = adc.d(var_28_4, 0, temp14_1 + var_34 u< temp14_1)
                                    var_28_4 = temp16_1
                                    var_48_2 = eax_27
                                    
                                    if (temp16_1 != 0)
                                        break
                                    
                                    if (edi_13 u> 0xffffffff)
                                        break
                                    
                                    continue
                                
                                var_8_3 = ebx_4
                            
                            if (eax_27 != 0 || ebx_4 != 0)
                                void* i_8 = i_10
                                int32_t edi_14 = 0
                                int32_t esi_16 = 0
                                
                                if (i_8 != 0)
                                    void* ebx_6 = var_40_1
                                    void* eax_33 = &arg2[1]
                                    void* var_28_5 = eax_33
                                    void* i_4 = i_8
                                    void* i_1
                                    
                                    do
                                        int32_t eax_34 = *eax_33
                                        int32_t eax_38
                                        int32_t edx_21
                                        edx_21:eax_38 = mulu.dp.d(var_4c_1, eax_34)
                                        int32_t edi_15 = edi_14 + eax_38
                                        int32_t eax_39 = *ebx_6
                                        edi_14 = adc.d(esi_16, edx_21 + var_48_2 * eax_34, 
                                            edi_14 + eax_38 u< edi_14)
                                        esi_16 = 0
                                        
                                        if (eax_39 u< edi_15)
                                            int32_t temp18_1 = edi_14
                                            edi_14 += 1
                                            esi_16 = adc.d(0, 0, temp18_1 u>= 0xffffffff)
                                        
                                        *ebx_6 = eax_39 - edi_15
                                        ebx_6 += 4
                                        eax_33 = var_28_5 + 4
                                        i_1 = i_4
                                        i_4 -= 1
                                        var_28_5 = eax_33
                                    while (i_1 != 1)
                                    ebx_4 = var_8_3
                                    i_8 = i_10
                                
                                if (0 u<= esi_16 && (0 u< esi_16 || var_44_1 u< edi_14))
                                    if (i_8 != 0)
                                        void* i_7 = i_8
                                        void* edx_23 = var_40_1
                                        void* esi_19 = &arg2[1]
                                        int32_t ebx_7 = 0
                                        void* i_2
                                        
                                        do
                                            int32_t ecx_32 = *edx_23
                                            esi_19 += 4
                                            edx_23 += 4
                                            int32_t ecx_33 = ecx_32 + *(esi_19 - 4)
                                            int32_t eax_42 =
                                                adc.d(0, 0, ecx_32 + *(esi_19 - 4) u< ecx_32)
                                            *(edx_23 - 4) = ecx_33 + ebx_7
                                            ebx_7 = adc.d(eax_42, 0, ecx_33 + ebx_7 u< ecx_33)
                                            i_2 = i_7
                                            i_7 -= 1
                                        while (i_2 != 1)
                                        ebx_4 = var_8_3
                                    
                                    uint32_t temp19_1 = ebx_4
                                    ebx_4 -= 1
                                    int32_t var_14_2 = adc.d(var_14_1, 0xffffffff, temp19_1 u>= 1)
                                
                                var_c = var_3c_1 - 1
                            
                            ebx_3 = arg1
                            var_40_1 -= 4
                            void* edx_25 = var_1c_1 - 1
                            edi_9 = var_10_1
                            ecx_22 = var_50_1 - 4
                            var_20_2 = ebx_4
                            eax_18 = var_3c_1 - 1
                            var_1c_1 = edx_25
                            var_3c_1 = eax_18
                            var_50_1 = ecx_22
                            
                            if (edx_25 s< 0)
                                break
                    
                    void* i_5 = var_c + 1
                    void* i_3 = i_5
                    
                    if (i_3 u< *arg1)
                        void* edx_27 = &arg1[1 + i_3]
                        
                        do
                            *edx_27 = 0
                            edx_27 += 4
                            i_3 += 1
                        while (i_3 u< *arg1)
                    
                    *arg1 = i_5
                    
                    if (i_5 != 0)
                        while (arg1[i_5] == 0)
                            void* i_9 = i_5
                            i_5 -= 1
                            *arg1 = i_5
                            
                            if (i_9 == 1)
                                break
                    
                    return var_20_2
    
    return 0
}
