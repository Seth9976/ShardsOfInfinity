// 函数名称: sub_4b7bf0
// 虚拟地址: 0x4b7bf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_4b7bf0(int128_t* arg1)
{
    // 第一条实际指令: void var_d0
    void var_d0
    int32_t eax_1 = __security_cookie ^ &var_d0
    void var_60
    int128_t* ecx
    int32_t edx
    int128_t* eax_3 = sub_4b8340(&var_60, edx, ecx, &var_60)
    float xmm3[0x4] = *eax_3
    int32_t eax_4 = *(eax_3 + 0x18)
    int64_t xmm0 = eax_3[1].q
    float xmm6_1 = _mm_shuffle_ps(xmm3, xmm3, 0x55)
    float xmm5_1 = _mm_shuffle_ps(xmm3, xmm3, 0xaa)
    float xmm0_2 = xmm6_1 * 2f
    float xmm2_1 = xmm0_2 * xmm6_1
    float xmm7_2 = xmm5_1 * 2f * xmm5_1
    float xmm4_1 = xmm3[0] * 2f
    float xmm2_3 = xmm4_1 * xmm6_1
    float xmm3_2 = _mm_shuffle_ps(xmm3, *eax_3, 0xff) * 2f
    float xmm1_1 = xmm3_2 * xmm5_1
    float xmm5_3 = xmm4_1 * xmm5_1
    float xmm3_3 = xmm3_2 * xmm6_1
    int32_t xmm6_2 = (*eax_3).d
    float var_bc = xmm2_3 - xmm1_1
    float var_b8 = xmm3_3 + xmm5_3
    float xmm2_4 = 1f - xmm4_1 f* xmm6_2
    float xmm4_4 = xmm0_2 * xmm5_1
    int32_t var_b4 = xmm0.d
    float xmm1_4 = xmm3_2 f* xmm6_2
    float var_98 = xmm2_4 - xmm2_1
    float var_ac = xmm2_4 - xmm7_2
    float var_a8 = xmm4_4 - xmm1_4
    int32_t var_a4 = xmm0:4.d
    int32_t var_94 = eax_4
    float var_9c = xmm1_4 + xmm4_4
    int128_t xmm1_6 = data_59e430
    *arg1 = (1f - xmm2_1 - xmm7_2).o
    arg1[1] = (xmm1_1 + xmm2_3).o
    arg1[2] = (xmm5_3 - xmm3_3).o
    arg1[3] = xmm1_6
    @__security_check_cookie@4(eax_1 ^ &var_d0)
    return arg1
}
