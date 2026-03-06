// 函数名称: sub_4f2600
// 虚拟地址: 0x4f2600
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4f2600()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_30 = 0f
    float var_34 = 0f
    float var_40 = 0f
    float var_48 = 0f
    int64_t var_5c
    int32_t var_58
    int32_t var_54
    
    if ((*(data_cdf450 + 0xc) & 2) == 0 || *(data_65ae04 + 0x18) == 0)
        if (data_ce2700 == 1)
            data_ce2700 = 0
            ShowCursor(1)
    else if (data_ce2700 != 0)
        if (GetCursorPos(&var_5c:4) != 0)
            int32_t Y = data_ce2708
            int32_t X = data_ce2704
            SetCursorPos(X, Y)
            var_30 = 0f - _mm_cvtepi32_ps(zx.o(var_58 - X)) * 0.00499999989f
            var_34 = _mm_cvtepi32_ps(zx.o(var_54 - Y)) * 0.00499999989f + 0f
    else if (GetCursorPos(&data_ce2704) != 0)
        data_ce2700 = 1
        ShowCursor(0)
    
    if ((*(data_cdf450 + 0xc) & 4) == 0 || *(data_65ae04 + 0x18) == 0)
        if (data_ce2702 == 1)
            data_ce2702 = 0
            ShowCursor(1)
    else if (data_ce2702 != 0)
        if (GetCursorPos(&var_5c:4) != 0)
            int32_t Y_1 = data_ce2718
            int32_t X_1 = data_ce2714
            SetCursorPos(X_1, Y_1)
            var_48 = 0f - _mm_cvtepi32_ps(zx.o(var_58 - X_1)) * 0.00499999989f
            var_40 = _mm_cvtepi32_ps(zx.o(var_54 - Y_1)) * 0.00499999989f + 0f
    else if (GetCursorPos(&data_ce2714) != 0)
        data_ce2702 = 1
        ShowCursor(0)
    
    int64_t xmm0_15 = data_ce2728.d
    float xmm2_1 = data_ce271c f- xmm0_15
    float xmm1_1 = data_ce2724 f- data_ce2730
    var_5c = xmm0_15
    float xmm0_17 = data_ce2720 f- data_ce2728:4
    int32_t edx
    int32_t xmm0_21
    edx, xmm0_21 = sub_412d90(xmm0_17 * xmm0_17 + xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1)
    int32_t xmm2_3 = var_5c.d
    float xmm1_3 = _mm_max_ss(0x3f800000, xmm0_21)
    float var_20 = data_ce2730 f- data_ce2724
    int64_t var_28 = _mm_unpacklo_ps(xmm2_3 f- data_ce271c, data_ce2728:4 f- data_ce2720)
    void var_74
    int64_t* eax_12
    int32_t edx_1
    eax_12, edx_1 = sub_452d30(&var_74, edx, &var_28, &var_74)
    float eax_13 = eax_12[1].d
    int64_t var_1c = *eax_12
    float xmm3_4 = eax_13 * 0f
    float var_20_1 = var_1c.d * 0f - var_1c:4.d * 0f
    var_28 = _mm_unpacklo_ps(var_1c:4.d - xmm3_4, xmm3_4 f- var_1c.d)
    int64_t* eax_16 = sub_452d30(&var_74, edx_1, &var_28, &var_74)
    float eax_17 = eax_16[1].d
    var_28 = *eax_16
    float xmm4 = var_28:4.d
    float xmm3_9 = var_28.d
    float xmm2_13 = (eax_17 f* var_1c:4.d - xmm4 * eax_13) * xmm1_3 * var_40 * -0.300000012f
        + xmm3_9 * xmm1_3 * var_48 * 0.300000012f
    float xmm6_6 = (xmm3_9 * eax_13 - eax_17 f* var_1c.d) * xmm1_3 * var_40 * -0.300000012f
        + xmm4 * xmm1_3 * var_48 * 0.300000012f
    float xmm7_6 = (xmm4 f* var_1c.d - xmm3_9 f* var_1c:4.d) * xmm1_3 * var_40 * -0.300000012f
        + eax_17 * xmm1_3 * var_48 * 0.300000012f
    float xmm0_37 = xmm2_13 f+ data_ce2728.d
    float xmm3_14 = xmm2_13 f+ data_ce271c
    float xmm6_7 = xmm6_6 f+ data_ce2720
    float xmm7_7 = xmm7_6 f+ data_ce2724
    float xmm1_11 = xmm6_6 f+ data_ce2728:4
    float xmm2_15 = xmm7_6 f+ data_ce2730
    data_ce2728.d = xmm0_37
    data_ce271c = xmm3_14
    float xmm3_15 = xmm3_14 - xmm0_37
    float xmm0_39 = var_30 * 0.5f
    data_ce2720 = xmm6_7
    float xmm6_8 = xmm6_7 - xmm1_11
    data_ce2724 = xmm7_7
    float xmm7_8 = xmm7_7 - xmm2_15
    data_ce2728:4 = xmm1_11
    data_ce2730 = xmm2_15
    float xmm0_40 = sub_4145d0(xmm0_39)
    float xmm1_13 = xmm0_40 * 0f
    int32_t edx_2
    float xmm0_42
    edx_2, xmm0_42 = sub_4145b0(xmm0_39)
    float xmm7_10 = xmm0_42 * xmm0_42
    float xmm3_17 = xmm0_42 * xmm1_13
    float xmm4_5 = xmm6_8 + xmm6_8
    float xmm5_5 = xmm0_40 * xmm0_40
    float xmm2_17 = xmm0_42 * xmm0_40
    float xmm1_15 = xmm0_40 * xmm1_13
    float xmm6_10 = xmm1_13 * xmm1_13
    float xmm0_45 = xmm3_17 + xmm1_15
    float xmm1_17 = xmm7_8 + xmm7_8
    float xmm7_11 = xmm7_10 - xmm6_10
    float xmm4_8 = (xmm6_10 + xmm7_10 - xmm6_10 - xmm5_5) * xmm3_15 + (xmm6_10 - xmm2_17) * xmm4_5
        + xmm0_45 * xmm1_17
    float xmm0_57 = xmm1_15 - xmm3_17
    float var_3c_2 = xmm0_57
    float xmm4_10 = xmm3_15 + xmm3_15
    float var_38_3 = xmm4_10
    float xmm1_18[0x4] = xmm4_8
    int64_t xmm3_23 =
        (xmm7_11 + xmm6_10 - xmm5_5) * xmm6_8 + (xmm2_17 + xmm6_10) * xmm4_10 + xmm0_57 * xmm1_17
    float var_40_2 = xmm3_23
    float xmm0_63 = xmm0_45 * xmm4_5 + xmm0_57 * xmm4_10 + (xmm7_11 - xmm6_10 + xmm5_5) * xmm7_8
    float xmm2_23 = xmm0_63 * 0f
    float var_20_3 = xmm0_63
    var_28 = _mm_unpacklo_ps(xmm1_18, xmm3_23)
    var_1c = _mm_unpacklo_ps(xmm3_23 f- xmm2_23, xmm2_23 f- xmm1_18)
    float var_14_3 = xmm1_18 f* 0f - var_40_2 * 0f
    int64_t* eax_21 = sub_452d30(&var_74, edx_2, &var_1c, &var_74)
    float eax_22 = eax_21[1].d
    var_1c = *eax_21
    float xmm0_70 = var_34 * 0.5f
    float xmm0_71 = sub_4145d0(xmm0_70)
    float xmm1_22 = var_1c.d * xmm0_71
    float xmm1_24 = var_1c:4.d * xmm0_71
    float xmm1_26 = eax_22 * xmm0_71
    int32_t edx_3
    float xmm0_73
    edx_3, xmm0_73 = sub_4145b0(xmm0_70)
    float xmm0_74 = xmm0_73 * xmm0_73
    float xmm3_27 = xmm1_22 * xmm1_22
    float xmm0_76 = xmm1_24 * xmm1_24
    float xmm0_78 = xmm1_26 * xmm1_26
    float xmm5_7 = xmm0_73 * xmm1_26
    float xmm0_80 = xmm1_26 * xmm1_22
    float xmm7_16 = var_40_2 * 2f
    float xmm6_12 = xmm1_24 * xmm1_22
    var_1c = 0x40000000
    float xmm4_13 = xmm0_73 * xmm1_24
    float xmm2_27 = xmm0_63 * 2f
    var_5c = (xmm3_27 + xmm0_74 - xmm0_76 - xmm0_78) * xmm4_8
    var_5c = var_5c.d f+ (xmm6_12 - xmm5_7) * xmm7_16 + (xmm4_13 + xmm0_80) * xmm2_27
    float xmm0_93 = xmm4_8 * var_1c.d
    float xmm1_33 = xmm0_74 - xmm3_27
    float xmm3_29 = xmm0_73 * xmm1_22
    float xmm0_95 = xmm1_26 * xmm1_24
    float var_34_3 = xmm3_29
    float xmm5_14 = (xmm3_29 + xmm0_95) * xmm7_16 + (xmm0_80 - xmm4_13) * xmm0_93
        + (xmm1_33 - xmm0_76 + xmm0_78) * xmm0_63
    int64_t xmm0_106 = _mm_unpacklo_ps(zx.o(var_5c), 
        (xmm1_33 + xmm0_76 - xmm0_78) * var_40_2 + (xmm5_7 + xmm6_12) * xmm0_93
            + (xmm0_95 - xmm3_29) * xmm2_27)
    var_5c = xmm0_106
    var_1c = xmm0_106
    float var_14_5 = xmm5_14
    int64_t* eax_24 = sub_452d30(&var_74, edx_3, &var_1c, &var_74)
    float eax_25 = eax_24[1].d
    var_1c = *eax_24
    
    if (not(0.99000001f f<= sub_41b760(var_1c.d * 0f + var_1c:4.d * 0f + eax_25)))
        var_28 = var_5c
        var_20_3 = xmm5_14
    
    float xmm0_115 = data_ce2730 + var_20_3
    int32_t ecx_5 = data_ce2764
    data_ce271c.q = _mm_unpacklo_ps(var_28.d f+ data_ce2728.d, var_28:4.d f+ data_ce2728:4)
    data_ce2724 = xmm0_115
    void* result = sub_495430(ecx_5)
    void* result_2 = result
    
    if (result_2 != 0)
        float xmm0_117 = data_ce2768 f+ data_ce2794
        data_ce2768 = xmm0_117
        float xmm0_118 = xmm0_117 * 0.5f
        float xmm0_119 = sub_4145b0(xmm0_118)
        float xmm0_121 = sub_4145d0(xmm0_118)
        var_28:4.d = xmm0_121
        float xmm5_16 = xmm0_121 * 0f
        float xmm3_31 = xmm0_119 * xmm0_119
        float xmm4_15 = xmm0_121 * xmm0_121
        float xmm2_32 = xmm0_121 * xmm5_16
        float xmm6_14 = xmm5_16 * xmm5_16
        var_28.d = xmm5_16
        float xmm5_17 = xmm5_16 * xmm0_119
        float xmm1_44 = xmm0_121 * xmm0_119
        float var_20_4 = xmm0_119
        float var_30_4 = xmm3_31
        float xmm2_34 = (xmm2_32 + xmm5_17) * 0f
        float xmm0_127 = xmm3_31 - xmm6_14
        float xmm0_129 = xmm2_32 - xmm5_17
        float xmm0_136 = xmm0_127 - xmm6_14
        float var_30_6 = xmm0_136
        result = (xmm0_136 + xmm4_15) * 0f + xmm0_129 * 6f + xmm2_34 f+ data_ce277c + 0f
        int64_t xmm7_26 = _mm_unpacklo_ps(
            (xmm6_14 + xmm3_31 - xmm6_14 - xmm4_15) * 3f + (xmm6_14 - xmm1_44) * 0f
                + xmm2_34 f+ data_ce2774 - 3f, 
            (xmm0_127 + xmm6_14 - xmm4_15) * 0f + (xmm6_14 + xmm1_44) * 6f
            + xmm0_129 * 0f f+ data_ce2778 + 0f)
        *(result_2 + 0x2c) = 0x3f800000.o
        void* result_1 = result
        int64_t var_88_1 = xmm7_26
        *(result_2 + 0x3c) = xmm5_16.o
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
