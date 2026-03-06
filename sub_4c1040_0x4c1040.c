// 函数名称: sub_4c1040
// 虚拟地址: 0x4c1040
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4c1040(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: void var_208
    void var_208
    int32_t eax_1 = __security_cookie ^ &var_208
    int32_t* esi = arg1
    int32_t* var_1fc = esi
    float xmm4 = esi[5]
    float xmm0 = esi[1]
    esi[2] = xmm0
    float xmm2_2 = xmm4 * arg2 + xmm0
    esi[1] = xmm2_2
    
    if (not(xmm4 <= 0f))
        int32_t eax_2 = esi[6]
        
        if (eax_2 != 0)
            if (eax_2 != 1)
                if (eax_2 == 2 && not(xmm2_2 <= 1f))
                    esi[1] = 0x3f800000
                    esi[7] = 1
            else if (not(xmm2_2 <= 1f))
                esi[1] = 0x3f800000
                esi[0x1f].b = eax_2.b
                esi[7] = 1
        else if (not(xmm2_2 <= 1f))
            int32_t eax_3 = esi[7]
            float i
            
            do
                eax_3 += 1
                i = esi[1] f- 1f
                esi[1] = i
            while (i > 1f)
            esi[7] = eax_3
    else if (not(0 f<= xmm4))
        int32_t eax_4 = esi[6]
        
        if (eax_4 != 0)
            if (eax_4 != 1)
                if (eax_4 == 2 && not(0 f<= xmm2_2))
                    esi[1] = 0
                    esi[7] = 1
            else if (not(0 f<= xmm2_2))
                esi[0x1f].b = eax_4.b
                esi[1] = 0
                esi[7] = 1
        else if (not(0 f<= xmm2_2))
            int32_t eax_5 = esi[7]
            float i_1
            
            do
                eax_5 += 1
                i_1 = esi[1] f+ 1f
                esi[1] = i_1
            while (0f > i_1)
            esi[7] = eax_5
    
    int32_t eax_6 = esi[0x1d]
    
    if (eax_6 s> 0)
        eax_6 -= 1
        esi[0x1d] = eax_6
    
    int32_t* ecx = *esi
    char const* const var_21c_1
    int32_t var_218_1
    char const* const var_214_1
    char* ecx_1
    
    if (ecx[1] != 0x18)
        var_214_1 = "FlanimGetDef"
        var_218_1 = 0x2e6
        var_21c_1 = "c:\ax2017\engine\assetutils.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_FLANIM"
    label_4c16ad:
        sub_44e4d0(eax_6, &data_5559b1, ecx_1, var_21c_1, var_218_1, var_214_1)
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    void* result = sub_4459f0(ecx)
    int32_t i_2 = 0
    void* result_1 = result
    int32_t i_3 = 0
    
    if (*(result + 0x14) s> 0)
        int32_t ecx_2 = 0
        int32_t var_200_1 = 0
        
        do
            int32_t* eax_9 = esi[0x1a] + 0x5c + ecx_2
            
            if (*eax_9 != 0)
                void var_17c
                sub_4c1f90(&var_17c, esi[4], esi[3], esi[1], &var_17c)
                
                if (*(esi + 0x8d) != 0)
                    int32_t var_174_1 = 0
                
                float var_a0
                int32_t mxcsr_1
                int16_t x87control_1
                mxcsr_1, x87control_1 = sub_4c2ef0(&var_17c, i_2, result_1, &var_17c, &var_a0)
                float var_90
                int16_t x87control_2
                double xmm0_5
                x87control_2, xmm0_5 =
                    __libm_sse2_cos_precise(mxcsr_1, x87control_1, _mm_cvtps_pd(var_90))
                int16_t x87control_3
                double xmm0_10
                x87control_3, xmm0_10 =
                    __libm_sse2_sin_precise(mxcsr_1, x87control_2, _mm_cvtps_pd(var_90))
                float var_98
                float xmm0_12 = fconvert.s(xmm0_10) * var_98
                float var_8c
                int16_t x87control_4
                double xmm0_15
                x87control_4, xmm0_15 =
                    __libm_sse2_sin_precise(mxcsr_1, x87control_3, _mm_cvtps_pd(var_8c))
                float var_94
                int32_t xmm0_18 = (fconvert.s(xmm0_15) * var_94) ^ (data_59e5c0.o).d
                int16_t x87control_5
                double xmm0_21
                x87control_5, xmm0_21 =
                    __libm_sse2_cos_precise(mxcsr_1, x87control_4, _mm_cvtps_pd(var_8c))
                int128_t xmm1 = data_59dd00
                int32_t var_1b8_1 = 0
                int32_t var_1a8_1 = 0
                int32_t var_188_1 = 0
                float xmm2_5 = fconvert.s(xmm0_21) * var_94
                float var_1c0 = fconvert.s(xmm0_5) * var_98
                int32_t var_1bc_1 = xmm0_18
                float var_1b4_1 = var_a0
                float var_9c
                float var_1a4_1 = var_9c
                float var_184_1 = var_9c
                int128_t var_130 = var_1c0.o
                float var_1ac_1 = xmm2_5
                float var_18c_1 = xmm2_5
                int128_t var_120_1 = xmm0_12.o
                int128_t var_110_1 = xmm1
                int128_t var_100_1 = xmm0_12.o
                void var_e0
                float* eax_13 = sub_45c930(&var_e0, &esi[8], &var_130, &var_e0)
                float xmm3_2[0x4] = *eax_13
                float xmm4_1[0x4] = *(eax_13 + 0x10)
                float xmm5_1[0x4] = *(eax_13 + 0x20)
                int128_t var_70_1 = *(eax_13 + 0x30)
                int64_t xmm1_2 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xff)
                float xmm2_7[0x4] = _mm_shuffle_ps(xmm3_2, xmm3_2, 0xff)
                int32_t xmm0_31 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0xff)
                var_1ac_1.q = _mm_unpacklo_ps(xmm2_7, xmm1_2)
                int32_t var_1a4_2 = xmm0_31
                float xmm1_4 = xmm3_2[0] f* xmm3_2
                float xmm2_10 = _mm_shuffle_ps(xmm3_2, xmm3_2, 0x55)
                float xmm2_12 = _mm_shuffle_ps(xmm3_2, xmm3_2, 0xaa)
                int32_t edx_4
                double xmm0_37
                edx_4, xmm0_37 = __libm_sse2_sqrt_precise(mxcsr_1, x87control_5, 
                    fconvert.d(xmm1_4 + xmm2_10 * xmm2_10 + xmm2_12 * xmm2_12))
                float xmm0_38 = fconvert.s(xmm0_37)
                int32_t xmm7_1 = (*eax_13).d
                float xmm4_2 = 1f / xmm0_38
                var_1c0 = xmm0_38
                float xmm0_39[0x4] = *(eax_13 + 0x10)
                float xmm3_3 = xmm0_39[0]
                float xmm2_14 = _mm_shuffle_ps(xmm0_39, xmm0_39, 0x55)
                float xmm0_41 = _mm_shuffle_ps(xmm0_39, xmm0_39, 0xaa) * xmm4_2
                float xmm7_3[0x4] = *(eax_13 + 0x20)
                float xmm0_42[0x4] = *(eax_13 + 0x20)
                float xmm1_7 = xmm0_42[0]
                float xmm0_43 = _mm_shuffle_ps(xmm0_42, xmm7_3, 0x55)
                float xmm7_5 = _mm_shuffle_ps(xmm7_3, xmm7_3, 0xaa) * xmm4_2
                float var_84_1 = xmm0_43 * xmm4_2
                var_a0 = xmm7_1 f* xmm4_2
                var_9c = xmm2_10 * xmm4_2
                var_98 = xmm2_12 * xmm4_2
                var_94 = xmm3_3 * xmm4_2
                var_90 = xmm2_14 * xmm4_2
                var_8c = xmm0_41
                float var_88_1 = xmm1_7 * xmm4_2
                float var_80_1 = xmm7_5
                int32_t* var_1dc_1 = eax_9
                float var_f0[0x4]
                int128_t xmm0_46 = *sub_412db0(&var_f0, edx_4, &var_a0, &var_f0)
                int32_t ecx_8 = *eax_9
                var_1bc_1.o = xmm0_46
                int128_t var_60 = var_1c0.o
                int128_t var_50_1 = xmm0_12.o
                void* eax_17 = sub_4d5c60(ecx_8)
                int64_t xmm0_49 = eax_17.q
                int32_t ecx_9 = 0.d
                int32_t var_1c4_1 = ecx_9
                
                if (eax_17 != 0)
                    void* edi_1 = xmm0_49:4.d
                    eax_17.b = ecx_9.b
                    int32_t* j = xmm0_49.d
                    char var_201_1 = eax_17.b
                    
                    do
                        sub_4a0490(&j[4], &var_60, &var_1c0, &j[4])
                        int32_t eax_19 = *j
                        int128_t var_40 = var_1c0.o
                        int128_t var_30_1 = xmm0_12.o
                        
                        if (eax_19 != 1)
                            eax_6 = eax_19 - 2
                            
                            if (eax_19 != 2)
                                var_214_1 = "AttachPointUpdate"
                                var_218_1 = 0x15c
                                var_21c_1 = "c:\ax2017\engine\attachment.cpp"
                                ecx_1 = "Halt"
                                goto label_4c16ad
                            
                            void* eax_21 = sub_4c0f50(j[2])
                            
                            if (eax_21 == 0)
                                goto label_4c163e
                            
                            *(eax_21 + 0x60) = data_5c77bc
                            *(eax_21 + 0x64) = data_5c77c0
                            int128_t* eax_23 = sub_45c3f0(&var_e0, eax_21, &var_40, &var_e0)
                            int128_t xmm1_9 = eax_23[1]
                            int128_t xmm2_16 = eax_23[2]
                            int128_t xmm3_5 = eax_23[3]
                            *(eax_21 + 0x20) = *eax_23
                            *(eax_21 + 0x30) = xmm1_9
                            data_5b0f3c
                            *(eax_21 + 0x40) = xmm2_16
                            *(eax_21 + 0x50) = xmm3_5
                            sub_4c1040()
                            goto label_4c162d
                        
                        void* eax_24 = sub_495430(j[1])
                        
                        if (eax_24 == 0)
                        label_4c163e:
                            *edi_1 = j[3]
                            sub_4d5bc0(j)
                            var_201_1 = 0
                        else
                            float xmm1_11 = data_5b0f3c
                            *(eax_24 + 0x2c) = var_1c0.o
                            *(eax_24 + 0x3c) = xmm0_12.o
                            sub_49a150(eax_24, xmm1_11)
                        label_4c162d:
                            
                            if (var_201_1 != 0)
                                var_201_1 = 0
                            else
                                edi_1 = &j[3]
                        
                        j = sub_4d5c60(*edi_1)
                    while (j != 0)
                    
                    i_2 = i_3
                
                ecx_2 = var_200_1
                esi = var_1fc
            
            result = result_1
            i_2 += 1
            ecx_2 += 0x60
            i_3 = i_2
            var_200_1 = ecx_2
        while (i_2 s< *(result + 0x14))
    
    @__security_check_cookie@4(eax_1 ^ &var_208)
    return result
}
