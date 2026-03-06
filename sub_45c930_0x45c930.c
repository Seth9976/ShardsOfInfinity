// 函数名称: sub_45c930
// 虚拟地址: 0x45c930
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_45c930(int32_t arg1, int32_t* arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: float xmm5 = arg3[1]
    float xmm5 = arg3[1]
    float xmm4 = *arg3
    float xmm3 = arg3[2]
    float xmm2 = arg3[3]
    float xmm6 = arg2[3]
    float xmm7 = arg2[0xb]
    float xmm0_7 = arg2[5] f* xmm5
    *arg4 = *arg2 * xmm4 + arg2[4] f* xmm5 + xmm3 f* arg2[8] + xmm2 f* arg2[0xc]
    float xmm0_13 = arg2[6] f* xmm5
    arg4[1] = arg2[1] f* xmm4 + xmm0_7 + arg2[9] f* xmm3 + arg2[0xd] f* xmm2
    float xmm0_19 = arg2[7] f* xmm5
    float xmm5_1 = arg3[4]
    arg4[2] = arg2[2] f* xmm4 + xmm0_13 + arg2[0xa] f* xmm3 + arg2[0xe] f* xmm2
    float xmm4_1 = arg3[7]
    float xmm3_1 = arg3[5]
    float xmm2_1 = arg3[6]
    float xmm0_25 = xmm3_1 f* arg2[4]
    arg4[3] = xmm6 * xmm4 + xmm0_19 + xmm7 * xmm3 + arg2[0xf] f* xmm2
    float xmm0_31 = xmm3_1 f* arg2[5]
    arg4[4] = xmm5_1 f* *arg2 + xmm0_25 + xmm2_1 f* arg2[8] + xmm4_1 f* arg2[0xc]
    float xmm0_37 = xmm3_1 f* arg2[6]
    float xmm3_2 = xmm3_1 f* arg2[7]
    arg4[5] = xmm5_1 f* arg2[1] + xmm0_31 + xmm2_1 f* arg2[9] + xmm4_1 f* arg2[0xd]
    float xmm3_3 = arg3[9]
    float xmm2_3 = arg3[0xa]
    float xmm0_43 = xmm3_3 f* arg2[4]
    float xmm5_5 = xmm5_1 * xmm6 + xmm3_2 + xmm2_1 * xmm7 + xmm4_1 f* arg2[0xf]
    float xmm4_3 = arg3[0xb]
    arg4[6] = xmm5_1 f* arg2[2] + xmm0_37 + xmm2_1 f* arg2[0xa] + xmm4_1 f* arg2[0xe]
    arg4[7] = xmm5_5
    float xmm5_6 = arg3[8]
    float xmm0_49 = xmm3_3 f* arg2[5]
    arg4[8] = xmm5_6 f* *arg2 + xmm0_43 + xmm2_3 f* arg2[8] + xmm4_3 f* arg2[0xc]
    float xmm0_55 = xmm3_3 f* arg2[6]
    float xmm3_4 = xmm3_3 f* arg2[7]
    arg4[9] = xmm5_6 f* arg2[1] + xmm0_49 + xmm2_3 f* arg2[9] + xmm4_3 f* arg2[0xd]
    float xmm3_5 = arg3[0xd]
    float xmm2_5 = arg3[0xe]
    float xmm0_61 = xmm3_5 f* arg2[4]
    float xmm5_10 = xmm5_6 * xmm6 + xmm3_4 + xmm2_3 * xmm7 + xmm4_3 f* arg2[0xf]
    float xmm4_5 = arg3[0xf]
    arg4[0xa] = xmm5_6 f* arg2[2] + xmm0_55 + xmm2_3 f* arg2[0xa] + xmm4_3 f* arg2[0xe]
    arg4[0xb] = xmm5_10
    float xmm5_11 = arg3[0xc]
    float xmm0_67 = xmm3_5 f* arg2[5]
    arg4[0xc] = xmm5_11 f* *arg2 + xmm0_61 + xmm2_5 f* arg2[8] + xmm4_5 f* arg2[0xc]
    float xmm0_73 = xmm3_5 f* arg2[6]
    float xmm3_6 = xmm3_5 f* arg2[7]
    arg4[0xd] = xmm5_11 f* arg2[1] + xmm0_67 + xmm2_5 f* arg2[9] + xmm4_5 f* arg2[0xd]
    float xmm5_15 = xmm5_11 * xmm6 + xmm3_6 + xmm2_5 * xmm7 + xmm4_5 f* arg2[0xf]
    arg4[0xe] = xmm5_11 f* arg2[2] + xmm0_73 + xmm2_5 f* arg2[0xa] + xmm4_5 f* arg2[0xe]
    arg4[0xf] = xmm5_15
    return arg4
}
