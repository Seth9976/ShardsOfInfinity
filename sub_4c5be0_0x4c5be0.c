// 函数名称: sub_4c5be0
// 虚拟地址: 0x4c5be0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4c5be0(int32_t arg1, int64_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_38 = 0x3f800000
    int128_t xmm0 = *(arg2 + 0xc)
    int32_t var_1c = arg2[1].d
    int64_t var_24 = *arg2
    int128_t var_60 = var_38.o
    int128_t var_50 = xmm0
    void var_e0
    int128_t* eax_5 = sub_4a02b0(&var_e0, arg3, &var_60, &var_e0)
    var_38.o = *eax_5
    int128_t var_34 = eax_5[1]
    float var_80[0x4]
    int64_t* eax_7 = sub_49fd50(&var_80, arg3, &var_38, &var_80)
    int32_t xmm6 = (eax_5[1]).d
    float xmm4[0x4] = *eax_5
    var_34:4.q = *eax_7
    float xmm0_7 = xmm6 f* xmm6
    var_34:0xc.d = eax_7[1].d
    float xmm2_1 = _mm_shuffle_ps(xmm4, xmm4, 0xaa)
    float xmm3_1[0x4] = _mm_shuffle_ps(xmm4, xmm4, 0x55)
    float xmm1_1 = xmm3_1[0]
    float xmm4_1[0x4] = _mm_shuffle_ps(xmm4, xmm4, 0xff)
    float xmm0_9 = xmm2_1 * xmm2_1
    float xmm7 = xmm4_1[0]
    float xmm1_2 = xmm1_1 f* xmm3_1
    float xmm0_11 = xmm4_1[0] f* xmm4_1
    float xmm0_13 = xmm2_1 f* xmm3_1
    float var_c0[0x4] = xmm3_1
    float xmm3_2 = arg3[4]
    var_80 = xmm4_1
    float xmm7_1 = xmm7 f* xmm6
    float xmm4_3 = xmm3_2 + xmm3_2
    float xmm5_1 = xmm2_1 f* xmm6
    float xmm6_1 = arg3[5]
    float xmm4_5 = var_80[0] * var_c0[0]
    float xmm2_3 = xmm6_1 + xmm6_1
    int64_t xmm1_8 = (xmm1_2 + xmm0_7 - xmm0_9 - xmm0_11) f* arg3[3] + (xmm0_13 - xmm7_1) * xmm4_3
        + (xmm4_5 + xmm5_1) * xmm2_3
    float xmm0_19 = arg3[3]
    float xmm0_20 = xmm0_19 + xmm0_19
    float xmm1_10 = xmm0_7 - xmm1_2
    int32_t xmm0_21 = var_c0.d
    var_80 = var_80.d * xmm2_1
    var_c0 = xmm0_21 f* (eax_5[1]).d
    int32_t xmm3_3 = var_c0.d
    float xmm7_4 = var_80.d
    float xmm4_8 = *(arg2 + 0x24)
    float xmm6_2 = *(arg2 + 0x1c)
    int64_t xmm0_32 = _mm_unpacklo_ps(zx.o(xmm1_8), 
        (xmm1_10 + xmm0_9 - xmm0_11) * xmm3_2 + (xmm7_1 + xmm0_13) * xmm0_20
            + (xmm7_4 f- xmm3_3) * xmm2_3)
    var_80[2] = (xmm3_3 f+ xmm7_4) * xmm4_3 + (xmm4_5 - xmm5_1) * xmm0_20
        + (xmm1_10 - xmm0_9 + xmm0_11) * xmm6_1
    float eax_9 = var_80[2]
    float xmm3_8 = arg2[4].d
    var_c0 = var_34
    float var_1c_1 = eax_9
    int64_t var_b0 = xmm0_32
    float xmm4_9 = xmm4_8 * 0.5f
    float xmm6_3 = xmm6_2 * 0.5f
    float xmm3_9 = xmm3_8 * 0.5f
    float xmm0_36 = xmm4_9 + 0f
    int64_t xmm7_7 = _mm_unpacklo_ps(xmm6_3 + 0f, xmm3_9 + 0f)
    var_80[2] = 0f - xmm4_9
    var_34:0xc.d = var_80[2]
    var_34:4.q = _mm_unpacklo_ps(0f - xmm6_3, 0f - xmm3_9)
    float var_1c_2 = xmm0_36
    var_60 = var_34
    float var_50_2
    var_50_2:8.q = xmm7_7
    int32_t* result = sub_4c5ef0(xmm0_36, &var_60:8, &var_c0, arg4)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
