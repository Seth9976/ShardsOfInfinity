// 函数名称: sub_4b1940
// 虚拟地址: 0x4b1940
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b1940(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4, int32_t* arg5, float* arg6, void* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    float eax_1 = __security_cookie ^ &__saved_ebp
    float var_8 = eax_1
    int32_t var_d4
    char const* const ecx
    int128_t var_88
    int128_t* result
    int128_t xmm0_55
    
    if (arg2 == 0)
        int32_t ebx_1 = *arg3
        int32_t edx_5 = arg3[2]
        float xmm7_3 = *(arg7 + 0x1c)
        float xmm6_10 = arg6[7]
        var_88 = *(arg6 + 0xc)
        float xmm0_57 = arg6[8]
        xmm0_57 f- 0
        eax_1:1.b = (xmm0_57 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_57, 0f) ? 1 : 0) << 2
            | (xmm0_57 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        float var_8c_1
        float var_2c_4
        int32_t ebx_2
        float xmm6_12
        
        if (p_2)
            ebx_2 = arg3[1]
            float xmm2_21 = _mm_min_ss(arg6[8] / (*(arg7 + 0x20) * float.s(ebx_2)), 
                arg6[9] / (*(arg7 + 0x24) * float.s(edx_5)))
            xmm6_12 = xmm6_10 / (float.s(ebx_1) * xmm7_3)
            var_2c_4 = xmm6_12
            
            if (not(xmm2_21 > xmm6_12))
                xmm6_12 = xmm2_21
                var_2c_4 = xmm6_12
            
            var_8c_1 = xmm6_12
            goto label_4b1e43
        
        float xmm2_16 = arg6[9]
        float xmm1_34 = _mm_cvtepi32_ps(zx.o(ebx_1))
        float xmm3_17 = _mm_cvtepi32_ps(zx.o(edx_5))
        xmm6_12 = _mm_min_ss(xmm6_10 / (xmm7_3 * xmm1_34), xmm2_16 / (*(arg7 + 0x24) * xmm3_17))
        var_2c_4 = xmm6_12
        var_8c_1 = xmm6_12
        
        if (xmm6_12 > 0f)
            ebx_2 = arg3[1]
        label_4b1e43:
            float xmm1_42 = var_88:0xc.d
            float xmm3_22 = var_88:4.d
            float xmm0_67 = xmm1_42 * xmm1_42
            float xmm0_69 = xmm3_22 * xmm3_22
            float xmm4_13 = (float.s(*arg5) - float.s(ebx_1 - 1) * 0.5f) * xmm7_3 * xmm6_12
            float xmm0_70 = var_88:8.d
            float xmm4_15 = xmm0_70 * xmm0_70
            float xmm5_11 = (float.s(arg5[2]) - float.s(edx_5 - 1) * 0.5f) f* *(arg7 + 0x24) * xmm6_12
            float xmm7_6 = *(arg7 + 0x20) * (float.s(arg5[1]) - float.s(ebx_2 - 1) * 0.5f) * xmm6_12
            float xmm6_13 = var_88.d
            float xmm2_25 = xmm6_13 * xmm6_13
            float xmm0_71 = xmm0_70 * xmm6_13
            float xmm5_13 = xmm3_22 * xmm6_13
            float xmm4_17 = xmm0_70 * xmm1_42
            float xmm6_15 = xmm3_22 * xmm1_42
            float xmm1_44 = xmm5_11 + xmm5_11
            float xmm7_7 = xmm7_6 + xmm7_6
            float xmm0_85 = xmm4_13 + xmm4_13
            float xmm0_87 = xmm0_67 - xmm2_25
            float xmm2_31 = var_88.d f* var_88:0xc.d
            float xmm0_89 = var_88:8.d * xmm3_22
            int64_t xmm3_25 = _mm_unpacklo_ps(
                (xmm2_25 + xmm0_67 - xmm0_69 - xmm4_15) * xmm4_13 + (xmm5_13 - xmm4_17) * xmm7_7
                    + (xmm6_15 + xmm0_71) * xmm1_44 + *arg6, 
                arg6[1] + (xmm0_87 + xmm0_69 - xmm4_15) * xmm7_6 + (xmm4_17 + xmm5_13) * xmm0_85
                + (xmm0_89 - xmm2_31) * xmm1_44)
            int64_t var_78_1 = xmm3_25
            eax_1 = arg6[2] + (xmm2_31 + xmm0_89) * xmm7_7 + (xmm0_71 - xmm6_15) * xmm0_85
                + (xmm0_87 - xmm0_69 + xmm4_15) * xmm5_11
            float var_70_1 = eax_1
            
            if (not(var_2c_4 <= 0f))
                result = arg4
                *result = var_8c_1.o
                xmm0_55 = var_88
            label_4b2027:
                result[1] = xmm0_55
                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                return result
            
            char const* const var_d0_5 = "DistBox"
            var_d4 = 0x40b
            ecx = "retval.s > 0"
        else
            char const* const var_d0_4 = "DistBox"
            var_d4 = 0x400
            ecx = "retval.s > 0"
    else
        if (arg2 == 1)
            float xmm1_1 = arg6[7]
            float xmm0_2 = xmm1_1 * 0.5f
            float xmm0_3 = arg6[8]
            float xmm2_2 = xmm0_3 * 0.5f
            
            if (not(xmm0_3 > xmm1_1))
                xmm1_1 = xmm0_3
            
            int32_t ecx_1 = arg3[2]
            int32_t* edx_2 = arg5
            float xmm0_5 = _mm_cvtepi32_ps(zx.o(arg3[1]))
            int32_t var_ac_1 = 0x3f800000
            uint128_t xmm2_3 = zx.o(edx_2[2])
            float xmm1_3 = xmm1_1 * 0.25f / xmm0_5
            float xmm0_7 = _mm_cvtepi32_ps(zx.o(ecx_1 - 1))
            float xmm2_6 =
                (_mm_cvtepi32_ps(xmm2_3) - xmm0_7 * 0.5f) * arg6[9] / _mm_cvtepi32_ps(zx.o(ecx_1))
            float xmm1_9 = _mm_cvtepi32_ps(zx.o(*edx_2)) * 6.28318548f / _mm_cvtepi32_ps(zx.o(*arg3))
            float xmm0_14 = sub_4145d0(xmm1_9)
            float xmm0_17 = (xmm0_2 - xmm1_3) * xmm0_14
            int32_t edx_3
            float xmm0_19
            edx_3, xmm0_19 = sub_4145b0(xmm1_9)
            float xmm2_7 = arg6[3]
            float xmm4_1 = arg6[4]
            float xmm5_1 = arg6[5]
            float xmm1_12 = (xmm2_2 - xmm1_3) * xmm0_19
            float xmm7_2 = xmm4_1 * xmm4_1
            float xmm3_6 = (xmm0_14 * xmm0_2 - xmm0_17) * 0.5f + xmm0_17
            float xmm3_7 = arg6[6]
            float xmm0_23 = (xmm0_19 * xmm2_2 - xmm1_12) * 0.5f + xmm1_12
            float xmm6_2 = xmm5_1 * xmm3_7
            float xmm1_14 = xmm2_7 * xmm4_1
            float xmm0_25 = xmm1_14 - xmm6_2
            float xmm1_16 = xmm5_1 * xmm5_1
            float xmm6_4 = xmm3_7 * xmm3_7
            float xmm3_9 = xmm2_7 * xmm2_7
            float xmm5_2 = xmm5_1 * xmm2_7
            float xmm0_32 = xmm5_1 * xmm4_1
            float xmm0_34 = xmm3_7 * xmm2_7
            float xmm2_9 = xmm3_7 * xmm4_1
            float xmm1_18 = xmm0_34 + xmm0_32
            float xmm4_3 = xmm5_2 - xmm2_9
            float xmm2_10 = xmm2_9 + xmm5_2
            float xmm2_11[0x4] = xmm2_10 + xmm2_10
            float xmm6_6 = xmm6_2 + xmm1_14
            float var_30_2 = xmm2_11
            float var_24_2 = xmm6_6
            float xmm1_27 = xmm0_32 - xmm0_34
            int64_t xmm1_28 = xmm1_27 + xmm1_27
            float var_2c_3 = xmm1_28
            float xmm0_38 = xmm1_16 - xmm7_2 - xmm3_9 + xmm6_4
            int64_t var_20 = _mm_unpacklo_ps(xmm2_11, xmm1_28)
            float var_18_1 = xmm0_38
            float xmm5_5[0x4] =
                (xmm3_9 + xmm6_4 - xmm1_16 - xmm7_2) * xmm3_6 + (xmm0_25 + xmm0_25) * xmm0_23
            float xmm4_6 = (xmm4_3 + xmm4_3) * xmm3_6 + (xmm1_18 + xmm1_18) * xmm0_23
            int64_t xmm6_9 = (xmm6_6 + xmm6_6) * xmm3_6 + (xmm7_2 - xmm1_16 + xmm6_4 - xmm3_9) * xmm0_23
            float var_54_2 = xmm5_5[0]
            float var_c_1 = xmm4_6
            float var_24_4 = xmm6_9
            int64_t var_14 = _mm_unpacklo_ps(xmm5_5, xmm6_9)
            void var_bc
            int64_t* eax_6 = sub_452d30(&var_bc, edx_3, &var_14, &var_bc)
            int32_t var_c_2 = eax_6[1].d
            var_14 = *eax_6
            int128_t xmm0_46 = *sub_413180(&var_88:0xc, &var_20, &var_14, &var_88:0xc)
            float xmm0_53 = xmm4_6 + xmm2_6 * xmm0_38 + arg6[2] - arg6[9] * 0.5f
            int64_t var_98_1 = _mm_unpacklo_ps(var_54_2 + xmm2_6 * var_30_2 + *arg6, 
                var_24_4 + xmm2_6 * var_2c_3 + arg6[1])
            float var_90_1 = xmm0_53
            result = arg4
            *result = var_ac_1.o
            xmm0_55 = xmm0_46
            goto label_4b2027
        
        char const* const var_d0_1 = "DistBox"
        var_d4 = 0x487
        ecx = "Halt"
    sub_44e4d0(eax_1, &data_5559b1, ecx, "c:\ax2017\engine\fabdef.cpp", var_d4, "DistBox")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
