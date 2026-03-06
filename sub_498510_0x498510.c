// 函数名称: sub_498510
// 虚拟地址: 0x498510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __fastcallsub_498510(void* arg1, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = sub_4459f0(**(arg1 + 0x2e4))
    void* ebx_1 = *(arg1 + 0x2dc) * 0x134 + *eax_3
    arg2[0xc] = arg1
    arg2[0xb] = modu.dp.d(0:(sub_452ac0()), 0x7fffffff)
    *(arg1 + 0x2ec) = 0x3f800000
    *(arg1 + 0x288) = data_5c779c
    *(arg1 + 0x298) = data_5c77ac
    void* ecx_1 = *(arg2[0xc] i+ 0x2e4)
    int32_t edx_2 = *(ecx_1 + 0x28)
    
    if (edx_2 s> 0)
        arg2[0xf] = sub_498230(*(ecx_1 + 0x24), edx_2)
    
    int32_t* eax_8 = sub_4459f0(**(arg1 + 0x2e4))
    float var_44
    
    if (*(*(arg1 + 0x2dc) * 0x134 + *eax_8 + 0xd6) != 0)
        var_44 = (sub_452ac0() & 0x7fffff) | 0x3f800000
        arg2[9] = (var_44 - 1f) * 6.28318548f + 0f
    
    int32_t* eax_14 = sub_4459f0(**(arg1 + 0x2e4))
    
    if (*(*(arg1 + 0x2dc) * 0x134 + *eax_14 + 0xd8) != 0)
        var_44 = (sub_452ac0() & 0x7fffff) | 0x3f800000
        *(arg1 + 0x2e8) = var_44 - 1f + 0f
    
    int32_t* eax_20 = sub_4459f0(**(arg1 + 0x2e4))
    float var_84
    float var_74
    
    if (*(*(arg1 + 0x2dc) * 0x134 + *eax_20 + 0xd7) != 0)
        int64_t* eax_22 = sub_4983d0(&var_74)
        int64_t xmm0_9 = *eax_22
        float eax_23 = eax_22[1].d
        var_44 = (sub_452ac0() & 0x7fffff) | 0x3f800000
        float xmm0_13 = (var_44 - 1f) * 6.28318548f * 0.5f
        var_44 = xmm0_13
        float xmm0_14 = sub_4145d0(xmm0_13)
        float xmm0_15 = var_44
        var_84 = xmm0_9.d * xmm0_14
        float var_80_1 = xmm0_9:4.d * xmm0_14
        float var_7c_1 = eax_23 * xmm0_14
        int32_t var_78_1 = sub_4145b0(xmm0_15)
        *(arg1 + 0x28c) = var_84.o
    
    float var_48 = 0f
    TEB* fsbase
    float xmm0_19
    
    if (sub_495790(&var_48, 0x1a, arg1, &var_48) == 0)
        xmm0_19 = var_48
    else
        if (data_e47798 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_e47798)
            
            if (data_e47798 == 0xffffffff)
                data_e4779c = 0x3c8efa35
                __Init_thread_footer(&data_e47798)
        
        xmm0_19 = data_e4779c * var_48
    
    float var_54 = xmm0_19
    float var_58 = 0f
    float xmm0_21
    
    if (sub_495790(&var_58, 0x1b, arg1, &var_58) == 0)
        xmm0_21 = var_58
    else
        if (data_e47798 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_e47798)
            
            if (data_e47798 == 0xffffffff)
                data_e4779c = 0x3c8efa35
                __Init_thread_footer(&data_e47798)
        
        xmm0_21 = data_e4779c * var_58
    
    var_48 = xmm0_21
    float var_4c
    
    if (sub_495790(&var_4c, 0x19, arg1, &var_4c) != 0)
        var_44 = sub_4145b0(var_48)
        arg2[3] = sub_4145d0(var_54) * var_44 * var_4c f* *(*(arg1 + 0x2e4) + 0x58) + arg2[3]
        arg2[4] = sub_4145b0(var_54) * var_44 * var_4c f* *(*(arg1 + 0x2e4) + 0x58) + arg2[4]
        arg2[5] = sub_4145d0(var_48) * var_4c f* *(*(arg1 + 0x2e4) + 0x58) + arg2[5]
    
    if (sub_495790(&var_44, 0x18, arg1, &var_44) != 0)
        var_4c = sub_4145b0(var_48)
        *(arg1 + 0x29c) = sub_4145d0(var_54) * var_4c * var_44 f+ *(arg1 + 0x29c)
        *(arg1 + 0x2a0) = sub_4145b0(var_54) * var_4c * var_44 f+ *(arg1 + 0x2a0)
        *(arg1 + 0x2a4) = sub_4145d0(var_48) * var_44 f+ *(arg1 + 0x2a4)
    
    if (sub_495790(&var_54, 0x1c, arg1, &var_54) != 0)
        *(arg1 + 0x29c) = var_54 f+ *(arg1 + 0x29c)
    
    float var_64
    
    if (sub_495790(&var_64, 0x1d, arg1, &var_64) != 0)
        *(arg1 + 0x2a0) = *(arg1 + 0x2a0) + var_64
    
    float var_5c
    
    if (sub_495790(&var_5c, 0x1e, arg1, &var_5c) != 0)
        *(arg1 + 0x2a4) = *(arg1 + 0x2a4) + var_5c
    
    int32_t* eax_48 = sub_4459f0(**(arg1 + 0x2e4))
    int32_t ecx_20
    ecx_20.b = *(*(arg1 + 0x2dc) * 0x134 + *eax_48 + 0xdb)
    float eax_50 = *(ebx_1 + 0xf0)
    char var_4d = ecx_20.b
    var_5c = eax_50
    uint32_t edx_4
    
    if (eax_50 s<= 1 || ecx_20.b != 0)
        edx_4 = 0
    label_4989f7:
        arg2[0xd] = edx_4
        int32_t ebx_2 = *(ebx_1 + 0xf4)
        uint32_t edx_6
        
        if (ebx_2 s<= 1 || ecx_20.b != 0)
            edx_6 = 0
        label_498a21:
            arg2[0xe] = edx_6
            float var_3c
            
            if (sub_495790(&var_3c, 0x22, arg1, &var_3c) != 0)
                float xmm1_4 = data_5b0f3c f/ *(ecx_1 + 0x58)
                int64_t xmm0_63 = *(ecx_1 + 0x40)
                float xmm0_64 = var_3c
                float xmm3_7 = (xmm0_63:4.d f- *(ecx_1 + 0x6c)) * xmm0_64 * xmm1_4 + arg2[4]
                float xmm4_5 = (*(ecx_1 + 0x48) f- *(ecx_1 + 0x70)) * xmm0_64 * xmm1_4 + arg2[5]
                arg2[3] = (xmm0_63.d f- *(ecx_1 + 0x68)) * xmm0_64 * xmm1_4 + arg2[3]
                arg2[4] = xmm3_7
                arg2[5] = xmm4_5
            
            void* eax_57 = ebx_1
            int32_t i = 0
            
            if (*(eax_57 + 0x108) s> 0)
                do
                    int32_t ecx_23 = *(eax_57 + 0x10c)
                    int32_t edx_7 = *(ecx_23 + (i << 3))
                    
                    if (edx_7 - 9 u<= 0x2f)
                        switch (edx_7 + &jump_table_49976c[0xe]:3)
                            case &lookup_table_4997b0
                                void var_d4
                                int128_t* eax_273 = sub_4960f0(&var_d4, edx_7, 
                                    *(ecx_23 + (i << 3) + 4), (zx.o(0)).d, &var_d4)
                                int128_t var_38 = *eax_273
                                int128_t var_28_1 = eax_273[1]
                                int128_t var_b4
                                sub_4a0490(&var_38, arg1 + 0x288, &var_b4, &var_38)
                                *(arg1 + 0x288) = var_b4
                                int128_t var_a4
                                *(arg1 + 0x298) = var_a4
                            case &lookup_table_4997b0[0xe]
                                int32_t* eax_60 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_65
                                bool p_2
                                
                                if (eax_60[1] == 1)
                                    int32_t* eax_61 = *eax_60
                                    xmm0_65 = *eax_61
                                    float temp3_1 = eax_61[1]
                                    xmm0_65 - temp3_1
                                    eax_61:1.b = (xmm0_65 == temp3_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_65, temp3_1) ? 1 : 0) << 2
                                        | (xmm0_65 < temp3_1 ? 1 : 0)
                                    p_2 = unimplemented  {test ah, 0x44}
                                
                                if (eax_60[1] != 1 || p_2)
                                    int32_t eax_65 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_26 = (eax_65 << 0xf) + not.d(eax_65)
                                    int32_t ecx_27 = (ecx_26 u>> 0xc ^ ecx_26) * 5
                                    int32_t eax_73 = (ecx_27 u>> 4 ^ ecx_27) * 0x809
                                    void* eax_74 = arg2[0xc]
                                    var_3c = ((eax_73 u>> 0x10 ^ eax_73) & 0x7fffff) | 0x3f800000
                                    xmm0_65 = sub_4e0380(eax_60, *(eax_74 + 0x2f4), *(eax_74 + 0x2e8), 
                                        var_3c - 1f)
                                
                                *(arg1 + 0x2ec) = 100f / xmm0_65
                            case &lookup_table_4997b0[0x1a]
                                int32_t* eax_165 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_77
                                bool p_16
                                
                                if (eax_165[1] == 1)
                                    int32_t* eax_166 = *eax_165
                                    xmm0_77 = *eax_166
                                    float temp10_1 = eax_166[1]
                                    xmm0_77 - temp10_1
                                    eax_166:1.b = (xmm0_77 == temp10_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_77, temp10_1) ? 1 : 0) << 2
                                        | (xmm0_77 < temp10_1 ? 1 : 0)
                                    p_16 = unimplemented  {test ah, 0x44}
                                
                                if (eax_165[1] != 1 || p_16)
                                    int32_t eax_170 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_61 = (eax_170 << 0xf) + not.d(eax_170)
                                    int32_t ecx_62 = (ecx_61 u>> 0xc ^ ecx_61) * 5
                                    int32_t eax_178 = (ecx_62 u>> 4 ^ ecx_62) * 0x809
                                    void* eax_179 = arg2[0xc]
                                    var_3c = ((eax_178 u>> 0x10 ^ eax_178) & 0x7fffff) | 0x3f800000
                                    xmm0_77 = sub_4e0380(eax_165, *(eax_179 + 0x2f4), 
                                        *(eax_179 + 0x2e8), var_3c - 1f)
                                
                                float xmm0_79 = sub_4a0730(xmm0_77) * 0.5f
                                var_3c = xmm0_79
                                float xmm0_80 = sub_4145d0(xmm0_79)
                                var_58 = xmm0_80
                                float xmm0_81 = var_3c
                                var_44 = xmm0_80 * 0f
                                float xmm0_82 = sub_4145b0(xmm0_81)
                                float xmm4_6 = *(arg1 + 0x28c)
                                float xmm6_1 = *(arg1 + 0x294)
                                float xmm3_24 = *(arg1 + 0x290)
                                var_4c = xmm0_82
                                float xmm0_83 = var_44
                                float xmm2_9 = xmm0_83 f* *(arg1 + 0x298)
                                float xmm7_2 = xmm0_83 * xmm4_6
                                float xmm4_7 = xmm4_6 * var_58
                                float xmm0_84 = xmm0_83 * xmm6_1
                                float xmm5_2 = xmm0_83 * xmm3_24
                                float xmm1_21 = xmm4_6 * var_4c + xmm2_9 + xmm0_84
                                var_44 = xmm0_84
                                float xmm0_88 = xmm6_1 * var_4c
                                float xmm3_27 = xmm3_24 * var_4c + xmm2_9 + xmm4_7
                                float xmm6_2 = xmm6_1 * var_58
                                var_74 = xmm1_21 - xmm3_24 * var_58
                                float var_70_1 = xmm3_27 - var_44
                                float xmm3_29 = *(arg1 + 0x298)
                                float var_68_1 = xmm3_29 * var_4c - xmm7_2 - xmm5_2 - xmm6_2
                                float var_6c_1 = xmm3_29 * var_58 + xmm0_88 + xmm5_2 - xmm7_2
                                *(arg1 + 0x28c) = var_74.o
                            case &lookup_table_4997b0[0x1b]
                                int32_t* eax_180 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_90
                                bool p_18
                                
                                if (eax_180[1] == 1)
                                    int32_t* eax_181 = *eax_180
                                    xmm0_90 = *eax_181
                                    float temp11_1 = eax_181[1]
                                    xmm0_90 - temp11_1
                                    eax_181:1.b = (xmm0_90 == temp11_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_90, temp11_1) ? 1 : 0) << 2
                                        | (xmm0_90 < temp11_1 ? 1 : 0)
                                    p_18 = unimplemented  {test ah, 0x44}
                                
                                if (eax_180[1] != 1 || p_18)
                                    int32_t eax_185 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_66 = (eax_185 << 0xf) + not.d(eax_185)
                                    int32_t ecx_67 = (ecx_66 u>> 0xc ^ ecx_66) * 5
                                    int32_t eax_193 = (ecx_67 u>> 4 ^ ecx_67) * 0x809
                                    void* eax_194 = arg2[0xc]
                                    var_3c = ((eax_193 u>> 0x10 ^ eax_193) & 0x7fffff) | 0x3f800000
                                    xmm0_90 = sub_4e0380(eax_180, *(eax_194 + 0x2f4), 
                                        *(eax_194 + 0x2e8), var_3c - 1f)
                                
                                float xmm0_92 = sub_4a0730(xmm0_90) * 0.5f
                                var_3c = xmm0_92
                                float xmm0_93 = sub_4145d0(xmm0_92)
                                var_4c = xmm0_93
                                var_48 = xmm0_93 * 0f
                                float xmm0_96 = sub_4145b0(var_3c)
                                float xmm7_3 = *(arg1 + 0x28c)
                                float xmm1_29 = *(arg1 + 0x298)
                                float xmm3_36 = *(arg1 + 0x294)
                                float xmm4_8 = *(arg1 + 0x290)
                                var_44 = xmm0_96
                                float xmm0_97 = var_48
                                float xmm5_4 = xmm0_97 * xmm3_36
                                float xmm2_11 = xmm0_97 * xmm1_29
                                float xmm1_30 = xmm1_29 * var_4c
                                float xmm6_4 = xmm0_97 * xmm4_8
                                var_48 = xmm0_97 * xmm7_3
                                int64_t var_14
                                var_14:4.d = xmm3_36 * var_44 + xmm2_11 + xmm4_8 * var_4c - var_48
                                var_14.d = xmm4_8 * var_44 + xmm2_11 + var_48 - xmm3_36 * var_4c
                                float var_c_3 =
                                    *(arg1 + 0x298) * var_44 - xmm7_3 * var_4c - xmm6_4 - xmm5_4
                                *(arg1 + 0x28c) = (xmm1_30 + xmm7_3 * var_44 + xmm5_4 - xmm6_4).o
                            case &lookup_table_4997b0[0x1c]
                                int32_t* eax_195 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_104
                                bool p_20
                                
                                if (eax_195[1] == 1)
                                    int32_t* eax_196 = *eax_195
                                    xmm0_104 = *eax_196
                                    float temp12_1 = eax_196[1]
                                    xmm0_104 - temp12_1
                                    eax_196:1.b = (xmm0_104 == temp12_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_104, temp12_1) ? 1 : 0) << 2
                                        | (xmm0_104 < temp12_1 ? 1 : 0)
                                    p_20 = unimplemented  {test ah, 0x44}
                                
                                if (eax_195[1] != 1 || p_20)
                                    int32_t eax_200 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_71 = (eax_200 << 0xf) + not.d(eax_200)
                                    int32_t ecx_72 = (ecx_71 u>> 0xc ^ ecx_71) * 5
                                    int32_t eax_208 = (ecx_72 u>> 4 ^ ecx_72) * 0x809
                                    void* eax_209 = arg2[0xc]
                                    var_3c = ((eax_208 u>> 0x10 ^ eax_208) & 0x7fffff) | 0x3f800000
                                    xmm0_104 = sub_4e0380(eax_195, *(eax_209 + 0x2f4), 
                                        *(eax_209 + 0x2e8), var_3c - 1f)
                                
                                float xmm0_106 = sub_4a0730(xmm0_104) * 0.5f
                                var_3c = xmm0_106
                                float xmm0_107 = sub_4145d0(xmm0_106)
                                var_4c = xmm0_107
                                var_48 = xmm0_107 * 0f
                                float xmm0_110 = sub_4145b0(var_3c)
                                float xmm5_5 = *(arg1 + 0x28c)
                                float xmm7_5 = *(arg1 + 0x290)
                                float xmm3_43 = *(arg1 + 0x294)
                                var_44 = xmm0_110
                                float xmm0_111 = var_48
                                float xmm6_6 = xmm0_111 * xmm5_5
                                float xmm2_13 = xmm0_111 f* *(arg1 + 0x298)
                                float xmm1_47 = xmm5_5 * var_44 + xmm2_13
                                float xmm5_6 = xmm5_5 * var_4c
                                var_48 = xmm0_111 * xmm7_5
                                float xmm4_11 = xmm0_111 * xmm3_43
                                float var_8c_1 = xmm3_43 * var_44 + xmm2_13 + var_48 - xmm5_6
                                float var_90_1 =
                                    xmm7_5 * var_44 + *(arg1 + 0x298) * var_4c + xmm6_6 - xmm4_11
                                float var_88_1 =
                                    *(arg1 + 0x298) * var_44 - xmm6_6 - xmm7_5 * var_4c - xmm4_11
                                *(arg1 + 0x28c) = (xmm1_47 + xmm3_43 * var_4c - var_48).o
                            case &lookup_table_4997b0[0x1d]
                                int32_t* eax_210 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_118
                                bool p_22
                                
                                if (eax_210[1] == 1)
                                    int32_t* eax_211 = *eax_210
                                    xmm0_118 = *eax_211
                                    float temp13_1 = eax_211[1]
                                    xmm0_118 - temp13_1
                                    eax_211:1.b = (xmm0_118 == temp13_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_118, temp13_1) ? 1 : 0) << 2
                                        | (xmm0_118 < temp13_1 ? 1 : 0)
                                    p_22 = unimplemented  {test ah, 0x44}
                                
                                if (eax_210[1] != 1 || p_22)
                                    int32_t eax_215 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_76 = (eax_215 << 0xf) + not.d(eax_215)
                                    int32_t ecx_77 = (ecx_76 u>> 0xc ^ ecx_76) * 5
                                    int32_t eax_223 = (ecx_77 u>> 4 ^ ecx_77) * 0x809
                                    void* eax_224 = arg2[0xc]
                                    var_3c = ((eax_223 u>> 0x10 ^ eax_223) & 0x7fffff) | 0x3f800000
                                    xmm0_118 = sub_4e0380(eax_210, *(eax_224 + 0x2f4), 
                                        *(eax_224 + 0x2e8), var_3c - 1f)
                                
                                *arg2 = xmm0_118 + *arg2
                            case &lookup_table_4997b0[0x1e]
                                int32_t* eax_225 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_120
                                bool p_24
                                
                                if (eax_225[1] == 1)
                                    int32_t* eax_226 = *eax_225
                                    xmm0_120 = *eax_226
                                    float temp14_1 = eax_226[1]
                                    xmm0_120 - temp14_1
                                    eax_226:1.b = (xmm0_120 == temp14_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_120, temp14_1) ? 1 : 0) << 2
                                        | (xmm0_120 < temp14_1 ? 1 : 0)
                                    p_24 = unimplemented  {test ah, 0x44}
                                
                                if (eax_225[1] != 1 || p_24)
                                    int32_t eax_230 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_81 = (eax_230 << 0xf) + not.d(eax_230)
                                    int32_t ecx_82 = (ecx_81 u>> 0xc ^ ecx_81) * 5
                                    int32_t eax_238 = (ecx_82 u>> 4 ^ ecx_82) * 0x809
                                    void* eax_239 = arg2[0xc]
                                    var_3c = ((eax_238 u>> 0x10 ^ eax_238) & 0x7fffff) | 0x3f800000
                                    xmm0_120 = sub_4e0380(eax_225, *(eax_239 + 0x2f4), 
                                        *(eax_239 + 0x2e8), var_3c - 1f)
                                
                                arg2[1] = xmm0_120 + arg2[1]
                            case &lookup_table_4997b0[0x1f]
                                int32_t* eax_240 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_122
                                bool p_26
                                
                                if (eax_240[1] == 1)
                                    int32_t* eax_241 = *eax_240
                                    xmm0_122 = *eax_241
                                    float temp15_1 = eax_241[1]
                                    xmm0_122 - temp15_1
                                    eax_241:1.b = (xmm0_122 == temp15_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_122, temp15_1) ? 1 : 0) << 2
                                        | (xmm0_122 < temp15_1 ? 1 : 0)
                                    p_26 = unimplemented  {test ah, 0x44}
                                
                                if (eax_240[1] != 1 || p_26)
                                    int32_t eax_245 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_86 = (eax_245 << 0xf) + not.d(eax_245)
                                    int32_t ecx_87 = (ecx_86 u>> 0xc ^ ecx_86) * 5
                                    int32_t eax_253 = (ecx_87 u>> 4 ^ ecx_87) * 0x809
                                    void* eax_254 = arg2[0xc]
                                    var_3c = ((eax_253 u>> 0x10 ^ eax_253) & 0x7fffff) | 0x3f800000
                                    xmm0_122 = sub_4e0380(eax_240, *(eax_254 + 0x2f4), 
                                        *(eax_254 + 0x2e8), var_3c - 1f)
                                
                                arg2[2] = xmm0_122 + arg2[2]
                            case &lookup_table_4997b0[0x20]
                                int32_t* eax_75 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_66
                                bool p_4
                                
                                if (eax_75[1] == 1)
                                    int32_t* eax_76 = *eax_75
                                    xmm0_66 = *eax_76
                                    float temp4_1 = eax_76[1]
                                    xmm0_66 - temp4_1
                                    eax_76:1.b = (xmm0_66 == temp4_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_66, temp4_1) ? 1 : 0) << 2
                                        | (xmm0_66 < temp4_1 ? 1 : 0)
                                    p_4 = unimplemented  {test ah, 0x44}
                                
                                if (eax_75[1] != 1 || p_4)
                                    int32_t eax_80 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_31 = (eax_80 << 0xf) + not.d(eax_80)
                                    int32_t ecx_32 = (ecx_31 u>> 0xc ^ ecx_31) * 5
                                    int32_t eax_88 = (ecx_32 u>> 4 ^ ecx_32) * 0x809
                                    void* eax_89 = arg2[0xc]
                                    var_3c = ((eax_88 u>> 0x10 ^ eax_88) & 0x7fffff) | 0x3f800000
                                    xmm0_66 = sub_4e0380(eax_75, *(eax_89 + 0x2f4), *(eax_89 + 0x2e8), 
                                        var_3c - 1f)
                                
                                *(arg1 + 0x29c) = xmm0_66 f+ *(arg1 + 0x29c)
                            case &lookup_table_4997b0[0x21]
                                int32_t* eax_90 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_68
                                bool p_6
                                
                                if (eax_90[1] == 1)
                                    int32_t* eax_91 = *eax_90
                                    xmm0_68 = *eax_91
                                    float temp5_1 = eax_91[1]
                                    xmm0_68 - temp5_1
                                    eax_91:1.b = (xmm0_68 == temp5_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_68, temp5_1) ? 1 : 0) << 2
                                        | (xmm0_68 < temp5_1 ? 1 : 0)
                                    p_6 = unimplemented  {test ah, 0x44}
                                
                                if (eax_90[1] != 1 || p_6)
                                    int32_t eax_95 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_36 = (eax_95 << 0xf) + not.d(eax_95)
                                    int32_t ecx_37 = (ecx_36 u>> 0xc ^ ecx_36) * 5
                                    int32_t eax_103 = (ecx_37 u>> 4 ^ ecx_37) * 0x809
                                    void* eax_104 = arg2[0xc]
                                    var_3c = ((eax_103 u>> 0x10 ^ eax_103) & 0x7fffff) | 0x3f800000
                                    xmm0_68 = sub_4e0380(eax_90, *(eax_104 + 0x2f4), 
                                        *(eax_104 + 0x2e8), var_3c - 1f)
                                
                                *(arg1 + 0x2a0) = xmm0_68 f+ *(arg1 + 0x2a0)
                            case &lookup_table_4997b0[0x22]
                                int32_t* eax_105 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_70
                                bool p_8
                                
                                if (eax_105[1] == 1)
                                    int32_t* eax_106 = *eax_105
                                    xmm0_70 = *eax_106
                                    float temp6_1 = eax_106[1]
                                    xmm0_70 - temp6_1
                                    eax_106:1.b = (xmm0_70 == temp6_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_70, temp6_1) ? 1 : 0) << 2
                                        | (xmm0_70 < temp6_1 ? 1 : 0)
                                    p_8 = unimplemented  {test ah, 0x44}
                                
                                if (eax_105[1] != 1 || p_8)
                                    int32_t eax_110 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_41 = (eax_110 << 0xf) + not.d(eax_110)
                                    int32_t ecx_42 = (ecx_41 u>> 0xc ^ ecx_41) * 5
                                    int32_t eax_118 = (ecx_42 u>> 4 ^ ecx_42) * 0x809
                                    void* eax_119 = arg2[0xc]
                                    var_3c = ((eax_118 u>> 0x10 ^ eax_118) & 0x7fffff) | 0x3f800000
                                    xmm0_70 = sub_4e0380(eax_105, *(eax_119 + 0x2f4), 
                                        *(eax_119 + 0x2e8), var_3c - 1f)
                                
                                *(arg1 + 0x2a4) = xmm0_70 f+ *(arg1 + 0x2a4)
                            case &lookup_table_4997b0[0x23]
                                int32_t* eax_120 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_72
                                bool p_10
                                
                                if (eax_120[1] == 1)
                                    int32_t* eax_121 = *eax_120
                                    xmm0_72 = *eax_121
                                    float temp7_1 = eax_121[1]
                                    xmm0_72 - temp7_1
                                    eax_121:1.b = (xmm0_72 == temp7_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_72, temp7_1) ? 1 : 0) << 2
                                        | (xmm0_72 < temp7_1 ? 1 : 0)
                                    p_10 = unimplemented  {test ah, 0x44}
                                
                                if (eax_120[1] != 1 || p_10)
                                    int32_t eax_125 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_46 = (eax_125 << 0xf) + not.d(eax_125)
                                    int32_t ecx_47 = (ecx_46 u>> 0xc ^ ecx_46) * 5
                                    int32_t eax_133 = (ecx_47 u>> 4 ^ ecx_47) * 0x809
                                    void* eax_134 = arg2[0xc]
                                    var_3c = ((eax_133 u>> 0x10 ^ eax_133) & 0x7fffff) | 0x3f800000
                                    xmm0_72 = sub_4e0380(eax_120, *(eax_134 + 0x2f4), 
                                        *(eax_134 + 0x2e8), var_3c - 1f)
                                
                                arg2[3] = arg2[3] + xmm0_72
                            case &lookup_table_4997b0[0x24]
                                int32_t* eax_135 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_73
                                bool p_12
                                
                                if (eax_135[1] == 1)
                                    int32_t* eax_136 = *eax_135
                                    xmm0_73 = *eax_136
                                    float temp8_1 = eax_136[1]
                                    xmm0_73 - temp8_1
                                    eax_136:1.b = (xmm0_73 == temp8_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_73, temp8_1) ? 1 : 0) << 2
                                        | (xmm0_73 < temp8_1 ? 1 : 0)
                                    p_12 = unimplemented  {test ah, 0x44}
                                
                                if (eax_135[1] != 1 || p_12)
                                    int32_t eax_140 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_51 = (eax_140 << 0xf) + not.d(eax_140)
                                    int32_t ecx_52 = (ecx_51 u>> 0xc ^ ecx_51) * 5
                                    int32_t eax_148 = (ecx_52 u>> 4 ^ ecx_52) * 0x809
                                    void* eax_149 = arg2[0xc]
                                    var_3c = ((eax_148 u>> 0x10 ^ eax_148) & 0x7fffff) | 0x3f800000
                                    xmm0_73 = sub_4e0380(eax_135, *(eax_149 + 0x2f4), 
                                        *(eax_149 + 0x2e8), var_3c - 1f)
                                
                                arg2[4] = xmm0_73 + arg2[4]
                            case &lookup_table_4997b0[0x25]
                                int32_t* eax_150 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_75
                                bool p_14
                                
                                if (eax_150[1] == 1)
                                    float* eax_151 = *eax_150
                                    xmm0_75 = *eax_151
                                    float temp9_1 = eax_151[1]
                                    xmm0_75 - temp9_1
                                    eax_151:1.b = (xmm0_75 == temp9_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_75, temp9_1) ? 1 : 0) << 2
                                        | (xmm0_75 < temp9_1 ? 1 : 0)
                                    p_14 = unimplemented  {test ah, 0x44}
                                
                                if (eax_150[1] != 1 || p_14)
                                    int32_t eax_155 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_56 = (eax_155 << 0xf) + not.d(eax_155)
                                    int32_t ecx_57 = (ecx_56 u>> 0xc ^ ecx_56) * 5
                                    int32_t eax_163 = (ecx_57 u>> 4 ^ ecx_57) * 0x809
                                    void* eax_164 = arg2[0xc]
                                    var_3c = ((eax_163 u>> 0x10 ^ eax_163) & 0x7fffff) | 0x3f800000
                                    xmm0_75 = sub_4e0380(eax_150, *(eax_164 + 0x2f4), 
                                        *(eax_164 + 0x2e8), var_3c - 1f)
                                
                                arg2[5] = xmm0_75 + arg2[5]
                            case &lookup_table_4997b0[0x2d]
                                int32_t* eax_255 = *(ecx_23 + (i << 3) + 4)
                                float xmm0_124
                                bool p_28
                                
                                if (eax_255[1] == 1)
                                    float* eax_256 = *eax_255
                                    xmm0_124 = *eax_256
                                    float temp16_1 = eax_256[1]
                                    xmm0_124 - temp16_1
                                    eax_256:1.b = (xmm0_124 == temp16_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_124, temp16_1) ? 1 : 0) << 2
                                        | (xmm0_124 < temp16_1 ? 1 : 0)
                                    p_28 = unimplemented  {test ah, 0x44}
                                
                                if (eax_255[1] != 1 || p_28)
                                    int32_t eax_260 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_91 = (eax_260 << 0xf) + not.d(eax_260)
                                    int32_t ecx_92 = (ecx_91 u>> 0xc ^ ecx_91) * 5
                                    int32_t eax_268 = (ecx_92 u>> 4 ^ ecx_92) * 0x809
                                    void* eax_269 = arg2[0xc]
                                    var_3c = ((eax_268 u>> 0x10 ^ eax_268) & 0x7fffff) | 0x3f800000
                                    xmm0_124 = sub_4e0380(eax_255, *(eax_269 + 0x2f4), 
                                        *(eax_269 + 0x2e8), var_3c - 1f)
                                
                                arg2[9] = sub_4a0730(xmm0_124) + arg2[9]
                            case &lookup_table_4997b0[0x2f]
                                int64_t* eax_270 = sub_4983d0(&var_84)
                                int32_t eax_271 = eax_270[1].d
                                *(arg2 + 0x18) = *eax_270
                                arg2[8] = eax_271
                    
                    eax_57 = ebx_1
                    i += 1
                while (i s< *(eax_57 + 0x108))
            
            int32_t* eax_275 = *(arg1 + 0x2e4)
            *(arg1 + 0x2a8) = data_5c779c
            *(arg1 + 0x2b8) = data_5c77ac
            int32_t* eax_276
            int32_t edx_93
            eax_276, edx_93 = sub_4459f0(*eax_275)
            void* eax_277 = *eax_276
            
            if (*(*(arg1 + 0x2dc) * 0x134 + eax_277 + 0xd9) != 0)
                void* ecx_98 = *(arg1 + 0x2e0)
                
                if (ecx_98 != 0)
                    void var_f4
                    int128_t* eax_279 = sub_49a2d0(&var_f4, edx_93, ecx_98, &var_f4)
                    int128_t xmm1_64 = eax_279[1]
                    *(arg1 + 0x2a8) = *eax_279
                    *(arg1 + 0x2b8) = xmm1_64
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_279
                
                eax_277 = *(arg1 + 0x2e4)
                *(arg1 + 0x2a8) = *(eax_277 + 0x2c)
                *(arg1 + 0x2b8) = *(eax_277 + 0x3c)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_277
        
        if (ebx_2 s> 0)
            edx_6 = modu.dp.d(0:(sub_452ac0()), ebx_2)
            goto label_498a21
    else if (eax_50 s> 0)
        int32_t eax_51
        eax_51, ecx_20 = sub_452ac0()
        ecx_20.b = var_4d
        int32_t edx_3 = 0
        float temp2_1 = var_5c
        eax_50 = divu.dp.d(edx_3:eax_51, temp2_1)
        edx_4 = modu.dp.d(edx_3:eax_51, temp2_1)
        goto label_4989f7
    sub_44e4d0(eax_50, &data_5559b1, "maxPlusOne > 0", "c:\ax2017\engine\random.cpp", 0x4f, "RandomInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
