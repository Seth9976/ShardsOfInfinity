// 函数名称: sub_496840
// 虚拟地址: 0x496840
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_496840(int32_t arg1, float* arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t* var_228
    int32_t eax_1 = __security_cookie ^ &var_228
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    float xmm0 = *(arg3 + 0x2e8)
    int32_t* ecx = *(arg3 + 0x2e4)
    *(arg3 + 0x2f0) = xmm0
    float xmm1_2 = ecx[0x16] f* *(arg3 + 0x2ec) + xmm0
    *(arg3 + 0x2e8) = xmm1_2
    
    if (xmm1_2 < 1f)
        goto label_4968ee
    
    int32_t* eax_3 = sub_4459f0(*ecx)
    int32_t* eax_4
    
    if (*(&(*eax_3)[*(arg3 + 0x2dc) * 0x4d] + 0xd1) != 0)
        float xmm0_1 = *(arg3 + 0x2e8)
        *(arg3 + 0x2f4) += 1
        ecx = *(arg3 + 0x2e4)
        *(arg3 + 0x2e8) = xmm0_1 - 1f
    label_4968ee:
        int32_t* eax_5
        int32_t edx
        int32_t mxcsr_1
        int16_t x87control_1
        eax_5, edx, mxcsr_1, x87control_1 = sub_4459f0(*ecx)
        uint32_t eax_7 = arg4
        int64_t var_23c
        double var_100
        
        if (*(*(arg3 + 0x2dc) * 0x134 + *eax_5 + 0xdb) != 0)
            edx = *(eax_7 + 0xf4)
            int32_t ecx_7 = *(eax_7 + 0xf0) * edx
            
            if (ecx_7 s> 1)
                var_100 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(ecx_7)) f* *(arg3 + 0x2e8))
                var_23c = fconvert.d(fconvert.t(var_100))
                long double st0_1
                st0_1, x87control_1 = sub_53ea80(mxcsr_1, x87control_1)
                float var_20c_1 = fconvert.s(st0_1)
                float xmm0_8
                
                if (0 f<= var_20c_1)
                    xmm0_8 = var_20c_1 + 0.5f
                else
                    xmm0_8 = var_20c_1 - 0.5f
                
                int32_t ecx_8 = int.d(xmm0_8)
                int32_t esi_2 = ecx_7 - 1
                
                if (ecx_8 s< esi_2)
                    esi_2 = ecx_8
                
                arg2[0xe] = mods.dp.d(sx.q(esi_2), edx)
                int32_t eax_11
                int32_t edx_3
                edx_3:eax_11 = sx.q(esi_2)
                edx = mods.dp.d(edx_3:eax_11, *(eax_7 + 0xf4))
                arg2[0xd] = divs.dp.d(edx_3:eax_11, *(eax_7 + 0xf4))
                eax_7 = arg4
        
        int32_t ecx_10 = 0
        int32_t var_214_2 = 0xa
        float var_218_2 = 1f
        float var_21c_2 = 0.100000001f
        float var_210_1 = 0.100000001f
        int32_t var_20c_2 = 0
        void var_180
        int128_t var_c0
        
        if (*(eax_7 + 0x108) s<= 0)
        label_497d78:
            float xmm1_67 = *(*(arg3 + 0x2e4) + 0x58)
            int128_t* eax_272
            int32_t ecx_137
            int32_t edx_131
            eax_272, ecx_137, edx_131 = sub_4962b0(&var_c0, 
                _mm_unpacklo_ps(xmm1_67 * *arg2, arg2[1] * xmm1_67), arg2[2] * xmm1_67)
            float xmm5_2 = *(arg3 + 0x28c)
            float xmm7_2 = *(arg3 + 0x294)
            float xmm2_18[0x4] = *eax_272
            float xmm6_6 = *(arg3 + 0x290)
            float xmm0_175 = *(arg3 + 0x298) f* xmm2_18
            float xmm4_8 = _mm_shuffle_ps(xmm2_18, xmm2_18, 0xff)
            float xmm3_43 = _mm_shuffle_ps(xmm2_18, xmm2_18, 0x55)
            float xmm2_19 = __shufps_xmmps_memps_immb(xmm2_18, xmm2_18, 0xaa)
            float xmm0_181 = *(arg3 + 0x298) * xmm3_43
            xmm2_18[0] = xmm5_2 * xmm4_8 + xmm0_175 + xmm7_2 * xmm3_43 - xmm6_6 * xmm2_19
            float xmm0_187 = *(arg3 + 0x298) * xmm2_19
            xmm2_18[1] = xmm6_6 * xmm4_8 + xmm0_181 + xmm5_2 * xmm2_19 - xmm7_2 f* *eax_272
            void* eax_273 = *(arg3 + 0x2e4)
            float xmm5_3 = xmm5_2 f* (*eax_272).d
            xmm2_18[2] = xmm7_2 * xmm4_8 + xmm0_187 + xmm6_6 f* *eax_272 - xmm5_2 * xmm3_43
            xmm2_18[3] = *(arg3 + 0x298) * xmm4_8 - xmm5_3 - xmm6_6 * xmm3_43 - xmm7_2 * xmm2_19
            *(arg3 + 0x28c) = xmm2_18
            float xmm0_194 = *(eax_273 + 0x58)
            float xmm2_23 = arg2[4] * xmm0_194 * 100f f+ *(arg3 + 0x2a0)
            float xmm3_47 = arg2[5] * xmm0_194 * 100f f+ *(arg3 + 0x2a4)
            *(arg3 + 0x29c) = arg2[3] * xmm0_194 * 100f f+ *(arg3 + 0x29c)
            *(arg3 + 0x2a0) = xmm2_23
            *(arg3 + 0x2a4) = xmm3_47
            uint32_t eax_274
            int64_t var_23c_1
            
            if (*(arg4 + 0xe2) != 0)
                int128_t* eax_276 = sub_49a2d0(&var_180, edx_131, arg3, &var_180)
                int32_t ecx_139 = arg2[0xa1]
                int32_t edx_132 = 0x10
                
                if (var_214_2 s< 0x10)
                    edx_132 = var_214_2
                
                var_c0 = *eax_276
                int128_t xmm0_196 = eax_276[1]
                
                if (edx_132 s< 2)
                    edx_132 = 2
                
                float xmm7_4 = *(*(arg3 + 0x2e4) + 0x5c)
                var_100.d = xmm7_4
                
                if (ecx_139 s< 2 || not(xmm7_4 - var_210_1 <= arg2[ecx_139 * 9 + 0x10]))
                    if (ecx_139 - edx_132 + 1 s> 0)
                        var_23c_1:4.d = &arg2[(ecx_139 - edx_132 + 1) * 9 + 0x11]
                        var_23c_1.d = &arg2[0x11]
                        sub_51dd40(var_23c_1, (ecx_139 - (ecx_139 - edx_132 + 1)) * 0x24)
                        xmm7_4 = var_100.d
                        ecx_139 = arg2[0xa1] i- (ecx_139 - edx_132 + 1)
                    
                    arg2[0xa1] = ecx_139 + 1
                    arg2[ecx_139 * 9 + 0x19] = xmm7_4
                    ecx_139 = arg2[0xa1]
                
                int32_t ecx_142 = ecx_139 * 9
                float xmm4_9 = var_c0:4.d
                float xmm3_48 = xmm0_196.d
                float xmm5_4 = var_c0:0xc.d
                float xmm1_92 = var_c0:8.d
                *(arg2 + (ecx_142 << 2) + 0x20) = xmm0_196:4.q
                arg2[ecx_142 + 0xa] = xmm0_196:0xc.d
                arg2[ecx_142 + 0xf] = 0
                float xmm6_10 = xmm4_9 * xmm5_4 + xmm3_48 * xmm1_92
                float xmm2_26 = xmm5_4 * xmm1_92 - xmm4_9 * xmm3_48
                arg2[ecx_142 + 0xe] = var_21c_2
                *(arg2 + (ecx_142 << 2) + 0x2c) = _mm_unpacklo_ps(xmm6_10 + xmm6_10, xmm2_26 + xmm2_26)
                arg2[ecx_142 + 0xd] =
                    xmm5_4 * xmm5_4 - xmm1_92 * xmm1_92 - xmm4_9 * xmm4_9 + xmm3_48 * xmm3_48
                int32_t esi_29 = arg2[0xa1]
                
                if (esi_29 == edx_132 - 1 && esi_29 s>= 2)
                    eax_274.b = 1
                    arg2[0x18] = (xmm7_4 - arg2[ecx_142 + 0x10]) / var_210_1
                    @__security_check_cookie@4(eax_1 ^ &var_228)
                    return eax_274
            else if (*(arg4 + 0xe3) != 0)
                float var_234_20 = var_218_2
                var_23c_1:4.d = var_21c_2
                var_23c_1.d = var_214_2
                sub_4965b0(arg4, arg2, arg3, ecx_137, var_23c_1.d)
            eax_274.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_228)
            return eax_274
        
        while (true)
            int32_t* esi_3 = *(eax_7 + 0x10c) + (ecx_10 << 3)
            int32_t ecx_11 = *esi_3
            var_228 = esi_3
            int128_t var_1e0
            TEB* fsbase
            
            if (ecx_11 - 9 u<= 0x62)
                switch (ecx_11 + &jump_table_498144[0x1e]:3)
                    case &lookup_table_4981c8
                        int32_t* esi_24 = esi_3[1]
                        int128_t xmm0_156
                        int128_t xmm1_57
                        
                        if (esi_24 != 0)
                            void* eax_262 = arg2[0xc]
                            void var_140
                            int128_t* eax_263
                            int32_t edx_127
                            eax_263, edx_127 =
                                sub_4960f0(eax_262, edx, esi_24, *(eax_262 + 0x2f0), &var_140)
                            int128_t var_a0 = *eax_263
                            void* eax_264 = arg2[0xc]
                            int128_t var_90_1 = eax_263[1]
                            void var_120
                            int128_t* eax_265
                            int32_t edx_128
                            eax_265, edx_128, mxcsr_1 =
                                sub_4960f0(eax_264, edx_127, esi_24, *(eax_264 + 0x2e8), &var_120)
                            int128_t var_80 = *eax_265
                            int128_t var_70_1 = eax_265[1]
                            int128_t* eax_267 = sub_4a02b0(&var_180, edx_128, &var_a0, &var_180)
                            int128_t var_60 = *eax_267
                            int128_t var_50_1 = eax_267[1]
                            int128_t var_1a0
                            sub_4a0490(&var_80, &var_60, &var_1a0, &var_80)
                            xmm0_156 = var_1a0
                            int128_t var_190
                            xmm1_57 = var_190
                        else
                            xmm0_156 = data_5c779c
                            xmm1_57 = data_5c77ac
                        
                        int128_t var_40 = xmm0_156
                        int128_t var_30_1 = xmm1_57
                        sub_4a0490(&var_40, arg3 + 0x288, &var_1e0, &var_40)
                        *(arg3 + 0x288) = var_1e0
                        int128_t var_1d0
                        *(arg3 + 0x298) = var_1d0
                        float xmm1_58 = *(arg3 + 0x28c)
                        float xmm4_6 = *(arg3 + 0x298)
                        float xmm2_15 = *(arg3 + 0x290)
                        float xmm3_38 = *(arg3 + 0x294)
                        float xmm0_170[0x4]
                        edx, x87control_1, xmm0_170 = sub_412d90(xmm1_58 * xmm1_58 + xmm4_6 * xmm4_6
                            + xmm2_15 * xmm2_15 + xmm3_38 * xmm3_38)
                        *(arg3 + 0x28c) =
                            _mm_div_ps(*(arg3 + 0x28c), _mm_shuffle_ps(xmm0_170, xmm0_170, 0))
                    case &lookup_table_4981c8[0x1a]
                        float xmm0_11 = sub_4a0730(sub_495830(arg2, esi_3)) * 0.5f
                        var_228 = xmm0_11
                        float xmm0_12 = sub_4145d0(xmm0_11)
                        float xmm0_13 = xmm0_12 * 0f
                        float var_e8_1 = xmm0_12
                        float var_f0 = xmm0_13
                        float var_ec_1 = xmm0_13
                        int32_t xmm0_15
                        x87control_1, xmm0_15 = sub_4145b0(var_228)
                        int32_t var_e4_1 = xmm0_15
                        edx = &var_f0
                        float var_160[0x4]
                        *(arg3 + 0x28c) = *sub_453f50(&var_160, edx, arg3 + 0x28c, &var_160)
                    case &lookup_table_4981c8[0x1b]
                        float xmm0_19 = sub_4a0730(sub_495830(arg2, esi_3)) * 0.5f
                        var_228 = xmm0_19
                        float xmm0_20 = sub_4145d0(xmm0_19)
                        float var_e0 = xmm0_20
                        float xmm1_5 = xmm0_20 * 0f
                        float var_dc_1 = xmm1_5
                        float var_d8_1 = xmm1_5
                        int32_t xmm0_22
                        x87control_1, xmm0_22 = sub_4145b0(var_228)
                        int32_t var_d4_1 = xmm0_22
                        edx = &var_e0
                        float var_150[0x4]
                        *(arg3 + 0x28c) = *sub_453f50(&var_150, edx, arg3 + 0x28c, &var_150)
                    case &lookup_table_4981c8[0x1c]
                        float xmm0_26 = sub_4a0730(sub_495830(arg2, esi_3)) * 0.5f
                        var_228 = xmm0_26
                        float xmm0_27 = sub_4145d0(xmm0_26)
                        float var_cc_1 = xmm0_27
                        float xmm1_7 = xmm0_27 * 0f
                        int32_t* xmm0_28 = var_228
                        float var_d0 = xmm1_7
                        float var_c8_1 = xmm1_7
                        int32_t xmm0_29
                        x87control_1, xmm0_29 = sub_4145b0(xmm0_28)
                        int32_t var_c4_1 = xmm0_29
                        edx = &var_d0
                        *(arg3 + 0x28c) = *sub_453f50(&var_c0, edx, arg3 + 0x28c, &var_c0)
                    case &lookup_table_4981c8[0x1d]
                        float xmm0_32
                        edx, x87control_1, xmm0_32 = sub_495830(arg2, esi_3)
                        *arg2 = xmm0_32 + *arg2
                    case &lookup_table_4981c8[0x1e]
                        float xmm0_34
                        edx, x87control_1, xmm0_34 = sub_495830(arg2, esi_3)
                        arg2[1] = xmm0_34 + arg2[1]
                    case &lookup_table_4981c8[0x1f]
                        float xmm0_36
                        edx, x87control_1, xmm0_36 = sub_495830(arg2, esi_3)
                        arg2[2] = xmm0_36 + arg2[2]
                    case &lookup_table_4981c8[0x20]
                        float xmm0_38
                        edx, x87control_1, xmm0_38 = sub_495830(arg2, esi_3)
                        *(arg3 + 0x29c) = xmm0_38 f+ *(arg3 + 0x29c)
                    case &lookup_table_4981c8[0x21]
                        float xmm0_40
                        edx, x87control_1, xmm0_40 = sub_495830(arg2, esi_3)
                        *(arg3 + 0x2a0) = xmm0_40 f+ *(arg3 + 0x2a0)
                    case &lookup_table_4981c8[0x22]
                        float xmm0_42
                        edx, x87control_1, xmm0_42 = sub_495830(arg2, esi_3)
                        *(arg3 + 0x2a4) = xmm0_42 f+ *(arg3 + 0x2a4)
                    case &lookup_table_4981c8[0x23]
                        float xmm0_44
                        edx, x87control_1, xmm0_44 = sub_495830(arg2, esi_3)
                        arg2[3] = xmm0_44 + arg2[3]
                    case &lookup_table_4981c8[0x24]
                        float xmm0_46
                        edx, x87control_1, xmm0_46 = sub_495830(arg2, esi_3)
                        arg2[4] = xmm0_46 + arg2[4]
                    case &lookup_table_4981c8[0x25]
                        float xmm0_48
                        edx, x87control_1, xmm0_48 = sub_495830(arg2, esi_3)
                        arg2[5] = xmm0_48 + arg2[5]
                    case &lookup_table_4981c8[0x26]
                        int32_t* esi_5 = esi_3[1]
                        edx = arg2[0xc]
                        float xmm2_1
                        bool p_4
                        
                        if (esi_5[1] == 1)
                            int32_t* eax_39 = *esi_5
                            xmm2_1 = *eax_39
                            float temp3_1 = eax_39[1]
                            xmm2_1 - temp3_1
                            eax_39:1.b = (xmm2_1 == temp3_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_1, temp3_1) ? 1 : 0) << 2
                                | (xmm2_1 < temp3_1 ? 1 : 0)
                            p_4 = unimplemented  {test ah, 0x44}
                        
                        if (esi_5[1] != 1 || p_4)
                            int32_t eax_42 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_37 = (eax_42 << 0xf) + not.d(eax_42)
                            int32_t ecx_38 = (ecx_37 u>> 0xc ^ ecx_37) * 5
                            int32_t eax_50 = (ecx_38 u>> 4 ^ ecx_38) * 0x809
                            void* eax_51 = arg2[0xc]
                            var_228 = ((eax_50 u>> 0x10 ^ eax_50) & 0x7fffff) | 0x3f800000
                            float xmm0_50
                            edx, x87control_1, xmm0_50 =
                                sub_4e0380(esi_5, *(eax_51 + 0x2f4), *(eax_51 + 0x2e8), var_228 - 1f)
                            xmm2_1 = xmm0_50
                        
                        arg2[3] = *(*(arg3 + 0x2e4) + 0x58) * xmm2_1 + arg2[3]
                    case &lookup_table_4981c8[0x27]
                        int32_t* esi_6 = esi_3[1]
                        edx = arg2[0xc]
                        float xmm2_2
                        bool p_6
                        
                        if (esi_6[1] == 1)
                            int32_t* eax_54 = *esi_6
                            xmm2_2 = *eax_54
                            float temp4_1 = eax_54[1]
                            xmm2_2 - temp4_1
                            eax_54:1.b = (xmm2_2 == temp4_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_2, temp4_1) ? 1 : 0) << 2
                                | (xmm2_2 < temp4_1 ? 1 : 0)
                            p_6 = unimplemented  {test ah, 0x44}
                        
                        if (esi_6[1] != 1 || p_6)
                            int32_t eax_57 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_42 = (eax_57 << 0xf) + not.d(eax_57)
                            int32_t ecx_43 = (ecx_42 u>> 0xc ^ ecx_42) * 5
                            int32_t eax_65 = (ecx_43 u>> 4 ^ ecx_43) * 0x809
                            void* eax_66 = arg2[0xc]
                            var_228 = ((eax_65 u>> 0x10 ^ eax_65) & 0x7fffff) | 0x3f800000
                            float xmm0_54
                            edx, x87control_1, xmm0_54 =
                                sub_4e0380(esi_6, *(eax_66 + 0x2f4), *(eax_66 + 0x2e8), var_228 - 1f)
                            xmm2_2 = xmm0_54
                        
                        arg2[4] = *(*(arg3 + 0x2e4) + 0x58) * xmm2_2 + arg2[4]
                    case &lookup_table_4981c8[0x28]
                        int32_t* esi_7 = esi_3[1]
                        edx = arg2[0xc]
                        float xmm2_3
                        bool p_8
                        
                        if (esi_7[1] == 1)
                            int32_t* eax_69 = *esi_7
                            xmm2_3 = *eax_69
                            float temp5_1 = eax_69[1]
                            xmm2_3 - temp5_1
                            eax_69:1.b = (xmm2_3 == temp5_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_3, temp5_1) ? 1 : 0) << 2
                                | (xmm2_3 < temp5_1 ? 1 : 0)
                            p_8 = unimplemented  {test ah, 0x44}
                        
                        if (esi_7[1] != 1 || p_8)
                            int32_t eax_72 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_47 = (eax_72 << 0xf) + not.d(eax_72)
                            int32_t ecx_48 = (ecx_47 u>> 0xc ^ ecx_47) * 5
                            int32_t eax_80 = (ecx_48 u>> 4 ^ ecx_48) * 0x809
                            void* eax_81 = arg2[0xc]
                            var_228 = ((eax_80 u>> 0x10 ^ eax_80) & 0x7fffff) | 0x3f800000
                            float xmm0_58
                            edx, x87control_1, xmm0_58 =
                                sub_4e0380(esi_7, *(eax_81 + 0x2f4), *(eax_81 + 0x2e8), var_228 - 1f)
                            xmm2_3 = xmm0_58
                        
                        arg2[5] = *(*(arg3 + 0x2e4) + 0x58) * xmm2_3 + arg2[5]
                    case &lookup_table_4981c8[0x29]
                        int32_t* esi_10 = esi_3[1]
                        edx = arg2[0xc]
                        float xmm2_4
                        bool p_12
                        
                        if (esi_10[1] == 1)
                            int32_t* eax_105 = *esi_10
                            xmm2_4 = *eax_105
                            float temp6_1 = eax_105[1]
                            xmm2_4 - temp6_1
                            eax_105:1.b = (xmm2_4 == temp6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_4, temp6_1) ? 1 : 0) << 2
                                | (xmm2_4 < temp6_1 ? 1 : 0)
                            p_12 = unimplemented  {test ah, 0x44}
                        
                        if (esi_10[1] != 1 || p_12)
                            int32_t eax_108 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_66 = (eax_108 << 0xf) + not.d(eax_108)
                            int32_t ecx_67 = (ecx_66 u>> 0xc ^ ecx_66) * 5
                            int32_t eax_116 = (ecx_67 u>> 4 ^ ecx_67) * 0x809
                            void* eax_117 = arg2[0xc]
                            var_228 = ((eax_116 u>> 0x10 ^ eax_116) & 0x7fffff) | 0x3f800000
                            float xmm0_71
                            edx, x87control_1, xmm0_71 =
                                sub_4e0380(esi_10, *(eax_117 + 0x2f4), *(eax_117 + 0x2e8), var_228 - 1f)
                            xmm2_4 = xmm0_71
                        
                        arg2[3] = (1f - xmm2_4) f* *(*(arg3 + 0x2e4) + 0x58) * 100f * arg2[3]
                    case &lookup_table_4981c8[0x2a]
                        int32_t* esi_11 = esi_3[1]
                        edx = arg2[0xc]
                        float xmm2_5
                        bool p_14
                        
                        if (esi_11[1] == 1)
                            int32_t* eax_120 = *esi_11
                            xmm2_5 = *eax_120
                            float temp7_1 = eax_120[1]
                            xmm2_5 - temp7_1
                            eax_120:1.b = (xmm2_5 == temp7_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_5, temp7_1) ? 1 : 0) << 2
                                | (xmm2_5 < temp7_1 ? 1 : 0)
                            p_14 = unimplemented  {test ah, 0x44}
                        
                        if (esi_11[1] != 1 || p_14)
                            int32_t eax_123 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_71 = (eax_123 << 0xf) + not.d(eax_123)
                            int32_t ecx_72 = (ecx_71 u>> 0xc ^ ecx_71) * 5
                            int32_t eax_131 = (ecx_72 u>> 4 ^ ecx_72) * 0x809
                            void* eax_132 = arg2[0xc]
                            var_228 = ((eax_131 u>> 0x10 ^ eax_131) & 0x7fffff) | 0x3f800000
                            float xmm0_76
                            edx, x87control_1, xmm0_76 =
                                sub_4e0380(esi_11, *(eax_132 + 0x2f4), *(eax_132 + 0x2e8), var_228 - 1f)
                            xmm2_5 = xmm0_76
                        
                        arg2[4] = (1f - xmm2_5) f* *(*(arg3 + 0x2e4) + 0x58) * 100f * arg2[4]
                    case &lookup_table_4981c8[0x2b]
                        int32_t* esi_12 = esi_3[1]
                        edx = arg2[0xc]
                        float xmm2_6
                        bool p_16
                        
                        if (esi_12[1] == 1)
                            int32_t* eax_135 = *esi_12
                            xmm2_6 = *eax_135
                            float temp8_1 = eax_135[1]
                            xmm2_6 - temp8_1
                            eax_135:1.b = (xmm2_6 == temp8_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_6, temp8_1) ? 1 : 0) << 2
                                | (xmm2_6 < temp8_1 ? 1 : 0)
                            p_16 = unimplemented  {test ah, 0x44}
                        
                        if (esi_12[1] != 1 || p_16)
                            int32_t eax_138 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_76 = (eax_138 << 0xf) + not.d(eax_138)
                            int32_t ecx_77 = (ecx_76 u>> 0xc ^ ecx_76) * 5
                            int32_t eax_146 = (ecx_77 u>> 4 ^ ecx_77) * 0x809
                            void* eax_147 = arg2[0xc]
                            var_228 = ((eax_146 u>> 0x10 ^ eax_146) & 0x7fffff) | 0x3f800000
                            float xmm0_81
                            edx, x87control_1, xmm0_81 =
                                sub_4e0380(esi_12, *(eax_147 + 0x2f4), *(eax_147 + 0x2e8), var_228 - 1f)
                            xmm2_6 = xmm0_81
                        
                        arg2[5] = (1f - xmm2_6) f* *(*(arg3 + 0x2e4) + 0x58) * 100f * arg2[5]
                    case &lookup_table_4981c8[0x2c]
                        int32_t* esi_17 = esi_3[1]
                        void* edx_95 = arg2[0xc]
                        float xmm4_1
                        bool p_26
                        
                        if (esi_17[1] == 1)
                            int32_t* eax_202 = *esi_17
                            xmm4_1 = *eax_202
                            float temp13_1 = eax_202[1]
                            xmm4_1 - temp13_1
                            eax_202:1.b = (xmm4_1 == temp13_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm4_1, temp13_1) ? 1 : 0) << 2
                                | (xmm4_1 < temp13_1 ? 1 : 0)
                            p_26 = unimplemented  {test ah, 0x44}
                        
                        if (esi_17[1] != 1 || p_26)
                            int32_t eax_205 = (*(edx_95 + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_101 = (eax_205 << 0xf) + not.d(eax_205)
                            int32_t ecx_102 = (ecx_101 u>> 0xc ^ ecx_101) * 5
                            int32_t eax_213 = (ecx_102 u>> 4 ^ ecx_102) * 0x809
                            void* eax_214 = arg2[0xc]
                            var_228 = ((eax_213 u>> 0x10 ^ eax_213) & 0x7fffff) | 0x3f800000
                            float xmm0_98 =
                                sub_4e0380(esi_17, *(eax_214 + 0x2f4), *(eax_214 + 0x2e8), var_228 - 1f)
                            edx_95 = arg2[0xc]
                            xmm4_1 = xmm0_98
                        
                        float xmm0_99 = arg2[3]
                        float xmm1_21 = arg2[5]
                        void* eax_215 = *(edx_95 + 0x2e4)
                        var_228 = xmm0_99
                        float xmm0_100 = arg2[4]
                        float xmm2_10 = xmm0_99 * xmm0_99 + xmm0_100 * xmm0_100 + xmm1_21 * xmm1_21
                        float xmm0_102 = _mm_min_ss(0x3f800000, xmm2_10 * xmm4_1 f* *(eax_215 + 0x58))
                        float xmm0_104
                        edx, x87control_1, xmm0_104 = sub_412d90(xmm2_10)
                        int32_t* xmm4_2 = var_228
                        float xmm3_27 = 1f / (xmm0_104 + 9.99999975e-06f)
                        float xmm3_29 = xmm3_27 * arg2[5] * xmm0_102
                        float xmm0_110 = arg2[4] - xmm3_27 * arg2[4] * xmm0_102
                        arg2[3] = xmm4_2 f- xmm3_27 f* xmm4_2 * xmm0_102
                        arg2[4] = xmm0_110
                        arg2[5] = arg2[5] - xmm3_29
                    case &lookup_table_4981c8[0x2d]
                        if (arg2[0x10].b == 0)
                            goto label_497081
                        
                        void* esi_9 = arg2[0xc]
                        int32_t* eax_102
                        eax_102, edx, mxcsr_1, x87control_1 = sub_4459f0(**(esi_9 + 0x2e4))
                        
                        if (*(*(esi_9 + 0x2dc) * 0x134 + *eax_102 + 0xdd) == 0)
                            esi_3 = var_228
                        label_497081:
                            int32_t* xmm0_68
                            edx, x87control_1, xmm0_68 = sub_495830(arg2, esi_3)
                            void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                            var_228 = xmm0_68
                            
                            if (data_e47798 s> *(*ThreadLocalStoragePointer + 4))
                                int32_t* var_234_6 = &data_e47798
                                edx = __Init_thread_header(&data_e47798)
                                
                                if (data_e47798 == 0xffffffff)
                                    int32_t* var_234_7 = &data_e47798
                                    data_e4779c = 0x3c8efa35
                                    edx = __Init_thread_footer(&data_e47798)
                                
                                xmm0_68 = var_228
                            
                            arg2[9] = xmm0_68 f* data_e4779c + arg2[9]
                    case &lookup_table_4981c8[0x2e]
                        if (arg2[0x10].b == 0)
                            goto label_496f52
                        
                        void* esi_8 = arg2[0xc]
                        int32_t* eax_85
                        eax_85, edx, mxcsr_1, x87control_1 = sub_4459f0(**(esi_8 + 0x2e4))
                        
                        if (*(*(esi_8 + 0x2dc) * 0x134 + *eax_85 + 0xdd) == 0)
                            esi_3 = var_228
                        label_496f52:
                            int32_t* eax_87 = esi_3[1]
                            void* ecx_52 = arg2[0xc]
                            bool p_10
                            
                            if (eax_87[1] == 1)
                                int32_t* eax_88 = *eax_87
                                float xmm0_62 = *eax_88
                                float temp16_1 = eax_88[1]
                                xmm0_62 - temp16_1
                                var_228 = xmm0_62
                                eax_88:1.b = (xmm0_62 == temp16_1 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_62, temp16_1) ? 1 : 0) << 2
                                    | (xmm0_62 < temp16_1 ? 1 : 0)
                                p_10 = unimplemented  {test ah, 0x44}
                            
                            if (eax_87[1] != 1 || p_10)
                                int32_t ecx_55 = (*(ecx_52 + 0x2c) + *esi_3) * *esi_3
                                int32_t edx_42 = (ecx_55 << 0xf) + not.d(ecx_55)
                                int32_t ecx_57 = (edx_42 u>> 0xc ^ edx_42) * 5
                                int32_t* ecx_58 = esi_3[1]
                                int32_t eax_95 = (ecx_57 u>> 4 ^ ecx_57) * 0x809
                                void* eax_96 = arg2[0xc]
                                var_228 = ((eax_95 u>> 0x10 ^ eax_95) & 0x7fffff) | 0x3f800000
                                int32_t* xmm0_63
                                edx, x87control_1, xmm0_63 = sub_4e0380(ecx_58, *(eax_96 + 0x2f4), 
                                    *(eax_96 + 0x2e8), var_228 f- 1f)
                                var_228 = xmm0_63
                            
                            if (data_e47798 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                int32_t* var_234_4 = &data_e47798
                                edx = __Init_thread_header(&data_e47798)
                                
                                if (data_e47798 == 0xffffffff)
                                    int32_t* var_234_5 = &data_e47798
                                    data_e4779c = 0x3c8efa35
                                    edx = __Init_thread_footer(&data_e47798)
                            
                            arg2[9] =
                                var_228 f* data_e4779c f* *(*(arg2[0xc] i+ 0x2e4) + 0x58) + arg2[9]
                    case &lookup_table_4981c8[0x2f]
                        int32_t* esi_20 = esi_3[1]
                        float var_204_1
                        bool p_30
                        
                        if (esi_20[1] == 1)
                            int32_t* eax_229 = *esi_20
                            float xmm0_115 = *eax_229
                            float temp14_1 = eax_229[1]
                            xmm0_115 - temp14_1
                            var_204_1 = xmm0_115
                            eax_229:1.b = (xmm0_115 == temp14_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_115, temp14_1) ? 1 : 0) << 2
                                | (xmm0_115 < temp14_1 ? 1 : 0)
                            p_30 = unimplemented  {test ah, 0x44}
                        
                        if (esi_20[1] != 1 || p_30)
                            int32_t eax_232 = (*(arg2[0xc] i+ 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_115 = (eax_232 << 0xf) + not.d(eax_232)
                            int32_t ecx_116 = (ecx_115 u>> 0xc ^ ecx_115) * 5
                            int32_t eax_240 = (ecx_116 u>> 4 ^ ecx_116) * 0x809
                            void* eax_241 = arg2[0xc]
                            var_228 = ((eax_240 u>> 0x10 ^ eax_240) & 0x7fffff) | 0x3f800000
                            var_204_1 =
                                sub_4e0380(esi_20, *(eax_241 + 0x2f4), *(eax_241 + 0x2e8), var_228 - 1f)
                        
                        if (data_e47798 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                            int32_t* var_234_8 = &data_e47798
                            __Init_thread_header(&data_e47798)
                            
                            if (data_e47798 == 0xffffffff)
                                int32_t* var_234_9 = &data_e47798
                                data_e4779c = 0x3c8efa35
                                __Init_thread_footer(&data_e47798)
                        
                        void* esi_21 = arg2[0xc]
                        float xmm0_120 = var_204_1 f* data_e4779c f* *(*(esi_21 + 0x2e4) + 0x58) * 0.5f
                        float xmm0_121 = sub_4145d0(xmm0_120)
                        var_100.d = xmm0_121 * arg2[6]
                        float xmm1_34 = arg2[7] * xmm0_121
                        var_228 = arg2[8] * xmm0_121
                        float xmm0_123
                        edx, x87control_1, xmm0_123 = sub_4145b0(xmm0_120)
                        float xmm5_1 = *(esi_21 + 0x298)
                        float xmm4_4 = *(esi_21 + 0x28c)
                        float xmm7_1 = var_100.d
                        float xmm2_12 = *(esi_21 + 0x294)
                        float xmm3_34 = *(esi_21 + 0x290)
                        float var_1ec_1 =
                            xmm5_1 * xmm1_34 + xmm0_123 * xmm3_34 + var_228 f* xmm4_4 - xmm7_1 * xmm2_12
                        float var_1e8_1 =
                            xmm0_123 * xmm2_12 + var_228 f* xmm5_1 + xmm3_34 * xmm7_1 - xmm4_4 * xmm1_34
                        float var_1e4_1 =
                            xmm0_123 * xmm5_1 - xmm4_4 * xmm7_1 - xmm3_34 * xmm1_34 - var_228 * xmm2_12
                        *(esi_21 + 0x28c) = (xmm5_1 * xmm7_1 + xmm0_123 * xmm4_4 + xmm1_34 * xmm2_12
                            - var_228 f* xmm3_34).o
                    case &lookup_table_4981c8[0x33]
                        int32_t* esi_4 = esi_3[1]
                        edx = arg2[0xc]
                        float xmm0_31
                        bool p_2
                        
                        if (esi_4[1] == 1)
                            int32_t* eax_22 = *esi_4
                            xmm0_31 = *eax_22
                            float temp2_1 = eax_22[1]
                            xmm0_31 - temp2_1
                            eax_22:1.b = (xmm0_31 == temp2_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_31, temp2_1) ? 1 : 0) << 2
                                | (xmm0_31 < temp2_1 ? 1 : 0)
                            p_2 = unimplemented  {test ah, 0x44}
                        
                        if (esi_4[1] != 1 || p_2)
                            int32_t eax_25 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_23 = (eax_25 << 0xf) + not.d(eax_25)
                            int32_t ecx_24 = (ecx_23 u>> 0xc ^ ecx_23) * 5
                            int32_t eax_33 = (ecx_24 u>> 4 ^ ecx_24) * 0x809
                            void* eax_34 = arg2[0xc]
                            var_228 = ((eax_33 u>> 0x10 ^ eax_33) & 0x7fffff) | 0x3f800000
                            edx, x87control_1, xmm0_31 =
                                sub_4e0380(esi_4, *(eax_34 + 0x2f4), *(eax_34 + 0x2e8), var_228 - 1f)
                        
                        *(arg3 + 0x288) = xmm0_31
                    case &lookup_table_4981c8[0x38]
                        if (arg2[0x10].b == 0)
                            goto label_497728
                        
                        void* esi_18 = arg2[0xc]
                        int32_t* eax_217
                        eax_217, edx, mxcsr_1, x87control_1 = sub_4459f0(**(esi_18 + 0x2e4))
                        
                        if (*(*(esi_18 + 0x2dc) * 0x134 + *eax_217 + 0xdd) == 0)
                            esi_3 = var_228
                        label_497728:
                            int32_t* eax_219 = esi_3[1]
                            float xmm0_113
                            bool p_28
                            
                            if (eax_219[1] == 1)
                                int32_t* eax_220 = *eax_219
                                xmm0_113 = *eax_220
                                float temp17_1 = eax_220[1]
                                xmm0_113 - temp17_1
                                eax_220:1.b = (xmm0_113 == temp17_1 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_113, temp17_1) ? 1 : 0) << 2
                                    | (xmm0_113 < temp17_1 ? 1 : 0)
                                p_28 = unimplemented  {test ah, 0x44}
                            
                            if (eax_219[1] != 1 || p_28)
                                int32_t eax_221 = *esi_3
                                void* esi_19 = arg2[0xc]
                                int32_t ecx_108 = (*(esi_19 + 0x2c) + eax_221) * eax_221
                                int32_t edx_104 = (ecx_108 << 0xf) + not.d(ecx_108)
                                int32_t ecx_110 = (edx_104 u>> 0xc ^ edx_104) * 5
                                int32_t eax_228 = (ecx_110 u>> 4 ^ ecx_110) * 0x809
                                var_228 = ((eax_228 u>> 0x10 ^ eax_228) & 0x7fffff) | 0x3f800000
                                edx, x87control_1, xmm0_113 = sub_4e0380(eax_219, *(esi_19 + 0x2f4), 
                                    *(esi_19 + 0x2e8), var_228 f- 1f)
                            
                            arg2[0xa] = xmm0_113 + arg2[0xa]
                    case &lookup_table_4981c8[0x42]
                        int32_t* esi_22 = esi_3[1]
                        void* edx_119 = arg2[0xc]
                        bool p_32
                        
                        if (esi_22[1] == 1)
                            int32_t* eax_245 = *esi_22
                            float xmm0_144 = *eax_245
                            float temp15_1 = eax_245[1]
                            xmm0_144 - temp15_1
                            var_228 = xmm0_144
                            eax_245:1.b = (xmm0_144 == temp15_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_144, temp15_1) ? 1 : 0) << 2
                                | (xmm0_144 < temp15_1 ? 1 : 0)
                            p_32 = unimplemented  {test ah, 0x44}
                        
                        if (esi_22[1] != 1 || p_32)
                            int32_t eax_248 = (*(edx_119 + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_121 = (eax_248 << 0xf) + not.d(eax_248)
                            int32_t ecx_122 = (ecx_121 u>> 0xc ^ ecx_121) * 5
                            int32_t eax_256 = (ecx_122 u>> 4 ^ ecx_122) * 0x809
                            void* eax_257 = arg2[0xc]
                            var_100.d = ((eax_256 u>> 0x10 ^ eax_256) & 0x7fffff) | 0x3f800000
                            int32_t* xmm0_145
                            edx_119, xmm0_145 = sub_4e0380(esi_22, *(eax_257 + 0x2f4), 
                                *(eax_257 + 0x2e8), var_100.d - 1f)
                            var_228 = xmm0_145
                        
                        int128_t* eax_259
                        eax_259, edx, mxcsr_1, x87control_1 =
                            sub_49a2d0(&var_1e0, edx_119, arg3, &var_1e0)
                        int128_t var_1c0_1 = *eax_259
                        int128_t xmm0_147 = eax_259[1]
                        float xmm0_148 = var_228
                        
                        if (*(*(arg3 + 0x2e4) + 0x74) == 0)
                            float xmm1_54 = xmm0_147:8.d
                            
                            if (not(xmm1_54 < xmm0_148))
                                *(arg3 + 0x2a0) = xmm0_148 - xmm1_54 f+ *(arg3 + 0x2a0)
                            label_497b08:
                                arg2[0x10].b = 1
                                *(arg2 + 0xc) = 0
                                arg2[5] = 0
                        else
                            float xmm1_53 = xmm0_147:0xc.d
                            
                            if (not(xmm0_148 < xmm1_53))
                                *(arg3 + 0x2a4) = xmm0_148 - xmm1_53 f+ *(arg3 + 0x2a4)
                                goto label_497b08
                    case &lookup_table_4981c8[0x43]
                        if (arg2[0x10].b != 0)
                            eax_4 = sub_49a2d0(&var_180, edx, arg3, &var_180)
                            int32_t* ecx_126 = esi_3[1]
                            uint128_t xmm1_55 = *(eax_4 + 0x10)
                            var_1e0 = *eax_4
                            int32_t xmm1_56 = _mm_bsrli_si128(xmm1_55, 0xc)
                            var_100 = xmm1_55.12:4.q
                            int32_t var_f8_1 = xmm1_56
                            
                            if (ecx_126 != 0)
                                eax_4 = sub_495370(ecx_126, &var_100)
                                
                                if (eax_4 != 0)
                                    eax_4[8] = 1
                                    eax_4[7] = *(*(arg3 + 0x2e4) + 0x1c)
                            
                            break
                    case &lookup_table_4981c8[0x47]
                        edx, mxcsr_1, x87control_1 = sub_495cc0(arg2, esi_3)
                    case &lookup_table_4981c8[0x5e]
                        int32_t* esi_16 = esi_3[1]
                        edx = arg2[0xc]
                        bool p_24
                        
                        if (esi_16[1] == 1)
                            int32_t* eax_189 = *esi_16
                            float xmm0_96 = *eax_189
                            float temp12_1 = eax_189[1]
                            xmm0_96 - temp12_1
                            var_21c_2 = xmm0_96
                            eax_189:1.b = (xmm0_96 == temp12_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_96, temp12_1) ? 1 : 0) << 2
                                | (xmm0_96 < temp12_1 ? 1 : 0)
                            p_24 = unimplemented  {test ah, 0x44}
                        
                        if (esi_16[1] != 1 || p_24)
                            int32_t eax_192 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_96 = (eax_192 << 0xf) + not.d(eax_192)
                            int32_t ecx_97 = (ecx_96 u>> 0xc ^ ecx_96) * 5
                            int32_t eax_200 = (ecx_97 u>> 4 ^ ecx_97) * 0x809
                            void* eax_201 = arg2[0xc]
                            float xmm0_97
                            edx, x87control_1, xmm0_97 = sub_4e0380(esi_16, *(eax_201 + 0x2f4), 
                                *(eax_201 + 0x2e8), 
                                (((eax_200 u>> 0x10 ^ eax_200) & 0x7fffff) | 0x3f800000) - 1f)
                            var_21c_2 = xmm0_97
                    case &lookup_table_4981c8[0x5f]
                        int32_t* esi_15 = esi_3[1]
                        edx = arg2[0xc]
                        bool p_22
                        
                        if (esi_15[1] == 1)
                            int32_t* eax_176 = *esi_15
                            float xmm0_94 = *eax_176
                            float temp11_1 = eax_176[1]
                            xmm0_94 - temp11_1
                            var_218_2 = xmm0_94
                            eax_176:1.b = (xmm0_94 == temp11_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_94, temp11_1) ? 1 : 0) << 2
                                | (xmm0_94 < temp11_1 ? 1 : 0)
                            p_22 = unimplemented  {test ah, 0x44}
                        
                        if (esi_15[1] != 1 || p_22)
                            int32_t eax_179 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_91 = (eax_179 << 0xf) + not.d(eax_179)
                            int32_t ecx_92 = (ecx_91 u>> 0xc ^ ecx_91) * 5
                            int32_t eax_187 = (ecx_92 u>> 4 ^ ecx_92) * 0x809
                            void* eax_188 = arg2[0xc]
                            float xmm0_95
                            edx, x87control_1, xmm0_95 = sub_4e0380(esi_15, *(eax_188 + 0x2f4), 
                                *(eax_188 + 0x2e8), 
                                (((eax_187 u>> 0x10 ^ eax_187) & 0x7fffff) | 0x3f800000) - 1f)
                            var_218_2 = xmm0_95
                    case &lookup_table_4981c8[0x60]
                        int32_t* esi_14 = esi_3[1]
                        float xmm0_88
                        bool p_20
                        
                        if (esi_14[1] == 1)
                            int32_t* eax_163 = *esi_14
                            xmm0_88 = *eax_163
                            float temp10_1 = eax_163[1]
                            xmm0_88 - temp10_1
                            eax_163:1.b = (xmm0_88 == temp10_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_88, temp10_1) ? 1 : 0) << 2
                                | (xmm0_88 < temp10_1 ? 1 : 0)
                            p_20 = unimplemented  {test ah, 0x44}
                        
                        if (esi_14[1] != 1 || p_20)
                            int32_t eax_166 = (*(arg2[0xc] i+ 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_86 = (eax_166 << 0xf) + not.d(eax_166)
                            int32_t ecx_87 = (ecx_86 u>> 0xc ^ ecx_86) * 5
                            int32_t eax_174 = (ecx_87 u>> 4 ^ ecx_87) * 0x809
                            void* eax_175 = arg2[0xc]
                            x87control_1, xmm0_88 = sub_4e0380(esi_14, *(eax_175 + 0x2f4), 
                                *(eax_175 + 0x2e8), 
                                (((eax_174 u>> 0x10 ^ eax_174) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        var_100 = fconvert.d(xmm0_88)
                        var_23c = fconvert.d(fconvert.t(var_100))
                        long double st0_2
                        st0_2, x87control_1 = sub_53ea80(mxcsr_1, x87control_1)
                        var_100 = fconvert.d(st0_2)
                        float xmm0_91 = _mm_cvtpd_ps(zx.o(var_100))
                        
                        if (0 f<= xmm0_91)
                            edx = int.d(xmm0_91 + 0.5f) + 1
                            var_214_2 = edx
                        else
                            edx = int.d(xmm0_91 - 0.5f) + 1
                            var_214_2 = edx
                    case &lookup_table_4981c8[0x62]
                        float** esi_13 = esi_3[1]
                        edx = arg2[0xc]
                        bool p_18
                        
                        if (esi_13[1] == 1)
                            float* eax_150 = *esi_13
                            float xmm0_86 = *eax_150
                            float temp9_1 = eax_150[1]
                            xmm0_86 - temp9_1
                            var_210_1 = xmm0_86
                            eax_150:1.b = (xmm0_86 == temp9_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_86, temp9_1) ? 1 : 0) << 2
                                | (xmm0_86 < temp9_1 ? 1 : 0)
                            p_18 = unimplemented  {test ah, 0x44}
                        
                        if (esi_13[1] != 1 || p_18)
                            int32_t eax_153 = (*(edx + 0x2c) + ecx_11) * ecx_11
                            int32_t ecx_81 = (eax_153 << 0xf) + not.d(eax_153)
                            int32_t ecx_82 = (ecx_81 u>> 0xc ^ ecx_81) * 5
                            int32_t eax_161 = (ecx_82 u>> 4 ^ ecx_82) * 0x809
                            void* eax_162 = arg2[0xc]
                            float xmm0_87
                            edx, x87control_1, xmm0_87 = sub_4e0380(esi_13, *(eax_162 + 0x2f4), 
                                *(eax_162 + 0x2e8), 
                                (((eax_161 u>> 0x10 ^ eax_161) & 0x7fffff) | 0x3f800000) - 1f)
                            var_210_1 = xmm0_87
            eax_7 = arg4
            ecx_10 = var_20c_2 + 1
            var_20c_2 = ecx_10
            
            if (ecx_10 s>= *(eax_7 + 0x108))
                goto label_497d78
    
    eax_4.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_228)
    return eax_4
}
