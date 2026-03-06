// 函数名称: sub_412bf0
// 虚拟地址: 0x412bf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_412bf0(int32_t arg1, int32_t* arg2, int128_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: float xmm4 = arg2[1]
    float xmm4 = arg2[1]
    float xmm2 = *arg2
    float xmm3 = arg2[2]
    float xmm7 = arg4[5]
    float xmm5 = arg4[2]
    float xmm6 = arg4[8]
    float xmm4_1 = arg2[4]
    float var_24 = arg4[1] f* xmm2 + arg4[4] f* xmm4 + arg4[7] f* xmm3
    float xmm2_1 = arg2[3]
    float xmm3_1 = arg2[5]
    float var_20 = xmm5 * xmm2 + xmm7 * xmm4 + xmm6 * xmm3
    float var_1c = xmm2_1 f* *arg4 + xmm4_1 f* arg4[3] + xmm3_1 f* arg4[6]
    float xmm2_3 = arg2[8]
    float xmm1_19 = xmm2_1 f* arg4[1] + xmm4_1 f* arg4[4] + xmm3_1 f* arg4[7]
    float xmm3_3 = arg2[7]
    float var_14 = xmm4_1 * xmm7 + xmm2_1 * xmm5 + xmm3_1 * xmm6
    float xmm4_5 = arg2[6]
    float var_10 = xmm4_5 f* *arg4 + xmm3_3 f* arg4[3] + xmm2_3 f* arg4[6]
    float var_c = xmm3_3 f* arg4[4] + xmm4_5 f* arg4[1] + xmm2_3 f* arg4[7]
    *arg3 = (*arg4 * xmm2 + arg4[3] f* xmm4 + arg4[6] f* xmm3).o
    float result = xmm4_5 * xmm5 + xmm3_3 * xmm7 + xmm2_3 * xmm6
    arg3[1] = xmm1_19.o
    arg3[2].d = result
    return result
}
