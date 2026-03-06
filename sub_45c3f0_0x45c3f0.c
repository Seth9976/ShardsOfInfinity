// 函数名称: sub_45c3f0
// 虚拟地址: 0x45c3f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_45c3f0(int32_t arg1, int32_t, float* arg3, int128_t* arg4)
{
    // 第一条实际指令: float xmm4 = arg3[2]
    float xmm4 = arg3[2]
    float xmm6 = arg3[1]
    float xmm0_1 = xmm4 + xmm4
    float xmm5 = arg3[4]
    float xmm3_1 = xmm6 + xmm6
    float xmm5_1 = xmm5 + xmm5
    float xmm0_2 = arg3[3]
    float xmm1_1 = xmm0_1 * xmm4
    float xmm2_1 = xmm3_1 * xmm4
    float xmm7_2 = (xmm0_2 + xmm0_2) * xmm0_2
    float xmm1_3 = xmm5_1 * arg3[3]
    float xmm5_2 = xmm5_1 * xmm4
    float xmm4_2 = xmm3_1 * arg3[3]
    float xmm2_2 = 1f - xmm3_1 * xmm6
    float xmm3_3 = *arg3
    float xmm1_5 = (xmm1_3 + xmm2_1) * *arg3
    float var_4c = (xmm2_1 - xmm1_3) * *arg3
    float xmm1_7 = xmm5_1 * xmm6
    float var_48 = (xmm4_2 + xmm5_2) * *arg3
    int32_t var_44 = arg3[5]
    float xmm7_4 = xmm0_1 * arg3[3]
    float var_3c = (xmm2_2 - xmm7_2) * xmm3_3
    float var_28 = (xmm2_2 - xmm1_1) * xmm3_3
    float var_38 = (xmm7_4 - xmm1_7) * xmm3_3
    int32_t var_34 = arg3[6]
    int32_t var_24 = arg3[7]
    float var_2c = (xmm1_7 + xmm7_4) * xmm3_3
    int128_t xmm1_10 = data_59e430
    *arg4 = ((1f - xmm1_1 - xmm7_2) * *arg3).o
    arg4[1] = xmm1_5.o
    arg4[2] = ((xmm4_2 - xmm5_2) * xmm3_3).o
    arg4[3] = xmm1_10
    return arg4
}
