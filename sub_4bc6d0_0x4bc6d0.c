// 函数名称: sub_4bc6d0
// 虚拟地址: 0x4bc6d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_4bc6d0(int32_t arg1, int32_t, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: float xmm0 = *arg3
    float xmm0 = *arg3
    float xmm0_1 = arg3[1]
    float xmm0_2 = arg3[2]
    float xmm0_3 = arg3[4]
    float xmm0_4 = arg3[5]
    float xmm0_5 = arg3[6]
    float xmm3 = arg3[0xf]
    float xmm7 = arg3[0xe]
    float xmm0_6 = arg3[8]
    float xmm4 = arg3[0xb]
    float xmm6 = arg3[0xa]
    float xmm0_7 = arg3[9]
    float xmm1 = arg3[7]
    float xmm0_8 = arg3[0xc]
    float xmm0_9 = arg3[0xd]
    float xmm2 = arg3[3]
    float xmm5_2 = xmm3 * xmm6 - xmm7 * xmm4
    float xmm6_3 = xmm3 * xmm0_5 - xmm7 * xmm1
    float xmm7_3 = xmm4 * xmm0_5 - xmm6 * xmm1
    float xmm3_2 = xmm3 * xmm0_2 - xmm7 * xmm2
    *arg4 = xmm5_2 * xmm0_4 - xmm6_3 * xmm0_7 + xmm7_3 * xmm0_9
    float xmm4_2 = xmm4 * xmm0_2 - xmm6 * xmm2
    float xmm2_3 = xmm1 * xmm0_2 - xmm0_5 * xmm2
    arg4[1] = (xmm5_2 * xmm0_1 - xmm3_2 * xmm0_7 + xmm4_2 * xmm0_9) ^ (data_59e5c0.o).d
    arg4[2] = xmm6_3 * xmm0_1 - xmm3_2 * xmm0_4 + xmm2_3 * xmm0_9
    arg4[3] = (xmm7_3 * xmm0_1 - xmm4_2 * xmm0_4 + xmm2_3 * xmm0_7) ^ (data_59e5c0.o).d
    arg4[4] = (xmm5_2 * xmm0_3 - xmm6_3 * xmm0_6 + xmm7_3 * xmm0_8) ^ (data_59e5c0.o).d
    arg4[5] = xmm5_2 * xmm0 - xmm3_2 * xmm0_6 + xmm4_2 * xmm0_8
    arg4[6] = (xmm6_3 * xmm0 - xmm3_2 * xmm0_3 + xmm2_3 * xmm0_8) ^ (data_59e5c0.o).d
    float xmm2_7 = xmm3 * xmm0_7 - xmm0_9 * xmm4
    arg4[7] = xmm7_3 * xmm0 - xmm4_2 * xmm0_3 + xmm2_3 * xmm0_6
    float xmm3_6 = xmm3 * xmm0_4 - xmm0_9 * xmm1
    float xmm4_6 = xmm4 * xmm0_4 - xmm0_7 * xmm1
    arg4[8] = xmm2_7 * xmm0_3 - xmm3_6 * xmm0_6 + xmm4_6 * xmm0_8
    float xmm5_8 = xmm3 * xmm0_1 - xmm0_9 * xmm2
    float xmm6_10 = xmm4 * xmm0_1 - xmm0_7 * xmm2
    float xmm7_9 = xmm1 * xmm0_1 - xmm0_4 * xmm2
    arg4[9] = (xmm2_7 * xmm0 - xmm5_8 * xmm0_6 + xmm6_10 * xmm0_8) ^ (data_59e5c0.o).d
    arg4[0xb] = (xmm4_6 * xmm0 - xmm6_10 * xmm0_3 + xmm7_9 * xmm0_6) ^ 0x80000000
    float xmm2_14 = xmm7 * xmm0_7 - xmm0_9 * xmm6
    arg4[0xa] = xmm3_6 * xmm0 - xmm5_8 * xmm0_3 + xmm7_9 * xmm0_8
    float xmm3_12 = xmm7 * xmm0_4 - xmm0_9 * xmm0_5
    float xmm4_13 = xmm6 * xmm0_4 - xmm0_7 * xmm0_5
    arg4[0xc] = (xmm2_14 * xmm0_3 - xmm3_12 * xmm0_6 + xmm4_13 * xmm0_8) ^ 0x80000000
    float xmm1_36 = xmm7 * xmm0_1 - xmm0_9 * xmm0_2
    float xmm6_16 = xmm6 * xmm0_1 - xmm0_7 * xmm0_2
    arg4[0xd] = xmm2_14 * xmm0 - xmm1_36 * xmm0_6 + xmm6_16 * xmm0_8
    float xmm2_20 = xmm0_5 * xmm0_1 - xmm0_4 * xmm0_2
    arg4[0xe] = (xmm3_12 * xmm0 - xmm1_36 * xmm0_3 + xmm2_20 * xmm0_8) ^ 0x80000000
    arg4[0xf] = xmm4_13 * xmm0 - xmm6_16 * xmm0_3 + xmm2_20 * xmm0_6
    return arg4
}
