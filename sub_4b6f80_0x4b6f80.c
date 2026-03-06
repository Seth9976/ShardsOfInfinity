// 函数名称: sub_4b6f80
// 虚拟地址: 0x4b6f80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b6f80(int32_t arg1, int32_t, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: float xmm3 = arg3[1]
    float xmm3 = arg3[1]
    float xmm6 = arg3[2]
    float xmm0_1 = xmm3 + xmm3
    float xmm5 = *arg3
    float xmm4 = arg3[3]
    float xmm5_1 = xmm5 + xmm5
    float xmm7 = arg3[8]
    float xmm4_1 = xmm4 + xmm4
    float xmm2_1 = xmm0_1 * xmm3
    float xmm1_2 = (xmm6 + xmm6) * xmm6
    float xmm2_3 = xmm5_1 * xmm3
    float xmm1_4 = xmm4_1 * xmm6
    float xmm4_2 = xmm4_1 * xmm3
    float xmm3_2 = xmm5_1 * xmm6
    float xmm6_1 = arg3[9]
    float xmm2_5 = xmm4_1 f* *arg3
    float xmm1_6 = (xmm1_4 + xmm2_3) f* arg3[7]
    float var_4c = (xmm2_3 - xmm1_4) * xmm7
    int128_t xmm1_7 = data_59e430
    float xmm3_4 = (xmm3_2 - xmm4_2) f* arg3[7]
    float var_48 = (xmm3_2 + xmm4_2) * xmm6_1
    int32_t var_44 = arg3[4]
    float xmm0_12 = 1f - xmm5_1 f* *arg3
    float var_3c = (xmm0_12 - xmm1_2) * xmm7
    float xmm0_16 = xmm0_1 f* arg3[2]
    float var_28 = (xmm0_12 - xmm2_1) * xmm6_1
    float var_38 = (xmm0_16 - xmm2_5) * xmm6_1
    int32_t var_34 = arg3[5]
    int32_t var_24 = arg3[6]
    float var_2c = (xmm2_5 + xmm0_16) * xmm7
    *arg4 = ((1f - xmm2_1 - xmm1_2) f* arg3[7]).o
    arg4[1] = xmm1_6.o
    arg4[2] = xmm3_4.o
    arg4[3] = xmm1_7
    return arg4
}
