// 函数名称: sub_45af40
// 虚拟地址: 0x45af40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_45af40(int32_t arg1, int64_t* arg2, int32_t arg3, int64_t arg4, float arg5, int64_t arg6, float arg7, int64_t arg8, float arg9, int64_t arg10, float arg11, int64_t* arg12)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float eax_5 = arg11
    float var_50 = eax_5
    float xmm5_1 = arg4:4.d f- arg6:4.d
    float xmm6_1 = arg5 - arg7
    float xmm7_1 = arg4.d f- arg6.d
    int32_t var_70
    char const* const ecx
    
    if (arg3 u> 4)
        char const* const var_6c_1 = "BillboardAxes"
        var_70 = 0xb52
        ecx = "Halt"
    else
        int32_t var_20_2
        
        switch (arg3)
            case 0
                float xmm3 = arg8:4.d
                float xmm0_5 = arg8.d
                *arg2 = _mm_unpacklo_ps(arg9 * xmm5_1 - xmm3 * xmm6_1, xmm0_5 * xmm6_1 - arg9 * xmm7_1)
                arg2[1].d = xmm3 * xmm7_1 - xmm0_5 * xmm5_1
                float xmm1_2 = *(arg2 + 4)
                float xmm3_3 = arg2[1].d
                float xmm2_4 = *arg2
                var_20_2 = (xmm2_4 * xmm5_1 - xmm1_2 * xmm7_1) ^ 0x80000000
                *arg12 = _mm_unpacklo_ps((xmm1_2 * xmm6_1 - xmm3_3 * xmm5_1) ^ 0x80000000, 
                    (xmm3_3 * xmm7_1 - xmm2_4 * xmm6_1) ^ 0x80000000)
            label_45b31f:
                arg12[1].d = var_20_2
            label_45b322:
                float xmm1_20 = *arg2
                float xmm1_21 = *(arg2 + 4)
                float xmm1_23 = arg2[1].d
                float xmm1_25 = 1f / (
                    sub_412d90(xmm1_20 * xmm1_20 + xmm1_21 * xmm1_21 + xmm1_23 * xmm1_23)
                    + 9.99999975e-06f)
                float xmm0_44 = arg2[1].d f* xmm1_25
                *arg2 = _mm_unpacklo_ps(xmm1_20 * xmm1_25, *(arg2 + 4) * xmm1_25)
                arg2[1].d = xmm0_44
                float xmm1_26 = *arg12
                float xmm1_27 = *(arg12 + 4)
                float xmm1_29 = arg12[1].d
                float xmm3_27 = 1f / (
                    sub_412d90(xmm1_26 * xmm1_26 + xmm1_27 * xmm1_27 + xmm1_29 * xmm1_29)
                    + 9.99999975e-06f)
                float result = arg12[1].d f* xmm3_27
                *arg12 = _mm_unpacklo_ps(xmm1_26 * xmm3_27, *(arg12 + 4) * xmm3_27)
                arg12[1].d = result
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            case 1
                float xmm0_11 = arg10.d
                xmm0_11 f- 0
                eax_5:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
                    | (xmm0_11 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    eax_5.b = 0
                else
                    float xmm0_12 = arg10:4.d
                    xmm0_12 f- 0
                    eax_5:1.b = (xmm0_12 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2 | (xmm0_12 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        eax_5.b = 0
                    else
                        var_50 f- 0
                        eax_5:1.b = (var_50 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(var_50, 0f) ? 1 : 0) << 2 | (var_50 < 0f ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            eax_5.b = 0
                        else
                            eax_5.b = 1
                
                if (eax_5.b != 0)
                    int128_t xmm6_2 = arg8.d
                    int64_t xmm5_2 = arg8:4.d
                    *arg12 = _mm_unpacklo_ps(xmm6_2 ^ 0x80000000, xmm5_2 ^ 0x80000000)
                    arg12[1].d = arg9 ^ 0x80000000
                    *arg2 = _mm_unpacklo_ps(arg9 * xmm5_1 - xmm5_2.d * xmm6_1, 
                        xmm6_2.d * xmm6_1 - arg9 * xmm7_1)
                    arg2[1].d = xmm5_2 f* xmm7_1 - xmm6_2 f* xmm5_1
                    goto label_45b322
            case 2
                *arg2 = arg10
                arg2[1].d = eax_5
                float xmm1_10 = *(arg2 + 4)
                float xmm3_10 = arg2[1].d
                float xmm2_8 = *arg2
                *arg12 = _mm_unpacklo_ps((xmm1_10 * xmm6_1 - xmm3_10 * xmm5_1) ^ 0x80000000, 
                    (xmm3_10 * xmm7_1 - xmm2_8 * xmm6_1) ^ 0x80000000)
                arg12[1].d = (xmm2_8 * xmm5_1 - xmm1_10 * xmm7_1) ^ 0x80000000
                int64_t xmm3_14 = *(arg12 + 4)
                int128_t xmm2_12 = *arg12
                float xmm4_16 = arg12[1].d
                
                if (xmm2_12.d f* arg8.d + xmm3_14.d f* arg8:4.d + xmm4_16 * arg9 <= 0f)
                    goto label_45b322
                
                var_20_2 = xmm4_16 ^ 0x80000000
                *arg12 = _mm_unpacklo_ps(xmm2_12 ^ 0x80000000, xmm3_14 ^ 0x80000000)
                goto label_45b31f
            case 3
                float xmm5_6 = arg8.d ^ 0x80000000
                float xmm4_19 = arg8:4.d ^ 0x80000000
                *arg2 = arg10
                float xmm1_17 = arg9 ^ 0x80000000
                arg2[1].d = eax_5
                float xmm2_15 = *(arg2 + 4)
                float xmm6_4 = arg2[1].d
                float xmm3_16 = *arg2
                var_20_2 = (xmm3_16 * xmm4_19 - xmm2_15 * xmm5_6) ^ 0x80000000
                *arg12 = _mm_unpacklo_ps((xmm2_15 * xmm1_17 - xmm6_4 * xmm4_19) ^ 0x80000000, 
                    (xmm6_4 * xmm5_6 - xmm3_16 * xmm1_17) ^ 0x80000000)
                goto label_45b31f
            case 4
                float xmm3_20 = arg10:4.d
                int64_t xmm7_7 = arg8:4.d
                int128_t xmm5_7 = arg8.d
                float xmm0_35 = arg10.d
                int64_t xmm5_9 = _mm_unpacklo_ps(xmm5_7 ^ 0x80000000, xmm7_7 ^ 0x80000000)
                *arg2 = _mm_unpacklo_ps((var_50 f* xmm7_7 - xmm3_20 * arg9) ^ 0x80000000, 
                    (xmm0_35 * arg9 - var_50 f* xmm5_7) ^ 0x80000000)
                arg2[1].d = (xmm3_20 f* xmm5_7 - xmm0_35 f* xmm7_7) ^ 0x80000000
                var_20_2 = arg9 ^ 0x80000000
                *arg12 = xmm5_9
                goto label_45b31f
        
        char const* const var_6c = "BillboardAxes"
        var_70 = 0xb3c
        ecx = "fwd == V0"
    
    sub_44e4d0(eax_5, &data_5559b1, ecx, "c:\ax2017\engine\draw3d.cpp", var_70, "BillboardAxes")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
