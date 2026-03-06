// 函数名称: sub_455000
// 虚拟地址: 0x455000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_455000(int128_t* arg1, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_b0
    void* edx = &var_b0
    sub_459e70(sub_45c730(arg1, edx), edx, arg2, 8)
    int64_t xmm0 = 0
    float xmm6 = arg2[4]
    float xmm3 = arg2[2]
    int64_t xmm0_1 = 0x3f800000
    float xmm4 = arg2[3]
    float xmm5 = arg2[1]
    int64_t xmm0_2 = 0x3f80000000000000
    float xmm0_4 = xmm6 * xmm6
    float xmm1_1 = xmm3 * xmm5
    float xmm7 = -0f + -0f
    float xmm0_6 = xmm3 * xmm3
    float xmm2_1 = xmm5 * xmm5
    float var_24 = 0f
    float xmm0_8 = xmm4 * xmm4
    float xmm5_2 = xmm4 * xmm6
    float var_c = 0f
    float xmm3_1 = xmm3 * xmm6
    float xmm6_2 = xmm4 * arg2[1]
    float xmm0_10 = xmm1_1 - xmm5_2
    float xmm5_3 = xmm5_2 + xmm1_1
    float xmm4_2 = xmm6_2 + xmm3_1
    float xmm1_3 = arg2[3] * arg2[2]
    float xmm3_2 = -1f + -1f
    float xmm0_11 = xmm0_10 * xmm7
    float xmm7_4 = xmm2_1 + xmm0_4 - xmm0_6 - xmm0_8
    float xmm0_15 = xmm0_4 - xmm2_1
    float xmm0_17 = xmm0_15 + xmm0_6 - xmm0_8
    float xmm5_5 = xmm0_17 * -0f
    float xmm4_4 = arg2[1] * arg2[4]
    float xmm0_19 = xmm1_3 - xmm4_4
    float xmm4_5 = xmm4_4 + xmm1_3
    float xmm5_7 = xmm6_2 - xmm3_1
    float xmm4_6 = xmm4_5 * xmm7
    float xmm0_23 = xmm0_15 - xmm0_6 + xmm0_8
    float xmm4_7 = xmm0.d
    float xmm4_8 = xmm4_7 + xmm4_7
    int64_t var_50 = _mm_unpacklo_ps(xmm7_4 * -0f + xmm0_11 + xmm4_2 * xmm3_2, 
        xmm5_3 * xmm7 + xmm5_5 + xmm0_19 * xmm3_2)
    float xmm3_8 = 1f + 1f
    float xmm1_8 = xmm0:4.d
    float xmm5_9 = xmm1_8 + xmm1_8
    float var_48 = xmm5_7 * xmm7 + xmm4_6 + xmm0_23 * -1f
    int64_t var_44_1 = _mm_unpacklo_ps(xmm7_4 * xmm4_7 + xmm0_10 * xmm5_9 + xmm4_2 * xmm3_8, 
        xmm0_17 * xmm1_8 + xmm5_3 * xmm4_8 + xmm0_19 * xmm3_8)
    float var_3c = xmm5_7 * xmm4_8 + xmm4_5 * xmm5_9 + xmm0_23 * 1f
    int64_t var_38 = _mm_unpacklo_ps(xmm7_4 * -1f + xmm0_11 + xmm4_2 * xmm7, 
        xmm5_3 * xmm3_2 + xmm5_5 + xmm0_19 * xmm7)
    float xmm0_42 = xmm0_1:4.d
    float xmm3_10 = xmm0_42 + xmm0_42
    float xmm1_18 = var_24 + var_24
    float var_30 = xmm5_7 * xmm3_2 + xmm4_6 + -0f * xmm0_23
    float xmm2_17 = xmm0_1.d
    float xmm2_18 = xmm2_17 + xmm2_17
    float xmm5_13 = arg2[1] * arg2[4]
    float xmm6_8 = arg2[3] * arg2[2]
    float xmm3_11 = arg2[2]
    int64_t xmm0_57 = _mm_unpacklo_ps(zx.o(xmm0_10 * xmm3_10 + xmm7_4 * xmm2_17 + xmm4_2 * xmm1_18), 
        xmm0_17 * xmm0_42 + xmm5_3 * xmm2_18 + (xmm6_8 - xmm5_13) * xmm1_18)
    float xmm5_18 = arg2[1]
    int64_t var_2c_1 = xmm0_57
    float xmm1_20 = xmm5_18 * xmm5_18
    float xmm7_16 = arg2[4]
    float xmm0_59 = xmm7_16 * xmm7_16
    float var_24_1 = (xmm5_13 + xmm6_8) * xmm3_10 + (xmm6_2 - xmm3_1) * xmm2_18
        + (xmm0_15 - xmm0_6 + xmm0_8) * var_24
    float xmm4_15 = xmm3_11 * xmm5_18
    float xmm0_61 = xmm3_11 * xmm3_11
    float xmm0_62 = arg2[3]
    float xmm2_20 = xmm0_62 * xmm0_62
    float xmm2_22 = xmm0_62 * xmm7_16
    float xmm6_10 = xmm0_62 * arg2[1]
    float xmm5_20 = xmm3_11 * xmm7_16
    float xmm0_75 = xmm0_59 - xmm1_20
    float xmm1_26 = arg2[1] * xmm7_16
    float xmm0_77 = arg2[3] * xmm3_11
    float xmm7_17 = arg2[2]
    float xmm4_17 = arg2[1]
    float xmm2_28 = arg2[3]
    int64_t xmm0_85 = _mm_unpacklo_ps(
        zx.o((xmm1_20 + xmm0_59 - xmm0_61 - xmm2_20) * -0f + (xmm4_15 - xmm2_22) * xmm3_2
            + (xmm6_10 + xmm5_20) * xmm7), 
        (xmm0_75 + xmm0_61 - xmm2_20) * -1f + (xmm2_22 + xmm4_15) * xmm7 + (xmm0_77 - xmm1_26) * xmm7)
    int64_t var_20 = xmm0_85
    float xmm0_87 = xmm7_16 * xmm7_16
    float xmm0_89 = xmm7_17 * xmm7_17
    float var_18 =
        (xmm6_10 - xmm5_20) * xmm7 + (xmm1_26 + xmm0_77) * xmm3_2 + (xmm0_75 - xmm0_61 + xmm2_20) * -0f
    float xmm1_34 = xmm4_17 * xmm4_17
    float xmm0_91 = xmm2_28 * xmm2_28
    float xmm6_16 = xmm2_28 * xmm7_16
    float xmm0_93 = xmm7_17 * xmm4_17
    float xmm4_18 = xmm0_2:4.d
    float xmm2_30 = xmm4_18 + xmm4_18
    float xmm5_22 = xmm7_17 * xmm7_16
    float xmm2_32 = arg2[3] * arg2[1]
    float xmm3_14 = var_c + var_c
    float xmm2_38 = xmm0_2.d
    float xmm2_39 = xmm2_38 + xmm2_38
    float xmm0_100 = xmm0_87 - xmm1_34
    float xmm1_41 = arg2[1] * arg2[4]
    float xmm0_102 = arg2[3] * xmm7_17
    float xmm0_109 = (xmm2_32 - xmm5_22) * xmm2_39 + (xmm1_41 + xmm0_102) * xmm2_30
        + (xmm0_100 - xmm0_89 + xmm0_91) * var_c
    int64_t xmm0_111 = _mm_unpacklo_ps(
        zx.o((xmm1_34 + xmm0_87 - xmm0_89 - xmm0_91) * xmm2_38 + (xmm0_93 - xmm6_16) * xmm2_30
            + (xmm2_32 + xmm5_22) * xmm3_14), 
        (xmm0_100 + xmm0_89 - xmm0_91) * xmm4_18 + (xmm6_16 + xmm0_93) * xmm2_39
        + (xmm0_102 - xmm1_41) * xmm3_14)
    int64_t var_14_1 = xmm0_111
    float var_c_1 = xmm0_109
    uint32_t result = sub_454e70(xmm0_109, &var_50, &var_b0, 0x571990)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
