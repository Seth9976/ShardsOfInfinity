// 函数名称: sub_4baa50
// 虚拟地址: 0x4baa50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4baa50(int32_t arg1, int32_t* arg2, float* arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: float var_298
    float var_298
    int32_t eax_1 = __security_cookie ^ &var_298
    int32_t* edi = arg4
    int128_t* result = *edi * 0xd0
    int32_t* var_22c = edi
    int32_t* ecx_3 = (*(result + arg6 + 0x6c) << 6) + arg8
    float xmm0 = ecx_3[0xe]
    float xmm0_1 = ecx_3[0xb]
    float xmm0_2 = ecx_3[5]
    float xmm2 = ecx_3[1]
    float xmm6 = ecx_3[6]
    float xmm2_1 = xmm2 f* ecx_3[7]
    float xmm4_1 = ecx_3[5] f* ecx_3[2]
    float xmm5_1 = xmm0_2 f* ecx_3[3]
    float xmm3_1 = xmm2 * xmm6
    float xmm6_1 = xmm6 f* ecx_3[3]
    float xmm7_5 = xmm0_2 f* ecx_3[0xa] f* ecx_3[0xf] - xmm0_2 * xmm0_1 * xmm0
        + ecx_3[6] f* ecx_3[0xb] f* ecx_3[0xd] - ecx_3[9] f* ecx_3[6] f* ecx_3[0xf]
    float xmm3_3 = ecx_3[2] f* ecx_3[7]
    float xmm0_17 = ecx_3[1]
    float xmm1_5 = xmm0_17 f* ecx_3[0xa] f* ecx_3[0xf] - xmm0_17 * xmm0_1 * xmm0
        + ecx_3[2] f* ecx_3[0xb] f* ecx_3[0xd] - ecx_3[9] f* ecx_3[2] f* ecx_3[0xf]
    float xmm7_12[0x2] =
        (xmm7_5 + ecx_3[9] f* ecx_3[7] f* ecx_3[0xe] - ecx_3[0xa] f* ecx_3[7] f* ecx_3[0xd]) f* *ecx_3
        - (xmm1_5 + ecx_3[9] f* ecx_3[3] f* ecx_3[0xe] - ecx_3[0xa] f* ecx_3[3] f* ecx_3[0xd])
        f* ecx_3[4] + (xmm3_1 f* ecx_3[0xf] - xmm2_1 f* ecx_3[0xe] + xmm3_3 f* ecx_3[0xd]
        - xmm4_1 f* ecx_3[0xf] + xmm5_1 f* ecx_3[0xe] - xmm6_1 f* ecx_3[0xd]) f* ecx_3[8] - (
        xmm3_1 f* ecx_3[0xb] - xmm2_1 f* ecx_3[0xa] + xmm3_3 f* ecx_3[9] - xmm4_1 f* ecx_3[0xb]
        + xmm5_1 f* ecx_3[0xa] - xmm6_1 f* ecx_3[9]) f* ecx_3[0xc] - 0f
    
    if (9.99999975e-06f f> _mm_cvtpd_ps(__andps_xmmxud_memxud(_mm_cvtps_pd(xmm7_12), data_59e5a0)))
    label_4bc449:
        @__security_check_cookie@4(eax_1 ^ &var_298)
        return result
    
    void var_a0
    int128_t* eax_4 = sub_4bcb60(&var_a0, arg2, ecx_3, &var_a0)
    float xmm6_3[0x4] = *eax_4
    float xmm7_13[0x4] = eax_4[1]
    float xmm5_3[0x4] = eax_4[2]
    int128_t var_70_1 = eax_4[3]
    float xmm2_3 = arg2[5]
    float xmm4_3 = arg2[4]
    float xmm3_5 = arg2[6]
    float xmm5_5 = _mm_shuffle_ps(xmm6_3, xmm6_3, 0x55)
    float var_120_1 = xmm6_3[0]
    float xmm5_7 = _mm_shuffle_ps(xmm6_3, xmm6_3, 0xaa)
    float var_110_1 = xmm7_13[0]
    float xmm5_9 = _mm_shuffle_ps(xmm7_13, xmm7_13, 0x55)
    float xmm1_21 =
        xmm4_3 f* xmm6_3 + xmm2_3 * xmm5_5 + xmm3_5 * xmm5_7 + _mm_shuffle_ps(xmm6_3, xmm6_3, 0xff)
    float xmm5_11 = _mm_shuffle_ps(xmm7_13, xmm7_13, 0xaa)
    float xmm1_26 =
        xmm4_3 f* xmm7_13 + xmm2_3 * xmm5_9 + xmm3_5 * xmm5_11 + _mm_shuffle_ps(xmm7_13, xmm7_13, 0xff)
    float xmm0_67 = _mm_shuffle_ps(xmm5_3, xmm5_3, 0x55)
    float var_1bc_1 = xmm1_26
    float xmm0_69 = _mm_shuffle_ps(xmm5_3, xmm5_3, 0xaa)
    float xmm2_5 = xmm7_13[0]
    float xmm3_7 = *arg3
    float xmm0_71 = _mm_shuffle_ps(xmm5_3, xmm5_3, 0xff)
    float xmm5_13 = arg3[1]
    float xmm4_8 = arg3[2]
    int32_t var_26c_1 = 0
    float xmm1_29 = xmm5_3[0] * xmm3_7 + xmm0_67 * xmm5_13
    int64_t var_54_1 = _mm_unpacklo_ps(xmm6_3 f* xmm3_7 + xmm5_5 * xmm5_13 + xmm5_7 * xmm4_8, 
        xmm2_5 * xmm3_7 + xmm5_9 * xmm5_13 + xmm5_11 * xmm4_8)
    float var_4c_1 = xmm1_29 + xmm0_69 * xmm4_8
    int32_t eax_9 = arg5 - 1
    int32_t var_270_1 = eax_9
    label_4bae92:
    int32_t edx = 0
    int64_t var_3c_1 = xmm1_21.q
    float var_34_1 = xmm4_3 f* xmm5_3 + xmm2_3 * xmm0_67 + xmm3_5 * xmm0_69 + xmm0_71
    char const* const var_2ac_1
    int32_t var_2a8_1
    char const* const var_2a4_3
    uint32_t eax_10
    char* ecx_10
    
    if (eax_9 s<= 0)
    label_4bb30a:
        int32_t ecx_7 = edi[arg5 - 2]
        int32_t eax_14 = edi[arg5 - 1] * 0x2c
        int64_t var_48_1 = *(eax_14 + arg7 + 0x10)
        float var_40_1 = *(eax_14 + arg7 + 0x18)
        
        while (true)
            float xmm0_149 = var_3c_1.d
            float xmm1_59 = var_3c_1:4.d
            int32_t* edi_2 = ecx_7 * 0x2c
            float xmm0_150 = xmm0_149 f* *(edi_2 + arg7 + 0x1c)
            float xmm4_19 = *(edi_2 + arg7 + 0xc)
            float xmm0_152 = *(edi_2 + arg7 + 0x20) * xmm1_59
            float xmm5_24 = *(edi_2 + arg7 + 8)
            float xmm3_18 = *(edi_2 + arg7 + 0x24) * var_34_1
            float xmm1_62 = xmm4_19 * xmm4_19
            float xmm6_19 = xmm5_24 * xmm5_24
            float xmm1_63 = *(edi_2 + arg7)
            float xmm2_28 = xmm1_63 * xmm1_63
            float xmm1_64 = *(edi_2 + arg7 + 4)
            float xmm7_27 = xmm1_64 * xmm1_64
            float xmm1_65 = xmm1_64 f* *(edi_2 + arg7)
            var_298 = xmm5_24
            float xmm5_25 = xmm5_24 * xmm4_19
            float xmm3_19 = xmm3_18 + xmm3_18
            float xmm4_21 = xmm1_65 - xmm5_25
            float xmm5_27 = xmm0_152 + xmm0_152
            float xmm4_23 = *(edi_2 + arg7 + 4) f* *(edi_2 + arg7 + 0xc)
            float xmm0_156 = xmm2_28 + xmm1_62 - xmm7_27 - xmm6_19
            float xmm0_158 = *(edi_2 + arg7 + 8) f* *(edi_2 + arg7)
            float xmm0_159 = xmm0_158 + xmm4_23
            float xmm7_29 = xmm0_150 + xmm0_150
            float xmm4_26[0x4] = xmm0_150 * xmm0_156 + xmm5_27 * xmm4_21 + xmm3_19 * xmm0_159
            float xmm0_167 = xmm5_25 + xmm1_65
            float xmm1_67 = xmm1_62 - xmm2_28
            int32_t var_274_3 = xmm4_26
            float xmm0_170 = xmm7_27 + xmm1_67 - xmm6_19
            float xmm1_69 = *(edi_2 + arg7 + 8) f* *(edi_2 + arg7 + 4)
            float xmm2_30 = *(edi_2 + arg7) f* *(edi_2 + arg7 + 0xc)
            float xmm7_31 = xmm1_69 - xmm2_30
            float xmm0_173 = xmm2_30 + xmm1_69
            float xmm3_22 = xmm0_158 - xmm4_23
            float var_288_4 = xmm0_173
            float xmm1_72 = xmm1_67 - xmm7_27 + xmm6_19
            float xmm1_74 = xmm4_26 f+ *(edi_2 + arg7 + 0x10)
            int64_t xmm0_179 =
                _mm_unpacklo_ps(xmm4_26, xmm7_29 * xmm0_167 + xmm0_170 * xmm0_152 + xmm3_19 * xmm7_31)
            float xmm2_35 = var_54_1:4.d
            float xmm0_181 = *(edi_2 + arg7 + 0x14) f+ xmm0_179:4.d
            float xmm3_24 = xmm2_35 * 2f
            int64_t var_220_1
            var_220_1:4.d = xmm0_181
            float xmm0_183 =
                *(edi_2 + arg7 + 0x18) + xmm5_27 * xmm0_173 + xmm7_29 * xmm3_22 + xmm1_72 * xmm3_18
            var_220_1.d = xmm1_74
            float xmm1_76 = var_4c_1 * 2f
            float xmm0_186 = var_54_1.d
            float xmm0_187 = xmm0_186 * 2f
            float xmm4_29 = xmm4_21 * xmm3_24 + xmm0_156 * xmm0_186 + xmm0_159 * xmm1_76
            float var_280_3 = xmm4_29
            float var_1ac_1 = xmm0_167 * xmm0_187 + xmm0_170 * xmm2_35 + xmm7_31 * xmm1_76
            float xmm2_36 = var_48_1.d
            float xmm4_34 = *(edi_2 + arg7 + 4)
            float xmm0_190 = var_48_1:4.d
            float xmm3_25 = xmm4_34
            float xmm6_22 = *(edi_2 + arg7 + 8)
            float xmm1_81 = *(edi_2 + arg7 + 0xc)
            float var_28c_4 = xmm3_25
            float xmm5_38 = xmm1_81
            float var_280_4 = xmm5_38
            float var_284_5 = xmm6_22
            float xmm2_39 = xmm2_36 * xmm2_36 + xmm0_190 * xmm0_190 + var_40_1 * var_40_1
            void var_b0
            int64_t var_30
            int64_t var_20
            
            if (xmm2_39 <= 9.99999975e-06f)
                xmm6_22 = var_284_5
            else
                var_280_4 = xmm1_81
                var_28c_4 = xmm4_34
                var_284_5 = xmm6_22
                xmm3_25 = xmm4_34
                float xmm2_43 = xmm1_59 * xmm1_59 + xmm0_149 * xmm0_149 + var_34_1 * var_34_1
                
                if (not(xmm2_43 <= 9.99999975e-06f))
                    float xmm0_199
                    eax_10, xmm0_199 = sub_412d90(xmm2_39)
                    float var_210
                    float xmm0_203
                    
                    if (not(xmm0_199 <= 9.99999975e-06f))
                        float xmm1_82 = 1f / xmm0_199
                        float xmm1_83 = xmm1_82 * var_40_1
                        int64_t xmm2_46 =
                            _mm_unpacklo_ps(xmm1_82 f* var_48_1.d, xmm1_82 f* var_48_1:4.d)
                        var_210 = xmm2_46.d
                        var_210 = xmm1_83
                        var_30 = xmm2_46
                        float var_28_2 = xmm1_83
                        eax_10, xmm0_203 = sub_412d90(xmm2_43)
                    
                    if (xmm0_199 <= 9.99999975e-06f || xmm0_203 <= 9.99999975e-06f)
                    label_4bc452:
                        var_2a4_3 = "Norm"
                        var_2a8_1 = 0x12e
                        ecx_10 = "length > EPSILON"
                        var_2ac_1 = "c:\ax2017\engine\vec3.cpp"
                        break
                    
                    float xmm1_84 = 1f / xmm0_203
                    float xmm2_48 = var_34_1 * xmm1_84
                    var_210 = xmm2_48
                    float var_18_1 = xmm2_48
                    int64_t xmm0_206 = _mm_unpacklo_ps(xmm0_149 * xmm1_84, xmm1_59 * xmm1_84)
                    var_210 = xmm0_206.d
                    var_20 = xmm0_206
                    float xmm5_39[0x4] = *sub_49ff30(&var_b0, &var_20, &var_30, &var_b0)
                    float xmm4_36 = _mm_shuffle_ps(xmm5_39, xmm5_39, 0xff)
                    float xmm3_31 = _mm_shuffle_ps(xmm5_39, xmm5_39, 0xaa)
                    float xmm2_50 = _mm_shuffle_ps(xmm5_39, xmm5_39, 0x55)
                    float var_17c_1 =
                        xmm1_64 * xmm4_36 + xmm4_19 * xmm2_50 + var_298 f* xmm5_39 - xmm1_63 * xmm3_31
                    float var_178_1 =
                        var_298 * xmm4_36 + xmm4_19 * xmm3_31 + xmm1_63 * xmm2_50 - xmm1_64 f* xmm5_39
                    float var_174_1 =
                        xmm4_19 * xmm4_36 - xmm1_63 f* xmm5_39 - xmm1_64 * xmm2_50 - var_298 * xmm3_31
                    *(edi_2 + arg7) = (xmm1_63 * xmm4_36 + xmm4_19 f* xmm5_39 + xmm1_64 * xmm3_31
                        - var_298 * xmm2_50).o
                    xmm5_38 = *(edi_2 + arg7 + 0xc)
                    xmm3_25 = *(edi_2 + arg7 + 4)
                    var_280_4 = xmm5_38
                    xmm6_22 = *(edi_2 + arg7 + 8)
                    var_28c_4 = xmm3_25
                    var_284_5 = xmm6_22
            
            float xmm2_52 = *(edi_2 + arg7 + 0x20) f* var_48_1:4.d
            var_298 = *(edi_2 + arg7 + 0x1c) f* var_48_1.d
            float xmm0_233 = *(edi_2 + arg7 + 0x24) * var_40_1
            float xmm7_35 = *(edi_2 + arg7)
            float xmm4_38 = xmm3_25 * xmm7_35
            float xmm0_235 = xmm5_38 * xmm5_38
            float xmm1_101 = xmm7_35 * xmm7_35
            float xmm0_237 = xmm3_25 * xmm3_25
            float xmm3_33 = xmm5_38 * xmm6_22
            float xmm0_239 = xmm6_22 * xmm6_22
            float xmm6_29 = xmm5_38 * var_28c_4
            float xmm0_241 = xmm2_52 + xmm2_52
            float xmm5_41 = var_284_5 * xmm7_35
            float xmm2_54 = xmm0_233 + xmm0_233
            float xmm7_38 = (xmm1_101 + xmm0_235 - xmm0_237 - xmm0_239) * var_298
                + (xmm4_38 - xmm3_33) * xmm0_241 + (xmm5_41 + xmm6_29) * xmm2_54
            float xmm0_253 = var_298
            float var_290_8 = xmm7_38
            var_298 = xmm0_253 + xmm0_253
            float xmm0_256 = xmm0_235 - xmm1_101
            float xmm1_103 = var_28c_4 * var_284_5
            float xmm1_105 = var_280_4 f* *(edi_2 + arg7)
            float xmm2_56[0x4] = xmm7_38 f+ *(edi_2 + arg7 + 0x10)
            int64_t xmm4_40 = *(edi_2 + arg7 + 0x14) + (xmm0_237 + xmm0_256 - xmm0_239) * xmm2_52
                + (xmm3_33 + xmm4_38) * var_298 + (xmm1_103 - xmm1_105) * xmm2_54
            float xmm1_112 = *(edi_2 + arg7 + 0x18)
            edi = var_22c
            float xmm3_40 = (xmm1_105 + xmm1_103) * xmm0_241 + (xmm5_41 - xmm6_29) * var_298
                + (xmm0_256 - xmm0_237 + xmm0_239) * xmm0_233
            var_48_1 = _mm_unpacklo_ps(xmm2_56, xmm4_40)
            var_3c_1 = var_220_1
            float xmm1_113 = xmm1_112 + xmm3_40
            var_54_1 = xmm4_29.q
            var_40_1 = xmm1_113
            var_34_1 = xmm0_183
            var_4c_1 = xmm3_22 * xmm0_187 + xmm0_173 * xmm3_24 + xmm1_72 * var_4c_1
            
            if (ecx_7 == *edi)
                float xmm4_41 = xmm4_40 f- xmm0_181
                float xmm2_57 = xmm2_56 f- xmm1_74
                float xmm1_114 = xmm1_113 - xmm0_183
                
                if (not(9.99999975e-06f > xmm4_41 * xmm4_41 + xmm2_57 * xmm2_57 + xmm1_114 * xmm1_114))
                    int32_t eax_26 = var_26c_1 + 1
                    var_26c_1 = eax_26
                    
                    if (eax_26 s< 0x64)
                        eax_9 = var_270_1
                        goto label_4bae92
                
                float xmm6_30 = *arg2
                float xmm3_41 = arg2[1]
                float xmm2_59 = arg2[2]
                float xmm1_116 = arg2[3]
                float xmm7_40 = xmm3_41 * xmm3_41
                float xmm4_47 = xmm6_30 * xmm3_41 - xmm2_59 * xmm1_116
                float xmm5_45 = xmm1_116 * xmm1_116
                float xmm0_271 = xmm2_59 * xmm2_59
                float xmm4_48 = xmm4_47 + xmm4_47
                float xmm0_273 = arg2[2] f* xmm3_41
                float xmm4_50 = xmm6_30 * xmm6_30
                float xmm3_43 = xmm1_116 * xmm6_30
                float xmm2_63 = xmm7_40 - xmm0_271 + xmm5_45 - xmm4_50
                float xmm1_118 = xmm3_43 + xmm0_273
                float xmm1_119 = xmm1_118 + xmm1_118
                float var_290_9 = xmm4_48 * var_120_1 + xmm2_63 * xmm5_5 + xmm1_119 * xmm5_7
                float var_280_7 = xmm4_48 * var_110_1 + xmm2_63 * xmm5_9 + xmm1_119 * xmm5_11
                float xmm1_122 = xmm0_273 - xmm3_43
                float var_28c_7 = xmm4_48 * xmm5_3[0] + xmm2_63 * xmm0_67 + xmm1_119 * xmm0_69
                float xmm1_123 = xmm1_122 + xmm1_122
                float xmm2_68 = xmm0_271 - xmm7_40 - xmm4_50 + xmm5_45
                float xmm6_32 = arg2[2] f* xmm6_30 + arg2[3] f* xmm3_41
                float xmm6_33 = xmm6_32 + xmm6_32
                int32_t ecx_11 = 0
                float xmm4_54 = xmm6_33 * var_120_1 + xmm1_123 * xmm5_5 + xmm2_68 * xmm5_7
                float var_274_5 = xmm4_54
                float xmm3_47 = xmm6_33 * var_110_1 + xmm1_123 * xmm5_9 + xmm2_68 * xmm5_11
                float xmm6_36 = xmm6_33 * xmm5_3[0] + xmm1_123 * xmm0_67 + xmm2_68 * xmm0_69
                float var_27c_7 = xmm3_47
                float var_284_7 = xmm6_36
                
                if (var_270_1 s> 0)
                    do
                        int128_t* eax_28 = edi[ecx_11] * 0x2c
                        var_298 = var_290_9
                        float xmm7_49 = var_280_7 + var_280_7
                        float xmm2_70[0x4] = *(eax_28 + arg7)
                        float xmm5_47 = xmm2_70[0] ^ 0x80000000
                        float xmm1_127 = _mm_shuffle_ps(xmm2_70, xmm2_70, 0x55) ^ 0x80000000
                        float xmm4_57 = _mm_shuffle_ps(xmm2_70, xmm2_70, 0xaa) ^ 0x80000000
                        float xmm2_71 = _mm_shuffle_ps(xmm2_70, xmm2_70, 0xff)
                        float xmm3_49 = xmm5_47 * xmm5_47
                        float xmm0_302 = xmm2_71 * xmm2_71
                        float xmm0_304 = xmm1_127 * xmm1_127
                        float xmm0_306 = xmm4_57 * xmm4_57
                        float xmm6_38 = xmm1_127 * xmm5_47
                        float xmm0_308 = xmm4_57 * xmm5_47
                        float xmm4_58 = xmm4_57 * xmm2_71
                        float xmm5_49 = xmm1_127 * xmm2_71
                        float xmm2_73 = var_28c_7 + var_28c_7
                        float xmm0_315 = var_298
                        var_290_9 = (xmm3_49 + xmm0_302 - xmm0_304 - xmm0_306) * var_290_9
                            + (xmm6_38 - xmm4_58) * xmm7_49 + (xmm0_308 + xmm5_49) * xmm2_73
                        var_298 = xmm0_315 + xmm0_315
                        float xmm1_136 = xmm4_57 * xmm1_127
                        float xmm0_318 = xmm0_302 - xmm3_49
                        float xmm1_138 = xmm5_47 * xmm2_71
                        var_280_7 = (xmm0_304 + xmm0_318 - xmm0_306) * var_280_7
                            + (xmm6_38 + xmm4_58) * var_298 + (xmm1_136 - xmm1_138) * xmm2_73
                        float xmm2_74[0x4] = *(eax_28 + arg7)
                        float xmm4_59 = xmm2_74[0]
                        float xmm0_324 = (xmm0_308 - xmm5_49) * var_298
                        float xmm7_51 = var_27c_7 + var_27c_7
                        int32_t xmm1_146 = _mm_shuffle_ps(xmm2_74, xmm2_74, 0x55)
                        int32_t xmm5_51 = _mm_shuffle_ps(xmm2_74, xmm2_74, 0xaa)
                        float xmm2_75 = _mm_shuffle_ps(xmm2_74, xmm2_74, 0xff)
                        float xmm1_147 = xmm1_146 ^ 0x80000000
                        float xmm4_60 = xmm4_59 ^ 0x80000000
                        float xmm5_52 = xmm5_51 ^ 0x80000000
                        var_298 = xmm4_60
                        float xmm0_330 = xmm2_75 * xmm2_75
                        float xmm0_332 = xmm1_147 * xmm1_147
                        float xmm3_51 = xmm4_60 * xmm4_60
                        var_28c_7 = (xmm1_136 + xmm1_138) * xmm7_49 + xmm0_324
                            + (xmm0_318 - xmm0_304 + xmm0_306) * var_28c_7
                        float xmm0_334 = xmm5_52 * xmm5_52
                        float xmm6_47 = xmm1_147 * xmm4_60
                        float xmm0_336 = xmm5_52 * var_298
                        float xmm4_62 = xmm5_52 * xmm2_75
                        float xmm5_54 = xmm1_147 * xmm2_75
                        float xmm2_77 = var_284_7 + var_284_7
                        float xmm0_344 = xmm4_54 + xmm4_54
                        var_274_5 = (xmm3_51 + xmm0_330 - xmm0_332 - xmm0_334) * var_274_5
                            + (xmm6_47 - xmm4_62) * xmm7_51 + (xmm0_336 + xmm5_54) * xmm2_77
                        float xmm1_156 = xmm5_52 * xmm1_147
                        float xmm0_346 = xmm0_330 - xmm3_51
                        var_298 = var_298 * xmm2_75
                        ecx_11 += 1
                        float xmm6_50 = var_298
                        xmm4_54 = var_274_5
                        var_27c_7 = (xmm0_332 + xmm0_346 - xmm0_334) * var_27c_7
                            + (xmm6_47 + xmm4_62) * xmm0_344 + (xmm1_156 - xmm6_50) * xmm2_77
                        xmm6_36 = (xmm6_50 + xmm1_156) * xmm7_51 + (xmm0_336 - xmm5_54) * xmm0_344
                            + (xmm0_346 - xmm0_332 + xmm0_334) * var_284_7
                        var_284_7 = xmm6_36
                    while (ecx_11 s< var_270_1)
                    
                    xmm3_47 = var_27c_7
                
                float xmm0_357
                eax_10, xmm0_357 = sub_412d90(xmm3_47 * xmm3_47 + xmm4_54 * xmm4_54 + xmm6_36 * xmm6_36)
                
                if (xmm0_357 <= 9.99999975e-06f)
                    goto label_4bc452
                
                float xmm0_358 = 1f / xmm0_357
                float xmm0_359 = xmm0_358 * var_284_7
                float xmm1_175[0x4] = xmm0_358 * var_274_5
                int64_t xmm2_79 = xmm0_358 * var_27c_7
                float var_260_3 = xmm1_175
                int64_t var_200_1 = _mm_unpacklo_ps(xmm1_175, xmm2_79)
                float var_1f8_2 = xmm0_359
                float var_240_3 = xmm2_79
                float xmm0_366
                eax_10, xmm0_366 =
                    sub_412d90(var_280_7 * var_280_7 + var_290_9 * var_290_9 + var_28c_7 * var_28c_7)
                
                if (xmm0_366 <= 9.99999975e-06f)
                    goto label_4bc452
                
                float xmm3_52 = 1f / xmm0_366
                float xmm4_65[0x4] = xmm3_52 * var_290_9
                int64_t xmm1_181 = xmm3_52 * var_280_7
                float xmm3_53 = xmm3_52 * var_28c_7
                var_20 = _mm_unpacklo_ps(xmm4_65, xmm1_181)
                float xmm2_82 = xmm1_181.d * xmm0_359 - xmm3_53 * var_240_3
                float var_18_2 = xmm3_53
                float xmm3_55 = xmm3_53 * var_260_3 - xmm4_65[0] * xmm0_359
                float xmm4_67 = xmm4_65 f* var_240_3 - xmm1_181 f* var_260_3
                float xmm2_83 = 1f / (
                    sub_412d90(xmm3_55 * xmm3_55 + xmm2_82 * xmm2_82 + xmm4_67 * xmm4_67)
                    + 9.99999975e-06f)
                float var_28_4 = xmm2_83 * xmm4_67
                var_30 = _mm_unpacklo_ps(xmm2_83 * xmm2_82, xmm2_83 * xmm3_55)
                int128_t xmm0_381 = *sub_413000(&var_b0, 0x571898, 0x5718a4, &var_b0, &var_20, &var_30)
                result = edi[arg5 - 1] * 0x2c
                *(result + arg7) = xmm0_381
                goto label_4bc449
            
            ecx_7 = *(ecx_7 * 0xd0 + arg6 + 0x6c)
    else
        while (true)
            if (edx != 0)
                eax_10 = edi[edx - 1]
                bool cond:1_1 = eax_10 != *(edi[edx] * 0xd0 + arg6 + 0x6c)
                edi = var_22c
                
                if (cond:1_1)
                    var_2a4_3 = &data_59622c
                    var_2a8_1 = 0x514
                    var_2ac_1 = "c:\ax2017\engine\animation.cpp"
                    ecx_10 = "i == 0 || boneIndicies[i-1] == defBones[boneIndicies[i]].parentBoneIndex"
                    break
            
            int128_t* ecx_6 = edi[edx] * 0x2c
            float xmm0_86 = var_3c_1.d f- *(ecx_6 + arg7 + 0x10)
            float xmm7_14[0x4] = *(ecx_6 + arg7)
            float xmm6_9 = var_3c_1:4.d f- *(ecx_6 + arg7 + 0x14)
            float xmm4_10 = xmm7_14[0] ^ 0x80000000
            float xmm0_88 = var_34_1 f- *(ecx_6 + arg7 + 0x18)
            int32_t xmm3_9 = _mm_shuffle_ps(xmm7_14, xmm7_14, 0xaa)
            int32_t xmm2_10 = _mm_shuffle_ps(xmm7_14, xmm7_14, 0x55)
            float xmm3_10 = xmm3_9 ^ 0x80000000
            float xmm7_15[0x4] = _mm_shuffle_ps(xmm7_14, xmm7_14, 0xff)
            float xmm2_11 = xmm2_10 ^ 0x80000000
            float xmm0_90 = xmm7_15[0] f* xmm7_15
            float xmm1_32 = xmm4_10 * xmm4_10
            float xmm0_92 = xmm2_11 * xmm2_11
            float xmm4_12 = xmm3_10 f* xmm7_15
            float var_240
            var_240.o = xmm7_15
            var_298 = xmm3_10 * xmm3_10
            float xmm0_96 = xmm3_10 * xmm4_10
            float xmm3_12 = xmm2_11 f* xmm7_15
            float xmm5_15 = xmm4_10 * xmm2_11
            float xmm6_10 = xmm6_9 + xmm6_9
            float xmm2_13 = xmm0_88 + xmm0_88
            float xmm0_104 = xmm0_86 + xmm0_86
            float xmm0_106 = xmm0_90 - xmm1_32
            float xmm1_34 = xmm3_10 * xmm2_11
            float xmm1_36 = xmm4_10 * var_240
            float xmm2_16 = xmm0_106 - xmm0_92 + var_298
            float xmm3_13[0x4] = *(ecx_6 + arg7)
            int64_t xmm7_23 = _mm_unpacklo_ps(
                (xmm1_32 + xmm0_90 - xmm0_92 - var_298) * xmm0_86 + (xmm5_15 - xmm4_12) * xmm6_10
                    + (xmm3_12 + xmm0_96) * xmm2_13, 
                (xmm0_92 + xmm0_106 - var_298) * xmm6_9 + (xmm4_12 + xmm5_15) * xmm0_104
                + (xmm1_34 - xmm1_36) * xmm2_13)
            float xmm4_16 = xmm3_13[0]
            var_3c_1 = xmm7_23
            int32_t xmm5_20 = _mm_shuffle_ps(xmm3_13, xmm3_13, 0xaa)
            int32_t xmm2_19 = _mm_shuffle_ps(xmm3_13, xmm3_13, 0x55)
            float xmm3_14 = _mm_shuffle_ps(xmm3_13, xmm3_13, 0xff)
            float xmm2_20 = xmm2_19 ^ 0x80000000
            float xmm4_17 = xmm4_16 ^ 0x80000000
            var_34_1 =
                (xmm0_96 - xmm3_12) * xmm0_104 + (xmm1_36 + xmm1_34) * xmm6_10 + xmm2_16 * xmm0_88
            float xmm5_21 = xmm5_20 ^ 0x80000000
            float var_290_3 = xmm4_17
            float xmm0_116 = xmm3_14 * xmm3_14
            float xmm1_44 = xmm4_17 * xmm4_17
            float xmm0_118 = xmm2_20 * xmm2_20
            var_298 = xmm5_21 * xmm5_21
            float xmm0_122 = var_54_1:4.d * 2f
            float xmm7_25 = xmm2_20 * xmm4_17
            float xmm0_124 = xmm5_21 * xmm4_17
            float xmm2_21 = var_54_1.d
            float xmm6_12 = xmm5_21 * xmm3_14
            float xmm5_23 = xmm2_20 * xmm3_14
            float xmm3_16 = var_4c_1 * 2f
            float xmm2_22 = xmm2_21 * 2f
            var_240.q = (xmm1_44 + xmm0_116 - xmm0_118 - var_298) * xmm2_21
            var_240.q = var_240 + (xmm7_25 - xmm6_12) * xmm0_122 + (xmm5_23 + xmm0_124) * xmm3_16
            float xmm0_137 = xmm0_116 - xmm1_44
            edx += 1
            float xmm1_50 = xmm5_21 * xmm2_20
            float xmm1_52 = xmm4_17 * xmm3_14
            float xmm0_145 = (xmm0_124 - xmm5_23) * xmm2_22 + (xmm1_52 + xmm1_50) * xmm0_122
                + (xmm0_137 - xmm0_118 + var_298) * var_4c_1
            var_54_1 = _mm_unpacklo_ps(zx.o(var_240.q), 
                (xmm0_118 + xmm0_137 - var_298) f* var_54_1:4.d + (xmm6_12 + xmm7_25) * xmm2_22
                    + (xmm1_50 - xmm1_52) * xmm3_16)
            var_4c_1 = xmm0_145
            
            if (edx s>= var_270_1)
                goto label_4bb30a
    
    sub_44e4d0(eax_10, &data_5559b1, ecx_10, var_2ac_1, var_2a8_1, var_2a4_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
