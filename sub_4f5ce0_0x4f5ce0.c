// 函数名称: sub_4f5ce0
// 虚拟地址: 0x4f5ce0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4f5ce0(int32_t arg1, int32_t* arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    float xmm0 = arg3[6]
    float temp0 = arg2[6]
    xmm0 - temp0
    int32_t eax_1
    eax_1:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
        | (xmm0 < temp0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int64_t var_40
    int64_t var_38
    int32_t eax_2
    int128_t var_2c
    
    if (p_1)
    label_4f5eaa:
        int128_t* eax_3 = sub_4b75c0(&var_2c:4)
        float xmm0_27[0x4] = *eax_3
        int64_t xmm0_28 = eax_3[1].q
        int128_t* eax_4 = sub_4b75c0(&var_2c:4)
        float xmm1_6[0x4] = *eax_4
        int64_t xmm0_29 = eax_4[1].q
        float xmm2_8 = _mm_min_ss(xmm0_27[0], xmm1_6)
        float xmm4_5 = __maxss_xmmss_memss(xmm0_28:4.d, xmm0_29:4.d)
        float xmm5_5 = __maxss_xmmss_memss(xmm0_28.d, xmm0_29.d)
        float xmm7_11 =
            _mm_min_ss(_mm_shuffle_ps(xmm0_27, xmm0_27, 0x55), _mm_shuffle_ps(xmm1_6, xmm1_6, 0x55))
        int32_t xmm6_7 = _mm_shuffle_ps(xmm0_27, xmm0_27, 0xaa)
        int32_t xmm3_4 = _mm_shuffle_ps(xmm0_27, xmm0_27, 0xff)
        int32_t xmm0_33 = _mm_shuffle_ps(xmm1_6, xmm1_6, 0xaa)
        int32_t xmm1_7 = _mm_shuffle_ps(xmm1_6, xmm1_6, 0xff)
        float xmm6_8 = _mm_min_ss(xmm6_7, xmm0_33)
        float xmm3_5 = _mm_max_ss(xmm3_4, xmm1_7)
        var_40.d = (xmm4_5 + xmm6_8) * 0.5f
        eax_2 = var_40.d
        var_2c = data_5724f8
        var_38 = _mm_unpacklo_ps((xmm3_5 + xmm2_8) * 0.5f, (xmm7_11 + xmm5_5) * 0.5f)
        var_40.d = xmm4_5 - xmm6_8
        int64_t var_1c_1 = _mm_unpacklo_ps(xmm3_5 - xmm2_8, xmm5_5 - xmm7_11)
    else
        float xmm0_1 = arg3[3]
        float temp1_1 = arg2[3]
        xmm0_1 - temp1_1
        eax_1:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
            | (xmm0_1 < temp1_1 ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_4f5eaa
        
        float xmm0_2 = arg3[4]
        float temp2_1 = arg2[4]
        xmm0_2 - temp2_1
        eax_1:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2
            | (xmm0_2 < temp2_1 ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_4f5eaa
        
        float xmm0_3 = arg3[5]
        float temp3_1 = arg2[5]
        xmm0_3 - temp3_1
        eax_1:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2
            | (xmm0_3 < temp3_1 ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            goto label_4f5eaa
        
        float xmm0_6 = arg3[9] f* 0.5f * 0.5f
        float xmm6 = arg2[9]
        float xmm4_2 = arg2[7] f* 0.5f * 0.5f
        int96_t var_70
        var_70:8.q = arg3[7] f* 0.5f * 0.5f
        float xmm5_1 = arg2[8] f* 0.5f
        float xmm2_2 = arg3[8] f* 0.5f * 0.5f
        float xmm7_2 = _mm_min_ss(*arg3 f- var_70:8.d, *arg2 - xmm4_2)
        float xmm5_2 = xmm5_1 * 0.5f
        float xmm4_3 = xmm4_2 f+ *arg2
        float xmm6_2 = xmm6 * 0.5f * 0.5f
        float xmm5_3 = xmm5_2 f+ arg2[1]
        float var_54_1 = xmm2_2
        float xmm7_5 = _mm_min_ss(arg3[1] f- xmm2_2, arg2[1] f- xmm5_2)
        float xmm6_3 = xmm6_2 f+ arg2[2]
        float xmm7_8 = _mm_min_ss(arg3[2] f- xmm0_6, arg2[2] f- xmm6_2)
        var_70:8.q = _mm_max_ss(var_70:8.d f+ *arg3, xmm4_3)
        float xmm0_18 = _mm_max_ss(xmm2_2 f+ arg3[1], xmm5_3)
        float xmm0_21 = _mm_max_ss(xmm0_6 f+ arg3[2], xmm6_3)
        var_40.d = (xmm0_21 + xmm7_8) * 0.5f
        eax_2 = var_40.d
        var_38 = _mm_unpacklo_ps((var_70:8.d + xmm7_2) * 0.5f, (xmm7_5 + xmm0_18) * 0.5f)
        var_2c = *(arg3 + 0xc)
        int64_t var_1c = _mm_unpacklo_ps(var_70:8.d - xmm7_2, xmm0_18 - xmm7_5)
        var_40.d = xmm0_21 - xmm7_8
    int32_t var_30 = eax_2
    int64_t var_18
    var_18:4.d = var_40.d
    *arg4 = var_38.o
    int128_t var_28
    arg4[1] = var_28
    arg4[2].q = var_18
    @__security_check_cookie@4(var_c ^ &__saved_ebp)
    return arg4
}
