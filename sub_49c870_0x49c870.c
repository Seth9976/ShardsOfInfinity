// 函数名称: sub_49c870
// 虚拟地址: 0x49c870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_49c870(int32_t arg1, float* arg2, int64_t* arg3, float* arg4, float* arg5, float* arg6, float arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm6_1 = arg5[1] - arg4[1]
    float xmm5_1 = arg5[2] - arg4[2]
    float xmm2 = arg5[4]
    float xmm3 = arg5[5]
    float xmm7_1 = *arg5 - *arg4
    float xmm1 = arg5[3]
    float var_20 = xmm1 * xmm6_1 - xmm2 * xmm7_1
    int64_t var_28 = _mm_unpacklo_ps(xmm2 * xmm5_1 - xmm3 * xmm6_1, xmm3 * xmm7_1 - xmm1 * xmm5_1)
    void var_4c
    int64_t* eax_4
    int32_t edx
    eax_4, edx = sub_452d30(&var_4c, arg2, &var_28, &var_4c)
    float xmm2_2 = arg4[4]
    float xmm3_3 = arg4[5]
    float xmm1_3 = arg4[3]
    int64_t var_3c = *eax_4
    float var_34_1 = eax_4[1].d
    float var_20_1 = xmm1_3 * xmm6_1 - xmm2_2 * xmm7_1
    var_28 = _mm_unpacklo_ps(xmm2_2 * xmm5_1 - xmm3_3 * xmm6_1, xmm3_3 * xmm7_1 - xmm1_3 * xmm5_1)
    int64_t* eax_8
    int32_t edx_1
    eax_8, edx_1 = sub_452d30(&var_4c, edx, &var_28, &var_4c)
    float eax_9 = eax_8[1].d
    var_28 = *eax_8
    float var_20_2 = eax_9
    int64_t var_1c
    
    if (arg2 != 0)
        float xmm6_3 = arg4[1] - arg2[1]
        float xmm2_5 = arg4[2] - arg2[2]
        float xmm3_6 = arg4[4]
        float xmm4_8 = arg4[5]
        float xmm7_3 = *arg4 - *arg2
        float xmm1_6 = arg4[3]
        float var_14_2 = xmm1_6 * xmm6_3 - xmm3_6 * xmm7_3
        var_1c = _mm_unpacklo_ps(xmm3_6 * xmm2_5 - xmm4_8 * xmm6_3, xmm4_8 * xmm7_3 - xmm1_6 * xmm2_5)
        int64_t* eax_12
        int32_t edx_2
        eax_12, edx_2 = sub_452d30(&var_4c, edx_1, &var_1c, &var_4c)
        float xmm1_10 = eax_12[1].d f- var_34_1
        var_1c = *eax_12
        float var_14_4 = xmm1_10 * 0.5f + var_34_1
        var_1c = _mm_unpacklo_ps((var_1c.d f- var_3c.d) * 0.5f f+ var_3c.d, 
            (var_1c:4.d f- var_3c:4.d) * 0.5f f+ var_3c:4.d)
        int64_t* eax_16
        eax_16, edx_1 = sub_452d30(&var_4c, edx_2, &var_1c, &var_4c)
        var_3c = *eax_16
        var_34_1 = eax_16[1].d
    
    if (arg6 != 0)
        float xmm6_5 = arg6[1] - arg5[1]
        float xmm2_11 = arg6[2] - arg5[2]
        float xmm3_13 = arg5[4]
        float xmm4_11 = arg5[5]
        float xmm7_5 = *arg6 - *arg5
        float xmm1_13 = arg5[3]
        float var_14_5 = xmm1_13 * xmm6_5 - xmm3_13 * xmm7_5
        var_1c =
            _mm_unpacklo_ps(xmm3_13 * xmm2_11 - xmm4_11 * xmm6_5, xmm4_11 * xmm7_5 - xmm1_13 * xmm2_11)
        int64_t* eax_21
        int32_t edx_3
        eax_21, edx_3 = sub_452d30(&var_4c, edx_1, &var_1c, &var_4c)
        float xmm1_17 = eax_21[1].d f- var_20_2
        var_1c = *eax_21
        float var_14_7 = xmm1_17 * 0.5f + var_20_2
        var_1c = _mm_unpacklo_ps((var_1c.d f- var_28.d) * 0.5f f+ var_28.d, 
            (var_1c:4.d f- var_28:4.d) * 0.5f f+ var_28:4.d)
        int64_t* eax_25 = sub_452d30(&var_4c, edx_3, &var_1c, &var_4c)
        float eax_26 = eax_25[1].d
        var_28 = *eax_25
        var_20_2 = eax_26
    
    float xmm0_22 = arg4[6]
    float xmm5_11 = var_3c.d
    float xmm6_6 = var_3c:4.d
    var_1c = (*arg5 - *arg4) * arg7 + *arg4
    float xmm2_23 = (arg5[1] - arg4[1]) * arg7 + arg4[1]
    float xmm2_27 = (arg5[2] - arg4[2]) * arg7 + arg4[2]
    int64_t xmm2_30 =
        _mm_unpacklo_ps(var_1c.d - xmm5_11 * xmm0_22 * 0.5f, xmm2_23 - xmm6_6 * xmm0_22 * 0.5f)
    float xmm1_26 = var_1c.d
    *(arg3 + 0xc) = xmm2_30
    *(arg3 + 0x14) = xmm2_27 - var_34_1 * xmm0_22 * 0.5f
    float xmm0_25 = arg4[6]
    float xmm5_14 = var_28:4.d
    float xmm7_9 = var_28.d
    *(arg3 + 0x24) =
        _mm_unpacklo_ps(xmm1_26 + xmm5_11 * xmm0_25 * 0.5f, xmm2_23 + xmm6_6 * xmm0_25 * 0.5f)
    *(arg3 + 0x2c) = xmm2_27 + var_34_1 * xmm0_25 * 0.5f
    float xmm0_28 = arg5[6]
    float xmm0_30 = arg5[2] - var_20_2 * xmm0_28 * 0.5f
    *arg3 = _mm_unpacklo_ps(*arg5 - xmm7_9 * xmm0_28 * 0.5f, arg5[1] - xmm5_14 * xmm0_28 * 0.5f)
    arg3[1].d = xmm0_30
    float xmm0_31 = arg5[6]
    float result = var_20_2 * xmm0_31 * 0.5f + arg5[2]
    arg3[3] = _mm_unpacklo_ps(*arg5 + xmm7_9 * xmm0_31 * 0.5f, arg5[1] + xmm5_14 * xmm0_31 * 0.5f)
    arg3[4].d = result
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
