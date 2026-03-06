// 函数名称: sub_45b460
// 虚拟地址: 0x45b460
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

floatsub_45b460(int64_t arg1, float arg2, int64_t arg3, float arg4, int64_t arg5, float arg6, int64_t arg7, float arg8, int32_t* arg9, int64_t* arg10, int32_t arg11, int32_t arg12, int32_t arg13, int32_t arg14, int32_t arg15, int32_t arg16)
{
    // 第一条实际指令: float var_98
    float var_98
    int32_t eax_1 = __security_cookie ^ &var_98
    float xmm3_1 = arg1:4.d f- arg3:4.d
    float xmm2_1 = arg1.d f- arg3.d
    float xmm1_1 = arg2 - arg4
    float xmm7 = arg7:4.d
    float xmm4_3[0x4] = (xmm1_1 * xmm7 - xmm3_1 * arg8) ^ 0x80000000
    int64_t xmm5_3 = (xmm2_1 * arg8 - xmm1_1 f* arg7.d) ^ 0x80000000
    float xmm3_4 = (xmm3_1 f* arg7.d - xmm2_1 * xmm7) ^ 0x80000000
    int64_t var_50_1 = _mm_unpacklo_ps(xmm4_3, xmm5_3)
    float var_48_1 = xmm3_4
    
    if (not(xmm5_3.d f* arg5:4.d + xmm4_3[0] f* arg5.d + xmm3_4 * arg6 <= 0f))
        var_50_1 = _mm_unpacklo_ps(xmm4_3 ^ 0x80000000, xmm5_3 ^ 0x80000000)
        var_48_1 = xmm3_4 ^ 0x80000000
    
    float xmm1_7 = arg7.d
    float xmm1_11 = 1f / (sub_412d90(xmm7 * xmm7 + xmm1_7 * xmm1_7 + arg8 * arg8) + 9.99999975e-06f)
    float xmm0_19 = arg7.d * xmm1_11
    float xmm0_21 = arg7:4.d * xmm1_11
    float xmm0_23 = arg8 * xmm1_11
    float xmm1_12 = var_50_1:4.d
    float xmm0_24 = var_50_1.d
    float xmm1_16 =
        1f / (sub_412d90(xmm0_24 * xmm0_24 + xmm1_12 * xmm1_12 + var_48_1 * var_48_1) + 9.99999975e-06f)
    var_98 = var_50_1.d * xmm1_16
    float xmm0_33 = var_50_1:4.d * xmm1_16
    float xmm0_35 = var_48_1 * xmm1_16
    int32_t eax_8
    int32_t edx
    eax_8, edx = sub_4afaf0(5)
    var_50_1.d = eax_8
    int32_t* eax_9 = *arg9
    var_50_1:4.d = edx
    
    if (eax_9 == 0)
        edx.b = 0
        sub_4aa5d0(arg9, edx.b)
        eax_9 = *arg9
        
        if (eax_9 == 0)
            sub_48dac0(arg9)
            eax_9 = *arg9
    
    int32_t* eax_10 = *eax_9
    float xmm2_3[0x4] = arg15
    int64_t xmm2_4 = _mm_unpacklo_ps(xmm2_3, xmm2_3[0].q)
    int32_t* ecx_3 = *eax_10
    int64_t xmm3_7 = arg14
    int32_t eax_11 = *ecx_3
    float xmm1_17 = ecx_3[2]
    int32_t eax_13 = ecx_3[1]
    int64_t var_30
    var_30.o = _mm_cvtpd_ps(float.d(eax_11) f+ *((eax_11 u>> 0x1f << 3) + &data_59e4f0)) * xmm1_17
    float xmm1_18[0x4] = arg13
    int64_t var_40
    var_40.o = _mm_cvtpd_ps(float.d(eax_13) f+ *((eax_13 u>> 0x1f << 3) + &data_59e4f0)) * xmm1_17
    float xmm0_44[0x4] = var_50_1.d
    float xmm6_2[0x4] = _mm_unpacklo_ps(xmm1_18, xmm1_18)
    float xmm0_45[0x4] = _mm_shuffle_ps(xmm0_44, xmm0_44, 0)
    float xmm2_5[0x4] = arg16
    float xmm6_4[0x4] = _mm_sub_ps(_mm_unpacklo_ps(xmm6_2, xmm2_4), xmm0_45)
    float xmm0_46[0x4] = var_50_1:4.d
    float xmm7_2[0x4] = _mm_unpacklo_ps(xmm2_5, xmm3_7)
    float xmm0_47[0x4] = _mm_shuffle_ps(xmm0_46, xmm0_46, 0)
    float xmm7_4[0x4] = _mm_sub_ps(_mm_unpacklo_ps(xmm7_2, _mm_unpacklo_ps(xmm2_5, xmm3_7)), xmm0_47)
    float xmm5_6[0x4] = _mm_shuffle_ps(xmm6_4, xmm6_4, 0xe5)
    float xmm4_7[0x4] = _mm_unpackhi_ps(xmm5_6, xmm5_6)
    int64_t xmm1_21 = _mm_unpacklo_ps(xmm5_6, _mm_unpackhi_ps(xmm4_7, xmm4_7))
    float xmm0_51[0x4] = arg11
    float xmm6_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(xmm6_4, xmm4_7[0].q), xmm1_21)
    float xmm1_22[0x4] = var_30.o
    float xmm7_5[0x4] = __shufps_xmmps_memps_immb(xmm7_4, xmm7_4, 0xe5)
    float xmm0_52[0x4] = _mm_shuffle_ps(xmm0_51, xmm0_51, 0)
    float xmm1_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm1_22, xmm1_22, 0), xmm0_52)
    float xmm4_8[0x4] = xmm7_4[0]
    float xmm3_9[0x4] = _mm_unpackhi_ps(xmm7_5, xmm7_5)
    float xmm6_7[0x4] = _mm_mul_ps(xmm6_6, xmm1_24)
    float xmm0_54[0x4] = _mm_shuffle_ps(xmm6_7, xmm6_7, 0xe5)
    float xmm1_26[0x4] = _mm_unpackhi_ps(xmm0_54, xmm0_54)
    var_30.o = xmm0_54
    float xmm0_56 = _mm_unpackhi_ps(xmm1_26, xmm1_26)
    var_50_1.o = xmm1_26
    int64_t xmm0_58 = _mm_unpackhi_ps(xmm3_9, xmm3_9)
    int64_t xmm0_59 = xmm3_9[0].q
    int64_t xmm1_28 = _mm_unpacklo_ps(xmm7_5, xmm0_58)
    float xmm4_10[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(xmm4_8, xmm0_59), xmm1_28)
    float xmm1_29[0x4] = var_40.o
    float xmm1_30[0x4] = _mm_shuffle_ps(xmm1_29, xmm1_29, 0)
    float xmm0_60[0x4] = arg12
    float xmm3_11 = xmm6_7[0] * xmm0_19
    float xmm2_10 = xmm6_7[0] * xmm0_21
    float xmm4_11[0x4] = _mm_mul_ps(xmm4_10, _mm_mul_ps(xmm1_30, _mm_shuffle_ps(xmm0_60, xmm0_60, 0)))
    float xmm1_33 = xmm4_11[0] * xmm0_33
    float xmm5_8[0x4] = _mm_shuffle_ps(xmm4_11, xmm4_11, 0xe5)
    int32_t xmm7_7[0x4] = _mm_unpackhi_ps(xmm5_8, xmm5_8)
    float xmm1_34 = xmm5_8[0]
    float xmm0_63 = _mm_unpackhi_ps(xmm7_7, xmm7_7)
    float xmm0_67 = xmm5_8[0] * var_98
    float xmm6_12 = var_30.d
    *arg10 = _mm_unpacklo_ps((xmm3_11 + xmm4_11[0] * var_98) * 0.00999999978f f+ arg1.d, 
        (xmm2_10 + xmm1_33) * 0.00999999978f f+ arg1:4.d)
    arg10[1].d = (xmm6_7 f* xmm0_23 + xmm4_11 f* xmm0_35) * 0.00999999978f + arg2
    float xmm6_13 = var_50_1.d
    float xmm0_69 = xmm7_7[0] f* var_98
    float xmm1_37 = xmm7_7[0] f* xmm0_33
    *(arg10 + 0xc) = _mm_unpacklo_ps((xmm0_19 * xmm6_12 + xmm0_67) * 0.00999999978f f+ arg1.d, 
        (xmm0_21 * xmm6_12 + xmm1_34 * xmm0_33) * 0.00999999978f f+ arg1:4.d)
    *(arg10 + 0x14) = (xmm0_23 * xmm6_12 + xmm5_8 f* xmm0_35) * 0.00999999978f + arg2
    arg10[3] = _mm_unpacklo_ps((xmm0_19 * xmm6_13 + xmm0_69) * 0.00999999978f f+ arg1.d, 
        (xmm0_21 * xmm6_13 + xmm1_37) * 0.00999999978f f+ arg1:4.d)
    arg10[4].d = (xmm0_23 * xmm6_13 + xmm7_7 f* xmm0_35) * 0.00999999978f + arg2
    float result = (xmm0_23 * xmm0_56 + xmm0_63 * xmm0_35) * 0.00999999978f + arg2
    *(arg10 + 0x24) = _mm_unpacklo_ps(
        (xmm0_56 * xmm0_19 + xmm0_63 * var_98) * 0.00999999978f f+ arg1.d, 
        (xmm0_56 * xmm0_21 + xmm0_63 * xmm0_33) * 0.00999999978f f+ arg1:4.d)
    *(arg10 + 0x2c) = result
    @__security_check_cookie@4(eax_1 ^ &var_98)
    return result
}
