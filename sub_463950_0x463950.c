// 函数名称: sub_463950
// 虚拟地址: 0x463950
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_463950(int32_t arg1, int128_t* arg2, void* arg3, int128_t* arg4, int32_t arg5, int32_t arg6, int32_t* arg7, int32_t* arg8, int32_t* arg9, int32_t arg10, char arg11)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* result
    float ecx
    
    if (*(arg3 + 0x7f4) != 0)
        int32_t* ecx_3 = *(*(arg3 + 0x63c) * 0x208 + arg3 + 0x19c)
        int32_t var_148_2
        char const* const var_144_2
        int128_t var_e0
        float var_d0_1[0x4]
        float var_80[0x4]
        float var_50_1[0x4]
        int128_t* eax_4
        float xmm1_1[0x4]
        char* ecx_4
        
        if (ecx_3 == 0)
            eax_4 = sub_45d320(arg3)
            
            if (*(eax_4 + 8) == 0)
                var_144_2 = "UI2TableTransform"
                var_148_2 = 0x107f
            label_4640bc:
                ecx_4 = "Halt"
            label_4640cb:
                sub_44e4d0(eax_4, &data_5559b1, ecx_4, "c:\ax2017\engine\ui2.cpp", var_148_2, var_144_2)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t eax_6 = *sub_45d2e0(*(arg3 + 0x6a4))
            xmm1_1 =
                *sub_4b8ac0(eax_6, eax_6 + (*(arg3 + 0x6a8) + 1) * 0xc, &data_5b1d6c, data_e4712c, 0x71)
            xmm1_1 f- 0
            var_50_1 = xmm1_1
            float xmm3_2 = var_50_1[3]
            eax_4:1.b = (xmm1_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
                | (xmm1_1 f< 0f ? 1 : 0)
            var_80 = xmm1_1
            float xmm2_3 = var_50_1[2]
            var_d0_1 = xmm1_1
            bool p_18 = unimplemented  {test ah, 0x44}
            
            if (not(p_18))
                float xmm4_2 = var_50_1[1]
                xmm4_2 f- 0
                eax_4:1.b = (xmm4_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_2, 0f) ? 1 : 0) << 2
                    | (xmm4_2 < 0f ? 1 : 0)
                bool p_20 = unimplemented  {test ah, 0x44}
                
                if (not(p_20))
                    xmm2_3 f- 0
                    eax_4:1.b = (xmm2_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2
                        | (xmm2_3 < 0f ? 1 : 0)
                    bool p_22 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_22))
                        xmm3_2 f- 0
                        eax_4:1.b = (xmm3_2 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3_2, 0f) ? 1 : 0) << 2 | (xmm3_2 < 0f ? 1 : 0)
                        bool p_24 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_24))
                            var_144_2 = "UI2TableTransform"
                            var_148_2 = 0x107a
                            ecx_4 = "rectSub != RECT0"
                            goto label_4640cb
        else
            int32_t* var_144_1 = ecx_3
            xmm1_1 = *sub_45f1b0(&var_e0, arg9, ecx_3, &var_e0, arg10)
            xmm1_1 f- 0
            var_50_1 = xmm1_1
            float xmm3_1 = var_50_1[3]
            float xmm2_1 = var_50_1[2]
            float xmm4_1 = var_50_1[1]
            eax_4:1.b = (xmm1_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
                | (xmm1_1 f< 0f ? 1 : 0)
            var_80 = xmm1_1
            var_d0_1 = xmm1_1
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                xmm4_1 f- 0
                eax_4:1.b = (xmm4_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_1, 0f) ? 1 : 0) << 2
                    | (xmm4_1 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_463a55
                
                xmm2_1 f- 0
                eax_4:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
                    | (xmm2_1 < 0f ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (not(p_6))
                    xmm3_1 f- 0
                    eax_4:1.b = (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2
                        | (xmm3_1 < 0f ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_8))
                        var_144_2 = "UI2TableTransform"
                        var_148_2 = 0x1071
                        ecx_4 = "rectSub != RECT0"
                        goto label_4640cb
            
        label_463a55:
            
            if (arg11 != 1)
                float xmm0_6 = *(arg3 + 0x66c)
                xmm0_6 f- xmm1_1
                eax_4:1.b = (xmm0_6 f== xmm1_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_6, xmm1_1) ? 1 : 0) << 2 | (xmm0_6 f< xmm1_1 ? 1 : 0)
                bool p_10 = unimplemented  {test ah, 0x44}
                
                if (p_10)
                label_463aa7:
                    var_144_2 = "UI2TableTransform"
                    var_148_2 = 0x1072
                    ecx_4 = "needRefresh == true || el.persistant.rectSub == rectSub"
                    goto label_4640cb
                
                float xmm0_7 = *(arg3 + 0x670)
                xmm0_7 - xmm4_1
                eax_4:1.b = (xmm0_7 == xmm4_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_7, xmm4_1) ? 1 : 0) << 2 | (xmm0_7 < xmm4_1 ? 1 : 0)
                bool p_12 = unimplemented  {test ah, 0x44}
                
                if (p_12)
                    goto label_463aa7
                
                float xmm0_8 = *(arg3 + 0x674)
                xmm0_8 - xmm2_1
                eax_4:1.b = (xmm0_8 == xmm2_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_8, xmm2_1) ? 1 : 0) << 2 | (xmm0_8 < xmm2_1 ? 1 : 0)
                bool p_14 = unimplemented  {test ah, 0x44}
                
                if (p_14)
                    goto label_463aa7
                
                float xmm0_9 = *(arg3 + 0x678)
                xmm0_9 - xmm3_1
                eax_4:1.b = (xmm0_9 == xmm3_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_9, xmm3_1) ? 1 : 0) << 2 | (xmm0_9 < xmm3_1 ? 1 : 0)
                bool p_16 = unimplemented  {test ah, 0x44}
                
                if (p_16)
                    goto label_463aa7
        int32_t ecx_10 = *(arg3 + 0x63c) * 0x208
        float xmm0_10[0x4] = *(arg3 + 0x6cc)
        *(arg3 + 0x66c) = xmm1_1
        float var_2c = *(ecx_10 + arg3 + 0x17c)
        int32_t eax_8 = *(ecx_10 + arg3 + 0x180)
        int32_t var_28_1 = eax_8
        
        if (arg7 != 0)
            var_2c = *arg7
            eax_8 = arg7[1]
            var_28_1 = eax_8
        
        int32_t eax_10
        int32_t edx_3
        eax_10, edx_3 = sub_463830(eax_8, arg8, &var_2c, arg5, arg6)
        float xmm0_12 = _mm_cvtepi32_ps(zx.o(var_2c))
        int32_t eax_11 = *(arg3 + 0x63c) * 0x208
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(var_28_1))
        float xmm0_13 = *(eax_11 + arg3 + 0x188)
        float xmm0_14 = *(eax_11 + arg3 + 0x18c)
        float xmm0_15 = *(eax_11 + arg3 + 0x190)
        float xmm0_16 = *(eax_11 + arg3 + 0x194)
        float xmm0_18 = var_50_1[2] - var_80[0]
        float xmm1_5 = var_50_1[3] - var_50_1[1]
        var_50_1[2] = xmm0_18
        var_50_1[3] = xmm1_5
        float eax_12
        float edx_4
        eax_12, edx_4 = sub_463610(xmm0_10, var_50_1[2], var_50_1[3], xmm0_13, xmm0_14, xmm0_15, 
            xmm0_16, xmm0_12, xmm1_3)
        float xmm2_6 = _mm_cvtepi32_ps(zx.o(var_2c))
        float xmm4_5 = _mm_shuffle_ps(xmm0_10, xmm0_10, 0xaa) f- xmm0_10
        float xmm6_2 = _mm_shuffle_ps(xmm0_10, xmm0_10, 0xff)
        float xmm0_21 = _mm_cvtepi32_ps(zx.o(var_28_1)) - 1f
        float xmm7_3 = xmm0_18 * xmm2_6 + (xmm2_6 - 1f) * eax_12
        float xmm4_7[0x4] = _mm_shuffle_ps(xmm0_10, xmm0_10, 0x55)
        float xmm6_3 = xmm6_2 f- xmm4_7
        var_80 = xmm4_7
        float xmm2_8 = xmm1_5 * xmm1_3
        float xmm2_9 = xmm2_8 + xmm0_21 * edx_4
        float xmm1_10 = xmm4_5 / xmm7_3
        int32_t ecx_13 = *(arg3 + 0x63c) * 0x208
        float xmm0_24 = xmm6_3 / xmm2_9
        eax_4 = *(ecx_13 + arg3 + 0xb8)
        float var_20_1
        
        switch (eax_4)
            case nullptr, 3
                xmm1_10 = _mm_min_ss(xmm1_10, xmm0_24)
                var_20_1 = xmm1_10
            case 1, 7
                xmm1_10 = *(arg2 + 0xc)
                var_20_1 = xmm1_10
            case 4
                xmm1_10 = _mm_max_ss(xmm1_10, xmm0_24)
                var_20_1 = xmm1_10
            case 5
                xmm1_10 = xmm0_24
                var_20_1 = xmm0_24
            case 6
                var_20_1 = xmm1_10
            default
                var_144_2 = "TableScale"
                var_148_2 = 0xfff
                goto label_4640bc
        
        int128_t xmm0_25 = *arg2
        float xmm2_10 = xmm2_9 * xmm1_10
        var_50_1[3] = arg2[5].d
        int128_t var_138_1 = xmm0_25
        float xmm7_4 = xmm7_3 * xmm1_10
        var_e0 = arg2[1]
        int128_t var_118_1 = arg2[2]
        int128_t var_108_1 = arg2[3]
        int128_t var_f8_1 = arg2[4]
        float xmm0_31 = xmm0_18 * xmm1_10
        float xmm0_33 = xmm1_5 * xmm1_10
        float xmm1_11 = *(ecx_13 + arg3 + 0xb0)
        float xmm1_12 = *(ecx_13 + arg3 + 0xb4)
        float xmm6_6 = xmm1_12 * xmm6_3 + var_80[0]
        float xmm2_14 = xmm1_11 * xmm4_5 f+ xmm0_10 - ((xmm7_4 - 0f) * xmm1_11 + 0f)
        var_80[0] = xmm2_14
        var_80[2] = xmm7_4 + xmm2_14
        float xmm6_7 = xmm6_6 - ((xmm2_10 - 0f) * xmm1_12 + 0f)
        var_80[1] = xmm6_7
        var_80[3] = xmm2_10 + xmm6_7
        
        if (arg8 == 0)
        label_464007:
            float eax_16
            float edx_6
            eax_16, edx_6 = sub_41b6f0(&var_80)
            var_138_1:0xc.d = var_20_1
            var_138_1.d = _mm_cvtepi32_ps(zx.o(eax_10)) * (eax_12 * var_20_1 + xmm0_31) + eax_16
            var_138_1:4.d = _mm_cvtepi32_ps(zx.o(edx_3)) * (edx_4 * var_20_1 + xmm0_33) + edx_6
        else
            float xmm0_45 = _mm_cvtepi32_ps(zx.o(edx_3))
            xmm0_45 - xmm0_21
            int32_t eax_13
            eax_13:1.b = (xmm0_45 == xmm0_21 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_45, xmm0_21) ? 1 : 0) << 2 | (xmm0_45 < xmm0_21 ? 1 : 0)
            bool p_26 = unimplemented  {test ah, 0x44}
            
            if (p_26)
                goto label_464007
            
            float xmm0_47 = _mm_cvtepi32_ps(zx.o(var_28_1))
            float xmm0_49 = _mm_cvtepi32_ps(zx.o(*arg8))
            var_2c = xmm0_49
            float eax_14
            float edx_5
            eax_14, edx_5 = sub_463610(xmm0_10, xmm0_18, xmm1_5, xmm0_13, xmm0_14, xmm0_15, xmm0_16, 
                var_2c, xmm0_47)
            float xmm1_15 = xmm0_49 * xmm0_18 + (xmm0_49 - 1f) * eax_14
            int32_t ecx_16 = *(*(arg3 + 0x63c) * 0x208 + arg3 + 0xac)
            float xmm0_56 = _mm_min_ss(xmm4_5 / xmm1_15, xmm6_3 / (xmm2_8 + xmm0_21 * edx_5))
            float eax_15 = sub_4afaf0(ecx_16)
            float xmm1_22 = eax_15 * xmm4_5 + xmm0_10[0]
            var_138_1:0xc.d = xmm0_56
            var_138_1:4.d = (edx_5 * xmm0_56 + xmm1_5 * xmm0_56) * 0f
                + _mm_cvtepi32_ps(zx.o(edx_3)) * (edx_4 * var_20_1 + xmm0_33) + xmm6_7
            var_138_1.d = _mm_cvtepi32_ps(zx.o(eax_10)) * (eax_14 * xmm0_56 + xmm0_18 * xmm0_56)
                + (eax_12 * var_20_1 + xmm0_31) * 0f + xmm1_22
                - ((xmm1_15 * xmm0_56 - 0f) * eax_15 + 0f)
        
        result = arg4
        ecx = var_50_1[3]
        int128_t xmm1_31 = data_571cf8
        *result = var_138_1
        result[1] = var_e0
        result[2] = var_d0_1
        result[3] = xmm1_31
        result[4] = var_d0_1
    else
        result = arg4
        ecx = arg2[5].d
        *result = *arg2
        result[1] = arg2[1]
        result[2] = arg2[2]
        result[3] = arg2[3]
        result[4] = arg2[4]
    
    result[5].d = ecx
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
