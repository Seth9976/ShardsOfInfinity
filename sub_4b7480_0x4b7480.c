// 函数名称: sub_4b7480
// 虚拟地址: 0x4b7480
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_4b7480(int32_t arg1, int32_t* arg2, int32_t* arg3, int64_t* arg4)
{
    // 第一条实际指令: float var_14
    float var_14
    int64_t* eax_1 = sub_49fd50(&var_14, arg3, arg2, &var_14)
    float xmm7 = arg3[3]
    float xmm6 = arg2[1]
    float xmm1_1 = xmm7 f* arg2[4]
    float xmm3 = arg3[5]
    *arg4 = *eax_1
    float xmm4 = arg2[2]
    float xmm2 = arg2[3]
    float xmm5 = arg3[4]
    arg4[1].d = eax_1[1].d
    float xmm0_8 = xmm4 f* arg3[6]
    var_14 = xmm1_1 + xmm6 f* arg3[6] + xmm3 * xmm4 - xmm2 * xmm5
    float var_10 = xmm5 f* arg2[4] + xmm0_8 + xmm2 * xmm7 - xmm3 * xmm6
    float var_c = xmm3 f* arg2[4] + xmm2 f* arg3[6] + xmm5 * xmm6 - xmm4 * xmm7
    float xmm2_2 = *arg2
    float var_8 = arg2[4] f* arg3[6] - xmm6 * xmm7 - xmm4 * xmm5 - xmm2 * xmm3
    int128_t xmm0_24 = var_14.o
    int64_t xmm3_3 = _mm_unpacklo_ps(arg3[7] f* xmm2_2, arg3[8] f* xmm2_2)
    *(arg4 + 0xc) = xmm0_24
    float xmm0_26 = arg3[9] f* xmm2_2
    *(arg4 + 0x1c) = xmm3_3
    *(arg4 + 0x24) = xmm0_26
    return arg4
}
