// 函数名称: sub_4b76e0
// 虚拟地址: 0x4b76e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_4b76e0(int32_t arg1, int32_t* arg2, float* arg3, int128_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    float xmm4 = *arg2
    float xmm3 = arg2[1]
    float xmm1 = arg2[2]
    float xmm7 = arg2[3]
    float xmm6_1 = xmm4 * xmm3
    float result = arg2[6]
    float xmm2_1 = xmm1 * xmm7
    float xmm5_1 = xmm3 * xmm3
    float xmm0_1 = xmm6_1 - xmm2_1
    float xmm2_3 = xmm1 * xmm1
    float xmm1_2 = xmm7 * xmm7
    float xmm0_2 = xmm0_1 + xmm0_1
    float xmm6_3 = xmm4 * xmm4
    float xmm0_6 = xmm5_1 - xmm2_3 + xmm1_2 - xmm6_3
    float xmm0_8 = xmm1 * xmm3
    float xmm7_1 = xmm7 * xmm3
    float xmm3_2 = xmm1 * xmm4
    float xmm0_10 = xmm7 * xmm4
    float xmm3_3 = xmm3_2 + xmm7_1
    float xmm4_2 = xmm3_2 - xmm7_1
    float xmm6_5 = xmm0_10 + xmm0_8
    float xmm3_4 = xmm3_3 + xmm3_3
    float xmm4_3 = xmm4_2 + xmm4_2
    float xmm6_6 = xmm6_5 + xmm6_5
    float xmm3_6 = xmm0_8 - xmm0_10
    float xmm3_7 = xmm3_6 + xmm3_6
    float xmm0_14 = xmm2_3 - xmm5_1 - xmm6_3 + xmm1_2
    float xmm3_11 = xmm6_3 + xmm1_2 - xmm2_3 - xmm5_1
    float xmm0_16 = xmm2_1 + xmm6_1
    float xmm0_17 = xmm0_16 + xmm0_16
    int64_t xmm0_18 = *(arg2 + 0x10)
    float xmm0_19 = arg3[4]
    float var_2c = xmm0_6
    float var_28 = xmm6_6
    float xmm6_8 = xmm0_2 ^ 0x80000000
    float xmm4_5 = xmm0_6 ^ 0x80000000
    float xmm5_4 = xmm6_6 ^ 0x80000000
    int32_t var_24 = ((xmm0_6 * xmm0_19 f+ xmm0_18:4.d) * xmm0_6
        + (xmm0_19 * xmm0_2 f+ xmm0_18.d) * xmm0_2 + (xmm6_6 * xmm0_19 + result) * xmm6_6) ^ 0x80000000
    *arg4 = xmm0_2.o
    float xmm0_21 = arg3[5]
    float var_2c_1 = xmm4_5
    float var_28_1 = xmm5_4
    int32_t var_24_1 = ((xmm0_21 * xmm0_6 f+ xmm0_18:4.d) * xmm4_5
        + (xmm0_21 * xmm0_2 f+ xmm0_18.d) * xmm6_8 + (xmm6_6 * xmm0_21 + result) * xmm5_4)
        ^ (data_59e5c0.o).d
    arg4[5] = xmm6_8.o
    float xmm0_23 = *arg3
    float xmm3_28 = xmm4_3 * xmm0_23 + xmm6_6
    float xmm0_24 = arg3[2]
    float xmm0_25 = arg3[1]
    float xmm4_8 = xmm3_11 * xmm0_23 + xmm0_2
    float xmm1_13 = xmm0_17 * xmm0_23 + xmm0_6
    float xmm2_14 = xmm3_4 * xmm0_25 + xmm0_2
    float xmm7_5 = xmm3_11 * xmm0_24 + xmm0_2
    float xmm6_11 = xmm0_17 * xmm0_24 + xmm0_6
    float xmm5_7 = xmm4_3 * xmm0_24 + xmm6_6
    float xmm2_17 = xmm3_7 * xmm0_25 + xmm0_6
    float xmm0_26 = arg3[3]
    float xmm2_20 = xmm0_14 * xmm0_25 + xmm6_6
    float xmm2_23 = xmm3_4 * xmm0_26 + xmm0_2
    float xmm2_26 = xmm3_7 * xmm0_26 + xmm0_6
    float xmm2_29 = xmm0_14 * xmm0_26 + xmm6_6
    float xmm2_32 = xmm1_13 * xmm0_14 - xmm3_28 * xmm3_7
    float xmm3_30 = xmm3_28 * xmm3_4 - xmm4_8 * xmm0_14
    float xmm4_10 = xmm4_8 * xmm3_7 - xmm1_13 * xmm3_4
    float var_28_2 = xmm4_10
    float var_2c_2 = xmm3_30
    float xmm2_34 = xmm0_14 ^ 0x80000000
    float xmm3_32 = xmm3_4 ^ 0x80000000
    int32_t var_24_2 = (xmm0_18:4.d * xmm3_30 + xmm0_18.d * xmm2_32 + result * xmm4_10) ^ 0x80000000
    arg4[1] = xmm2_32.o
    float xmm0_37 = xmm3_7 ^ 0x80000000
    float xmm1_22 = xmm2_34 * xmm6_11 - xmm0_37 * xmm5_7
    float xmm0_41 = xmm3_32 * xmm5_7 - xmm2_34 * xmm7_5
    float xmm2_37 = xmm3_11 ^ 0x80000000
    float xmm5_10 = xmm0_37 * xmm7_5 - xmm3_32 * xmm6_11
    float var_2c_3 = xmm0_41
    float var_28_3 = xmm5_10
    float xmm1_25 = xmm4_3 ^ 0x80000000
    int32_t var_24_3 = (xmm0_41 f* xmm0_18:4.d + xmm1_22 f* xmm0_18.d + xmm5_10 * result) ^ 0x80000000
    float xmm4_12 = xmm0_17 ^ 0x80000000
    arg4[2] = xmm1_22.o
    float xmm3_36 = xmm1_25 * xmm2_26 - xmm4_12 * xmm2_29
    float xmm0_51 = xmm2_37 * xmm2_29 - xmm1_25 * xmm2_23
    float var_2c_4 = xmm0_51
    float xmm4_14 = xmm4_12 * xmm2_23 - xmm2_37 * xmm2_26
    float var_28_4 = xmm4_14
    int32_t var_24_4 = (xmm0_51 f* xmm0_18:4.d + xmm3_36 f* xmm0_18.d + xmm4_14 * result) ^ 0x80000000
    arg4[3] = xmm3_36.o
    float xmm1_29 = xmm2_17 * xmm4_3 - xmm2_20 * xmm0_17
    float xmm3_40 = xmm2_20 * xmm3_11 - xmm2_14 * xmm4_3
    float xmm4_18 = xmm2_14 * xmm0_17 - xmm2_17 * xmm3_11
    float var_2c_5 = xmm3_40
    float var_28_5 = xmm4_18
    int32_t var_24_5 = (xmm3_40 f* xmm0_18:4.d + xmm1_29 f* xmm0_18.d + xmm4_18 * result) ^ 0x80000000
    arg4[4] = xmm1_29.o
    return result
}
