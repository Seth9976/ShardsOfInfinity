// 函数名称: sub_5090c0
// 虚拟地址: 0x5090c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5090c0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x4c)
    int32_t eax = *(arg1 + 0x4c)
    int32_t eax_1 = *(arg1 + 4)
    int32_t i_37 = *(arg1 + 0x40)
    int32_t i_36 = *(arg1 + 0x90)
    int32_t i_28 = i_36
    int32_t edx = *(arg1 + 0x44)
    int32_t var_18 = edx
    int32_t eax_4 = *(arg1 + 0x78) + ((i_36 * i_37) << 2)
    int32_t eax_5 = *(arg1 + 0x58)
    int32_t i_15 = *(arg1 + 8)
    int32_t ecx_3
    
    if (arg2 s< 0 || arg2 s>= i_15)
        edx = var_18
        ecx_3 = sub_508340(i_15, arg2, *(arg1 + 0x5c), i_15)
    else
        ecx_3 = arg2
    
    void* ecx_6 = ecx_3 * *(arg1 + 0xc) + *arg1
    int32_t i_34 = eax_1 + *(arg1 + 0x90)
    int32_t ecx_9 = *(arg1 + 0x60) + (*(arg1 + 0x4c) << 1)
    int32_t esi_2 = neg.d(*(arg1 + 0x90))
    int32_t i_35 = i_37
    int32_t var_28 = esi_2
    
    if (*(arg1 + 0x5c) != 4 || (arg2 s>= 0 && arg2 s< i_15))
        if (ecx_9 u> 7)
            i_15 = i_34
        else
            switch (ecx_9)
                case 0
                    i_15 = i_34
                    
                    if (esi_2 s< i_15)
                        int32_t eax_10 = esi_2 * i_35
                        int32_t var_2c_1 = eax_10
                        void* edx_3 = eax_4 + (eax_10 << 2)
                        void* var_30_1 = edx_3
                        
                        do
                            int32_t edi_3
                            
                            if (esi_2 s< 0 || esi_2 s>= eax_1)
                                edx_3 = var_30_1
                                edi_3 = sub_508340(eax_1, esi_2, eax_5, eax_1)
                            else
                                edi_3 = esi_2
                            
                            void* edi_5 = edi_3 * i_35
                            int32_t i = 0
                            
                            if (i_35 s>= 4)
                                void* edi_4 = edi_5 + ecx_6
                                int32_t var_3c_1 = i_35 - 3
                                
                                do
                                    edx_3 += 0x10
                                    *(edx_3 - 0x10) = _mm_cvtepi32_ps(zx.o(*(edi_4 + i))) / 255f
                                    *(edx_3 - 0xc) = _mm_cvtepi32_ps(zx.o(*(edi_4 + i + 1))) / 255f
                                    *(edx_3 - 8) = _mm_cvtepi32_ps(zx.o(*(edi_4 + i + 2))) / 255f
                                    uint32_t eax_17 = zx.d(*(edi_4 + i + 3))
                                    i += 4
                                    *(edx_3 - 4) = _mm_cvtepi32_ps(zx.o(eax_17)) / 255f
                                while (i s< i_35 - 3)
                                
                                i_35 = i_37
                            
                            if (i s< i_35)
                                void* edx_6 = eax_4 + ((var_2c_1 + i) << 2)
                                
                                do
                                    uint32_t eax_20 = zx.d(*(edi_5 + ecx_6 + i))
                                    edx_6 += 4
                                    i += 1
                                    *(edx_6 - 4) = _mm_cvtepi32_ps(zx.o(eax_20)) / 255f
                                while (i s< i_35)
                            
                            var_2c_1 += i_35
                            esi_2 += 1
                            i_15 = i_34
                            edx_3 = var_30_1 + (i_35 << 2)
                            var_30_1 = edx_3
                        while (esi_2 s< i_15)
                case 1
                    i_15 = i_34
                    
                    if (esi_2 s< i_15)
                        int32_t ecx_16 = esi_2 * i_35
                        int32_t eax_23 = *(arg1 + 0x48) & 2
                        int32_t var_30_2 = ecx_16
                        void* edx_8 = eax_4 + (ecx_16 << 2)
                        void* var_34_2 = edx_8
                        void* var_2c_2 = eax_4 + ((var_18 + ecx_16) << 2)
                        
                        do
                            int32_t edi_8
                            
                            if (esi_2 s< 0 || esi_2 s>= eax_1)
                                edx_8 = var_34_2
                                edi_8 = sub_508340(eax_1, esi_2, eax_5, eax_1)
                            else
                                edi_8 = esi_2
                            
                            void* edi_10 = edi_8 * i_35
                            int32_t i_1 = 0
                            void* var_3c_2 = edi_10
                            
                            if (i_35 s>= 4)
                                void* edi_9 = edi_10 + ecx_6
                                int32_t var_40_1 = i_35 - 3
                                
                                do
                                    edx_8 += 0x10
                                    *(edx_8 - 0x10) = *((zx.d(*(edi_9 + i_1)) << 2) + &data_5733d8)
                                    *(edx_8 - 0xc) = *((zx.d(*(edi_9 + i_1 + 1)) << 2) + &data_5733d8)
                                    *(edx_8 - 8) = *((zx.d(*(edi_9 + i_1 + 2)) << 2) + &data_5733d8)
                                    uint32_t eax_36 = zx.d(*(edi_9 + i_1 + 3))
                                    i_1 += 4
                                    *(edx_8 - 4) = *((eax_36 << 2) + &data_5733d8)
                                while (i_1 s< i_35 - 3)
                                
                                i_35 = i_37
                                edi_10 = var_3c_2
                            
                            if (i_1 s< i_35)
                                void* edx_11 = eax_4 + ((var_30_2 + i_1) << 2)
                                void* eax_41 = ecx_6 + edi_10
                                void* var_40_2 = eax_41
                                
                                do
                                    uint32_t eax_42 = zx.d(*(eax_41 + i_1))
                                    edx_11 += 4
                                    i_1 += 1
                                    *(edx_11 - 4) = *((eax_42 << 2) + &data_5733d8)
                                while (i_1 s< i_35)
                                
                                edi_10 = var_3c_2
                            
                            float* eax_47
                            
                            if (eax_23 != 0)
                                eax_47 = var_2c_2
                            else
                                eax_47 = var_2c_2
                                *eax_47 = _mm_cvtepi32_ps(zx.o(*(ecx_6 + edi_10 + var_18))) / 255f
                            
                            var_30_2 += i_35
                            esi_2 += 1
                            var_2c_2 = &eax_47[i_35]
                            i_15 = i_34
                            edx_8 = var_34_2 + (i_35 << 2)
                            var_34_2 = edx_8
                        while (esi_2 s< i_15)
                case 2
                    i_15 = i_34
                    
                    if (esi_2 s< i_15)
                        int32_t eax_50 = esi_2 * i_35
                        int32_t var_30_3 = eax_50
                        void* eax_51 = eax_4 + (eax_50 << 2)
                        void* var_2c_3 = eax_51
                        
                        do
                            int32_t edx_13
                            
                            if (esi_2 s< 0 || esi_2 s>= eax_1)
                                edx_13 = sub_508340(eax_51, esi_2, eax_5, eax_1)
                                eax_51 = var_2c_3
                            else
                                edx_13 = esi_2
                            
                            int32_t edx_16 = edx_13 * i_35
                            int32_t edi_13 = 0
                            int32_t var_34_3 = 0
                            
                            if (i_35 s>= 4)
                                void* ecx_21 = eax_51
                                int32_t i_21 = ((i_35 - 4) u>> 2) + 1
                                int16_t* edx_15 = ecx_6 + (edx_16 << 1)
                                var_34_3 = i_21 << 2
                                int32_t i_2
                                
                                do
                                    uint32_t eax_55 = zx.d(*edx_15)
                                    edx_15 = &edx_15[4]
                                    ecx_21 += 0x10
                                    *(ecx_21 - 0x10) = _mm_cvtepi32_ps(zx.o(eax_55)) / 65535f
                                    *(ecx_21 - 0xc) = _mm_cvtepi32_ps(zx.o(edx_15[-3])) / 65535f
                                    *(ecx_21 - 8) = _mm_cvtepi32_ps(zx.o(edx_15[-2])) / 65535f
                                    *(ecx_21 - 4) = _mm_cvtepi32_ps(zx.o(edx_15[-1])) / 65535f
                                    i_2 = i_21
                                    i_21 -= 1
                                while (i_2 != 1)
                                edi_13 = var_34_3
                            
                            if (edi_13 s< i_35)
                                void* ecx_23 = eax_4 + ((var_30_3 + edi_13) << 2)
                                int32_t i_22 = i_35 - var_34_3
                                int16_t* edx_18 = ecx_6 + ((edx_16 + edi_13) << 1)
                                int32_t i_3
                                
                                do
                                    uint32_t eax_62 = zx.d(*edx_18)
                                    edx_18 = &edx_18[1]
                                    ecx_23 += 4
                                    *(ecx_23 - 4) = _mm_cvtepi32_ps(zx.o(eax_62)) / 65535f
                                    i_3 = i_22
                                    i_22 -= 1
                                while (i_3 != 1)
                            
                            var_30_3 += i_35
                            esi_2 += 1
                            eax_51 = var_2c_3 + (i_35 << 2)
                            var_2c_3 = eax_51
                        while (esi_2 s< i_34)
                        
                        i_15 = i_34
                case 3
                    i_15 = i_34
                    
                    if (esi_2 s< i_15)
                        int32_t eax_80 = *(arg1 + 0x48) & 2
                        int32_t eax_82 = esi_2 * i_35
                        float* ecx_33 = eax_4 + (eax_82 << 2)
                        float* var_34_5 = ecx_33
                        float* edi_22 = eax_4 + ((eax_82 + edx) << 2)
                        float* var_2c_4 = edi_22
                        
                        do
                            int32_t eax_85
                            
                            if (esi_2 s< 0 || esi_2 s>= eax_1)
                                eax_85 = sub_508340(eax_1, esi_2, eax_5, eax_1)
                                ecx_33 = var_34_5
                            else
                                eax_85 = esi_2
                            
                            int32_t eax_87 = eax_85 * i_35
                            
                            if (i_35 s> 0)
                                float* var_3c_3 = ecx_33
                                int16_t* edi_23 = ecx_6 + (eax_87 << 1)
                                int32_t i_19 = i_35
                                int32_t i_29 = i_19
                                int32_t i_4
                                
                                do
                                    float xmm0_46 = _mm_cvtepi32_ps(zx.o(*edi_23)) / 65535f
                                    float xmm0_47
                                    
                                    if (0.0404499993f < xmm0_46)
                                        ecx_33 = var_3c_3
                                        i_19 = i_29
                                        xmm0_47 = fconvert.s(sub_414580(
                                            (xmm0_46 + 0.0549999997f) / 1.05499995f, 0x4019999a))
                                    else
                                        xmm0_47 = xmm0_46 / 12.9200001f
                                    
                                    *ecx_33 = xmm0_47
                                    edi_23 = &edi_23[1]
                                    ecx_33 = &ecx_33[1]
                                    i_4 = i_19
                                    i_19 -= 1
                                    var_3c_3 = ecx_33
                                    i_29 = i_19
                                while (i_4 != 1)
                                edi_22 = var_2c_4
                            
                            if (eax_80 == 0)
                                *edi_22 =
                                    _mm_cvtepi32_ps(zx.o(*(ecx_6 + ((eax_87 + var_18) << 1)))) / 65535f
                            
                            i_15 = i_34
                            esi_2 += 1
                            edi_22 = &edi_22[i_35]
                            ecx_33 = &var_34_5[i_35]
                            var_2c_4 = edi_22
                            var_34_5 = ecx_33
                        while (esi_2 s< i_15)
                case 4
                    i_15 = i_34
                    
                    if (esi_2 s< i_15)
                        double xmm1_2 = 4294967295.0
                        int32_t eax_91 = esi_2 * i_35
                        int32_t var_30_5 = eax_91
                        int32_t* eax_92 = eax_4 + (eax_91 << 2)
                        int32_t* var_2c_5 = eax_92
                        
                        do
                            int32_t edx_28
                            
                            if (esi_2 s< 0 || esi_2 s>= eax_1)
                                edx_28 = sub_508340(eax_92, esi_2, eax_5, eax_1)
                                eax_92 = var_2c_5
                            else
                                edx_28 = esi_2
                            
                            int32_t edi_24 = 0
                            int32_t edx_30 = edx_28 * i_35
                            int32_t var_34_6 = 0
                            
                            if (i_35 s>= 4)
                                int32_t* edi_25 = eax_92
                                int32_t i_16 = ((i_35 - 4) u>> 2) + 1
                                int32_t* eax_95 = ecx_6 + (edx_30 << 2)
                                int32_t* var_48_2 = eax_95
                                int32_t* ebx_6 = eax_95
                                var_34_6 = i_16 << 2
                                int32_t i_5
                                
                                do
                                    int32_t eax_97 = *ebx_6
                                    *edi_25 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_97)) f+
                                        *((eax_97 u>> 0x1f << 3) + &data_59e4f0)) / xmm1_2)
                                    int32_t eax_99 = ebx_6[1]
                                    edi_25[1] = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_99)) f+
                                        *((eax_99 u>> 0x1f << 3) + &data_59e4f0)) / xmm1_2)
                                    int32_t eax_101 = ebx_6[2]
                                    edi_25[2] = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_101)) f+
                                        *((eax_101 u>> 0x1f << 3) + &data_59e4f0)) / xmm1_2)
                                    int32_t eax_103 = ebx_6[3]
                                    ebx_6 = &ebx_6[4]
                                    edi_25[3] = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_103)) f+
                                        *((eax_103 u>> 0x1f << 3) + &data_59e4f0)) / xmm1_2)
                                    edi_25 = &edi_25[4]
                                    i_5 = i_16
                                    i_16 -= 1
                                while (i_5 != 1)
                                i_35 = i_37
                                edi_24 = var_34_6
                            
                            if (edi_24 s< i_35)
                                int32_t* ecx_42 = eax_4 + ((var_30_5 + edi_24) << 2)
                                int32_t i_24 = i_35 - var_34_6
                                int32_t* edx_32 = ecx_6 + ((edx_30 + edi_24) << 2)
                                int32_t i_6
                                
                                do
                                    int32_t eax_108 = *edx_32
                                    edx_32 = &edx_32[1]
                                    *ecx_42 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_108)) f+
                                        *((eax_108 u>> 0x1f << 3) + &data_59e4f0)) / xmm1_2)
                                    ecx_42 = &ecx_42[1]
                                    i_6 = i_24
                                    i_24 -= 1
                                while (i_6 != 1)
                            
                            var_30_5 += i_35
                            esi_2 += 1
                            eax_92 = &var_2c_5[i_35]
                            var_2c_5 = eax_92
                        while (esi_2 s< i_34)
                        
                        i_15 = i_34
                case 5
                    i_15 = i_34
                    
                    if (esi_2 s< i_15)
                        double xmm1_3 = 4294967295.0
                        int32_t eax_113 = *(arg1 + 0x48) & 2
                        int32_t eax_115 = esi_2 * i_35
                        float* edi_27 = eax_4 + (eax_115 << 2)
                        float* var_30_6 = edi_27
                        void* var_34_7 = eax_4 + ((eax_115 + edx) << 2)
                        
                        do
                            int32_t eax_119
                            
                            if (esi_2 s< 0 || esi_2 s>= eax_1)
                                eax_119 = sub_508340(eax_1, esi_2, eax_5, eax_1)
                            else
                                eax_119 = esi_2
                            
                            int32_t eax_123 = eax_119 * i_35
                            
                            if (i_35 s> 0)
                                int32_t* eax_120 = ecx_6 + (eax_123 << 2)
                                int32_t i_17 = i_35
                                int32_t* var_48_3 = eax_120
                                int32_t* ebx_7 = eax_120
                                int32_t i_27 = i_17
                                int32_t i_7
                                
                                do
                                    int32_t eax_121 = *ebx_7
                                    float xmm0_82 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_121)) f+
                                        *((eax_121 u>> 0x1f << 3) + &data_59e4f0)) / xmm1_3)
                                    float xmm0_83
                                    
                                    if (0.0404499993f < xmm0_82)
                                        xmm1_3 = 4294967295.0
                                        i_17 = i_27
                                        xmm0_83 = fconvert.s(sub_414580(
                                            (xmm0_82 + 0.0549999997f) / 1.05499995f, 0x4019999a))
                                    else
                                        xmm0_83 = xmm0_82 / 12.9200001f
                                    
                                    *edi_27 = xmm0_83
                                    ebx_7 = &ebx_7[1]
                                    edi_27 = &edi_27[1]
                                    i_7 = i_17
                                    i_17 -= 1
                                    i_27 = i_17
                                while (i_7 != 1)
                                i_35 = i_37
                                edi_27 = var_30_6
                            
                            int32_t* eax_127
                            
                            if (eax_113 != 0)
                                eax_127 = var_34_7
                            else
                                int32_t eax_125 = *(ecx_6 + ((eax_123 + var_18) << 2))
                                eax_127 = var_34_7
                                *eax_127 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_125)) f+
                                    *((eax_125 u>> 0x1f << 3) + &data_59e4f0)) / xmm1_3)
                            
                            esi_2 += 1
                            edi_27 = &edi_27[i_35]
                            var_34_7 = &eax_127[i_35]
                            i_15 = i_34
                            var_30_6 = edi_27
                        while (esi_2 s< i_15)
                case 6
                    i_15 = i_34
                    
                    if (esi_2 s< i_15)
                        int32_t eax_130 = esi_2 * i_35
                        int32_t var_30_7 = eax_130
                        int32_t* eax_131 = eax_4 + (eax_130 << 2)
                        int32_t* var_2c_6 = eax_131
                        
                        do
                            int32_t edx_34
                            
                            if (esi_2 s< 0 || esi_2 s>= eax_1)
                                edx_34 = sub_508340(eax_131, esi_2, eax_5, eax_1)
                                eax_131 = var_2c_6
                            else
                                edx_34 = esi_2
                            
                            int32_t edx_37 = edx_34 * i_35
                            int32_t edi_28 = 0
                            int32_t var_34_8 = 0
                            
                            if (i_35 s>= 4)
                                int32_t* ecx_51 = eax_131
                                int32_t i_25 = ((i_35 - 4) u>> 2) + 1
                                int32_t* edx_36 = ecx_6 + (edx_37 << 2)
                                var_34_8 = i_25 << 2
                                int32_t i_8
                                
                                do
                                    int32_t eax_135 = *edx_36
                                    edx_36 = &edx_36[4]
                                    *ecx_51 = eax_135
                                    ecx_51 = &ecx_51[4]
                                    ecx_51[-3] = edx_36[-3]
                                    ecx_51[-2] = edx_36[-2]
                                    ecx_51[-1] = edx_36[-1]
                                    i_8 = i_25
                                    i_25 -= 1
                                while (i_8 != 1)
                                edi_28 = var_34_8
                            
                            if (edi_28 s< i_35)
                                int32_t* ecx_53 = eax_4 + ((var_30_7 + edi_28) << 2)
                                int32_t i_26 = i_35 - var_34_8
                                int32_t* edx_39 = ecx_6 + ((edx_37 + edi_28) << 2)
                                int32_t i_9
                                
                                do
                                    int32_t eax_142 = *edx_39
                                    edx_39 = &edx_39[1]
                                    *ecx_53 = eax_142
                                    ecx_53 = &ecx_53[1]
                                    i_9 = i_26
                                    i_26 -= 1
                                while (i_9 != 1)
                            
                            var_30_7 += i_35
                            esi_2 += 1
                            eax_131 = &var_2c_6[i_35]
                            var_2c_6 = eax_131
                        while (esi_2 s< i_34)
                        
                        i_15 = i_34
                case 7
                    i_15 = i_34
                    
                    if (esi_2 s< i_15)
                        int32_t eax_146 = *(arg1 + 0x48) & 2
                        int32_t eax_148 = esi_2 * i_35
                        float* edx_40 = eax_4 + (eax_148 << 2)
                        float* var_34_9 = edx_40
                        int32_t* edi_33 = eax_4 + ((eax_148 + var_18) << 2)
                        int32_t* var_2c_7 = edi_33
                        
                        do
                            int32_t ecx_55
                            
                            if (esi_2 s< 0 || esi_2 s>= eax_1)
                                edx_40 = var_34_9
                                ecx_55 = sub_508340(eax_1, esi_2, eax_5, eax_1)
                            else
                                ecx_55 = esi_2
                            
                            int32_t ecx_57 = ecx_55 * i_35
                            
                            if (i_35 s> 0)
                                float* eax_152 = edx_40
                                float* var_3c_4 = eax_152
                                int32_t* edi_34 = ecx_6 + (ecx_57 << 2)
                                int32_t i_18 = i_35
                                int32_t i_30 = i_18
                                int32_t i_10
                                
                                do
                                    float xmm0_91 = *edi_34
                                    float xmm0_92
                                    
                                    if (0.0404499993f < xmm0_91)
                                        eax_152 = var_3c_4
                                        i_18 = i_30
                                        xmm0_92 = fconvert.s(sub_414580(
                                            (xmm0_91 + 0.0549999997f) / 1.05499995f, 0x4019999a))
                                    else
                                        xmm0_92 = xmm0_91 / 12.9200001f
                                    
                                    *eax_152 = xmm0_92
                                    edi_34 = &edi_34[1]
                                    eax_152 = &eax_152[1]
                                    i_10 = i_18
                                    i_18 -= 1
                                    var_3c_4 = eax_152
                                    i_30 = i_18
                                while (i_10 != 1)
                                edi_33 = var_2c_7
                            
                            if (eax_146 == 0)
                                *edi_33 = *(ecx_6 + ((var_18 + ecx_57) << 2))
                            
                            i_15 = i_34
                            esi_2 += 1
                            edi_33 = &edi_33[i_35]
                            edx_40 = &var_34_9[i_35]
                            var_2c_7 = edi_33
                            var_34_9 = edx_40
                        while (esi_2 s< i_15)
        
        int32_t edi_17 = var_28
        
        if ((*(arg1 + 0x48) & 1) == 0 && edi_17 s< i_15)
            int32_t esi_4 = var_18
            int32_t eax_65 = edi_17 * i_35
            int32_t edi_18 = eax_65 + 3
            float* var_30_4 = eax_4 + (eax_65 << 2)
            int32_t* edx_20 = eax_4 + ((eax_65 + esi_4) << 2)
            i_15 = i_34 - var_28
            int32_t* var_34_4 = edx_20
            int32_t i_31 = i_15
            int32_t i_11
            
            do
                float xmm1_1 = *edx_20
                
                if (eax != 3)
                    xmm1_1 = xmm1_1 + 8.27180613e-25f
                    *edx_20 = xmm1_1
                
                int32_t j = 0
                
                if (i_35 s>= 4)
                    float* edx_21 = var_30_4
                    
                    do
                        if (j != esi_4)
                            *edx_21 = xmm1_1 * *edx_21
                        
                        i_35 = i_37
                        
                        if (j + 1 != *(arg1 + 0x44))
                            edx_21[1] = xmm1_1 * edx_21[1]
                        
                        if (j + 2 != var_18)
                            int32_t eax_69 = edi_18 + j
                            *(eax_4 + (eax_69 << 2) - 4) = *(eax_4 + (eax_69 << 2) - 4) * xmm1_1
                            i_35 = i_37
                        
                        esi_4 = var_18
                        
                        if (j + 3 != esi_4)
                            int32_t eax_71 = edi_18 + j
                            *(eax_4 + (eax_71 << 2)) = *(eax_4 + (eax_71 << 2)) * xmm1_1
                            i_35 = i_37
                        
                        j += 4
                        edx_21 = &edx_21[4]
                    while (j s< i_35 - 3)
                    
                    edx_20 = var_34_4
                    i_15 = i_31
                
                if (j s< i_35)
                    float* eax_75 = eax_4 + ((j - 3 + edi_18) << 2)
                    edx_20 = var_34_4
                    
                    do
                        if (j != esi_4)
                            *eax_75 = xmm1_1 * *eax_75
                        
                        j += 1
                        eax_75 = &eax_75[1]
                    while (j s< i_35)
                    
                    i_15 = i_31
                
                edi_18 += i_35
                var_30_4 = &var_30_4[i_35]
                edx_20 = &edx_20[i_35]
                i_11 = i_15
                i_15 -= 1
                var_34_4 = edx_20
                i_31 = i_15
            while (i_11 != 1)
            edi_17 = var_28
        
        if (eax_5 == 4)
            if (edi_17 s< 0)
                i_15 = edi_17 * i_35
                int32_t i_23 = neg.d(edi_17)
                int32_t i_32 = i_23
                int32_t edx_23 = eax_4 + (i_15 << 2)
                int32_t i_12
                
                do
                    if (i_35 s> 0)
                        i_15 = 0
                        __builtin_memset(edx_23, 0, i_35 << 2)
                        i_23 = i_32
                    
                    edx_23 += i_35 << 2
                    i_12 = i_23
                    i_23 -= 1
                    i_32 = i_23
                while (i_12 != 1)
            
            if (eax_1 s< i_34)
                int32_t edx_24 = eax_4 + ((eax_1 * i_35) << 2)
                i_15 = i_28
                int32_t i_13
                
                do
                    if (i_35 s> 0)
                        __builtin_memset(edx_24, 0, i_35 << 2)
                        i_15 = i_28
                    
                    edx_24 += i_35 << 2
                    i_13 = i_15
                    i_15 -= 1
                    i_28 = i_15
                while (i_13 != 1)
    else if (esi_2 s< i_34)
        int32_t eax_8 = esi_2 * i_35
        int32_t i_20 = i_34 - esi_2
        int32_t i_33 = i_20
        int32_t edx_2 = eax_4 + (eax_8 << 2)
        int32_t i_14
        
        do
            if (i_35 s> 0)
                eax_8 = 0
                __builtin_memset(edx_2, 0, i_35 << 2)
                i_20 = i_33
            
            edx_2 += i_35 << 2
            i_14 = i_20
            i_20 -= 1
            i_33 = i_20
        while (i_14 != 1)
        return eax_8
    
    return i_15
}
