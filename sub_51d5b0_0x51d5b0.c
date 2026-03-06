// 函数名称: sub_51d5b0
// 虚拟地址: 0x51d5b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_51d5b0(char* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: char* esi = arg2
    char* esi = arg2
    void* count = arg3
    char* edi = arg1
    int32_t eax_1
    
    if (edi u> esi && edi u< count + esi)
        int128_t* esi_5 = esi + count
        int128_t* edi_1 = edi + count
        
        if (count u>= 0x20)
            if (test_bit(data_5b0080, 1))
                while ((edi_1 & 0xf) != 0)
                    count -= 1
                    esi_5 -= 1
                    edi_1 -= 1
                    eax_1.b = *esi_5
                    *edi_1 = eax_1.b
                
                while (count u>= 0x80)
                    esi_5 -= 0x80
                    edi_1 -= 0x80
                    int128_t xmm1_7 = esi_5[1]
                    int128_t xmm2_4 = esi_5[2]
                    int128_t xmm3_7 = esi_5[3]
                    int128_t xmm4_4 = esi_5[4]
                    int128_t xmm5_7 = esi_5[5]
                    int128_t xmm6_1 = esi_5[6]
                    int128_t xmm7_1 = esi_5[7]
                    *edi_1 = *esi_5
                    edi_1[1] = xmm1_7
                    edi_1[2] = xmm2_4
                    edi_1[3] = xmm3_7
                    edi_1[4] = xmm4_4
                    edi_1[5] = xmm5_7
                    edi_1[6] = xmm6_1
                    edi_1[7] = xmm7_1
                    count -= 0x80
                    
                    if ((count & 0xffffff80) == 0)
                        break
                
                if (count u>= 0x20)
                    do
                        esi_5 -= 0x20
                        edi_1 -= 0x20
                        int128_t xmm1_8 = esi_5[1]
                        *edi_1 = *esi_5
                        edi_1[1] = xmm1_8
                        count -= 0x20
                    while ((count & 0xffffffe0) != 0)
            else
                if ((edi_1 & 3) != 0)
                    void* i_12 = edi_1 & 3
                    count -= i_12
                    void* i
                    
                    do
                        eax_1.b = *(esi_5 - 1)
                        *(edi_1 - 1) = eax_1.b
                        esi_5 -= 1
                        edi_1 -= 1
                        i = i_12
                        i_12 -= 1
                    while (i != 1)
                
                if (count u>= 0x20)
                    uint32_t ecx_1 = count u>> 2
                    void* esi_7
                    void* edi_3
                    edi_3, esi_7 =
                        __builtin_memcpy(edi_1 - 4 - (ecx_1 << 2), esi_5 - 4 - (ecx_1 << 2), ecx_1 << 2)
                    
                    switch (count & 3)
                        case nullptr
                            return arg1
                        case 1
                            eax_1.b = *(esi_7 + 3)
                            *(edi_3 + 3) = eax_1.b
                            return arg1
                        case 2
                            eax_1.b = *(esi_7 + 3)
                            *(edi_3 + 3) = eax_1.b
                            eax_1.b = *(esi_7 + 2)
                            *(edi_3 + 2) = eax_1.b
                            return arg1
                        case 3
                            eax_1.b = *(esi_7 + 3)
                            *(edi_3 + 3) = eax_1.b
                            eax_1.b = *(esi_7 + 2)
                            *(edi_3 + 2) = eax_1.b
                            eax_1.b = *(esi_7 + 1)
                            *(edi_3 + 1) = eax_1.b
                            return arg1
        
        while ((count & 0xfffffffc) != 0)
            edi_1 -= 4
            esi_5 -= 4
            *edi_1 = *esi_5
            count -= 4
        
        if (count != 0)
            void* i_1
            
            do
                edi_1 -= 1
                esi_5 -= 1
                eax_1.b = *esi_5
                *edi_1 = eax_1.b
                i_1 = count
                count -= 1
            while (i_1 != 1)
        
        return arg1
    
    if (count u< 0x20)
    label_51daab:
        void* ecx_2 = count & 0x1f
        
        if (ecx_2 != 0)
            uint32_t i_9 = ecx_2 u>> 2
            
            if (i_9 != 0)
                uint32_t i_2
                
                do
                    *edi = *esi
                    edi = &edi[4]
                    esi = &esi[4]
                    i_2 = i_9
                    i_9 -= 1
                while (i_2 != 1)
            
            void* i_10 = ecx_2 & 3
            
            if (i_10 != 0)
                void* i_3
                
                do
                    void* eax_17
                    eax_17.b = *esi
                    *edi = eax_17.b
                    esi = &esi[1]
                    edi = &edi[1]
                    i_3 = i_10
                    i_10 -= 1
                while (i_3 != 1)
    else
        char* esi_2
        
        if (count u>= 0x80)
            if (test_bit(data_65a2f8, 1))
                __builtin_memcpy(edi, esi, count)
                return arg1
            
            if (((edi ^ esi) & 0xf) == 0 && test_bit(data_5b0080, 1))
                void* eax_16 = esi & 0xf
                
                if (eax_16 != 0)
                    void* i_11 = (0x10 - eax_16) & 3
                    
                    if (i_11 != 0)
                        void* i_4
                        
                        do
                            void* edx_8
                            edx_8.b = *esi
                            *edi = edx_8.b
                            esi = &esi[1]
                            edi = &edi[1]
                            i_4 = i_11
                            i_11 -= 1
                        while (i_4 != 1)
                    
                    uint32_t i_8 = (0x10 - eax_16) u>> 2
                    
                    if (i_8 != 0)
                        uint32_t i_5
                        
                        do
                            *edi = *esi
                            esi = &esi[4]
                            edi = &edi[4]
                            i_5 = i_8
                            i_8 -= 1
                        while (i_5 != 1)
                    
                    count -= 0x10 - eax_16
                
                void* count_1 = count
                count &= 0x7f
                uint32_t i_13 = count_1 u>> 7
                
                if (i_13 != 0)
                    uint32_t i_6
                    
                    do
                        int128_t xmm1_9 = *(esi + 0x10)
                        int128_t xmm2_5 = *(esi + 0x20)
                        int128_t xmm3_8 = *(esi + 0x30)
                        *edi = *esi
                        *(edi + 0x10) = xmm1_9
                        *(edi + 0x20) = xmm2_5
                        *(edi + 0x30) = xmm3_8
                        int128_t xmm5_8 = *(esi + 0x50)
                        int128_t xmm6_2 = *(esi + 0x60)
                        int128_t xmm7_2 = *(esi + 0x70)
                        *(edi + 0x40) = *(esi + 0x40)
                        *(edi + 0x50) = xmm5_8
                        *(edi + 0x60) = xmm6_2
                        *(edi + 0x70) = xmm7_2
                        esi = &esi[0x80]
                        edi = &edi[0x80]
                        i_6 = i_13
                        i_13 -= 1
                    while (i_6 != 1)
                
                goto label_51da7d
            
            if (not(test_bit(data_65a2f8, 0)) || (edi & 3) != 0)
                goto label_51d7d7
            
            if ((esi & 3) != 0)
                goto label_51d7f4
            
            if (test_bit(edi, 2))
                int32_t eax_4 = *esi
                count -= 4
                esi = &esi[4]
                *edi = eax_4
                edi = &edi[4]
            
            if (test_bit(edi, 3))
                int64_t xmm1_1 = *esi
                count -= 8
                esi = &esi[8]
                *edi = xmm1_1
                edi = &edi[8]
            
            if ((esi & 7) == 0)
                int128_t xmm1_3 = *(esi - 8)
                void* esi_3 = &esi[0xfffffff8]
                
                do
                    int128_t xmm3_3 = *(esi_3 + 0x10)
                    count -= 0x30
                    int128_t xmm0_3 = *(esi_3 + 0x20)
                    int128_t xmm5_3 = *(esi_3 + 0x30)
                    esi_3 += 0x30
                    *edi = xmm1_3 u>> 0x40 | xmm3_3 << 0x40
                    *(edi + 0x10) = xmm3_3 u>> 0x40 | xmm0_3 << 0x40
                    xmm1_3 = xmm5_3
                    *(edi + 0x20) = xmm0_3 u>> 0x40 | xmm5_3 << 0x40
                    edi = &edi[0x30]
                while (count u>= 0x30)
                
                esi_2 = esi_3 + 8
            else if (not(test_bit(esi, 3)))
                int128_t xmm1_4 = *(esi - 4)
                void* esi_4 = &esi[0xfffffffc]
                
                do
                    int128_t xmm3_5 = *(esi_4 + 0x10)
                    count -= 0x30
                    int128_t xmm0_5 = *(esi_4 + 0x20)
                    int128_t xmm5_5 = *(esi_4 + 0x30)
                    esi_4 += 0x30
                    *edi = xmm1_4 u>> 0x20 | xmm3_5 << 0x60
                    *(edi + 0x10) = xmm3_5 u>> 0x20 | xmm0_5 << 0x60
                    xmm1_4 = xmm5_5
                    *(edi + 0x20) = xmm0_5 u>> 0x20 | xmm5_5 << 0x60
                    edi = &edi[0x30]
                while (count u>= 0x30)
                
                esi_2 = esi_4 + 4
            else
                int128_t xmm1_2 = *(esi - 0xc)
                void* esi_1 = &esi[0xfffffff4]
                
                do
                    int128_t xmm3_1 = *(esi_1 + 0x10)
                    count -= 0x30
                    int128_t xmm0_1 = *(esi_1 + 0x20)
                    int128_t xmm5_1 = *(esi_1 + 0x30)
                    esi_1 += 0x30
                    *edi = xmm1_2 u>> 0x60 | xmm3_1 << 0x20
                    *(edi + 0x10) = xmm3_1 u>> 0x60 | xmm0_1 << 0x20
                    xmm1_2 = xmm5_1
                    *(edi + 0x20) = xmm0_1 u>> 0x60 | xmm5_1 << 0x20
                    edi = &edi[0x30]
                while (count u>= 0x30)
                
                esi_2 = esi_1 + 0xc
            
            while (count u>= 0x10)
                int128_t xmm1_5 = *esi_2
                count -= 0x10
                esi_2 = &esi_2[0x10]
                *edi = xmm1_5
                edi = &edi[0x10]
            
            if (test_bit(count, 2))
                int32_t eax_5 = *esi_2
                count -= 4
                esi_2 = &esi_2[4]
                *edi = eax_5
                edi = &edi[4]
            
            if (test_bit(count, 3))
                int64_t xmm1_6 = *esi_2
                count -= 8
                esi_2 = &esi_2[8]
                *edi = xmm1_6
                edi = &edi[8]
            
            switch (count)
                case 1
                    goto label_51d82c
                case 2
                    goto label_51d838
                case 3
                    goto label_51d84c
        else if (test_bit(data_5b0080, 1))
        label_51da7d:
            
            if (count != 0)
                uint32_t i_14 = count u>> 5
                
                if (i_14 != 0)
                    uint32_t i_7
                    
                    do
                        int128_t xmm1_10 = *(esi + 0x10)
                        *edi = *esi
                        *(edi + 0x10) = xmm1_10
                        esi = &esi[0x20]
                        edi = &edi[0x20]
                        i_7 = i_14
                        i_14 -= 1
                    while (i_7 != 1)
                
                goto label_51daab
        else
        label_51d7d7:
            
            while ((edi & 3) != 0)
                eax_1.b = *esi
                *edi = eax_1.b
                count -= 1
                esi = &esi[1]
                edi = &edi[1]
            
        label_51d7f4:
            
            if (count u< 0x20)
                goto label_51daab
            
            edi, esi_2 = __builtin_memcpy(edi, esi, count u>> 2 << 2)
            
            switch (count & 3)
                case 1
                label_51d82c:
                    eax_1.b = *esi_2
                    *edi = eax_1.b
                case 2
                label_51d838:
                    eax_1.b = *esi_2
                    *edi = eax_1.b
                    eax_1.b = esi_2[1]
                    edi[1] = eax_1.b
                case 3
                label_51d84c:
                    eax_1.b = *esi_2
                    *edi = eax_1.b
                    eax_1.b = esi_2[1]
                    edi[1] = eax_1.b
                    eax_1.b = esi_2[2]
                    edi[2] = eax_1.b
    
    return arg1
}
