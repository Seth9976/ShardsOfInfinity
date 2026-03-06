// 函数名称: sub_47a860
// 虚拟地址: 0x47a860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_47a860()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    char var_91 = 0
    int32_t ecx
    
    if (data_5cea2c s> 0)
        float var_a8
        float var_38
        int128_t var_30
        float var_28
        float var_24
        int128_t* eax_3
        
        do
            char* eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_469160((&data_5cda2c)[edi])
            eax_3 = *(eax_2 + 0x69c)
            int128_t var_50
            int128_t* eax_11
            
            if (eax_3 == 1 || eax_3 == 4 || eax_3 == 5)
                int32_t eax_24 = *(eax_2 + 0x63c) * 0x208
                int32_t* ecx_13 = *(eax_24 + eax_2 + 0x10c)
                
                if (ecx_13 == 0)
                    sub_44e4d0(eax_24, &data_5559b1, "el.current().image", "c:\ax2017\engine\ui2.cpp", 
                        0x3718, "UI2SizeToSource")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                sub_48d180(ecx_13)
                float eax_25
                int32_t edx_5
                eax_25, edx_5 = sub_432570(*(*(eax_2 + 0x63c) * 0x208 + eax_2 + 0x10c))
                var_a8 = eax_25
                int32_t eax_26 = *(eax_2 + 0x63c) * 0x208
                int32_t var_a4_1 = edx_5
                float* edx_6 = &var_a8
                var_28 = (*(eax_26 + eax_2 + 0x1c) f+ *(eax_26 + eax_2 + 0x14)) * 0.5f
                var_24 = (*(eax_26 + eax_2 + 0x20) f+ *(eax_26 + eax_2 + 0x18)) * 0.5f
                void var_168
                var_50 = *sub_45c380(&var_168, edx_6, &var_30:8, &var_168)
                int128_t var_90
                eax_11 = &var_90
                void var_178
                var_90 = *sub_47bc00(&var_178, edx_6, &var_50, &var_178)
                sub_46b230(eax_11, 0x71, eax_2, eax_11)
                eax_3.b = var_91
            else if (eax_3 == 8)
                float var_b8
                int32_t* edx_2 = &var_b8
                void var_e8
                float xmm1_1[0x4] =
                    *sub_4c4540(&var_e8, edx_1, *(*(eax_2 + 0x63c) * 0x208 + eax_2 + 0xe8), &var_e8)
                int32_t eax_6 = *(eax_2 + 0x63c) * 0x208
                float xmm0_2 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff)
                float xmm2_3 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa) f- xmm1_1
                float xmm0_3 = xmm0_2 - _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
                float xmm1_4 = *(eax_6 + eax_2 + 0x1c) f+ *(eax_6 + eax_2 + 0x14)
                float var_b4_1 = xmm0_3
                float xmm0_5 = *(eax_6 + eax_2 + 0x20) f+ *(eax_6 + eax_2 + 0x18)
                var_b8 = xmm2_3
                float var_c0 = xmm1_4 * 0.5f
                float var_bc_1 = xmm0_5 * 0.5f
                void var_f8
                var_50 = *sub_45c380(&var_f8, edx_2, &var_c0, &var_f8)
                int128_t var_60
                eax_11 = &var_60
                void var_108
                var_60 = *sub_47bc00(&var_108, edx_2, &var_50, &var_108)
                sub_46b230(eax_11, 0x71, eax_2, eax_11)
                eax_3.b = var_91
            else if (eax_3 == 9 || eax_3 == 7)
                eax_3.b = var_91
            else if (eax_3 == 2)
                eax_3 = *(eax_2 + 0x63c) * 0x208
                
                if (*(eax_3 + eax_2 + 0x19c) != 0)
                    float var_c8
                    int32_t* edx_3 = &var_c8
                    void var_118
                    float xmm6_1[0x4] = *sub_45f2e0(&var_118)
                    int32_t eax_13 = *(eax_2 + 0x63c) * 0x208
                    float xmm2_6 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xaa) f- xmm6_1
                    float xmm1_6 = *(eax_13 + eax_2 + 0x18c)
                    int32_t xmm3_1[0x4] = zx.o(*(eax_13 + eax_2 + 0x17c))
                    float xmm4_2 = _mm_cvtepi32_ps(zx.o(*(eax_13 + eax_2 + 0x180)))
                    float xmm3_2 = _mm_cvtepi32_ps(xmm3_1)
                    float xmm0_12 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xff)
                    float xmm5_3 = (xmm3_2 - 1f) f* *(eax_13 + eax_2 + 0x188)
                    float xmm0_14 = (xmm0_12 - _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55)) * xmm4_2
                    var_c8 = xmm2_6 * xmm3_2 + xmm5_3
                    float var_c4_1 = xmm0_14 + xmm1_6 * (xmm4_2 - 1f)
                    float xmm0_18 = (*(eax_13 + eax_2 + 0x20) f+ *(eax_13 + eax_2 + 0x18)) * 0.5f
                    float var_d0 = (*(eax_13 + eax_2 + 0x1c) f+ *(eax_13 + eax_2 + 0x14)) * 0.5f
                    float var_cc_1 = xmm0_18
                    void var_128
                    var_50 = *sub_45c380(&var_128, edx_3, &var_d0, &var_128)
                    int128_t var_70
                    eax_11 = &var_70
                    void var_138
                    var_70 = *sub_47bc00(&var_138, edx_3, &var_50, &var_138)
                    sub_46b230(eax_11, 0x71, eax_2, eax_11)
                    eax_3.b = var_91
                else if (*(eax_2 + 0x7f4) s<= 0)
                    eax_3.b = var_91
                else
                    float xmm0_22 = _mm_cvtepi32_ps(zx.o(*(eax_3 + eax_2 + 0x17c)))
                    float xmm0_24 = _mm_cvtepi32_ps(zx.o(*(eax_3 + eax_2 + 0x180)))
                    void* eax_18 = sub_462970(eax_2, 0)
                    float var_d8
                    int32_t* edx_4 = &var_d8
                    int32_t ecx_10 = *(eax_18 + 0x63c) * 0x208
                    int32_t eax_19 = *(eax_2 + 0x63c) * 0x208
                    float xmm4_6 = (*(ecx_10 + eax_18 + 0x20) f- *(ecx_10 + eax_18 + 0x18)) * xmm0_24
                        + *(eax_19 + eax_2 + 0x18c) * (xmm0_24 - 1f)
                    float xmm1_15 = (*(eax_19 + eax_2 + 0x1c) f+ *(eax_19 + eax_2 + 0x14)) * 0.5f
                    float xmm0_31 = (*(eax_19 + eax_2 + 0x20) f+ *(eax_19 + eax_2 + 0x18)) * 0.5f
                    var_d8 = (*(ecx_10 + eax_18 + 0x1c) f- *(ecx_10 + eax_18 + 0x14)) * xmm0_22
                        + *(eax_19 + eax_2 + 0x188) * (xmm0_22 - 1f)
                    float var_d4_1 = xmm4_6
                    var_38 = xmm1_15
                    float var_34_1 = xmm0_31
                    void var_148
                    var_50 = *sub_45c380(&var_148, edx_4, &var_38, &var_148)
                    int128_t var_80
                    eax_11 = &var_80
                    void var_158
                    var_80 = *sub_47bc00(&var_158, edx_4, &var_50, &var_158)
                    sub_46b230(eax_11, 0x71, eax_2, eax_11)
                    eax_3.b = var_91
            else if (eax_3 != 6)
                eax_3.b = var_91
            else
                eax_3.b = 1
                var_91 = 1
            ecx = data_5cea2c
            edi += 1
        while (edi s< ecx)
        
        if (eax_3.b != 0)
            int32_t eax_31 = 0
            int32_t var_98_2 = 0
            
            if (ecx s> 0)
                while (true)
                    char* eax_32
                    eax_32, ecx = sub_469160((&data_5cda2c)[eax_31])
                    
                    if (*(eax_32 + 0x69c) == 6 && *(eax_32 + 0x7f4) s> 0)
                        void* eax_33 = sub_462970(eax_32, 0)
                        int32_t edi_1 = 1
                        void* eax_34 = *(eax_32 + 0x7f4)
                        var_30 = *(*(eax_33 + 0x63c) * 0x208 + eax_33 + 0x14)
                        int32_t var_188
                        char const* const var_184_14
                        char* ecx_31
                        
                        if (eax_34 s> 1)
                            while (true)
                                eax_34 = sub_462970(eax_32, edi_1)
                                int32_t xmm2_11 = var_30.d
                                int32_t ecx_23 = *(eax_34 + 0x63c) * 0x208
                                
                                if (not(var_28 f< xmm2_11))
                                    int32_t xmm0_40 = var_30:4.d
                                    
                                    if (not(var_24 f< xmm0_40))
                                        int32_t xmm4_7 = *(ecx_23 + eax_34 + 0x14)
                                        int32_t var_b0_1
                                        
                                        var_b0_1 = xmm4_7 f<= xmm2_11 ? xmm4_7 : xmm2_11
                                        
                                        float xmm2_12 = *(ecx_23 + eax_34 + 0x1c)
                                        
                                        var_a8 = var_28 <= xmm2_12 ? xmm2_12 : var_28
                                        
                                        int32_t xmm2_13 = *(ecx_23 + eax_34 + 0x18)
                                        
                                        if (xmm2_13 f<= xmm0_40)
                                            int32_t var_ac_2 = xmm2_13
                                        else
                                            int32_t var_ac_1 = xmm0_40
                                        
                                        int32_t xmm0_41 = *(ecx_23 + eax_34 + 0x20)
                                        
                                        if (var_24 f<= xmm0_41)
                                            int32_t var_a4_3 = xmm0_41
                                        else
                                            float var_a4_2 = var_24
                                        
                                        edi_1 += 1
                                        eax_34 = *(eax_32 + 0x7f4)
                                        var_30 = var_b0_1.o
                                        
                                        if (edi_1 s>= eax_34)
                                            goto label_47ae57
                                        
                                        continue
                                
                                var_184_14 = "RectUnion"
                                var_188 = 0xdb
                                ecx_31 = "RectIsNormalized(r0)"
                                break
                            
                            goto label_47b00a
                        
                    label_47ae57:
                        int32_t ecx_24 = *(eax_32 + 0x63c) * 0x208
                        float xmm4_8 = *(ecx_24 + eax_32 + 0x14)
                        
                        if (*(ecx_24 + eax_32 + 0x1c) f< xmm4_8)
                        label_47aff1:
                            var_184_14 = "RectTopLeft"
                            ecx_31 = "RectIsNormalized(r)"
                            var_188 = 0x127
                        label_47b00a:
                            sub_44e4d0(eax_34, &data_5559b1, ecx_31, "c:\ax2017\engine\rect.cpp", 
                                var_188, var_184_14)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        float xmm3_4 = *(ecx_24 + eax_32 + 0x18)
                        
                        if (*(ecx_24 + eax_32 + 0x20) f< xmm3_4)
                            goto label_47aff1
                        
                        float xmm2_14 = var_30.d
                        
                        if (var_28 < xmm2_14)
                            goto label_47aff1
                        
                        float xmm1_20 = var_30:4.d
                        
                        if (var_24 < xmm1_20)
                            goto label_47aff1
                        
                        int32_t i = 0
                        
                        if (eax_34 s> 0)
                            float xmm2_16 = (xmm2_14 - xmm4_8) ^ (data_59e5c0.o).d
                            float xmm1_22 = (xmm1_20 - xmm3_4) ^ (data_59e5c0.o).d
                            
                            do
                                char* eax_35 = sub_462970(eax_32, i)
                                int32_t ecx_26 = *(eax_35 + 0x63c) * 0x208
                                float xmm1_23 = *(ecx_26 + eax_35 + 0x1c)
                                float xmm3_5 = *(ecx_26 + eax_35 + 0x20)
                                float xmm2_18 = *(ecx_26 + eax_35 + 0x18) + xmm1_22
                                float var_40 = xmm2_16 f+ *(ecx_26 + eax_35 + 0x14)
                                float var_3c_1 = xmm2_18
                                var_38 = xmm2_16 + xmm1_23
                                float var_34_2 = xmm1_22 + xmm3_5
                                sub_46b230(eax_35, 0x71, eax_35, &var_40)
                                i += 1
                            while (i s< *(eax_32 + 0x7f4))
                        
                        sub_46b230(&var_30, 0x71, eax_32, &var_30)
                    
                    eax_31 = var_98_2 + 1
                    var_98_2 = eax_31
                    
                    if (eax_31 s>= data_5cea2c)
                        break
    
    ecx.b = 1
    int32_t result = sub_469210(ecx.b)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
