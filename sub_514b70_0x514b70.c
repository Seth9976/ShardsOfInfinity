// 函数名称: sub_514b70
// 虚拟地址: 0x514b70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_514b70(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4, void* arg5, uint32_t arg6, int32_t arg7, void* arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = arg8 == 0x10
    void* esi_1 = (ecx + 1) * arg5
    int32_t j_23 = *(*arg3 + 8)
    char* edi = arg2
    int32_t j_19 = j_23 * (ecx + 1)
    int32_t edx_1 = esi_1 * arg6
    int32_t j_21 = j_19
    uint32_t var_48 = arg6
    void* var_20
    void* esi_2
    
    if (arg6 s< 0)
        esi_2 = nullptr
        var_20 = nullptr
    else
        int32_t eax_2 = arg7
        
        if (eax_2 s< 0)
            esi_2 = nullptr
            var_20 = nullptr
        else
            if (eax_2 == 0)
                goto label_514bcf
            
            if (arg6 s> divs.dp.d(0x7fffffff, arg7))
                esi_2 = nullptr
                var_20 = nullptr
            else
                eax_2 = arg7
            label_514bcf:
                int32_t ecx_3 = arg6 * eax_2
                
                if (ecx_3 s< 0 || esi_1 s< 0)
                    esi_2 = nullptr
                    var_20 = nullptr
                else
                    int32_t eax_5
                    int32_t edx_4
                    
                    if (esi_1 != 0)
                        edx_4:eax_5 = 0x7fffffff
                    
                    if (esi_1 != 0 && ecx_3 s> divs.dp.d(edx_4:eax_5, esi_1))
                        esi_2 = nullptr
                        var_20 = nullptr
                    else
                        int32_t var_74_1 = edx_1 * arg7
                        void* eax_9 = _malloc()
                        var_20 = eax_9
                        esi_2 = eax_9
    
    arg3[3] = esi_2
    
    if (esi_2 != 0)
        int32_t j_24 = j_23
        
        if (j_24 s>= 0 && arg6 s>= 0)
            if (arg6 == 0)
                goto label_514c3e
            
            if (j_23 s<= divs.dp.d(0x7fffffff, arg6))
                j_24 = j_23
            label_514c3e:
                void* eax_15 = j_24 * arg6
                void* var_30_1 = eax_15
                
                if (eax_15 s>= 0)
                    void* ecx_5 = arg8
                    
                    if (ecx_5 s>= 0)
                        if (ecx_5 == 0)
                            goto label_514c6d
                        
                        if (var_30_1 s<= divs.dp.d(0x7fffffff, ecx_5))
                            eax_15 = var_30_1
                        label_514c6d:
                            int32_t eax_16 = eax_15 * ecx_5
                            
                            if (eax_16 s<= 0x7ffffff8)
                                uint32_t edx_11 = (eax_16 + 7) u>> 3
                                
                                if (arg4 u>= (edx_11 + 1) * arg7)
                                    int32_t eax_19 = 0
                                    int32_t var_38_1 = 0
                                    
                                    if (arg7 u> 0)
                                        do
                                            uint32_t edx_12 = zx.d(*edi)
                                            uint32_t var_2c_1 = edx_12
                                            char* eax_21 = eax_19 * edx_1 + esi_2
                                            char* ecx_6 = eax_21
                                            char* var_10_1 = ecx_6
                                            
                                            if (edx_12 u> 4)
                                                return 0
                                            
                                            if (arg8 s< 8)
                                                j_19 = 1
                                                j_21 = 1
                                                var_48 = edx_11
                                                ecx_6 = &ecx_6[arg5 * arg6 - edx_11]
                                                var_10_1 = ecx_6
                                            
                                            void* eax_26 = ecx_6 - edx_1
                                            
                                            if (var_38_1 == 0)
                                                var_2c_1 = zx.d(*(edx_12 + 0x572dc8))
                                            
                                            if (j_19 s> 0)
                                                void* eax_27 = eax_26 - &edi[1]
                                                void* edx_14 = &edi[1]
                                                void* ecx_7 = ecx_6 - &edi[1]
                                                void* var_24_1 = eax_27
                                                void* var_44_1 = ecx_7
                                                int32_t esi_4 = j_19
                                                int32_t i
                                                
                                                do
                                                    if (var_2c_1 u<= 6)
                                                        switch (var_2c_1)
                                                            case 0
                                                                j_19 = j_21
                                                                int32_t j
                                                                
                                                                do
                                                                    eax_27.b = *edx_14
                                                                    edx_14 += 1
                                                                    *(ecx_7 + edx_14 - 1) = eax_27.b
                                                                    j = esi_4
                                                                    esi_4 -= 1
                                                                while (j != 1)
                                                            case 1
                                                                j_19 = j_21
                                                                int32_t j_1
                                                                
                                                                do
                                                                    eax_27.b = *edx_14
                                                                    edx_14 += 1
                                                                    *(ecx_7 + edx_14 - 1) = eax_27.b
                                                                    j_1 = esi_4
                                                                    esi_4 -= 1
                                                                while (j_1 != 1)
                                                            case 2
                                                                j_19 = j_21
                                                                
                                                                while (true)
                                                                    eax_27.b = *(eax_27 + edx_14)
                                                                    edx_14 += 1
                                                                    eax_27.b += *(edx_14 - 1)
                                                                    *(ecx_7 + edx_14 - 1) = eax_27.b
                                                                    int32_t temp11_1 = esi_4
                                                                    esi_4 -= 1
                                                                    
                                                                    if (temp11_1 == 1)
                                                                        break
                                                                    
                                                                    eax_27 = var_24_1
                                                            case 3
                                                                j_19 = j_21
                                                                
                                                                while (true)
                                                                    eax_27.b = *(eax_27 + edx_14)
                                                                    edx_14 += 1
                                                                    eax_27.b u>>= 1
                                                                    eax_27.b += *(edx_14 - 1)
                                                                    *(ecx_7 + edx_14 - 1) = eax_27.b
                                                                    int32_t temp12_1 = esi_4
                                                                    esi_4 -= 1
                                                                    
                                                                    if (temp12_1 == 1)
                                                                        break
                                                                    
                                                                    eax_27 = var_24_1
                                                            case 4
                                                                j_19 = j_21
                                                                
                                                                while (true)
                                                                    ecx_7.b = *(eax_27 + edx_14)
                                                                    edx_14 += 1
                                                                    eax_27.b = 0
                                                                    eax_27.b = sbb.b(0, 0, 0 u< ecx_7.b)
                                                                    eax_27.b &= ecx_7.b
                                                                    eax_27.b += *(edx_14 - 1)
                                                                    *(var_44_1 + edx_14 - 1) = eax_27.b
                                                                    int32_t temp13_1 = esi_4
                                                                    esi_4 -= 1
                                                                    
                                                                    if (temp13_1 == 1)
                                                                        break
                                                                    
                                                                    eax_27 = var_24_1
                                                            case 5
                                                                j_19 = j_21
                                                                int32_t j_2
                                                                
                                                                do
                                                                    eax_27.b = *edx_14
                                                                    edx_14 += 1
                                                                    *(ecx_7 + edx_14 - 1) = eax_27.b
                                                                    j_2 = esi_4
                                                                    esi_4 -= 1
                                                                while (j_2 != 1)
                                                            case 6
                                                                j_19 = j_21
                                                                int32_t j_3
                                                                
                                                                do
                                                                    eax_27.b = *edx_14
                                                                    edx_14 += 1
                                                                    *(ecx_7 + edx_14 - 1) = eax_27.b
                                                                    j_3 = esi_4
                                                                    esi_4 -= 1
                                                                while (j_3 != 1)
                                                        
                                                        break
                                                    
                                                    j_19 = j_21
                                                    edx_14 += 1
                                                    i = esi_4
                                                    esi_4 -= 1
                                                while (i != 1)
                                                ecx_6 = var_10_1
                                            
                                            void* eax_31
                                            void* ecx_8
                                            int32_t j_22
                                            
                                            if (arg8 == 8)
                                                if (j_23 != arg5)
                                                    ecx_6[j_23] = 0xff
                                                
                                                ecx_8 = arg5
                                                j_22 = j_23
                                                eax_31 = esi_1
                                            else if (arg8 != 0x10)
                                                ecx_8 = 1
                                                j_22 = 1
                                                eax_31 = esi_1
                                            else
                                                if (j_23 != arg5)
                                                    *(ecx_6 + j_19) = 0xffff
                                                
                                                eax_31 = esi_1
                                                j_22 = j_19
                                                ecx_8 = eax_31
                                            
                                            edi = &edi[1 + j_22]
                                            void* esi_6 = eax_26 + ecx_8
                                            char* var_8_1 = edi
                                            void* ecx_9 = ecx_8 + var_10_1
                                            void* var_1c_1 = esi_6
                                            void* var_24_2 = ecx_9
                                            
                                            if (arg8 s>= 8)
                                                j_19 = j_21
                                            
                                            if (arg8 s< 8 || j_23 == arg5)
                                                void* i_29 = (var_48 - 1) * j_19
                                                void* i_30 = i_29
                                                
                                                switch (var_2c_1)
                                                    case 0
                                                        sub_51d5b0(ecx_9, edi, i_29)
                                                        i_29 = i_30
                                                    case 1
                                                        int32_t esi_22 = 0
                                                        
                                                        if (i_29 s> 0)
                                                            do
                                                                char* edx_61 = ecx_9 + esi_22
                                                                int32_t eax_74
                                                                eax_74.b = *(ecx_9 - j_19 + esi_22)
                                                                esi_22 += 1
                                                                eax_74.b += edx_61[edi - ecx_9]
                                                                *edx_61 = eax_74.b
                                                            while (esi_22 s< i_30)
                                                            
                                                        label_5155ff:
                                                            edi = var_8_1
                                                            j_19 = j_21
                                                            i_29 = i_30
                                                    case 2
                                                        int32_t i_28 = 0
                                                        
                                                        if (i_29 s> 0)
                                                            if (i_29 u>= 0x40)
                                                                int32_t i_17 = 0
                                                                
                                                                if ((ecx_9 u> &edi[0xffffffff] + i_29
                                                                        || ecx_9 - 1 + i_29 u< edi) && (
                                                                        ecx_9 u> esi_6 - 1 + i_29
                                                                        || ecx_9 - 1 + i_29 u< esi_6))
                                                                    void* eax_84 = i_29 & 0x8000003f
                                                                    
                                                                    if (eax_84 s< 0)
                                                                        eax_84 = ((eax_84 - 1) | 0xffffffc0) + 1
                                                                    
                                                                    int128_t* edx_63 = esi_6 - edi
                                                                    void* ebx_13 = ecx_9 + 0x10
                                                                    char* eax_88 = edi
                                                                    int128_t* ecx_21 = edx_63
                                                                    int32_t i_1 = 0
                                                                    
                                                                    do
                                                                        int32_t xmm1_9[0x4] = *(ecx_21 + eax_88)
                                                                        eax_88 = &eax_88[0x40]
                                                                        ebx_13 += 0x40
                                                                        int32_t xmm1_10[0x4] =
                                                                            _mm_add_epi8(xmm1_9, *(eax_88 - 0x40))
                                                                        int32_t xmm0_6[0x4] = *(eax_88 - 0x30)
                                                                        *(ecx_9 - edi + eax_88 - 0x40) = xmm1_10
                                                                        ecx_21 = edx_63
                                                                        int32_t xmm1_12[0x4] = _mm_add_epi8(
                                                                            *(esi_6 - ecx_9 + ebx_13 - 0x40), 
                                                                            xmm0_6)
                                                                        int32_t xmm0_7[0x4] = *(eax_88 - 0x20)
                                                                        *(ebx_13 - 0x40) = xmm1_12
                                                                        int32_t xmm1_14[0x4] = _mm_add_epi8(
                                                                            *(esi_6 + i_1 + 0x20), xmm0_7)
                                                                        int32_t xmm0_8[0x4] = *(eax_88 - 0x10)
                                                                        *(ebx_13 - 0x30) = xmm1_14
                                                                        int32_t xmm1_15[0x4] =
                                                                            *(esi_6 + i_1 + 0x30)
                                                                        i_1 += 0x40
                                                                        *(ebx_13 - 0x20) =
                                                                            _mm_add_epi8(xmm1_15, xmm0_8)
                                                                    while (i_1 s< i_29 - eax_84)
                                                                    
                                                                    ecx_9 = var_24_2
                                                                    j_19 = j_21
                                                                    edi = var_8_1
                                                                    i_17 = i_1
                                                                    i_29 = i_30
                                                                
                                                                i_28 = i_17
                                                            
                                                            if (i_28 s< i_29)
                                                                void* edx_68 = &edi[i_28]
                                                                void* i_23 = i_30 - i_28
                                                                void* i_2
                                                                
                                                                do
                                                                    i_28.b = *(edx_68 + esi_6 - edi)
                                                                    edx_68 += 1
                                                                    i_28.b += *(edx_68 - 1)
                                                                    *(edx_68 + ecx_9 - edi - 1) = i_28.b
                                                                    i_2 = i_23
                                                                    i_23 -= 1
                                                                while (i_2 != 1)
                                                                j_19 = j_21
                                                                i_29 = i_30
                                                    case 3
                                                        int32_t eax_89 = 0
                                                        int32_t var_44_7 = 0
                                                        
                                                        if (i_29 s> 0)
                                                            char* var_64_4 = edi
                                                            void* edx_70 = ecx_9 - j_19
                                                            int32_t esi_24 = esi_6 - edi
                                                            int32_t ecx_24 = ecx_9 - edi
                                                            void* var_60_5 = edx_70
                                                            
                                                            do
                                                                edi = &edi[1]
                                                                uint8_t edx_73 = ((
                                                                    zx.d(*(edx_70 + eax_89))
                                                                    + zx.d(edi[esi_24 - 1])) u>> 1).b
                                                                eax_89 = var_44_7 + 1
                                                                edi[ecx_24 - 1] =
                                                                    edx_73 + edi[0xffffffff]
                                                                edx_70 = var_60_5
                                                                var_44_7 = eax_89
                                                            while (eax_89 s< i_30)
                                                            
                                                            goto label_5155ff
                                                    case 4
                                                        if (i_29 s> 0)
                                                            char* var_2c_9 = edi
                                                            void* i_16 = i_29
                                                            void* eax_95 = esi_6 - ecx_9
                                                            void* ecx_25 = var_2c_9
                                                            void* esi_25 = esi_6 - edi
                                                            void* var_58_3 = eax_95
                                                            void* edi_12 = ecx_9 - j_19
                                                            void* var_1c_2 = esi_25
                                                            void* i_3
                                                            
                                                            do
                                                                uint32_t eax_96 =
                                                                    zx.d(*(eax_95 + edi_12))
                                                                uint32_t esi_26 =
                                                                    zx.d(*(esi_25 + ecx_25))
                                                                uint32_t edx_74 = zx.d(*edi_12)
                                                                uint32_t ecx_27 = edx_74 - eax_96
                                                                uint32_t esi_27 = esi_26 + ecx_27
                                                                char var_40_4 = edx_74.b
                                                                int32_t eax_99
                                                                int32_t edx_75
                                                                edx_75:eax_99 = sx.q(esi_27 - edx_74)
                                                                uint32_t eax_101 =
                                                                    (eax_99 ^ edx_75) - edx_75
                                                                int32_t eax_103
                                                                int32_t edx_76
                                                                edx_76:eax_103 = sx.q(ecx_27)
                                                                int32_t eax_105 =
                                                                    (eax_103 ^ edx_76) - edx_76
                                                                int32_t eax_107
                                                                int32_t edx_77
                                                                edx_77:eax_107 = sx.q(esi_27 - eax_96)
                                                                int32_t ecx_30 =
                                                                    (eax_107 ^ edx_77) - edx_77
                                                                uint32_t eax_108
                                                                
                                                                if (eax_101 s> eax_105
                                                                        || eax_101 s> ecx_30)
                                                                    eax_108 = eax_96
                                                                    
                                                                    if (eax_105 s<= ecx_30)
                                                                        eax_108 = esi_26
                                                                    
                                                                    var_40_4 = eax_108.b
                                                                
                                                                esi_25 = var_1c_2
                                                                eax_108.b = *var_2c_9
                                                                ecx_25 = &var_2c_9[1]
                                                                eax_108.b += var_40_4
                                                                *(edi_12 + j_19) = eax_108.b
                                                                edi_12 += 1
                                                                i_3 = i_16
                                                                i_16 -= 1
                                                                eax_95 = var_58_3
                                                                var_2c_9 = ecx_25
                                                            while (i_3 != 1)
                                                            edi = var_8_1
                                                            i_29 = i_30
                                                    case 5
                                                        int32_t esi_29 = 0
                                                        
                                                        if (i_29 s> 0)
                                                            do
                                                                int32_t eax_112
                                                                eax_112.b = *(ecx_9 - j_19 + esi_29)
                                                                char* edx_79 = ecx_9 + esi_29
                                                                esi_29 += 1
                                                                eax_112.b u>>= 1
                                                                eax_112.b += edx_79[edi - ecx_9]
                                                                *edx_79 = eax_112.b
                                                            while (esi_29 s< i_30)
                                                            
                                                            goto label_5155ff
                                                    case 6
                                                        if (i_29 s> 0)
                                                            int32_t edi_14 = 0
                                                            void* eax_114 = ecx_9 - j_19
                                                            void* var_5c_5 = eax_114
                                                            
                                                            do
                                                                int32_t edx_81
                                                                edx_81.b = *(eax_114 + edi_14)
                                                                char* esi_30 = ecx_9 + edi_14
                                                                edi_14 += 1
                                                                int32_t eax_115
                                                                eax_115.b = esi_30[edi - ecx_9]
                                                                eax_115.b += edx_81.b
                                                                *esi_30 = eax_115.b
                                                                eax_114 = var_5c_5
                                                            while (edi_14 s< i_30)
                                                            
                                                            goto label_5155ff
                                                
                                                edi += i_29
                                                ecx_5 = arg8
                                            else
                                                switch (var_2c_1)
                                                    case 0
                                                        int32_t i_21 = arg6 - 1
                                                        int32_t i_27 = i_21
                                                        
                                                        if (i_21 u>= 1)
                                                            int32_t i_4
                                                            
                                                            do
                                                                if (j_19 s> 0)
                                                                    int32_t j_14 = j_19
                                                                    char* eax_33 = edi - ecx_9
                                                                    void* edx_18 = ecx_9
                                                                    char* var_44_2 = eax_33
                                                                    char* ebx_3 = eax_33
                                                                    int32_t j_4
                                                                    
                                                                    do
                                                                        eax_33.b = *(ebx_3 + edx_18)
                                                                        edx_18 += 1
                                                                        *(edx_18 - 1) = eax_33.b
                                                                        j_4 = j_14
                                                                        j_14 -= 1
                                                                    while (j_4 != 1)
                                                                    j_19 = j_21
                                                                    eax_31 = esi_1
                                                                    i_21 = i_27
                                                                
                                                                *(ecx_9 + j_19) = 0xff
                                                                edi = &edi[j_19]
                                                                ecx_9 += eax_31
                                                                i_4 = i_21
                                                                i_21 -= 1
                                                                i_27 = i_21
                                                            while (i_4 != 1)
                                                    case 1
                                                        int32_t i_18 = arg6 - 1
                                                        
                                                        if (arg6 - 1 u>= 1)
                                                            char* var_8_2 = edi
                                                            char* edx_22 = ecx_9 - eax_31
                                                            char* var_2c_2 = edx_22
                                                            int32_t i_5
                                                            
                                                            do
                                                                void* esi_9 = nullptr
                                                                
                                                                if (j_19 s> 0)
                                                                    char* edi_2 = edi - ecx_9
                                                                    char* var_44_3 = edi_2
                                                                    
                                                                    do
                                                                        char* edx_23 = esi_9 + ecx_9
                                                                        char* eax_34
                                                                        eax_34.b = *(var_2c_2 + esi_9)
                                                                        esi_9 += 1
                                                                        eax_34.b += *(edi_2 + edx_23)
                                                                        *edx_23 = eax_34.b
                                                                    while (esi_9 s< j_19)
                                                                    
                                                                    edi = var_8_2
                                                                    eax_31 = esi_1
                                                                    edx_22 = var_2c_2
                                                                
                                                                *(ecx_9 + j_19) = 0xff
                                                                edi = &edi[j_19]
                                                                edx_22 += eax_31
                                                                var_8_2 = edi
                                                                ecx_9 += eax_31
                                                                var_2c_2 = edx_22
                                                                i_5 = i_18
                                                                i_18 -= 1
                                                            while (i_5 != 1)
                                                    case 2
                                                        int32_t i_19 = arg6 - 1
                                                        
                                                        if (i_19 u>= 1)
                                                            char* var_8_3 = edi
                                                            void* var_18_2 = ecx_9 + j_19
                                                            int32_t edx_28 = 0x10 - j_19
                                                            int32_t i_6
                                                            
                                                            do
                                                                int128_t* j_5 = nullptr
                                                                int128_t* j_12 = nullptr
                                                                
                                                                if (j_19 s> 0)
                                                                    if (j_19 u>= 0x40)
                                                                        j_12 = nullptr
                                                                        
                                                                        if ((ecx_9 u> &edi[0xffffffff + j_19]
                                                                                || ecx_9 - 1 + j_19 u< edi) && (
                                                                                ecx_9 u> esi_6 - 1 + j_19
                                                                                || ecx_9 - 1 + j_19 u< esi_6))
                                                                            int32_t eax_42 = j_19 & 0x8000003f
                                                                            
                                                                            if (eax_42 s< 0)
                                                                                eax_42 = ((eax_42 - 1) | 0xffffffc0) + 1
                                                                            
                                                                            int32_t ebx_5 = edi - ecx_9
                                                                            eax_31 = var_18_2 + edx_28
                                                                            void* ebx_8 = &edi[0x30]
                                                                            int32_t ecx_12 = ebx_5
                                                                            
                                                                            do
                                                                                int32_t xmm0_1[0x4] = *(ebx_8 - 0x30)
                                                                                ebx_8 += 0x40
                                                                                eax_31 += 0x40
                                                                                int32_t xmm1_2[0x4] =
                                                                                    _mm_add_epi8(*(j_5 + esi_6), xmm0_1)
                                                                                int32_t xmm0_2[0x4] =
                                                                                    *(esi_6 - ecx_9 + eax_31 - 0x40)
                                                                                *(eax_31 - 0x50) = xmm1_2
                                                                                int32_t xmm1_4[0x4] = _mm_add_epi8(
                                                                                    *(ecx_12 + eax_31 - 0x40), xmm0_2)
                                                                                int32_t xmm0_3[0x4] = *(ebx_8 - 0x50)
                                                                                *(eax_31 - 0x40) = xmm1_4
                                                                                int32_t xmm1_5[0x4] =
                                                                                    *(esi_6 + j_5 + 0x20)
                                                                                j_5 = &j_5[4]
                                                                                int32_t xmm1_6[0x4] =
                                                                                    _mm_add_epi8(xmm1_5, xmm0_3)
                                                                                int32_t xmm0_4[0x4] = *(ebx_8 - 0x40)
                                                                                *(eax_31 - 0x30) = xmm1_6
                                                                                ecx_12 = ebx_5
                                                                                *(eax_31 - 0x20) = _mm_add_epi8(
                                                                                    *(esi_6 - edi + ebx_8 - 0x40), xmm0_4)
                                                                            while (j_5 s< j_19 - eax_42)
                                                                            
                                                                            ecx_9 = var_24_2
                                                                            j_19 = j_21
                                                                            edi = var_8_3
                                                                            j_12 = j_5
                                                                    
                                                                    if (j_5 s< j_19)
                                                                        void* var_54_2 = esi_6
                                                                        int32_t ecx_14 = ecx_9 - edi
                                                                        void* edx_29 = j_5 + edi
                                                                        int32_t j_20 = j_19
                                                                        int32_t var_50_2 = ecx_14
                                                                        void* j_13 = j_19 - j_12
                                                                        void* j_6
                                                                        
                                                                        do
                                                                            eax_31.b = *(esi_6 - edi + edx_29)
                                                                            edx_29 += 1
                                                                            eax_31.b += *(edx_29 - 1)
                                                                            *(ecx_14 + edx_29 - 1) = eax_31.b
                                                                            j_6 = j_13
                                                                            j_13 -= 1
                                                                        while (j_6 != 1)
                                                                        ecx_9 = var_24_2
                                                                        j_19 = j_21
                                                                        esi_6 = var_1c_1
                                                                    
                                                                    eax_31 = esi_1
                                                                
                                                                edi = &edi[j_19]
                                                                ecx_9 += eax_31
                                                                var_8_3 = edi
                                                                esi_6 += eax_31
                                                                var_24_2 = ecx_9
                                                                var_1c_1 = esi_6
                                                                *var_18_2 = 0xff
                                                                i_6 = i_19
                                                                i_19 -= 1
                                                                var_18_2 += eax_31
                                                            while (i_6 != 1)
                                                    case 3
                                                        int32_t i_15 = arg6 - 1
                                                        
                                                        if (arg6 - 1 u>= 1)
                                                            char* var_8_4 = edi
                                                            void* edx_35 = ecx_9 - eax_31
                                                            void* var_2c_5 = edx_35
                                                            int32_t i_7
                                                            
                                                            do
                                                                if (j_19 s> 0)
                                                                    char* esi_11 = edi
                                                                    int32_t eax_48 = var_1c_1 - edi
                                                                    int32_t ecx_16 = 0
                                                                    int32_t var_50_3 = eax_48
                                                                    
                                                                    do
                                                                        esi_11 = &esi_11[1]
                                                                        uint32_t eax_50 =
                                                                            zx.d(*(var_2c_5 + ecx_16))
                                                                        ecx_16 += 1
                                                                        esi_11[ecx_9 - edi - 1] = ((
                                                                            zx.d(esi_11[eax_48 - 1]) + eax_50)
                                                                            u>> 1).b + esi_11[0xffffffff]
                                                                    while (ecx_16 s< j_19)
                                                                    
                                                                    ecx_9 = var_24_2
                                                                    edi = var_8_4
                                                                    esi_6 = var_1c_1
                                                                    eax_31 = esi_1
                                                                    edx_35 = var_2c_5
                                                                
                                                                *(ecx_9 + j_19) = 0xff
                                                                edi = &edi[j_19]
                                                                ecx_9 += eax_31
                                                                var_8_4 = edi
                                                                edx_35 += eax_31
                                                                var_24_2 = ecx_9
                                                                esi_6 += eax_31
                                                                var_2c_5 = edx_35
                                                                i_7 = i_15
                                                                i_15 -= 1
                                                                var_1c_1 = esi_6
                                                            while (i_7 != 1)
                                                    case 4
                                                        int32_t i_20 = arg6 - 1
                                                        
                                                        if (i_20 u>= 1)
                                                            char* var_8_5 = edi
                                                            void* edx_43 = ecx_9 - eax_31
                                                            void* var_2c_6 = edx_43
                                                            int32_t i_8
                                                            
                                                            do
                                                                if (j_19 s> 0)
                                                                    int32_t j_11 = j_19
                                                                    int32_t eax_53 = esi_6 - ecx_9
                                                                    void* ecx_17 = var_2c_6
                                                                    void* edx_44 = edi
                                                                    void* esi_12 = esi_6 - edi
                                                                    void* var_40_3 = edx_44
                                                                    int32_t var_5c_1 = eax_53
                                                                    void* var_60_1 = esi_12
                                                                    int32_t j_7
                                                                    
                                                                    do
                                                                        uint32_t edi_5 =
                                                                            zx.d(*(esi_12 + edx_44))
                                                                        uint32_t eax_54 =
                                                                            zx.d(*(ecx_17 + eax_53))
                                                                        uint32_t edx_45 = zx.d(*ecx_17)
                                                                        uint32_t esi_14 = edx_45 - eax_54
                                                                        uint32_t edi_6 = edi_5 + esi_14
                                                                        char var_18_3 = edx_45.b
                                                                        int32_t eax_57
                                                                        int32_t edx_46
                                                                        edx_46:eax_57 = sx.q(edi_6 - edx_45)
                                                                        uint32_t eax_59 =
                                                                            (eax_57 ^ edx_46) - edx_46
                                                                        int32_t eax_61
                                                                        int32_t edx_47
                                                                        edx_47:eax_61 = sx.q(esi_14)
                                                                        int32_t eax_63 =
                                                                            (eax_61 ^ edx_47) - edx_47
                                                                        int32_t eax_65
                                                                        int32_t edx_48
                                                                        edx_48:eax_65 = sx.q(edi_6 - eax_54)
                                                                        int32_t esi_17 =
                                                                            (eax_65 ^ edx_48) - edx_48
                                                                        uint32_t eax_66
                                                                        
                                                                        if (eax_59 s> eax_63
                                                                                || eax_59 s> esi_17)
                                                                            eax_66 = eax_54
                                                                            
                                                                            if (eax_63 s<= esi_17)
                                                                                eax_66 = edi_5
                                                                            
                                                                            var_18_3 = eax_66.b
                                                                        
                                                                        char* edx_50 = var_40_3
                                                                        esi_12 = var_60_1
                                                                        eax_66.b = *edx_50
                                                                        edx_44 = &edx_50[1]
                                                                        eax_66.b += var_18_3
                                                                        *(ecx_17 + esi_1) = eax_66.b
                                                                        ecx_17 += 1
                                                                        j_7 = j_11
                                                                        j_11 -= 1
                                                                        eax_53 = var_5c_1
                                                                        var_40_3 = edx_44
                                                                    while (j_7 != 1)
                                                                    ecx_9 = var_24_2
                                                                    j_19 = j_21
                                                                    edi = var_8_5
                                                                    esi_6 = var_1c_1
                                                                    eax_31 = esi_1
                                                                    edx_43 = var_2c_6
                                                                
                                                                *(ecx_9 + j_19) = 0xff
                                                                edi = &edi[j_19]
                                                                ecx_9 += eax_31
                                                                var_8_5 = edi
                                                                edx_43 += eax_31
                                                                var_24_2 = ecx_9
                                                                esi_6 += eax_31
                                                                var_2c_6 = edx_43
                                                                i_8 = i_20
                                                                i_20 -= 1
                                                                var_1c_1 = esi_6
                                                            while (i_8 != 1)
                                                    case 5
                                                        int32_t i_14 = arg6 - 1
                                                        
                                                        if (arg6 - 1 u>= 1)
                                                            char* var_8_6 = edi
                                                            void* edx_54 = ecx_9 - eax_31
                                                            void* var_2c_7 = edx_54
                                                            int32_t i_9
                                                            
                                                            do
                                                                void* esi_19 = nullptr
                                                                
                                                                if (j_19 s> 0)
                                                                    char* edi_8 = edi - ecx_9
                                                                    char* var_60_2 = edi_8
                                                                    
                                                                    do
                                                                        char* edx_55 = esi_19 + ecx_9
                                                                        void* eax_67
                                                                        eax_67.b = *(var_2c_7 + esi_19)
                                                                        esi_19 += 1
                                                                        eax_67.b u>>= 1
                                                                        eax_67.b += *(edi_8 + edx_55)
                                                                        *edx_55 = eax_67.b
                                                                    while (esi_19 s< j_19)
                                                                    
                                                                    edi = var_8_6
                                                                    eax_31 = esi_1
                                                                    edx_54 = var_2c_7
                                                                
                                                                *(ecx_9 + j_19) = 0xff
                                                                edi = &edi[j_19]
                                                                edx_54 += eax_31
                                                                var_8_6 = edi
                                                                ecx_9 += eax_31
                                                                var_2c_7 = edx_54
                                                                i_9 = i_14
                                                                i_14 -= 1
                                                            while (i_9 != 1)
                                                    case 6
                                                        int32_t i_25 = arg6 - 1
                                                        int32_t i_26 = i_25
                                                        
                                                        if (i_25 u>= 1)
                                                            char* var_8_7 = edi
                                                            void* edx_58 = ecx_9 - eax_31
                                                            void* var_2c_8 = edx_58
                                                            int32_t i_10
                                                            
                                                            do
                                                                if (j_19 s> 0)
                                                                    void* edi_9 = nullptr
                                                                    char* eax_69 = edi - ecx_9
                                                                    char* var_5c_2 = eax_69
                                                                    
                                                                    do
                                                                        edx_58.b = *(edx_58 + edi_9)
                                                                        char* esi_21 = edi_9 + ecx_9
                                                                        eax_69.b = *(eax_69 + esi_21)
                                                                        edi_9 += 1
                                                                        eax_69.b += edx_58.b
                                                                        edx_58 = var_2c_8
                                                                        *esi_21 = eax_69.b
                                                                        eax_69 = var_5c_2
                                                                    while (edi_9 s< j_19)
                                                                    
                                                                    edi = var_8_7
                                                                    eax_31 = esi_1
                                                                    i_25 = i_26
                                                                
                                                                *(ecx_9 + j_19) = 0xff
                                                                edi = &edi[j_19]
                                                                edx_58 += eax_31
                                                                var_8_7 = edi
                                                                ecx_9 += eax_31
                                                                var_2c_8 = edx_58
                                                                i_10 = i_25
                                                                i_25 -= 1
                                                                i_26 = i_25
                                                            while (i_10 != 1)
                                                
                                                ecx_5 = arg8
                                                
                                                if (ecx_5 == 0x10)
                                                    uint32_t i_22 = arg6
                                                    
                                                    if (i_22 != 0)
                                                        char* ecx_20 = &eax_21[1 + j_19]
                                                        uint32_t i_11
                                                        
                                                        do
                                                            *ecx_20 = 0xff
                                                            ecx_20 += eax_31
                                                            i_11 = i_22
                                                            i_22 -= 1
                                                        while (i_11 != 1)
                                                        ecx_5 = arg8
                                            
                                            esi_2 = var_20
                                            eax_19 = var_38_1 + 1
                                            var_38_1 = eax_19
                                        while (eax_19 u< arg7)
                                    
                                    if (ecx_5 s>= 8)
                                        if (ecx_5 == 0x10)
                                            void* edx_87 = esi_2
                                            int32_t i_24 = arg5 * arg6 * arg7
                                            
                                            if (i_24 != 0)
                                                int32_t i_12
                                                
                                                do
                                                    uint16_t ecx_89 = zx.w(*esi_2)
                                                    edx_87 += 2
                                                    esi_2 += 2
                                                    *(edx_87 - 2) = ecx_89 << 8 | zx.w(*(edx_87 - 1))
                                                    i_12 = i_24
                                                    i_24 -= 1
                                                while (i_12 != 1)
                                    else if (arg7 u> 0)
                                        uint32_t eax_120 = arg5 * arg6 - edx_11 + esi_2
                                        uint32_t var_4c_2 = eax_120
                                        int32_t i_13
                                        
                                        do
                                            char* edx_82 = esi_2
                                            char* esi_31 = eax_120
                                            
                                            if (arg9 != 0)
                                                j_19.b = 1
                                            else
                                                j_19.b = *(ecx_5 + 0x572dbc)
                                            
                                            if (ecx_5 == 4)
                                                ecx_5 = var_30_1
                                                
                                                if (ecx_5 s>= 2)
                                                    uint32_t j_15 = ecx_5 u>> 1
                                                    void* ecx_32 = ecx_5 + (neg.d(j_15) << 1)
                                                    uint32_t j_8
                                                    
                                                    do
                                                        *edx_82 = (*esi_31 u>> 4) * j_19.b
                                                        char ecx_36 = *esi_31
                                                        esi_31 = &esi_31[1]
                                                        edx_82[1] = (ecx_36 & 0xf) * j_19.b
                                                        edx_82 = &edx_82[2]
                                                        j_8 = j_15
                                                        j_15 -= 1
                                                    while (j_8 != 1)
                                                    ecx_5 = ecx_32
                                                
                                                if (ecx_5 s> 0)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 4
                                                    *edx_82 = ecx_5.b * j_19.b
                                            else if (ecx_5 == 2)
                                                ecx_5 = var_30_1
                                                void* var_2c_10 = ecx_5
                                                
                                                if (ecx_5 s>= 4)
                                                    uint32_t j_16 = ecx_5 u>> 2
                                                    var_2c_10 = ecx_5 + (neg.d(j_16) << 2)
                                                    uint32_t j_9
                                                    
                                                    do
                                                        *edx_82 = (*esi_31 u>> 6) * j_19.b
                                                        edx_82[1] = (*esi_31 u>> 4 & 3) * j_19.b
                                                        edx_82[2] = (*esi_31 u>> 2 & 3) * j_19.b
                                                        char ecx_49 = *esi_31
                                                        esi_31 = &esi_31[1]
                                                        edx_82[3] = (ecx_49 & 3) * j_19.b
                                                        edx_82 = &edx_82[4]
                                                        j_9 = j_16
                                                        j_16 -= 1
                                                    while (j_9 != 1)
                                                    ecx_5 = var_2c_10
                                                
                                                if (ecx_5 s> 0)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 6
                                                    *edx_82 = ecx_5.b * j_19.b
                                                    edx_82 = &edx_82[1]
                                                    ecx_5 = var_2c_10
                                                
                                                if (ecx_5 s> 1)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 4
                                                    ecx_5.b &= 3
                                                    *edx_82 = ecx_5.b * j_19.b
                                                    edx_82 = &edx_82[1]
                                                    ecx_5 = var_2c_10
                                                
                                                if (ecx_5 s> 2)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 2
                                                    ecx_5.b &= 3
                                                    *edx_82 = ecx_5.b * j_19.b
                                            else if (ecx_5 == 1)
                                                void* edi_17 = var_30_1
                                                
                                                if (edi_17 s>= 8)
                                                    uint32_t j_18 = edi_17 u>> 3
                                                    uint32_t j_17 = j_18
                                                    uint32_t j_10
                                                    
                                                    do
                                                        *edx_82 = (*esi_31 u>> 7) * j_19.b
                                                        edx_82[1] = (*esi_31 u>> 6 & 1) * j_19.b
                                                        edx_82[2] = (*esi_31 u>> 5 & 1) * j_19.b
                                                        edx_82[3] = (*esi_31 u>> 4 & 1) * j_19.b
                                                        edx_82[4] = (*esi_31 u>> 3 & 1) * j_19.b
                                                        edx_82[5] = (*esi_31 u>> 2 & 1) * j_19.b
                                                        edx_82[6] = (*esi_31 u>> 1 & 1) * j_19.b
                                                        char ecx_77 = *esi_31
                                                        esi_31 = &esi_31[1]
                                                        edx_82[7] =
                                                            ((zx.d(ecx_77) & 1) * zx.d(j_19.b)).b
                                                        edx_82 = &edx_82[8]
                                                        j_10 = j_17
                                                        j_17 -= 1
                                                    while (j_10 != 1)
                                                    edi_17 += neg.d(j_18) << 3
                                                
                                                if (edi_17 s> 0)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 7
                                                    *edx_82 = (zx.d(ecx_5.b) * zx.d(j_19.b)).b
                                                    edx_82 = &edx_82[1]
                                                
                                                if (edi_17 s> 1)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 6
                                                    ecx_5.b &= 1
                                                    *edx_82 = (zx.d(ecx_5.b) * zx.d(j_19.b)).b
                                                    edx_82 = &edx_82[1]
                                                
                                                if (edi_17 s> 2)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 5
                                                    ecx_5.b &= 1
                                                    *edx_82 = (zx.d(ecx_5.b) * zx.d(j_19.b)).b
                                                    edx_82 = &edx_82[1]
                                                
                                                if (edi_17 s> 3)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 4
                                                    ecx_5.b &= 1
                                                    *edx_82 = (zx.d(ecx_5.b) * zx.d(j_19.b)).b
                                                    edx_82 = &edx_82[1]
                                                
                                                if (edi_17 s> 4)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 3
                                                    ecx_5.b &= 1
                                                    *edx_82 = (zx.d(ecx_5.b) * zx.d(j_19.b)).b
                                                    edx_82 = &edx_82[1]
                                                
                                                if (edi_17 s> 5)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 2
                                                    ecx_5.b &= 1
                                                    *edx_82 = (zx.d(ecx_5.b) * zx.d(j_19.b)).b
                                                    edx_82 = &edx_82[1]
                                                
                                                if (edi_17 s> 6)
                                                    ecx_5.b = *esi_31
                                                    ecx_5.b u>>= 1
                                                    ecx_5.b &= 1
                                                    *edx_82 = ecx_5.b * j_19.b
                                            
                                            char* esi_32
                                            
                                            if (j_23 == arg5)
                                                esi_32 = var_20
                                            else
                                                int32_t ecx_88 = arg6 - 1
                                                
                                                if (j_23 != 1)
                                                    if (ecx_88 s>= 0)
                                                        void* esi_35 = ecx_88 * 3 + var_20 + 1
                                                        void* edx_86 = var_20 + (ecx_88 << 2) + 2
                                                        int32_t temp20_1
                                                        
                                                        do
                                                            temp20_1 = ecx_88
                                                            ecx_88 -= 1
                                                            *(edx_86 + 1) = 0xff
                                                            char eax_138 = *(esi_35 + 1)
                                                            esi_35 -= 3
                                                            *edx_86 = eax_138
                                                            edx_86 -= 4
                                                            *(edx_86 + 3) = *(esi_35 + 3)
                                                            *(edx_86 + 2) = *(esi_35 + 2)
                                                        while (temp20_1 - 1 s>= 0)
                                                    
                                                    esi_32 = var_20
                                                else
                                                    esi_32 = var_20
                                                    
                                                    if (ecx_88 s>= 0)
                                                        int32_t temp19_1
                                                        
                                                        do
                                                            esi_32[(ecx_88 << 1) + 1] = 0xff
                                                            eax_120.b = esi_32[ecx_88]
                                                            esi_32[ecx_88 << 1] = eax_120.b
                                                            temp19_1 = ecx_88
                                                            ecx_88 -= 1
                                                        while (temp19_1 - 1 s>= 0)
                                            
                                            esi_2 = &esi_32[edx_1]
                                            eax_120 = var_4c_2 + edx_1
                                            i_13 = arg7
                                            arg7 -= 1
                                            ecx_5 = arg8
                                            var_20 = esi_2
                                            var_4c_2 = eax_120
                                        while (i_13 != 1)
                                    
                                    return 1
    
    return 0
}
