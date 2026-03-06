// 函数名称: sub_47f2c0
// 虚拟地址: 0x47f2c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_47f2c0(int32_t arg1, int32_t, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: float xmm3 = arg3[1]
    float xmm3 = arg3[1]
    float xmm6 = *arg3
    float xmm0_1 = xmm3 + xmm3
    float xmm4 = arg3[3]
    float xmm5_1 = xmm6 + xmm6
    int32_t var_44 = 0
    float xmm4_1 = xmm4 + xmm4
    int32_t var_34 = 0
    int32_t var_14 = 0x3f800000
    float xmm0_2 = arg3[2]
    float xmm1_1 = xmm0_1 * xmm3
    float xmm2_1 = xmm5_1 * xmm3
    float xmm7_2 = (xmm0_2 + xmm0_2) * xmm0_2
    float xmm1_3 = xmm4_1 f* arg3[2]
    float xmm4_2 = xmm4_1 * xmm3
    float xmm3_2 = xmm5_1 f* arg3[2]
    float xmm2_2 = 1f - xmm5_1 * xmm6
    float xmm5_4 = xmm0_1 f* arg3[2]
    float var_4c = xmm2_1 - xmm1_3
    float xmm1_6 = xmm4_1 * xmm6
    float var_48 = xmm3_2 + xmm4_2
    float var_28 = xmm2_2 - xmm1_1
    float var_3c = xmm2_2 - xmm7_2
    float var_38 = xmm5_4 - xmm1_6
    float var_2c = xmm1_6 + xmm5_4
    *arg4 = (1f - xmm1_1 - xmm7_2).o
    arg4[1] = (xmm1_3 + xmm2_1).o
    arg4[2] = (xmm3_2 - xmm4_2).o
    arg4[3] = zx.o(0)
    return arg4
}
