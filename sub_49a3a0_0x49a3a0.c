// 函数名称: sub_49a3a0
// 虚拟地址: 0x49a3a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __fastcallsub_49a3a0(int32_t* arg1, float* arg2)
{
    // 第一条实际指令: float xmm5 = arg1[1]
    float xmm5 = arg1[1]
    float xmm3 = *arg1
    float xmm4 = arg1[2]
    float xmm4_1 = xmm4 * arg2[0xa]
    float xmm1_2 = arg2[8] * xmm3 + arg2[9] * xmm5
    int64_t xmm6_5 = _mm_unpacklo_ps(xmm3 * *arg2 + xmm5 * arg2[1] + xmm4 * arg2[2] + arg2[3], 
        xmm3 * arg2[4] + xmm5 * arg2[5] + xmm4 * arg2[6] + arg2[7])
    float xmm1_4 = xmm1_2 + xmm4_1 + arg2[0xb]
    *arg1 = xmm6_5
    arg1[2] = xmm1_4
    float xmm3_1 = arg1[4]
    float xmm4_2 = arg1[3]
    float xmm5_1 = arg1[5]
    float xmm5_2 = xmm5_1 * arg2[0xa]
    float xmm1_7 = arg2[9] * xmm3_1 + arg2[8] * xmm4_2
    int64_t xmm6_11 = _mm_unpacklo_ps(xmm3_1 * arg2[1] + xmm4_2 * *arg2 + xmm5_1 * arg2[2] + arg2[3], 
        xmm3_1 * arg2[5] + xmm4_2 * arg2[4] + xmm5_1 * arg2[6] + arg2[7])
    float xmm1_9 = xmm1_7 + xmm5_2 + arg2[0xb]
    *(arg1 + 0xc) = xmm6_11
    arg1[5] = xmm1_9
    float xmm3_2 = arg1[7]
    float xmm4_3 = arg1[6]
    float xmm5_3 = arg1[8]
    float xmm5_4 = xmm5_3 * arg2[0xa]
    float xmm1_12 = arg2[9] * xmm3_2 + arg2[8] * xmm4_3
    int64_t xmm6_17 = _mm_unpacklo_ps(xmm3_2 * arg2[1] + xmm4_3 * *arg2 + xmm5_3 * arg2[2] + arg2[3], 
        xmm3_2 * arg2[5] + xmm4_3 * arg2[4] + xmm5_3 * arg2[6] + arg2[7])
    float xmm1_14 = xmm1_12 + xmm5_4 + arg2[0xb]
    *(arg1 + 0x18) = xmm6_17
    arg1[8] = xmm1_14
    float xmm3_3 = arg1[0xa]
    float xmm4_4 = arg1[9]
    float xmm5_5 = arg1[0xb]
    float xmm5_6 = xmm5_5 * arg2[0xa]
    float xmm1_17 = arg2[9] * xmm3_3 + arg2[8] * xmm4_4
    int64_t xmm6_23 = _mm_unpacklo_ps(xmm3_3 * arg2[1] + xmm4_4 * *arg2 + xmm5_5 * arg2[2] + arg2[3], 
        xmm3_3 * arg2[5] + xmm4_4 * arg2[4] + xmm5_5 * arg2[6] + arg2[7])
    float result = xmm1_17 + xmm5_6 + arg2[0xb]
    *(arg1 + 0x24) = xmm6_23
    arg1[0xb] = result
    return result
}
