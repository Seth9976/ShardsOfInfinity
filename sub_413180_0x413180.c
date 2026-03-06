// 函数名称: sub_413180
// 虚拟地址: 0x413180
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_413180(int32_t arg1, int32_t* arg2, float* arg3, int128_t* arg4)
{
    // 第一条实际指令: void var_3c
    void var_3c
    int32_t eax_1 = __security_cookie ^ &var_3c
    float xmm6 = *arg3
    float xmm0_3 = xmm6 f* arg2[2]
    float xmm6_1 = xmm6 f* arg2[1]
    int64_t var_20 = arg2[2] f* arg3[1] - arg2[1] f* arg3[2]
    float xmm1_3 = *arg2
    float xmm6_2 = xmm6_1 - xmm1_3 * arg3[1]
    int32_t xmm1_5 = var_20.d
    float xmm7_2 = xmm1_3 * arg3[2] - xmm0_3
    float xmm1_10 =
        1f / (sub_412d90(xmm1_5 f* xmm1_5 + xmm7_2 * xmm7_2 + xmm6_2 * xmm6_2) + 9.99999975e-06f)
    float var_18 = xmm6_2 * xmm1_10
    var_20 = _mm_unpacklo_ps(var_20.d * xmm1_10, xmm7_2 * xmm1_10)
    void var_30
    *arg4 = *sub_413000(&var_30, 0x571898, 0x5718a4, &var_30, arg3, &var_20)
    @__security_check_cookie@4(eax_1 ^ &var_3c)
    return arg4
}
