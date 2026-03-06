// 函数名称: sub_49bff0
// 虚拟地址: 0x49bff0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_49bff0(int32_t arg1, int32_t* arg2, float* arg3, float* arg4, int32_t* arg5, float arg6, int32_t* arg7)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    float var_18 = 0f
    float var_14 = 1f
    int64_t var_5c = 0
    arg6 f- 0
    float var_54 = 0f
    float xmm2 = *arg5
    arg1:1.b = (arg6 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg6, 0f) ? 1 : 0) << 2 | (arg6 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int64_t var_48_1
    float var_1c
    int32_t* ecx
    float xmm3
    float xmm6
    
    if (p_1)
        float xmm0_6 = arg6 * 0.5f
        var_18 = sub_4145d0(xmm0_6)
        double* eax_1
        float xmm0_9
        eax_1, xmm0_9 = sub_4145b0(xmm0_6)
        xmm2 f- 0
        var_14 = xmm0_9
        eax_1:1.b =
            (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2 | (xmm2 < 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        bool p_5
        
        if (not(p_3))
            float xmm0_10 = arg5[1]
            xmm0_10 f- 0
            eax_1:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
                | (xmm0_10 < 0f ? 1 : 0)
            p_5 = unimplemented  {test ah, 0x44}
        
        if (p_3 || p_5)
            float xmm1_3 = arg5[1]
            ecx = arg7
            xmm6 = *ecx
            float xmm3_3 = xmm2 * var_18 + xmm1_3 * xmm0_9
            float xmm2_5 = xmm2 * xmm0_9 - xmm1_3 * var_18
            float xmm0_18 = ecx[1]
            var_48_1 = (xmm3_3 * xmm0_9 + xmm2_5 * var_18) * xmm0_18
            xmm3 = xmm0_18
            var_1c = (xmm2_5 * xmm0_9 - xmm3_3 * var_18) * xmm6
        else
            int64_t xmm0_11 = 0
            ecx = arg7
            var_48_1 = xmm0_11:4.d
            xmm6 = *ecx
            xmm3 = ecx[1]
            var_54 = 0f
            var_1c = xmm0_11.d
    else
        ecx = arg7
        xmm6 = *ecx
        xmm3 = ecx[1]
        float xmm0_3 = ecx[2] f* 0f
        int64_t xmm2_2 = _mm_unpacklo_ps(xmm2 * xmm6, arg5[1] f* xmm3)
        var_48_1 = xmm2_2:4.d
        var_54 = xmm0_3
        var_1c = xmm2_2.d
    
    float xmm0_19 = arg4[1]
    float xmm7 = *arg4
    float xmm5_3 = xmm0_19 * xmm3
    float xmm4_3 = xmm7 * xmm6
    float xmm6_2 = ecx[2] f* 0f
    float xmm3_7 = 1f - (var_18 + var_18) * var_18
    float xmm7_1 = xmm7 * var_1c
    float var_d8 = xmm6_2
    float var_ec = xmm3_7 * xmm5_3
    float xmm3_9 = arg2[2]
    float xmm0_26 = var_14 + var_14
    float xmm1_11 = xmm0_26 * var_18
    float var_fc = (0f - xmm1_11) * xmm5_3
    float xmm0_30 = xmm0_26 * 0f
    float xmm0_32 = var_18 * 0f
    float xmm2_8 = xmm0_32 + xmm0_30
    float var_dc = xmm2_8 * xmm5_3
    float var_f8 = xmm2_8 * xmm6_2
    float var_f4 = var_1c
    float xmm1_15 = xmm0_32 - xmm0_30
    float xmm1_16 = xmm1_15 * xmm4_3
    float xmm6_3 = arg2[3]
    float var_e8 = xmm1_15 * xmm6_2
    int32_t var_e4 = var_48_1.d
    float var_d4 = var_54
    int96_t xmm0_40 = (xmm3_7 * xmm4_3).12
    float xmm0_41[0x4] = ((xmm1_11 + 0f) * xmm4_3).o
    int96_t var_a0 = xmm0_41[0].12
    float xmm1_18 = xmm0_19 * _mm_shuffle_ps(xmm0_41, xmm0_41, 0xff)
    float xmm0_44 = xmm3_9 + xmm3_9
    float xmm0_45 = xmm0_44 * xmm3_9
    float xmm7_2 = *arg2
    float xmm4_4 = arg2[1]
    float xmm2_10 = arg2[4]
    float xmm5_6 = (xmm6_3 + xmm6_3) * xmm6_3
    float xmm2_11 = xmm2_10 + xmm2_10
    float xmm2_12 = xmm2_11 * xmm6_3
    float xmm1_21 = (1f - xmm0_45 - xmm5_6) * xmm7_2
    float xmm1_23 = xmm4_4 + xmm4_4
    float xmm0_47 = xmm1_23 * xmm3_9
    float xmm2_15 = (xmm0_47 - xmm2_12) * xmm7_2
    float xmm2_17 = xmm2_11 * xmm3_9
    float xmm3_11 = xmm1_23 * xmm6_3
    float xmm3_13 = (xmm3_11 + xmm2_17) * xmm7_2
    var_48_1:4.d = arg2[5]
    float xmm0_48 = 1f - xmm1_23 * xmm4_4
    float xmm2_18 = var_48_1:4.d
    float xmm3_17 = (xmm2_12 + xmm0_47) * xmm7_2
    float xmm1_27 = (xmm3_11 - xmm2_17) * xmm7_2
    float xmm0_50 = (xmm0_48 - xmm5_6) * xmm7_2
    float xmm3_19 = xmm2_11 * xmm4_4
    float xmm0_52 = xmm0_44 * xmm6_3
    float xmm5_7 = arg2[6]
    float xmm6_6 = (xmm0_52 - xmm3_19) * xmm7_2
    float xmm3_21 = (xmm3_19 + xmm0_52) * xmm7_2
    float xmm0_55 = (xmm0_48 - xmm0_45) * xmm7_2
    float xmm0_56 = arg2[7]
    *arg3 = xmm2_15 f* var_a0.d + xmm1_21 f* xmm0_40.d + xmm3_13 * xmm1_16 + xmm2_18 * 0f
    float xmm7_3[0x4] = xmm1_16.o
    float xmm1_37 = _mm_shuffle_ps(xmm7_3, xmm7_3, 0x55)
    float xmm1_41 = __shufps_xmmps_memps_immb(data_59e430, data_59e430, 0x55)
    arg3[1] = xmm2_15 f* var_a0:4.d + xmm1_21 f* xmm0_40:4.d + xmm3_13 * xmm1_37 + xmm2_18 * xmm1_41
    float xmm7_5 = _mm_shuffle_ps(xmm1_16.o, xmm1_16.o, 0xaa)
    float xmm7_7 = __shufps_xmmps_memps_immb(data_59e430, data_59e430, 0xaa)
    arg3[2] = xmm2_15 f* var_a0:8.d + xmm1_21 f* xmm0_40:8.d + xmm3_13 * xmm7_5 + xmm2_18 * xmm7_7
    float xmm0_79[0x4] = xmm1_16.o
    float xmm7_9 = _mm_shuffle_ps(xmm0_79, xmm0_79, 0xff)
    arg3[3] = xmm2_15 * xmm1_18 + xmm1_21 * xmm7_1 + xmm3_13 * xmm7_9 + xmm2_18 * 1f
    arg3[4] = xmm0_50 f* var_a0.d + xmm3_17 f* xmm0_40.d + xmm6_6 * xmm1_16 + xmm5_7 * 0f
    arg3[5] = xmm0_50 f* var_a0:4.d + xmm3_17 f* xmm0_40:4.d + xmm6_6 * xmm1_37 + xmm5_7 * xmm1_41
    arg3[6] = xmm0_50 f* var_a0:8.d + xmm3_17 f* xmm0_40:8.d + xmm6_6 * xmm7_5 + xmm5_7 * xmm7_7
    float xmm5_9 = xmm0_40:8.d
    arg3[7] = xmm0_50 * xmm1_18 + xmm3_17 * xmm7_1 + xmm6_6 * xmm7_9 + xmm5_7 * 1f
    arg3[8] = xmm3_21 f* var_a0.d + xmm1_27 f* xmm0_40.d + xmm0_55 * xmm1_16 + xmm0_56 * 0f
    arg3[9] = xmm3_21 f* var_a0:4.d + xmm1_27 f* xmm0_40:4.d + xmm0_55 * xmm1_37 + xmm0_56 * xmm1_41
    arg3[0xa] = xmm3_21 f* var_a0:8.d + xmm1_27 * xmm5_9 + xmm0_55 * xmm7_5 + xmm0_56 * xmm7_7
    arg3[0xb] = xmm3_21 * xmm1_18 + xmm1_27 * xmm7_1 + xmm0_55 * xmm7_9 + xmm0_56 * 1f
    arg3[0xc] = var_a0.d * 0f + xmm0_40.d * 0f + xmm1_16 * 0f + 0f
    arg3[0xd] = var_a0:4.d * 0f + xmm0_40:4.d * 0f + xmm1_37 * 0f + xmm1_41
    arg3[0xe] = var_a0:8.d * 0f + xmm5_9 * 0f + xmm7_5 * 0f + xmm7_7
    arg3[0xf] = xmm1_18 * 0f + xmm7_1 * 0f + xmm7_9 * 0f + 1f
    return arg3
}
