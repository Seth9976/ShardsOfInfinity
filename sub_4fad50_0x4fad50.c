// 函数名称: sub_4fad50
// 虚拟地址: 0x4fad50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

double* __fastcallsub_4fad50(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm3 = *arg1
    float xmm2 = arg1[2]
    float xmm4 = arg1[1]
    float xmm5 = arg1[3]
    float xmm6_2 = xmm3 * xmm4 - xmm2 * xmm5
    float xmm5_2 = xmm5 * xmm3 + xmm2 * xmm4
    uint64_t xmm5_3[0x2] = xmm5_2 + xmm5_2
    int64_t xmm6_4 =
        _mm_unpacklo_ps(xmm6_2 + xmm6_2, xmm4 * xmm4 - xmm2 * xmm2 + xmm5 * xmm5 - xmm3 * xmm3)
    int64_t var_14 = xmm6_4
    int32_t var_c = xmm5_3
    void var_64
    int64_t* eax_4
    int32_t edx
    eax_4, edx = sub_452d30(&var_64, arg2, &var_14, &var_64)
    float eax_5 = eax_4[1].d
    var_14 = *eax_4
    float var_3c
    int64_t* eax_7
    int16_t x87control
    eax_7, x87control = sub_452d30(&var_3c, edx, &data_5718bc, &var_3c)
    int64_t xmm0_9 = *eax_7
    float xmm1_8[0x2] = xmm0_9.d f* var_14.d + xmm0_9:4.d f* var_14:4.d + eax_7[1].d f* eax_5
    int32_t xmm0_14
    
    if (not(xmm1_8 f< 1f))
        xmm0_14 = (zx.o(0)).d
    else
        int32_t mxcsr
        
        if (-1f f< xmm1_8)
            xmm0_14 = fconvert.s(__libm_sse2_acos_precise(mxcsr, x87control, _mm_cvtps_pd(xmm1_8), 
                xmm5_3, xmm6_4))
        else
            xmm0_14 = 0x40490fdb
    
    float xmm0_19 = *arg2 * -0.00300000003f * 0.5f
    float xmm0_20 = sub_4145d0(xmm0_19)
    float xmm1_10 = xmm0_20 * 0f
    float xmm0_22 = sub_4145b0(xmm0_19)
    float xmm2_3 = xmm0_14 f- arg2[1] f* -0.00300000003f
    float var_28 = 0.00999999978f
    
    if (not(0.00999999978f > xmm2_3))
        var_28 = _mm_min_ss(0x40486c04, xmm2_3)
    
    float xmm3_1 = *arg1
    float xmm4_1 = arg1[2]
    float xmm1_14 = arg1[3] f* xmm1_10
    float xmm2_5 = xmm4_1 * xmm1_10
    float xmm6_6 = xmm3_1 * xmm1_10
    float xmm5_5 = arg1[1] f* xmm1_10
    float xmm7_4 = xmm3_1 * xmm0_22 + xmm1_14 + xmm2_5 - xmm0_20 f* arg1[1]
    float xmm1_15 = arg1[3]
    float xmm3_4 = arg1[1] f* xmm0_22 + xmm1_14 + xmm0_20 * xmm3_1 - xmm2_5
    float xmm1_19 = xmm1_15 * xmm0_22 - xmm6_6 - xmm5_5 - xmm0_20 * xmm4_1
    float xmm2_10 = xmm4_1 * xmm0_22 + xmm0_20 * xmm1_15 + xmm5_5 - xmm6_6
    float xmm0_41 =
        sub_412d90(xmm1_19 * xmm1_19 + xmm7_4 * xmm7_4 + xmm3_4 * xmm3_4 + xmm2_10 * xmm2_10)
    float var_30 = xmm1_19 / xmm0_41
    var_3c = xmm7_4 / xmm0_41
    float var_38 = xmm3_4 / xmm0_41
    float var_34 = xmm2_10 / xmm0_41
    *arg1 = var_3c.o
    float xmm3_5 = arg1[3]
    float xmm5_6 = *arg1
    float xmm4_2 = arg1[2]
    float xmm2_11 = arg1[1]
    float xmm1_41 = xmm4_2 * xmm3_5 + xmm5_6 * xmm2_11
    float xmm1_45 = xmm4_2 * xmm5_6 - xmm3_5 * xmm2_11
    float xmm0_55 = (var_28 f- xmm0_14) * -0.5f
    float xmm0_56 = sub_4145d0(xmm0_55)
    float xmm1_48 = (xmm3_5 * xmm3_5 + xmm5_6 * xmm5_6 - xmm4_2 * xmm4_2 - xmm2_11 * xmm2_11) * xmm0_56
    float xmm1_50 = (xmm1_41 + xmm1_41) * xmm0_56
    float xmm1_52 = (xmm1_45 + xmm1_45) * xmm0_56
    double* result
    float xmm0_58
    result, xmm0_58 = sub_4145b0(xmm0_55)
    float xmm7_5 = arg1[1]
    float var_30_1 = arg1[3] f* xmm0_58 - *arg1 * xmm1_48 - xmm7_5 * xmm1_50 - arg1[2] f* xmm1_52
    float xmm2_17 = arg1[3]
    var_3c = *arg1 * xmm0_58 + xmm2_17 * xmm1_48 + arg1[2] f* xmm1_50 - xmm7_5 * xmm1_52
    float var_38_1 = xmm7_5 * xmm0_58 + xmm2_17 * xmm1_50 + *arg1 * xmm1_52 - arg1[2] f* xmm1_48
    float var_34_1 = arg1[2] f* xmm0_58 + xmm2_17 * xmm1_52 + xmm7_5 * xmm1_48 - *arg1 * xmm1_50
    *arg1 = var_3c.o
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
