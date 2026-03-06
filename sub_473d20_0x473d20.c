// 函数名称: sub_473d20
// 虚拟地址: 0x473d20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_473d20()
{
    // 第一条实际指令: void var_13c
    void var_13c
    int32_t result = __security_cookie ^ &var_13c
    int32_t result_1 = result
    char const* const var_14c
    int32_t var_148
    char const* const var_144
    char* ecx_1
    
    if (data_cdf3e9 != 0)
        result = data_5cea2c
        data_65b2b4 = 1
        float var_134
        float var_10c
        float var_108
        float var_104
        float var_a0[0x4]
        float var_90[0x4]
        int128_t var_80
        int128_t var_70
        
        if (result s> 0 && data_5cd9f0 s> 0)
            int32_t i = 1
            
            if (result s> 1)
                do
                    void* eax_1 = sub_469160((&data_5cda2c)[i])
                    int32_t ecx_3 = *(eax_1 + 0x63c) * 0x208
                    float xmm1_1 = *(eax_1 + 0x6cc)
                    float xmm0_2 = *(eax_1 + 0x6d4) - xmm1_1
                    float xmm5_3 = *(ecx_3 + eax_1 + 0xcc) * xmm0_2 + xmm1_1
                    float xmm2_3 = *(ecx_3 + eax_1 + 0xd4) * xmm0_2 + xmm1_1
                    float xmm1_2 = *(eax_1 + 0x6d0)
                    float xmm0_4 = *(eax_1 + 0x6d8) - xmm1_2
                    float xmm5_4 = xmm5_3 + 1f
                    var_108 = xmm2_3
                    float xmm3_3 = *(ecx_3 + eax_1 + 0xd0) * xmm0_4 + xmm1_2
                    float var_118_1 = xmm5_4
                    float xmm4_3 = *(ecx_3 + eax_1 + 0xd8) * xmm0_4 + xmm1_2
                    float xmm1_4 = xmm2_3 - 1f
                    float var_11c_1 = xmm3_3
                    var_10c = xmm3_3
                    float var_fc_1 = xmm3_3
                    float var_114_1 = xmm4_3
                    var_90 = xmm5_3.o
                    var_104 = xmm4_3
                    var_80 = xmm1_4.o
                    float var_f8_1 = xmm1_4
                    float var_f4_1 = xmm3_3 + 1f
                    var_70 = xmm5_4.o
                    float var_128_1 = xmm1_4
                    float var_124_1 = xmm4_3
                    float var_12c_1 = xmm4_3 - 1f
                    var_a0 = xmm5_4.o
                    sub_47d680(&var_90, &data_571954)
                    sub_47d680(&var_80, &data_571954)
                    sub_47d680(&var_70, &data_571954)
                    sub_47d680(&var_a0, &data_571954)
                    i += 1
                while (i s< data_5cea2c)
            
            void* eax_2 = sub_469160(data_5cda2c)
            var_134 = -3.01464553e+38f
            float xmm1_5 = *(eax_2 + 0x6cc)
            float xmm0_12 = *(eax_2 + 0x6d4) - xmm1_5
            var_134 = var_134
            int32_t ecx_10 = *(eax_2 + 0x63c) * 0x208
            float xmm5_7 = *(ecx_10 + eax_2 + 0xcc) * xmm0_12 + xmm1_5
            float xmm2_6 = *(ecx_10 + eax_2 + 0xd4) * xmm0_12 + xmm1_5
            float xmm1_6 = *(eax_2 + 0x6d0)
            float xmm0_14 = *(eax_2 + 0x6d8) - xmm1_6
            float xmm5_8 = xmm5_7 + 1f
            float xmm3_7 = *(ecx_10 + eax_2 + 0xd0) * xmm0_14 + xmm1_6
            float var_128_2 = xmm5_8
            float xmm4_6 = *(ecx_10 + eax_2 + 0xd8) * xmm0_14 + xmm1_6
            float xmm1_8 = xmm2_6 - 1f
            float var_12c_2 = xmm3_7
            float var_124_2 = xmm4_6
            var_a0 = xmm5_7.o
            float var_12c_3 = xmm3_7
            float var_128_3 = xmm2_6
            float var_124_3 = xmm4_6
            float var_12c_4 = xmm3_7
            var_70 = xmm1_8.o
            float var_128_4 = xmm1_8
            float var_124_4 = xmm3_7 + 1f
            var_80 = xmm5_8.o
            float var_128_5 = xmm1_8
            float var_124_5 = xmm4_6
            float var_12c_5 = xmm4_6 - 1f
            var_90 = xmm5_8.o
            sub_47d680(&var_a0, &var_134)
            sub_47d680(&var_70, &var_134)
            sub_47d680(&var_80, &var_134)
            result = sub_47d680(&var_90, &var_134)
        
        int32_t* ecx_15 = data_5cd9f8
        
        if (ecx_15[1] == 0x22)
            void* eax_3
            int32_t edx_5
            eax_3, edx_5 = sub_4459f0(ecx_15)
            int32_t var_130_6 = 0
            int32_t var_12c_6 = 0
            var_134 = 1.70141183e+38f
            int32_t xmm2_7 = *(eax_3 + 0xc)
            int32_t xmm1_9 = *(eax_3 + 8)
            float eax_4 = var_134
            int32_t var_128_6 = xmm1_9
            int32_t var_124_6 = xmm2_7
            float var_f0[0x4] = var_130_6.o
            int32_t var_12c_7 = xmm2_7
            var_a0 = data_59dd40
            int32_t var_128_7 = 0x461c4000
            int32_t var_124_7 = 0x461c4000
            int32_t var_124_8 = xmm2_7
            var_90 = 0xc61c4000.o
            int32_t var_12c_8 = 0
            int32_t var_128_8 = 0
            var_134 = eax_4
            var_70 = 0xc61c4000.o
            int32_t var_124_9 = xmm2_7
            int32_t var_12c_9 = 0
            int32_t var_128_9 = 0x461c4000
            var_80 = xmm1_9.o
            var_a0 = *sub_46b9a0(&var_f0, edx_5, &var_a0, &var_f0)
            var_a0 = *sub_46b9a0(&var_f0, sub_47d680(&var_a0, &var_134), &var_70, &var_f0)
            var_a0 = *sub_46b9a0(&var_f0, sub_47d680(&var_a0, &var_134), &var_80, &var_f0)
            var_a0 = *sub_46b9a0(&var_f0, sub_47d680(&var_a0, &var_134), &var_90, &var_f0)
            int32_t edx_13 = sub_47d680(&var_a0, &var_134)
            int32_t var_128_10 = 0x457a0000
            int32_t var_124_10 = 0
            float var_12c_10 = -1f f/ data_5cda1c
            var_a0 = 0xc47a0000.o
            var_a0 = *sub_46b9a0(&var_f0, edx_13, &var_a0, &var_f0)
            int32_t edx_14 = sub_47d680(&var_a0, &data_571948)
            int32_t var_12c_11 = 0xc47a0000
            int32_t var_128_11 = 0
            int32_t var_124_11 = 0x457a0000
            var_a0 = (-1f f/ data_5cda1c).o
            var_a0 = *sub_46b9a0(&var_f0, edx_14, &var_a0, &var_f0)
            result = sub_47d680(&var_a0, &data_571948)
            int32_t ecx_28 = data_5cd9fc
            
            if (ecx_28 != 0)
                result = sub_468d10(ecx_28)
            
            if (data_5cd9f0 == 0)
            label_474b8b:
                int32_t edx_17 = data_5cda18
                
                if (edx_17 == 0)
                    @__security_check_cookie@4(result_1 ^ &var_13c)
                    return result
                
                result = zx.d(edx_17.w)
                
                if (result u< data_5c99a4)
                    void* ecx_49 = result * 0x1008 + data_5c99a0
                    
                    if (*(ecx_49 + 0x1004) == edx_17)
                        result = sub_468680(ecx_49)
                        @__security_check_cookie@4(result_1 ^ &var_13c)
                        return result
                
                var_144 = "DataArray<struct UI2>::DataArrayGet"
                var_148 = 0x6d
                var_14c = "c:\ax2017\engine\dataarray.h"
                ecx_1 = "DataArrayTryToGet(id) != NULL"
            else
                float var_d0[0x4]
                int128_t var_c0
                int128_t var_b0
                int128_t var_58
                
                if (data_5cea36 == 0)
                label_474819:
                    
                    if (data_5cea34.b == 0)
                        goto label_474b8b
                    
                    if (data_5cea2c s> 0)
                        int32_t edx_16
                        result, edx_16 = sub_469160(data_5cda2c)
                        
                        if (*(result + 0x754) == 0)
                            int32_t esi_1 = 1
                            float var_110
                            var_110.o = *sub_462ec0(result, edx_16, result, &var_f0)
                            
                            if (data_5cea2c s<= 1)
                            label_4749b5:
                                int32_t i_1 = 0
                                float xmm3_22 = var_110
                                float xmm1_20 = var_108 - xmm3_22
                                float xmm4_20 = var_10c
                                float xmm2_22 = var_104 - xmm4_20
                                __builtin_memcpy(&var_58, 
                                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x"
                                "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00"
                                "3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
                                "00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                                    0x40)
                                var_134 = xmm1_20
                                float var_d4_1 = xmm2_22
                                
                                do
                                    float xmm5_24 = *(&var_58 + (i_1 << 3)) * xmm1_20 + xmm3_22
                                    float xmm3_25 = *(&var_58:4 + (i_1 << 3)) * xmm2_22 + xmm4_20
                                    float xmm5_25 = xmm5_24 - 4f
                                    float xmm1_22 = xmm5_24 + 4f
                                    float xmm3_26 = xmm3_25 - 4f
                                    float xmm4_22 = xmm3_25 + 4f
                                    float xmm5_26 = xmm5_25 + 2f
                                    float var_f8_4 = xmm1_22
                                    float xmm2_24 = xmm1_22 - 2f
                                    float var_12c_14 = xmm3_26
                                    float var_fc_4 = xmm3_26
                                    float var_11c_6 = xmm3_26
                                    float var_128_14 = xmm5_26
                                    float var_124_14 = xmm4_22
                                    var_f0 = xmm5_25.o
                                    float var_f4_4 = xmm4_22
                                    var_b0 = xmm2_24.o
                                    float var_118_6 = xmm2_24
                                    float var_114_6 = xmm3_26 + 2f
                                    var_c0 = xmm5_26.o
                                    var_90[0] = xmm5_26
                                    var_90[2] = xmm2_24
                                    var_90[3] = xmm4_22
                                    var_90[1] = xmm4_22 - 2f
                                    var_d0 = var_90
                                    sub_47d680(&var_f0, &data_571944)
                                    sub_47d680(&var_b0, &data_571944)
                                    sub_47d680(&var_c0, &data_571944)
                                    result = sub_47d680(&var_d0, &data_571944)
                                    i_1 += 1
                                    xmm1_20 = var_134
                                    xmm2_22 = var_d4_1
                                    xmm3_22 = var_110
                                    xmm4_20 = var_10c
                                while (i_1 s< 8)
                                
                                goto label_474b8b
                            
                            while (true)
                                result = sub_469160((&data_5cda2c)[esi_1])
                                int32_t ecx_43 = *(result + 0x63c) * 0x208
                                float xmm1_16 = *(result + 0x6cc)
                                float xmm0_50 = *(result + 0x6d4) - xmm1_16
                                float xmm4_19 = *(ecx_43 + result + 0xd4) * xmm0_50 + xmm1_16
                                float xmm5_21 = xmm0_50 f* *(ecx_43 + result + 0xcc) + xmm1_16
                                float xmm1_17 = *(result + 0x6d0)
                                float xmm0_52 = *(result + 0x6d8) - xmm1_17
                                float xmm3_21 = *(ecx_43 + result + 0xd0) * xmm0_52 + xmm1_17
                                float xmm2_20 = *(ecx_43 + result + 0xd8) * xmm0_52 + xmm1_17
                                
                                if (var_108 < var_110 || var_104 < var_10c)
                                    var_144 = "RectUnion"
                                    var_148 = 0xdb
                                    var_14c = "c:\ax2017\engine\rect.cpp"
                                    ecx_1 = "RectIsNormalized(r0)"
                                    break
                                
                                float var_120_4
                                
                                var_120_4 = xmm5_21 <= var_110 ? xmm5_21 : var_110
                                
                                if (var_108 <= xmm4_19)
                                    float var_118_5 = xmm4_19
                                else
                                    float var_118_4 = var_108
                                
                                if (xmm3_21 <= var_10c)
                                    float var_11c_5 = xmm3_21
                                else
                                    float var_11c_4 = var_10c
                                
                                if (var_104 <= xmm2_20)
                                    float var_114_5 = xmm2_20
                                else
                                    float var_114_4 = var_104
                                
                                esi_1 += 1
                                var_110.o = var_120_4.o
                                
                                if (esi_1 s>= data_5cea2c)
                                    goto label_4749b5
                                
                                continue
                        else
                            var_144 = "UI2EditorDraw"
                            var_148 = 0x29cb
                            var_14c = "c:\ax2017\engine\ui2.cpp"
                            ecx_1 = "el0.worldIdx == 0"
                    else
                        var_144 = "UI2EditorDraw"
                        var_148 = 0x29c9
                        var_14c = "c:\ax2017\engine\ui2.cpp"
                        ecx_1 = "gUI2Editor.s.activeSetCount > 0"
                else
                    result = GetKeyState(0x11)
                    
                    if ((0x8000 & result.w) == 0)
                    label_4745ef:
                        
                        if (data_5cea2c == 1)
                            void* eax_18
                            int32_t edx_15
                            eax_18, edx_15 = sub_469160(data_5cda2c)
                            int128_t* eax_19 = sub_462ec0(eax_18, edx_15, eax_18, &var_f0)
                            int32_t i_2 = 0
                            __builtin_memcpy(&var_58, 
                                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x"
                            "00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00"
                            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f"
                            "00\x00\x80\x3f\x00\x00\x80\x3f", 
                                0x40)
                            float xmm1_13[0x4] = *eax_19
                            var_a0 = xmm1_13
                            float xmm2_14 = _mm_shuffle_ps(xmm1_13, xmm1_13, 0xaa)
                            float xmm4_13 = _mm_shuffle_ps(xmm1_13, xmm1_13, 0xff)
                            int128_t xmm2_15 = xmm2_14 f- xmm1_13
                            float xmm7_4[0x4] = _mm_shuffle_ps(xmm1_13, xmm1_13, 0x55)
                            int128_t xmm4_14 = xmm4_13 f- xmm7_4
                            var_70 = xmm2_15
                            var_90 = xmm7_4
                            var_80 = xmm4_14
                            
                            do
                                float xmm5_16 = *(&var_58 + (i_2 << 3)) f* xmm2_15 f+ xmm1_13
                                float xmm3_16 = *(&var_58:4 + (i_2 << 3)) f* xmm4_14 f+ xmm7_4
                                float xmm5_17 = xmm5_16 - 4f
                                float xmm1_15 = xmm5_16 + 4f
                                float xmm3_17 = xmm3_16 - 4f
                                float xmm4_16 = xmm3_16 + 4f
                                float xmm5_18 = xmm5_17 + 2f
                                float var_f8_3 = xmm1_15
                                float xmm2_17 = xmm1_15 - 2f
                                float var_12c_13 = xmm3_17
                                float var_fc_3 = xmm3_17
                                float var_11c_3 = xmm3_17
                                float var_128_13 = xmm5_18
                                float var_124_13 = xmm4_16
                                var_f0 = xmm5_17.o
                                float var_f4_3 = xmm4_16
                                var_b0 = xmm2_17.o
                                float var_118_3 = xmm2_17
                                float var_114_3 = xmm3_17 + 2f
                                var_c0 = xmm5_18.o
                                float var_108_2 = xmm2_17
                                float var_104_2 = xmm4_16
                                float var_10c_2 = xmm4_16 - 2f
                                var_d0 = xmm5_18.o
                                sub_47d680(&var_f0, &data_571944)
                                sub_47d680(&var_b0, &data_571944)
                                sub_47d680(&var_c0, &data_571944)
                                result = sub_47d680(&var_d0, &data_571944)
                                xmm1_13 = var_a0
                                i_2 += 1
                                xmm2_15 = var_70
                                xmm4_14 = var_80
                                xmm7_4 = var_90
                            while (i_2 s< 8)
                            
                            goto label_474b8b
                        
                        var_144 = "UI2EditorDraw"
                        var_148 = 0x2995
                        var_14c = "c:\ax2017\engine\ui2.cpp"
                        ecx_1 = "gUI2Editor.s.activeSetCount == 1"
                    else
                        result = data_65ae04
                        
                        if (*(result + 0x18) == 0)
                            goto label_4745ef
                        
                        result = GetFocus()
                        
                        if (result != data_ce1790 && result != 0)
                            goto label_4745ef
                        
                        if (data_5cea36 == 0)
                            goto label_474819
                        
                        result = GetKeyState(0x11)
                        
                        if ((0x8000 & result.w) == 0)
                            goto label_474819
                        
                        result = data_65ae04
                        
                        if (*(result + 0x18) == 0)
                            goto label_474819
                        
                        result = GetFocus()
                        
                        if (result != data_ce1790 && result != 0)
                            goto label_474819
                        
                        if (data_5cea2c == 1)
                            void* eax_17 = sub_469160(data_5cda2c)
                            int32_t i_3 = 0
                            __builtin_memcpy(&var_58, 
                                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x"
                            "00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00"
                            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f"
                            "00\x00\x80\x3f\x00\x00\x80\x3f", 
                                0x40)
                            float xmm1_10[0x4] = *(eax_17 + 0x6cc)
                            var_d0 = xmm1_10
                            float xmm2_9 = _mm_shuffle_ps(xmm1_10, xmm1_10, 0xaa)
                            float xmm4_8 = _mm_shuffle_ps(xmm1_10, xmm1_10, 0xff)
                            int128_t xmm2_10 = xmm2_9 f- xmm1_10
                            float xmm7_2[0x4] = _mm_shuffle_ps(xmm1_10, xmm1_10, 0x55)
                            int128_t xmm4_9 = xmm4_8 f- xmm7_2
                            var_c0 = xmm2_10
                            var_f0 = xmm7_2
                            var_b0 = xmm4_9
                            
                            do
                                float xmm5_11 = *(&var_58 + (i_3 << 3)) f* xmm2_10 f+ xmm1_10
                                float xmm3_11 = *(&var_58:4 + (i_3 << 3)) f* xmm4_9 f+ xmm7_2
                                float xmm5_12 = xmm5_11 - 4f
                                float xmm1_12 = xmm5_11 + 4f
                                float xmm3_12 = xmm3_11 - 4f
                                float xmm4_11 = xmm3_11 + 4f
                                float xmm5_13 = xmm5_12 + 2f
                                float var_f8_2 = xmm1_12
                                float xmm2_12 = xmm1_12 - 2f
                                float var_12c_12 = xmm3_12
                                float var_fc_2 = xmm3_12
                                float var_11c_2 = xmm3_12
                                float var_128_12 = xmm5_13
                                float var_124_12 = xmm4_11
                                var_a0 = xmm5_12.o
                                float var_f4_2 = xmm4_11
                                var_70 = xmm2_12.o
                                float var_118_2 = xmm2_12
                                float var_114_2 = xmm3_12 + 2f
                                var_80 = xmm5_13.o
                                float var_108_1 = xmm2_12
                                float var_104_1 = xmm4_11
                                float var_10c_1 = xmm4_11 - 2f
                                var_90 = xmm5_13.o
                                sub_47d680(&var_a0, &data_571944)
                                sub_47d680(&var_70, &data_571944)
                                sub_47d680(&var_80, &data_571944)
                                result = sub_47d680(&var_90, &data_571944)
                                xmm1_10 = var_d0
                                i_3 += 1
                                xmm2_10 = var_c0
                                xmm4_9 = var_b0
                                xmm7_2 = var_f0
                            while (i_3 s< 8)
                            
                            goto label_474b8b
                        
                        var_144 = "UI2EditorDraw"
                        var_148 = 0x29af
                        var_14c = "c:\ax2017\engine\ui2.cpp"
                        ecx_1 = "gUI2Editor.s.activeSetCount == 1"
        else
            var_144 = "UI2DefGet"
            var_148 = 0x623
            var_14c = "c:\ax2017\engine\ui2.cpp"
            ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
    else
        var_144 = "Draw3DSetSortOverride"
        var_148 = 0x2f7
        var_14c = "c:\ax2017\engine\draw3d.cpp"
        ecx_1 = "gDraw3DData.submittingRenderItems"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_14c, var_148, var_144)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
