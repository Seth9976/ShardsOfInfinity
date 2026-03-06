// 函数名称: sub_4b3c80
// 虚拟地址: 0x4b3c80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b3c80(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: float xmm1 = arg3[2]
    float xmm1 = arg3[2]
    float xmm2 = *arg3
    float xmm3 = arg3[1]
    float xmm1_4 = (xmm1 + xmm1) * 3.14159274f * 0.00277777785f * 0.5f
    float xmm0_1 = sub_4145d0(xmm1_4)
    float xmm0_3 = sub_4145b0(xmm1_4)
    float xmm0_5 = (xmm2 + xmm2) * 3.14159274f * 0.00277777785f * 0.5f
    float xmm0_6 = sub_4145d0(xmm0_5)
    float xmm0_8 = sub_4145b0(xmm0_5)
    float xmm0_10 = (xmm3 + xmm3) * 3.14159274f * 0.00277777785f * 0.5f
    float xmm0_11 = sub_4145d0(xmm0_10)
    float xmm0_13 = sub_4145b0(xmm0_10)
    float xmm7_1 = xmm0_6 * xmm0_3
    float xmm6_1 = xmm0_8 * xmm0_1
    float xmm2_5 = xmm0_8 * xmm0_3
    float xmm4_1 = xmm0_6 * xmm0_1
    float var_18 = xmm6_1 * xmm0_13 - xmm7_1 * xmm0_11
    float var_1c = xmm2_5 * xmm0_11 + xmm4_1 * xmm0_13
    float var_14 = xmm2_5 * xmm0_13 + xmm4_1 * xmm0_11
    *arg4 = (xmm7_1 * xmm0_13 - xmm6_1 * xmm0_11).o
    return arg4
}
