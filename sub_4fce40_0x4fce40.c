// 函数名称: sub_4fce40
// 虚拟地址: 0x4fce40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_4fce40()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    BOOL eax_1 = __security_cookie ^ &__saved_ebp
    BOOL var_14 = eax_1
    
    if (data_df8488 != 0)
        float var_3c
        float var_38
        
        if ((*(data_cdf450 + 0xc) & 1) == 0 || *(data_65ae04 + 0x18) == 0)
            char* ecx
            
            if (data_df84a8 == 0 && data_df84a9 == 0 && data_d77c6c == 1)
                int16_t eax_35
                eax_35, ecx = GetKeyState(0x11)
                
                if ((0x8000 & eax_35) == 0)
                    int16_t eax_36
                    eax_36, ecx = GetKeyState(0x12)
                    
                    if ((0x8000 & eax_36) == 0)
                        int32_t* eax_37 = sub_485450(data_d76c60)
                        sub_44edc0(&var_3c)
                        float xmm1_66 = 1f f/ data_df847c
                        int32_t ecx_35 = data_d76c6c
                        float var_38_3 = xmm1_66 * var_38 f+ data_df8484
                        var_3c = xmm1_66 * var_3c f+ data_df8480
                        int32_t eax_38 = sub_4fba30(ecx_35)
                        int32_t esi_5 = eax_38 - 1
                        
                        if (eax_38 - 1 s>= 0)
                            int32_t* eax_39 = eax_37
                            int32_t edi_1 = esi_5 * 0x118
                            
                            while (true)
                                void* ecx_37 = *eax_39 + edi_1
                                
                                if (*(ecx_37 + 0x30) == 0 && *(ecx_37 + 0x31) == 0)
                                    if (sub_4144c0(ecx_37 + 0xc, &var_3c) != 0)
                                        break
                                    
                                    eax_39 = eax_37
                                
                                edi_1 -= 0x118
                                int32_t temp1_1 = esi_5
                                esi_5 -= 1
                                
                                if (temp1_1 - 1 s< 0)
                                    goto label_4fdcdd
                        
                        if (eax_38 - 1 s< 0 || esi_5 == 0xffffffff)
                        label_4fdcdd:
                            data_d77c6c = 0
                            sub_5012b0()
                        else
                            data_d76c6c = *(esi_5 * 0x118 + *eax_37)
                        
                        sub_5012b0()
            
            ecx.b = 1
            eax_1 = sub_4fb880(ecx)
            data_df8488 = 0
        else
            if (data_df84a8 != 0)
                goto label_4fcee8
            
            eax_1 = sub_44edc0(&var_3c)
            float xmm0_2 = data_df8490 - var_3c
            float xmm1_2 = data_df8494 - var_38
            
            if (not(50f > xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2))
                data_df84a8 = 1
            label_4fcee8:
                int32_t* eax_4 = sub_485450(data_d76c60)
                char ecx_3 = data_d77c72
                float var_68
                
                if ((data_d77c70.b == 0 && data_d77c70:1.b == 0 && ecx_3 == 0)
                        || data_df84a4 == 0xffffffff)
                    sub_44edc0(&var_68)
                    float xmm4_1 = eax_4
                    
                    if ((0x8000 & GetKeyState(0x10)) == 0)
                        float xmm3_6 = var_68
                        int128_t* eax_8 = data_df848c
                        data_df84a0 = 0
                        float xmm3_7 = xmm3_6 f- data_df8498
                        float xmm4_4 = xmm4_1 f- data_df849c
                        
                        if (eax_8 == 0)
                            float xmm1_10 = 1f f/ data_df847c
                            float var_38_2 = xmm1_10 * xmm4_4
                            var_3c = xmm1_10 * xmm3_7
                            eax_8 = sub_4fc950(&var_3c)
                        else if (eax_8 != 2)
                            float xmm2_5 = 1f f/ data_df847c
                            data_df8480 = data_df8480 - xmm2_5 * xmm3_7
                            data_df8484 = data_df8484 - xmm2_5 * xmm4_4
                        
                        data_df8498 = var_68
                        data_df849c = eax_4
                        @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                        return eax_8
                    
                    float xmm3_2 = data_df8494 f- data_df849c
                    float xmm7_1 = data_df8490
                    float xmm4_2 = xmm4_1 f- data_df8494
                    int32_t eax_6 = data_df84a0
                    float xmm2_2 = xmm7_1 f- data_df8498
                    float var_40_1 = xmm4_2
                    float xmm3_4 = var_68 - xmm7_1
                    float var_34_1 = xmm3_4
                    
                    if (eax_6 == 0)
                        int32_t xmm0_5 = sub_41b760(xmm3_4)
                        
                        if (sub_41b760(xmm4_2) f<= xmm0_5)
                            xmm4_2 = (zx.o(0)).d
                            data_df84a0 = 1
                            var_40_1 = 0f
                        else
                            data_df84a0 = 2
                            xmm3_4 = (zx.o(0)).d
                            var_34_1 = 0f
                    else if (eax_6 == 1)
                        xmm4_2 = (zx.o(0)).d
                        var_40_1 = 0f
                    else if (eax_6 == 2)
                        xmm3_4 = (zx.o(0)).d
                        var_34_1 = 0f
                    
                    int128_t* eax_7 = data_df848c
                    float xmm5_2 = xmm3_4 + xmm2_2
                    float xmm6_2 = xmm4_2 + xmm3_2
                    
                    if (eax_7 == 0)
                        float xmm1_6 = 1f f/ data_df847c
                        float var_38_1 = xmm1_6 * xmm6_2
                        var_3c = xmm1_6 * xmm5_2
                        eax_7 = sub_4fc950(&var_3c)
                        xmm7_1 = data_df8490
                        xmm3_4 = var_34_1
                        xmm4_2 = var_40_1
                    else if (eax_7 != 2)
                        float xmm2_3 = 1f f/ data_df847c
                        data_df8480 = data_df8480 - xmm2_3 * xmm5_2
                        data_df8484 = data_df8484 - xmm2_3 * xmm6_2
                    
                    data_df849c = xmm4_2 f+ data_df8494
                    data_df8498 = xmm3_4 + xmm7_1
                    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                    return eax_7
                
                float var_30[0x4] = data_df84ac
                
                if (ecx_3 != 0 && (0x8000 & GetKeyState(0x11)) != 0)
                    var_30 = data_df84bc
                
                int32_t* eax_21 = data_df84a4
                int32_t var_a8
                char const* const ecx_19
                
                if (eax_21 u> 7)
                    char const* const var_a4_10 = "DraggingUpdate"
                    var_a8 = 0x367
                    ecx_19 = "Halt"
                else
                    int32_t xmm1_14 = 0x3f800000
                    float var_4c_1
                    float var_44_1
                    int32_t xmm0_24
                    
                    switch (eax_21)
                        case nullptr
                            float eax_10
                            float edx_1
                            eax_10, edx_1 = sub_47be40(&var_30)
                            var_3c = eax_10
                            var_44_1 = var_3c
                            var_38 = edx_1
                            var_4c_1 = var_38
                            xmm0_24 = 0xbf800000
                            xmm1_14 = -0x40800000
                        case 1
                            float eax_11
                            float edx_2
                            eax_11, edx_2 = sub_47be40(&var_30)
                            xmm1_14 = 0x80000000
                            var_3c = eax_11
                            var_44_1 = var_3c
                            var_38 = edx_2
                            var_4c_1 = var_38
                            xmm0_24 = 0xbf800000
                        case 2
                            var_44_1 = var_30[2]
                            var_4c_1 = var_30[1]
                            xmm0_24 = 0xbf800000
                        case 3
                            float eax_12
                            float edx_3
                            eax_12, edx_3 = sub_47be40(&var_30)
                            xmm1_14 = 0xbf800000
                            var_3c = eax_12
                            var_44_1 = var_3c
                            var_38 = edx_3
                            var_4c_1 = var_38
                            xmm0_24 = 0x80000000
                        case 4
                            float eax_13
                            float edx_4
                            eax_13, edx_4 = sub_41b6f0(&var_30)
                            xmm1_14 = 0x3f800000
                            var_3c = eax_13
                            var_44_1 = var_3c
                            var_38 = edx_4
                            var_4c_1 = var_38
                            xmm0_24 = (zx.o(0)).d
                        case 5
                            var_44_1 = var_30[0]
                            var_4c_1 = var_30[3]
                            xmm0_24 = 0x3f800000
                            xmm1_14 = 0xbf800000
                        case 6
                            float eax_14
                            float edx_5
                            eax_14, edx_5 = sub_41b6f0(&var_30)
                            var_3c = eax_14
                            xmm1_14 = (zx.o(0)).d
                            var_44_1 = var_3c
                            var_38 = edx_5
                            var_4c_1 = var_38
                            xmm0_24 = 0x3f800000
                        case 7
                            float eax_15
                            float edx_6
                            eax_15, edx_6 = sub_41b6f0(&var_30)
                            xmm1_14 = 0x3f800000
                            var_3c = eax_15
                            var_44_1 = var_3c
                            var_38 = edx_6
                            var_4c_1 = var_38
                            xmm0_24 = 0x3f800000
                    
                    float var_48_2 = xmm1_14
                    float var_50_1 = xmm0_24
                    float var_34_2 = xmm0_24
                    
                    if ((0x8000 & GetKeyState(0x12)) != 0)
                        var_50_1 = var_34_2 + var_34_2
                        float xmm0_41 = xmm1_14
                        var_44_1 = (var_30[0] + var_30[2]) * 0.5f
                        var_48_2 = xmm0_41 + xmm0_41
                        var_4c_1 = (var_30[3] + var_30[1]) * 0.5f
                    
                    sub_44edc0(&var_3c)
                    int16_t eax_17
                    int32_t edx_7
                    eax_17, edx_7 = GetKeyState(0x10)
                    int32_t eax_18
                    
                    if ((0x8000 & eax_17) != 0)
                        eax_18 = data_df84a4
                    
                    int128_t var_80
                    float xmm1_27
                    float xmm4_8
                    
                    if ((0x8000 & eax_17) != 0
                            && (eax_18 == 0 || eax_18 == 2 || eax_18 == 5 || eax_18 == 7))
                        float xmm3_12 = (var_44_1 f- data_df8480) f* data_df847c
                        float xmm4_7 = (var_4c_1 f- data_df8484) f* data_df847c
                        float xmm2_8 = var_3c - xmm3_12
                        float xmm0_44 = data_df8490 - xmm3_12
                        float xmm1_22 = var_38 - xmm4_7
                        float xmm0_46 = data_df8494 - xmm4_7
                        float xmm0_48 = sub_412d90(xmm2_8 * xmm2_8 + xmm1_22 * xmm1_22)
                        float xmm0_52
                        edx_7, xmm0_52 = sub_412d90(xmm0_46 * xmm0_46 + xmm0_44 * xmm0_44)
                        xmm1_27 = xmm0_48 / xmm0_52
                        xmm4_8 = xmm1_27
                    else
                        float xmm0_54 = var_3c f- data_df8490
                        float xmm0_56 = var_38 f- data_df8494
                        float xmm1_28[0x4] = *sub_4fb7b0(&var_80, edx_7, &var_30, &var_80)
                        xmm1_27 =
                            xmm0_54 / (_mm_shuffle_ps(xmm1_28, xmm1_28, 0xaa) f- xmm1_28) * var_50_1
                            + 1f
                        xmm4_8 = xmm0_56 / (_mm_shuffle_ps(xmm1_28, xmm1_28, 0xff)
                            - _mm_shuffle_ps(xmm1_28, xmm1_28, 0x55)) * var_48_2 + 1f
                    
                    eax_21 = data_df848c
                    void var_90
                    
                    if (eax_21 != 0)
                        if (eax_21 == 2)
                            float xmm0_126 = (data_df84cc.d - var_44_1) * xmm1_27
                            float xmm5_22 = (data_df84cc:8 f- var_44_1) * xmm1_27
                            float xmm6_16 = (data_df84cc:0xc f- var_4c_1) * xmm4_8
                            float xmm7_18 = (data_df84cc:4 f- var_4c_1) * xmm4_8
                            float xmm0_129
                            
                            if (var_44_1 + xmm5_22 <= var_44_1 + xmm0_126)
                                xmm0_129 = xmm5_22
                                xmm5_22 = xmm0_126
                            else
                                xmm0_129 = xmm0_126
                            
                            float xmm4_44
                            
                            if (var_4c_1 + xmm6_16 <= var_4c_1 + xmm7_18)
                                xmm4_44 = xmm6_16
                                xmm6_16 = xmm7_18
                            else
                                xmm4_44 = xmm7_18
                            
                            var_30[0] = var_44_1 + xmm0_129
                            var_30[2] = var_44_1 + xmm5_22
                            var_30[1] = var_4c_1 + xmm4_44
                            var_30[3] = var_4c_1 + xmm6_16
                            eax_21 = eax_4
                            *(eax_21 + 8) = *sub_47bc00(&var_90, edx_7, &var_30, &var_90)
                        
                    label_4fdbd3:
                        data_df8498 = var_3c
                        data_df849c = var_38
                        @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                        return eax_21
                    
                    float var_70
                    
                    if (data_d77c72 == eax_21.b)
                    label_4fd8ef:
                        int32_t i = 0
                        
                        if (data_d77c6c s> 0)
                            int128_t* esi_3 = &data_df84cc:4
                            
                            do
                                void* eax_31
                                int32_t edx_12
                                eax_31, edx_12 = sub_4fbab0((&data_d76c6c)[i], nullptr)
                                float xmm6_11 = (*esi_3 - var_4c_1) * xmm4_8
                                float xmm7_10 = (*(esi_3 + 8) - var_4c_1) * xmm4_8
                                float xmm5_18 = (*(esi_3 - 4) - var_44_1) * xmm1_27
                                float xmm4_35 = (*(esi_3 + 4) - var_44_1) * xmm1_27
                                float xmm0_106
                                
                                if (var_44_1 + xmm4_35 <= var_44_1 + xmm5_18)
                                    xmm0_106 = xmm4_35
                                    xmm4_35 = xmm5_18
                                else
                                    xmm0_106 = xmm5_18
                                
                                float xmm4_36
                                
                                if (var_4c_1 + xmm7_10 <= var_4c_1 + xmm6_11)
                                    xmm4_36 = xmm7_10
                                    xmm7_10 = xmm6_11
                                else
                                    xmm4_36 = xmm6_11
                                
                                var_30[0] = var_44_1 + xmm0_106
                                var_30[2] = var_44_1 + xmm4_35
                                var_30[1] = var_4c_1 + xmm4_36
                                var_30[3] = var_4c_1 + xmm7_10
                                eax_21 = sub_47bc00(&var_90, edx_12, &var_30, &var_90)
                                i += 1
                                esi_3 = &esi_3[1]
                                float xmm0_112[0x4] = *eax_21
                                float xmm4_37 = *(eax_31 + 0x7c)
                                float xmm3_23 = *(eax_31 + 0x74)
                                float xmm7_12 = _mm_shuffle_ps(xmm0_112, xmm0_112, 0xaa)
                                float xmm6_12 = *(eax_31 + 0x80)
                                float xmm5_19 = *(eax_31 + 0x78)
                                float xmm7_13 = xmm7_12 f- *eax_21
                                float xmm0_117[0x4] = *eax_21
                                float xmm2_38 = (xmm0_112[0] * xmm4_37 - xmm7_12 * xmm3_23)
                                    / ((1f - xmm3_23) * xmm4_37 - (1f - xmm4_37) * xmm3_23)
                                float xmm3_25 = _mm_shuffle_ps(xmm0_117, xmm0_117, 0xff)
                                float xmm2_40 = _mm_shuffle_ps(xmm0_117, xmm0_117, 0x55)
                                float xmm4_41 = (xmm2_40 * xmm6_12 - xmm3_25 * xmm5_19)
                                    / ((1f - xmm5_19) * xmm6_12 - (1f - xmm6_12) * xmm5_19)
                                float xmm1_61 = *(eax_31 + 0x7c) f- *(eax_31 + 0x74)
                                var_70 = xmm2_38
                                float var_6c_1 = xmm4_41
                                float var_64_1 = (xmm3_25 - xmm2_40) / (xmm6_12 - xmm5_19) + xmm4_41
                                var_68 = xmm7_13 / xmm1_61 + xmm2_38
                                *(eax_31 + 0xc) = var_70.o
                            while (i s< data_d77c6c)
                        
                        goto label_4fdbd3
                    
                    eax_21 = GetKeyState(0x11)
                    
                    if ((0x8000 & eax_21.w) != 0)
                        if (data_d77c72 == 0)
                            goto label_4fd8ef
                        
                        eax_21 = GetKeyState(0x11)
                        
                        if ((0x8000 & eax_21.w) == 0)
                            goto label_4fd8ef
                        
                        if (data_d77c6c == 1)
                            void* eax_26
                            int32_t edx_9
                            eax_26, edx_9 = sub_4fbab0(data_d76c6c, nullptr)
                            float xmm6_8 = (data_df84bc:4 f- var_4c_1) * xmm4_8
                            float xmm5_12 = (data_df84bc:0xc f- var_4c_1) * xmm4_8
                            float xmm7_7 = (data_df84bc.d - var_44_1) * xmm1_27
                            float xmm4_19 = (data_df84bc:8 f- var_44_1) * xmm1_27
                            float xmm0_87
                            
                            if (xmm4_19 + var_44_1 <= xmm7_7 + var_44_1)
                                xmm0_87 = xmm4_19
                                xmm4_19 = xmm7_7
                            else
                                xmm0_87 = xmm7_7
                            
                            float xmm4_20
                            
                            if (xmm5_12 + var_4c_1 <= xmm6_8 + var_4c_1)
                                xmm4_20 = xmm5_12
                                xmm5_12 = xmm6_8
                            else
                                xmm4_20 = xmm6_8
                            
                            var_30[0] = var_44_1 + xmm0_87
                            var_30[2] = var_44_1 + xmm4_19
                            var_30[1] = var_4c_1 + xmm4_20
                            var_30[3] = var_4c_1 + xmm5_12
                            int128_t* eax_28 = sub_47bc00(&var_80, edx_9, &var_30, &var_80)
                            float xmm1_43 = *(eax_26 + 0xc)
                            float xmm4_21 = *(eax_26 + 0x7c)
                            float xmm3_18 = *(eax_26 + 0x78)
                            int128_t xmm0_91 = *eax_28
                            float xmm5_13 = *(eax_26 + 0x80)
                            var_80 = xmm0_91
                            var_70.o = xmm0_91
                            float xmm0_93 = *(eax_26 + 0x14) - xmm1_43
                            float xmm4_23 = xmm4_21 * xmm0_93 + xmm1_43
                            float xmm2_28 = xmm0_93 f* *(eax_26 + 0x74) + xmm1_43
                            float xmm1_44 = *(eax_26 + 0x10)
                            float xmm0_95 = *(eax_26 + 0x18) - xmm1_44
                            var_30[2] = xmm4_23
                            float xmm3_20 = xmm3_18 * xmm0_95 + xmm1_44
                            var_30[0] = xmm2_28
                            float xmm5_15 = xmm5_13 * xmm0_95 + xmm1_44
                            var_30[1] = xmm3_20
                            var_30[3] = xmm5_15
                            var_30 = *sub_45c120(&var_90, &var_30, &var_70, &var_90)
                            eax_21 = sub_414540(&var_30, &var_70)
                            
                            if (eax_21.b != 0)
                                *(eax_26 + 0xc) = var_80
                            
                            float xmm3_21 = *(eax_26 + 0xc)
                            float xmm1_46 = *(eax_26 + 0x14) - xmm3_21
                            float xmm2_29 = *(eax_26 + 0x10)
                            float xmm0_99 = *(eax_26 + 0x18) - xmm2_29
                            var_30[0] = (xmm2_28 - xmm3_21) / xmm1_46
                            var_30[1] = (xmm3_20 - xmm2_29) / xmm0_99
                            var_30[2] = (xmm4_23 - xmm3_21) / xmm1_46
                            var_30[3] = (xmm5_15 - xmm2_29) / xmm0_99
                            *(eax_26 + 0x74) = var_30
                            goto label_4fdbd3
                        
                        char const* const var_a4_5 = "DraggingUpdate"
                        var_a8 = 0x392
                        ecx_19 = "gUI.s.activeSetCount == 1"
                    else
                        if (data_d77c6c == 1)
                            void* eax_22
                            int32_t edx_8
                            eax_22, edx_8 = sub_4fbab0(data_d76c6c, nullptr)
                            float xmm6_5 = (data_df84cc:4 f- var_4c_1) * xmm4_8
                            float xmm5_5 = (data_df84cc:0xc f- var_4c_1) * xmm4_8
                            float xmm7_4 = (data_df84cc.d - var_44_1) * xmm1_27
                            float xmm4_14 = (data_df84cc:8 f- var_44_1) * xmm1_27
                            float xmm0_65
                            
                            if (var_44_1 + xmm4_14 <= var_44_1 + xmm7_4)
                                xmm0_65 = xmm4_14
                                xmm4_14 = xmm7_4
                            else
                                xmm0_65 = xmm7_4
                            
                            float xmm4_15
                            
                            if (var_4c_1 + xmm5_5 <= var_4c_1 + xmm6_5)
                                xmm4_15 = xmm5_5
                                xmm5_5 = xmm6_5
                            else
                                xmm4_15 = xmm6_5
                            
                            var_30[0] = var_44_1 + xmm0_65
                            var_30[2] = var_44_1 + xmm4_14
                            var_30[1] = var_4c_1 + xmm4_15
                            var_30[3] = var_4c_1 + xmm5_5
                            int128_t* eax_24 = sub_47bc00(&var_80, edx_8, &var_30, &var_80)
                            float xmm3_15 = *(eax_22 + 0xc)
                            float xmm1_38 = *(eax_22 + 0x14) - xmm3_15
                            float xmm4_16 = *(eax_22 + 0x10)
                            float xmm5_6[0x4] = *eax_24
                            float xmm2_20 = *(eax_22 + 0x18) - xmm4_16
                            var_30[0] = (xmm5_6[0] - xmm3_15) / xmm1_38
                            var_30[1] = (_mm_shuffle_ps(xmm5_6, xmm5_6, 0x55) - xmm4_16) / xmm2_20
                            float xmm0_77 = _mm_shuffle_ps(xmm5_6, xmm5_6, 0xaa)
                            float xmm5_9 = (_mm_shuffle_ps(xmm5_6, xmm5_6, 0xff) - xmm4_16) / xmm2_20
                            var_30[2] = (xmm0_77 - xmm3_15) / xmm1_38
                            var_30[3] = xmm5_9
                            *(eax_22 + 0x74) = var_30
                            eax_21 = sub_47bd20(&var_80, &data_571d08, eax_22 + 0x74, &var_80)
                            *(eax_22 + 0x74) = *eax_21
                            goto label_4fdbd3
                        
                        char const* const var_a4_2 = "DraggingUpdate"
                        var_a8 = 0x389
                        ecx_19 = "gUI.s.activeSetCount == 1"
                
                sub_44e4d0(eax_21, &data_5559b1, ecx_19, "c:\ax2017\engine\editor\uieditor.cpp", 
                    var_a8, "DraggingUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
    
    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
    return eax_1
}
