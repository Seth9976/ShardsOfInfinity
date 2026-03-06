// 函数名称: sub_50caf0
// 虚拟地址: 0x50caf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_50caf0(int32_t arg1, int32_t arg2, void* arg3, void** arg4)
{
    // 第一条实际指令: void* esi = arg3
    void* esi = arg3
    int32_t __saved_ebx = 0x10000
    void* var_18 = esi
    void* i_16 = nullptr
    int32_t eax
    int32_t edx
    eax, edx = _malloc()
    
    if (eax == 0)
        return eax
    
    int32_t edx_1 = sub_50ca00(eax, edx, &i_16, 1)
    void* i_29 = i_16
    *(i_29 + *(i_29 - 4)) = 0x78
    *(i_29 - 4) += 1
    int32_t eax_3 = *(i_29 - 4) + 1
    
    if (eax_3 s>= *(i_29 - 8))
        sub_50ca00(eax_3, edx_1, &i_16, 1)
        i_29 = i_16
    
    int32_t eax_4 = *(i_29 - 4)
    int32_t var_10 = 1
    *(i_29 + eax_4) = 0x5e
    *(i_29 - 4) += 1
    int32_t i_17 = 1
    void* eax_6 = sub_50ca60(&i_17, &var_10, i_29, &i_17)
    int32_t i_44 = i_17
    var_10 |= 1 << (i_44 u% 0x20)
    i_17 = i_44 + 2
    int32_t edx_5 = eax
    void* var_14 = sub_50ca60(eax_6, &var_10, eax_6, &i_17)
    void* ebx = nullptr
    __builtin_memset(edx_5, 0, 0x10000)
    int32_t edi_6 = arg2
    void* var_1c = nullptr
    
    if (edi_6 - 3 s> 0)
        while (true)
            void* ebx_1 = ebx + esi
            uint32_t ecx_6 = zx.d(*(ebx + esi + 2)) << 8
            i_16 = 3
            char* var_2c_1 = nullptr
            uint32_t ecx_9 = ((ecx_6 + zx.d(*(ebx_1 + 1))) << 8) + zx.d(*ebx_1)
            uint32_t ecx_10 = ecx_9 ^ ecx_9 << 3
            uint32_t ecx_11 = ecx_10 + (ecx_10 u>> 5)
            uint32_t ecx_12 = ecx_11 ^ ecx_11 << 4
            uint32_t ecx_13 = ecx_12 + (ecx_12 u>> 0x11)
            uint32_t ecx_14 = ecx_13 ^ ecx_13 << 0x19
            int32_t eax_23 = ((ecx_14 u>> 6) + ecx_14) & 0x3fff
            void** ecx_15 = edx_5 + (eax_23 << 2)
            char* edx_6 = *(edx_5 + (eax_23 << 2))
            char* var_30_1 = edx_6
            int32_t eax_24
            
            if (edx_6 == 0)
                eax_24 = 0
            else
                eax_24 = *(edx_6 - 4)
            
            int32_t edi_1 = 0
            char* ecx_16 = edx_6
            void** edi_2
            
            if (eax_24 s<= 0)
                edi_2 = ecx_15
            else
                void* ecx_18 = var_1c - 0x8000
                void* var_34_1 = ecx_18
                
                do
                    char* esi_1 = *(edx_6 + (edi_1 << 2))
                    
                    if (esi_1 - var_18 s> ecx_18)
                        void* i = nullptr
                        void* edx_8 = arg2 - var_1c
                        
                        if (edx_8 s> 0)
                            while (i s< 0x102)
                                void* eax_26
                                eax_26.b = *(esi_1 + i)
                                
                                if (eax_26.b != *(ebx_1 + i))
                                    break
                                
                                i += 1
                                
                                if (i s>= edx_8)
                                    break
                        
                        edx_6 = var_30_1
                        
                        if (i s>= i_16)
                            i_16 = i
                            var_2c_1 = esi_1
                        
                        ecx_18 = var_34_1
                    
                    edi_1 += 1
                while (edi_1 s< eax_24)
                
                edi_2 = ecx_15
                ecx_16 = *edi_2
            
            if (edx_6 != 0 && *(edx_6 - 4) == 0x10)
                sub_51dd40(edx_6, &edx_6[0x20], 0x20)
                *(*edi_2 - 4) = 8
                ecx_16 = *edi_2
            
            void* esi_2
            
            if (ecx_16 == 0)
            label_50ccdf:
                esi_2 = 2
            label_50cceb:
                void* var_50_1 = (esi_2 << 2) + 8
                int32_t ecx_19 = neg.d(ecx_16)
                void* var_54_2 = sbb.d(ecx_19, ecx_19, ecx_16 != 0) & &ecx_16[0xfffffff8]
                void* eax_34 = sub_52383b()
                
                if (eax_34 != 0)
                    if (*edi_2 == 0)
                        *(eax_34 + 4) = 0
                    
                    *edi_2 = eax_34 + 8
                    *eax_34 = esi_2
            else if (*(ecx_16 - 4) + 1 s>= *(ecx_16 - 8))
                if (ecx_16 == 0)
                    goto label_50ccdf
                
                esi_2 = (*(ecx_16 - 8) << 1) + 1
                goto label_50cceb
            void* ecx_22 = *edi_2
            *(ecx_22 + (*(ecx_22 - 4) << 2)) = ebx_1
            void* eax_37 = *edi_2
            *(eax_37 - 4) += 1
            void* i_28
            
            if (var_2c_1 == 0)
            label_50cfaa:
                uint32_t ecx_47 = zx.d(*ebx_1)
                int32_t i_38
                int32_t edx_30
                
                if (*ebx_1 u> 0x8f)
                    int32_t ecx_49 = ecx_47 + 0x100
                    int32_t edx_31 = 0
                    int32_t i_19 = 9
                    int32_t i_1
                    
                    do
                        int32_t eax_86 = ecx_49 & 1
                        ecx_49 s>>= 1
                        edx_31 = (edx_31 * 2) | eax_86
                        i_1 = i_19
                        i_19 -= 1
                    while (i_1 != 1)
                    int32_t i_39 = i_17
                    edx_30 = edx_31 << i_39.b
                    i_38 = i_39 + 9
                else
                    int32_t ecx_48 = ecx_47 + 0x30
                    int32_t edx_28 = 0
                    int32_t i_18 = 8
                    int32_t i_2
                    
                    do
                        int32_t eax_84 = ecx_48 & 1
                        ecx_48 s>>= 1
                        edx_28 = (edx_28 * 2) | eax_84
                        i_2 = i_18
                        i_18 -= 1
                    while (i_2 != 1)
                    int32_t i_37 = i_17
                    edx_30 = edx_28 << i_37.b
                    i_38 = i_37 + 8
                
                var_10 |= edx_30
                i_17 = i_38
                var_14 = sub_50ca60(&i_17, &var_10, var_14, &i_17)
                i_28 = 1
            else
                void* edx_9 = var_1c
                void* esi_3 = var_18
                uint32_t ecx_27 = (((zx.d(*(edx_9 + esi_3 + 3)) << 8) + zx.d(*(edx_9 + esi_3 + 2)))
                    << 8) + zx.d(*(edx_9 + esi_3 + 1))
                uint32_t ecx_28 = ecx_27 ^ ecx_27 << 3
                uint32_t ecx_29 = ecx_28 + (ecx_28 u>> 5)
                uint32_t ecx_30 = ecx_29 ^ ecx_29 << 4
                uint32_t ecx_31 = ecx_30 + (ecx_30 u>> 0x11)
                uint32_t ecx_32 = ecx_31 ^ ecx_31 << 0x19
                void* ecx_34 = *(eax + ((((ecx_32 u>> 6) + ecx_32) & 0x3fff) << 2))
                void* var_38_2 = ecx_34
                int32_t eax_53
                
                if (ecx_34 == 0)
                    eax_53 = 0
                else
                    eax_53 = *(ecx_34 - 4)
                
                int32_t edi_3 = 0
                
                if (eax_53 s> 0)
                    void* esi_4 = edx_9 - 0x7fff
                    void* var_34_2 = esi_4
                    
                    while (true)
                        char* edx_10 = *(ecx_34 + (edi_3 << 2))
                        
                        if (edx_10 - var_18 s> esi_4)
                            int32_t i_3 = 0
                            
                            if (arg2 - var_1c - 1 s> 0)
                                while (i_3 s< 0x102)
                                    ecx_34.b = edx_10[i_3]
                                    
                                    if (ecx_34.b != *(ebx_1 + i_3 + 1))
                                        break
                                    
                                    i_3 += 1
                                    
                                    if (i_3 s>= arg2 - var_1c - 1)
                                        break
                            
                            if (i_3 s> i_16)
                                goto label_50cfaa
                            
                            ecx_34 = var_38_2
                            esi_4 = var_34_2
                        
                        edi_3 += 1
                        
                        if (edi_3 s>= eax_53)
                            edx_9 = var_1c
                            esi_3 = var_18
                            break
                
                void* i_4 = i_16
                void* i_9 = edx_9 - var_2c_1 + esi_3
                void* esi_8 = nullptr
                
                if (i_4 s> 3)
                    uint32_t eax_56
                    
                    do
                        eax_56 = zx.d(*((esi_8 << 1) + &data_59d8f4))
                        esi_8 += 1
                    while (i_4 s> eax_56 - 1)
                
                int32_t edx_11 = 0
                int32_t i_31
                int32_t edx_14
                
                if (esi_8 + 0x101 s<= 0x8f)
                    int32_t ecx_35 = esi_8 + 0x131
                    int32_t i_23 = 8
                    int32_t i_5
                    
                    do
                        int32_t eax_60 = ecx_35 & 1
                        ecx_35 s>>= 1
                        edx_11 = (edx_11 * 2) | eax_60
                        i_5 = i_23
                        i_23 -= 1
                    while (i_5 != 1)
                label_50ceb5:
                    int32_t i_33 = i_17
                    edx_14 = edx_11 << i_33.b
                    i_31 = i_33 + 8
                else if (esi_8 + 0x101 s> 0xff)
                    if (esi_8 + 0x101 s> 0x117)
                        void* ecx_38 = esi_8 + 0xa9
                        int32_t i_26 = 8
                        int32_t i_6
                        
                        do
                            void* eax_66 = ecx_38 & 1
                            ecx_38 s>>= 1
                            edx_11 = (edx_11 * 2) | eax_66
                            i_6 = i_26
                            i_26 -= 1
                        while (i_6 != 1)
                        goto label_50ceb5
                    
                    void* ecx_37 = esi_8 + 1
                    int32_t i_25 = 7
                    int32_t i_7
                    
                    do
                        void* eax_64 = ecx_37 & 1
                        ecx_37 s>>= 1
                        edx_11 = (edx_11 * 2) | eax_64
                        i_7 = i_25
                        i_25 -= 1
                    while (i_7 != 1)
                    int32_t i_32 = i_17
                    edx_14 = edx_11 << i_32.b
                    i_31 = i_32 + 7
                else
                    void* ecx_36 = esi_8 + 0x201
                    int32_t i_24 = 9
                    int32_t i_8
                    
                    do
                        void* eax_62 = ecx_36 & 1
                        ecx_36 s>>= 1
                        edx_11 = (edx_11 * 2) | eax_62
                        i_8 = i_24
                        i_24 -= 1
                    while (i_8 != 1)
                    int32_t i_30 = i_17
                    edx_14 = edx_11 << i_30.b
                    i_31 = i_30 + 9
                
                var_10 |= edx_14
                i_17 = i_31
                void* edi_4 = sub_50ca60(&i_17, &var_10, var_14, &i_17)
                void* eax_68
                eax_68.b = *(esi_8 + 0x59d8d0)
                void* var_14_1 = edi_4
                
                if (eax_68.b != 0)
                    int32_t i_34 = i_17
                    var_10 |= (i_16 - zx.d(*((esi_8 << 1) + &data_59d8f0))) << i_34.b
                    i_17 = i_34 + zx.d(eax_68.b)
                    var_14_1 = sub_50ca60(&i_17, &var_10, edi_4, &i_17)
                
                void* esi_9 = nullptr
                
                if (i_9 s> 1)
                    uint32_t eax_73
                    
                    do
                        eax_73 = zx.d(*((esi_9 << 1) + &data_59d894))
                        esi_9 += 1
                    while (i_9 s> eax_73 - 1)
                
                int32_t edx_22 = 0
                int32_t ecx_42 = esi_9
                int32_t i_27 = 5
                int32_t i_10
                
                do
                    int32_t eax_76 = ecx_42 & 1
                    ecx_42 s>>= 1
                    edx_22 = (edx_22 * 2) | eax_76
                    i_10 = i_27
                    i_27 -= 1
                while (i_10 != 1)
                int32_t i_35 = i_17
                var_10 |= edx_22 << i_35.b
                i_17 = i_35 + 5
                void* eax_78 = sub_50ca60(&i_17, &var_10, var_14_1, &i_17)
                char edx_26 = *(esi_9 + 0x59d870)
                var_14 = eax_78
                
                if (edx_26 != 0)
                    int32_t i_36 = i_17
                    var_10 |= (i_9 - zx.d(*((esi_9 << 1) + &data_59d890))) << i_36.b
                    i_17 = i_36 + zx.d(edx_26)
                    var_14 = sub_50ca60(&i_17, &var_10, eax_78, &i_17)
                
                i_28 = i_16
            
            esi = var_18
            ebx = var_1c + i_28
            var_1c = ebx
            
            if (ebx s>= edi_6 - 3)
                break
            
            edx_5 = eax
        
        edi_6 = arg2
    
    while (ebx s< edi_6)
        uint32_t ecx_51 = zx.d(*(ebx + esi))
        int32_t i_41
        int32_t edx_36
        
        if (*(ebx + esi) u> 0x8f)
            int32_t ecx_53 = ecx_51 + 0x100
            int32_t edx_37 = 0
            int32_t i_21 = 9
            int32_t i_11
            
            do
                int32_t eax_92 = ecx_53 & 1
                ecx_53 s>>= 1
                edx_37 = (edx_37 * 2) | eax_92
                i_11 = i_21
                i_21 -= 1
            while (i_11 != 1)
            int32_t i_42 = i_17
            edx_36 = edx_37 << i_42.b
            i_41 = i_42 + 9
        else
            int32_t ecx_52 = ecx_51 + 0x30
            int32_t edx_34 = 0
            int32_t i_20 = 8
            int32_t i_12
            
            do
                int32_t eax_90 = ecx_52 & 1
                ecx_52 s>>= 1
                edx_34 = (edx_34 * 2) | eax_90
                i_12 = i_20
                i_20 -= 1
            while (i_12 != 1)
            int32_t i_40 = i_17
            edx_36 = edx_34 << i_40.b
            i_41 = i_40 + 8
        
        var_10 |= edx_36
        i_17 = i_41
        esi = var_18
        ebx += 1
        var_14 = sub_50ca60(&i_17, &var_10, var_14, &i_17)
    
    int32_t i_22 = 7
    int32_t i_13
    
    do
        i_13 = i_22
        i_22 -= 1
    while (i_13 != 1)
    int32_t i_43 = i_17 + 7
    var_10 = var_10
    i_17 = i_43
    void* esi_10 = sub_50ca60(&i_17, &var_10, var_14, &i_17)
    int32_t i_14 = i_17
    void* var_38_3 = esi_10
    
    if (i_14 != 0)
        do
            i_17 = i_14 + 1
            esi_10 = sub_50ca60(&i_17, &var_10, esi_10, &i_17)
            i_14 = i_17
        while (i_14 != 0)
        
        var_38_3 = esi_10
    
    int32_t ecx_58 = eax
    
    for (int32_t i_15 = 0; i_15 s< 0x4000; i_15 += 1)
        int32_t eax_100 = *(ecx_58 + (i_15 << 2))
        
        if (eax_100 != 0)
            _free(eax_100 - 8)
            ecx_58 = eax
    
    _free(ecx_58)
    i_16 = nullptr
    int32_t ebx_7 = 1
    int32_t edi_8 = arg2 s% 0x15b0
    int32_t eax_107 = 0
    int32_t var_3c_3 = 0
    
    if (arg2 s> 0)
        void* i_45 = nullptr
        
        do
            int32_t ecx_60 = 0
            
            if (edi_8 s> 0)
                do
                    uint32_t eax_108 = zx.d(*(var_18 + eax_107 + ecx_60))
                    ecx_60 += 1
                    ebx_7 += eax_108
                    i_45 += ebx_7
                while (ecx_60 s< edi_8)
                
                i_16 = i_45
            
            ebx_7 += ebx_7 u/ 0xfff1 * 0xffff000f
            i_45 = i_16 + i_16 u/ 0xfff1 * 0xffff000f
            eax_107 = var_3c_3 + edi_8
            i_16 = i_45
            edi_8 = 0x15b0
            var_3c_3 = eax_107
        while (eax_107 s< arg2)
        
        esi_10 = var_38_3
    
    void* ecx_61
    void* edi_10
    
    if (esi_10 == 0)
        edi_10 = 2
        ecx_61 = nullptr
    label_50d1f4:
        void* var_50_12 = edi_10 + 8
        void* var_54_3 = ecx_61
        void* eax_117 = sub_52383b()
        
        if (eax_117 != 0)
            if (esi_10 == 0)
                *(eax_117 + 4) = esi_10
            
            esi_10 = eax_117 + 8
            *(esi_10 - 8) = edi_10
    else
        ecx_61 = esi_10 - 8
        int32_t edi_9 = *ecx_61
        
        if (*(esi_10 - 4) + 1 s>= edi_9)
            edi_10 = (edi_9 << 1) + 1
            goto label_50d1f4
    void* edi_11 = esi_10 - 8
    *(esi_10 + *(esi_10 - 4)) = (i_16 u>> 8).b
    *(esi_10 - 4) += 1
    int32_t ecx_64 = *edi_11
    
    if (*(esi_10 - 4) + 1 s>= ecx_64)
        void* var_50_13 = (ecx_64 << 1) + 9
        void* var_54_4 = edi_11
        void* eax_122 = sub_52383b()
        
        if (eax_122 != 0)
            esi_10 = eax_122 + 8
            edi_11 = esi_10 - 8
            *edi_11 = (ecx_64 << 1) + 1
    
    *(esi_10 + *(esi_10 - 4)) = i_16.b
    *(esi_10 - 4) += 1
    int32_t ecx_67 = *edi_11
    
    if (*(esi_10 - 4) + 1 s>= ecx_67)
        void* var_50_14 = (ecx_67 << 1) + 9
        void* var_54_5 = edi_11
        void* eax_128 = sub_52383b()
        
        if (eax_128 != 0)
            esi_10 = eax_128 + 8
            edi_11 = esi_10 - 8
            *edi_11 = (ecx_67 << 1) + 1
    
    *(esi_10 + *(esi_10 - 4)) = (ebx_7 u>> 8).b
    *(esi_10 - 4) += 1
    int32_t ecx_71 = *edi_11
    
    if (*(esi_10 - 4) + 1 s>= ecx_71)
        void* var_50_15 = (ecx_71 << 1) + 9
        void* var_54_6 = edi_11
        void* eax_134 = sub_52383b()
        
        if (eax_134 != 0)
            esi_10 = eax_134 + 8
            edi_11 = esi_10 - 8
            *edi_11 = (ecx_71 << 1) + 1
    
    *(esi_10 + *(esi_10 - 4)) = ebx_7.b
    *(esi_10 - 4) += 1
    void* edx_49 = *(esi_10 - 4)
    *arg4 = edx_49
    sub_51dd40(edi_11, esi_10, edx_49)
    return edi_11
}
