// 函数名称: sub_50b4f0
// 虚拟地址: 0x50b4f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_50b4f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i_12 = *(arg1 + 0x14)
    int32_t i_12 = *(arg1 + 0x14)
    void* eax = *(arg1 + 0x40)
    void* eax_1 = *(arg1 + 0x44)
    int32_t eax_2 = *(arg1 + 0x10)
    uint32_t (* eax_3)[0x4] = *(arg1 + 0xb8)
    int32_t esi = *(arg1 + 0x6c)
    int32_t edi = *(arg1 + 0xa8)
    int32_t eax_5 = *(arg1 + 0x60) + (*(arg1 + 0x4c) << 1)
    int32_t eax_6 = *(arg1 + 0xb0)
    uint32_t eax_8 = *(arg1 + 0xa0) u>> 2
    int32_t ebx_1 = *(esi + (arg2 << 3))
    int32_t eax_10 = *(arg1 + 0x84) * arg2
    int32_t var_3c = ebx_1
    int32_t eax_11 = *(esi + (arg2 << 3) + 4)
    int32_t i_13 = i_12
    void* eax_14 = *(arg1 + 0x1c) * arg2
    _memset(eax_3, 0, (eax * i_13) << 2)
    void* ecx_1 = eax
    int32_t edx = 0
    
    if (ecx_1 - 1 u<= 3)
        switch (ecx_1)
            case 1
                if (ebx_1 s<= eax_11)
                    int32_t eax_20 = eax_6 - edi
                    int32_t i_15 = i_13
                    int32_t var_8_1 = eax_20
                    
                    do
                        void* esi_2 = *(arg1 + 0xb4)
                            + ((mods.dp.d(sx.q(eax_20 + ebx_1), *(arg1 + 0xa4)) * eax_8) << 2)
                        int32_t edx_6 = 0
                        float xmm1_1 = *(*(arg1 + 0x70) + ((eax_10 + edx) << 2))
                        
                        if (i_15 s>= 4)
                            void* ecx_4 = esi_2 + 0xc
                            uint32_t* eax_26 = &(*eax_3)[1]
                            int32_t i_9 = ((i_12 - 4) u>> 2) + 1
                            int32_t edi_3 = i_9 << 2
                            int32_t i
                            
                            do
                                eax_26[-1] = *(ecx_4 - 0xc) * xmm1_1 f+ eax_26[-1]
                                *eax_26 = *(esi_2 - eax_3 + eax_26) * xmm1_1 f+ *eax_26
                                eax_26[1] = *(ecx_4 - 4) * xmm1_1 f+ eax_26[1]
                                float xmm0_10 = *ecx_4
                                ecx_4 += 0x10
                                eax_26[2] = xmm0_10 * xmm1_1 f+ eax_26[2]
                                eax_26 = &eax_26[4]
                                i = i_9
                                i_9 -= 1
                            while (i != 1)
                            edx_6 = edi_3
                            i_15 = i_12
                        
                        if (edx_6 s< i_15)
                            float* eax_27 = &(*eax_3)[edx_6]
                            int32_t i_6 = i_15 - edx_6
                            int32_t i_1
                            
                            do
                                *eax_27 = *(eax_27 + esi_2 - eax_3) * xmm1_1 + *eax_27
                                eax_27 = &eax_27[1]
                                i_1 = i_6
                                i_6 -= 1
                            while (i_1 != 1)
                        
                        edx += 1
                        ebx_1 += 1
                        eax_20 = var_8_1
                    while (ebx_1 s<= eax_11)
                    
                    ecx_1 = eax
            case 2
                if (ebx_1 s<= eax_11)
                    int32_t eax_29 = eax_6 - edi
                    void* edi_5 = arg1
                    int32_t var_8_2 = eax_29
                    
                    do
                        int32_t esi_4 = *(edi_5 + 0xb4)
                            + ((mods.dp.d(sx.q(eax_29 + ebx_1), *(edi_5 + 0xa4)) * eax_8) << 2)
                        float xmm1_2 = *(*(edi_5 + 0x70) + ((eax_10 + edx) << 2))
                        int32_t ecx_9 = 0
                        
                        if (i_12 s> 0)
                            uint32_t* eax_35 = &(*eax_3)[1]
                            
                            do
                                float xmm0_16 = *(esi_4 + (ecx_9 << 3))
                                ecx_9 += 1
                                eax_35[-1] = xmm0_16 * xmm1_2 f+ eax_35[-1]
                                *eax_35 = *(esi_4 - eax_3 + eax_35) * xmm1_2 f+ *eax_35
                                eax_35 = &eax_35[2]
                            while (ecx_9 s< i_12)
                            
                            edi_5 = arg1
                        
                        edx += 1
                        ebx_1 += 1
                        eax_29 = var_8_2
                    while (ebx_1 s<= eax_11)
                    
                    ecx_1 = eax
            case 3
                if (ebx_1 s<= eax_11)
                    int32_t eax_37 = eax_6 - edi
                    void* edi_8 = arg1
                    int32_t var_8_3 = eax_37
                    
                    do
                        int32_t* edx_21 = *(edi_8 + 0xb4)
                            + ((mods.dp.d(sx.q(eax_37 + ebx_1), *(edi_8 + 0xa4)) * eax_8) << 2)
                        float xmm1_3 = *(*(edi_8 + 0x70) + ((eax_10 + edx) << 2))
                        
                        if (i_13 s> 0)
                            void* esi_6 = edx_21 - eax_3
                            uint32_t* eax_43 = &(*eax_3)[1]
                            int32_t i_7 = i_12
                            int32_t i_2
                            
                            do
                                eax_43[-1] = *edx_21 * xmm1_3 f+ eax_43[-1]
                                *eax_43 = *(esi_6 + eax_43) * xmm1_3 f+ *eax_43
                                float xmm0_28 = edx_21[2]
                                edx_21 = &edx_21[3]
                                eax_43[1] = xmm0_28 * xmm1_3 f+ eax_43[1]
                                eax_43 = &eax_43[3]
                                i_2 = i_7
                                i_7 -= 1
                            while (i_2 != 1)
                            i_13 = i_12
                            edi_8 = arg1
                        
                        edx += 1
                        ebx_1 += 1
                        eax_37 = var_8_3
                    while (ebx_1 s<= eax_11)
                    
                    ecx_1 = eax
            case 4
                if (ebx_1 s<= eax_11)
                    int32_t eax_45 = eax_6 - edi
                    int32_t var_8_4 = eax_45
                    
                    do
                        void* esi_8 = *(arg1 + 0xb4)
                            + ((mods.dp.d(sx.q(eax_45 + ebx_1), *(arg1 + 0xa4)) * eax_8) << 2)
                        float xmm1_4 = *(*(arg1 + 0x70) + ((eax_10 + edx) << 2))
                        
                        if (i_13 s> 0)
                            void* ecx_15 = esi_8 + 0xc
                            uint32_t* eax_51 = &(*eax_3)[1]
                            int32_t i_10 = i_13
                            int32_t i_3
                            
                            do
                                eax_51[-1] = *(ecx_15 - 0xc) * xmm1_4 f+ eax_51[-1]
                                *eax_51 = *(esi_8 - eax_3 + eax_51) * xmm1_4 f+ *eax_51
                                eax_51[1] = *(ecx_15 - 4) * xmm1_4 f+ eax_51[1]
                                float xmm0_40 = *ecx_15
                                ecx_15 += 0x10
                                eax_51[2] = xmm0_40 * xmm1_4 f+ eax_51[2]
                                eax_51 = &eax_51[4]
                                i_3 = i_10
                                i_10 -= 1
                            while (i_3 != 1)
                        
                        edx += 1
                        ebx_1 += 1
                        eax_45 = var_8_4
                    while (ebx_1 s<= eax_11)
                    
                    ecx_1 = eax
    else if (ebx_1 s<= eax_11)
        int32_t eax_53 = eax_6 - edi
        int32_t var_8_5 = eax_53
        
        do
            void* edi_11 =
                *(arg1 + 0xb4) + ((mods.dp.d(sx.q(eax_53 + ebx_1), *(arg1 + 0xa4)) * eax_8) << 2)
            float xmm1_5 = *(*(arg1 + 0x70) + ((eax_10 + edx) << 2))
            ecx_1 = eax
            
            if (i_13 s> 0)
                uint32_t (* edx_33)[0x4] = eax_3
                void* eax_59 = edi_11 + 8
                void* esi_10 = nullptr
                void* var_2c_1 = nullptr
                void* var_30_1 = eax_59
                uint32_t* ebx_2 = &(*edx_33)[1]
                int32_t i_14 = i_12
                
                while (true)
                    int32_t edi_13 = 0
                    
                    if (ecx_1 s>= 4)
                        void* ecx_18 = eax_59
                        uint32_t* eax_60 = ebx_2
                        int32_t i_11 = ((eax - 4) u>> 2) + 1
                        edi_13 = i_11 << 2
                        int32_t i_4
                        
                        do
                            eax_60[-1] = *(ecx_18 - 8) * xmm1_5 f+ eax_60[-1]
                            *eax_60 = *(edi_11 - edx_33 + eax_60) * xmm1_5 f+ *eax_60
                            eax_60[1] = *ecx_18 * xmm1_5 f+ eax_60[1]
                            float xmm0_52 = *(ecx_18 + 4)
                            ecx_18 += 0x10
                            eax_60[2] = xmm0_52 * xmm1_5 f+ eax_60[2]
                            eax_60 = &eax_60[4]
                            i_4 = i_11
                            i_11 -= 1
                        while (i_4 != 1)
                        esi_10 = var_2c_1
                        eax_59 = var_30_1
                        ecx_1 = eax
                        edx_33 = eax_3
                    
                    if (edi_13 s< ecx_1)
                        void* eax_62 = &(*edx_33)[esi_10 + edi_13]
                        void* edx_38 = edi_11 - *(arg1 + 0xb8)
                        void* i_8 = ecx_1 - edi_13
                        esi_10 = var_2c_1
                        void* i_5
                        
                        do
                            *eax_62 = *(eax_62 + edx_38) * xmm1_5 f+ *eax_62
                            eax_62 += 4
                            i_5 = i_8
                            i_8 -= 1
                        while (i_5 != 1)
                        eax_59 = var_30_1
                        ecx_1 = eax
                    
                    esi_10 += ecx_1
                    eax_59 += ecx_1 << 2
                    var_2c_1 = esi_10
                    ebx_2 = &ebx_2[ecx_1]
                    var_30_1 = eax_59
                    int32_t i_16 = i_14
                    i_14 -= 1
                    
                    if (i_16 == 1)
                        break
                    
                    edx_33 = eax_3
                
                ebx_1 = var_3c
                i_13 = i_12
            
            edx += 1
            ebx_1 += 1
            eax_53 = var_8_5
            var_3c = ebx_1
        while (ebx_1 s<= eax_11)
    
    void* eax_64 = eax_14 + eax_2
    int32_t result
    int80_t st0
    st0, result = sub_50a640(eax_64, i_12, arg1, eax_64, eax_3, ecx_1, eax_1, eax_5)
    return result
}
