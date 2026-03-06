// 函数名称: sub_49fbe0
// 虚拟地址: 0x49fbe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_49fbe0(int32_t arg1, int32_t* arg2, int32_t* arg3, int128_t* arg4, float* arg5)
{
    // 第一条实际指令: float xmm3 = arg2[1]
    float xmm3 = arg2[1]
    float xmm6 = arg2[2]
    float xmm0_1 = xmm3 + xmm3
    float xmm5 = *arg2
    float xmm5_1 = xmm5 + xmm5
    float xmm4 = arg2[3]
    float xmm4_1 = xmm4 + xmm4
    float xmm2_1 = xmm0_1 * xmm3
    float xmm7 = arg5[1]
    float xmm1_2 = (xmm6 + xmm6) * xmm6
    float xmm2_3 = xmm5_1 * xmm3
    float xmm1_4 = xmm4_1 * xmm6
    float xmm4_2 = xmm4_1 * xmm3
    float xmm3_2 = xmm5_1 * xmm6
    float xmm6_1 = arg5[2]
    float xmm2_5 = xmm4_1 f* *arg2
    float xmm1_6 = (xmm1_4 + xmm2_3) * *arg5
    float var_50 = (xmm2_3 - xmm1_4) * xmm7
    int128_t xmm1_7 = data_59e430
    float xmm3_4 = (xmm3_2 - xmm4_2) * *arg5
    float var_4c = (xmm3_2 + xmm4_2) * xmm6_1
    int32_t var_48 = *arg3
    float xmm0_12 = 1f - xmm5_1 f* *arg2
    float var_40 = (xmm0_12 - xmm1_2) * xmm7
    float xmm0_16 = xmm0_1 f* arg2[2]
    float var_2c = (xmm0_12 - xmm2_1) * xmm6_1
    float var_3c = (xmm0_16 - xmm2_5) * xmm6_1
    int32_t var_38 = arg3[1]
    int32_t var_28 = arg3[2]
    float var_30 = (xmm2_5 + xmm0_16) * xmm7
    *arg4 = ((1f - xmm2_1 - xmm1_2) * *arg5).o
    arg4[1] = xmm1_6.o
    arg4[2] = xmm3_4.o
    arg4[3] = xmm1_7
    return arg4
}
