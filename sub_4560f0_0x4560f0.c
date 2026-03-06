// 函数名称: sub_4560f0
// 虚拟地址: 0x4560f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4560f0(int32_t arg1, int32_t* arg2, int128_t* arg3)
{
    // 第一条实际指令: void var_e8
    void var_e8
    int32_t eax_1 = __security_cookie ^ &var_e8
    float var_b8
    float* ecx
    sub_4b7260(ecx, &var_b8)
    float xmm1 = *arg2
    float xmm4 = var_b8
    float xmm6 = arg2[3]
    float xmm7 = arg2[7]
    float var_a8
    float xmm0_9 = var_a8 f* arg2[1]
    float var_b4
    float var_b0
    float xmm4_4 = xmm4 f* arg2[8] + var_b4 f* arg2[9] + var_b0 f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_5 = _mm_unpacklo_ps(xmm1 * xmm4 + var_b4 f* arg2[1] + var_b0 f* arg2[2] + xmm6, 
        xmm4 f* arg2[4] + var_b4 f* arg2[5] + var_b0 f* arg2[6] + xmm7)
    var_b8.q = xmm5_5
    float var_ac
    float var_a4
    float xmm4_9 = var_ac f* arg2[8] + var_a8 f* arg2[9] + var_a4 f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_11 = _mm_unpacklo_ps(xmm1 * var_ac + xmm0_9 + var_a4 f* arg2[2] + xmm6, 
        var_ac f* arg2[4] + var_a8 f* arg2[5] + var_a4 f* arg2[6] + xmm7)
    var_ac.q = xmm5_11
    float var_90
    float xmm0_25 = var_90 f* arg2[1]
    float var_a0
    float var_9c
    float var_98
    float xmm4_14 = var_a0 f* arg2[8] + var_9c f* arg2[9] + var_98 f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_17 = _mm_unpacklo_ps(var_9c f* arg2[1] + xmm1 * var_a0 + var_98 f* arg2[2] + xmm6, 
        var_a0 f* arg2[4] + var_9c f* arg2[5] + var_98 f* arg2[6] + xmm7)
    var_a0.q = xmm5_17
    float var_84
    float xmm0_33 = var_84 f* arg2[1]
    float var_94
    float var_8c
    float xmm4_19 = var_94 f* arg2[8] + var_90 f* arg2[9] + var_8c f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_23 = _mm_unpacklo_ps(var_94 * xmm1 + xmm0_25 + var_8c f* arg2[2] + xmm6, 
        var_94 f* arg2[4] + var_90 f* arg2[5] + var_8c f* arg2[6] + xmm7)
    var_94.q = xmm5_23
    float var_88
    float xmm4_22 = var_88 f* arg2[8] + var_84 f* arg2[9]
    float var_80
    float xmm2_9 = var_80 f* arg2[0xa]
    int64_t xmm5_29 = _mm_unpacklo_ps(var_88 * xmm1 + xmm0_33 + var_80 f* arg2[2] + xmm6, 
        var_88 f* arg2[4] + var_84 f* arg2[5] + var_80 f* arg2[6] + xmm7)
    var_88.q = xmm5_29
    float xmm4_24 = xmm4_22 + xmm2_9 f+ arg2[0xb]
    float var_6c
    float xmm0_49 = var_6c f* arg2[1]
    float var_7c
    float var_78
    float var_74
    float xmm4_29 = var_7c f* arg2[8] + var_78 f* arg2[9] + var_74 f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_35 = _mm_unpacklo_ps(var_7c * xmm1 + var_78 f* arg2[1] + var_74 f* arg2[2] + xmm6, 
        var_7c f* arg2[4] + var_78 f* arg2[5] + var_74 f* arg2[6] + xmm7)
    var_7c.q = xmm5_35
    float var_60
    float xmm0_57 = var_60 f* arg2[1]
    float var_70
    float var_68
    float xmm4_34 = var_70 f* arg2[8] + var_6c f* arg2[9] + var_68 f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_41 = _mm_unpacklo_ps(var_70 * xmm1 + xmm0_49 + var_68 f* arg2[2] + xmm6, 
        var_70 f* arg2[4] + var_6c f* arg2[5] + var_68 f* arg2[6] + xmm7)
    var_70.q = xmm5_41
    float xmm3_15 = xmm4_19 - xmm4_9
    float var_64
    float var_5c
    float xmm4_39 = var_64 * xmm1 + xmm0_57 + var_5c f* arg2[2] + xmm6
    float xmm6_2 = var_b8 - var_ac
    float xmm2_17 = var_90 - var_a8
    float xmm1_39 = var_b4 - var_a8
    int64_t xmm4_44 = var_64 f* arg2[4] + var_60 f* arg2[5] + var_5c f* arg2[6] + xmm7
    float xmm7_2 = var_94 - var_ac
    float xmm5_46 = var_64 f* arg2[8] + var_60 f* arg2[9] + var_5c f* arg2[0xa] f+ arg2[0xb]
    var_64.q = _mm_unpacklo_ps(xmm4_39, xmm4_44)
    float var_c0 = xmm4_44
    float xmm5_48 = xmm4_4 - xmm4_9
    float var_5c_1 = xmm5_46
    float xmm4_47 = xmm1_39 * xmm3_15 - xmm5_48 * xmm2_17
    float xmm5_50 = xmm5_48 * xmm7_2 - xmm6_2 * xmm3_15
    float xmm6_4 = xmm6_2 * xmm2_17 - xmm1_39 * xmm7_2
    float xmm1_43 = arg2[9] f* xmm5_50 + arg2[8] f* xmm4_47
    int64_t xmm3_20 = _mm_unpacklo_ps(xmm1 * xmm4_47 + xmm5_50 f* arg2[1] + xmm6_4 f* arg2[2], 
        arg2[5] f* xmm5_50 + arg2[4] f* xmm4_47 + xmm6_4 f* arg2[6])
    float xmm0_81 = arg2[0xa] f* xmm6_4
    int64_t var_58 = xmm3_20
    float xmm5_52 = xmm4_29 - xmm4_24
    float xmm1_46 = var_78 - var_84
    float xmm3_22 = var_6c - var_84
    float xmm2_23 = xmm4_34 - xmm4_24
    float xmm7_4 = var_7c - var_88
    float xmm6_6 = var_70 - var_88
    float var_50 = xmm1_43 + xmm0_81
    float xmm4_50 = xmm1_46 * xmm2_23 - xmm5_52 * xmm3_22
    float xmm5_54 = xmm5_52 * xmm6_6 - xmm7_4 * xmm2_23
    float xmm7_6 = xmm7_4 * xmm3_22 - xmm1_46 * xmm6_6
    float xmm6_8 = var_b8 - var_a0
    float xmm5_56 = xmm4_4 - xmm4_14
    float xmm1_50 = arg2[9] f* xmm5_54 + arg2[8] f* xmm4_50
    int64_t xmm3_27 = _mm_unpacklo_ps(xmm1 * xmm4_50 + xmm5_54 f* arg2[1] + xmm7_6 f* arg2[2], 
        arg2[5] f* xmm5_54 + arg2[4] f* xmm4_50 + xmm7_6 f* arg2[6])
    float xmm2_29 = xmm4_34 - xmm4_14
    float xmm7_8 = var_70 - var_a0
    int64_t var_4c = xmm3_27
    float xmm3_29 = var_6c - var_9c
    float xmm1_53 = var_b4 - var_9c
    float var_44 = xmm1_50 + arg2[0xa] f* xmm7_6
    float xmm4_53 = xmm1_53 * xmm2_29 - xmm5_56 * xmm3_29
    float xmm6_10 = xmm6_8 * xmm3_29 - xmm1_53 * xmm7_8
    float xmm5_58 = xmm5_56 * xmm7_8 - xmm6_8 * xmm2_29
    float xmm1_57 = arg2[9] f* xmm5_58 + arg2[8] f* xmm4_53
    int64_t xmm3_34 = _mm_unpacklo_ps(xmm1 * xmm4_53 + xmm5_58 f* arg2[1] + xmm6_10 f* arg2[2], 
        arg2[5] f* xmm5_58 + arg2[4] f* xmm4_53 + xmm6_10 f* arg2[6])
    float xmm2_35 = var_78 - var_a8
    int64_t var_40 = xmm3_34
    float xmm3_36 = var_7c - var_ac
    float xmm1_60 = xmm4_29 - xmm4_9
    float var_38 = xmm1_57 + arg2[0xa] f* xmm6_10
    float xmm4_56 = xmm2_17 * xmm1_60 - xmm3_15 * xmm2_35
    float xmm6_13 = xmm3_15 * xmm3_36 - xmm7_2 * xmm1_60
    float xmm7_11 = xmm7_2 * xmm2_35 - xmm2_17 * xmm3_36
    float xmm1_63 = arg2[9] f* xmm6_13 + arg2[8] f* xmm4_56
    int64_t xmm3_41 = _mm_unpacklo_ps(xmm1 * xmm4_56 + xmm6_13 f* arg2[1] + xmm7_11 f* arg2[2], 
        arg2[5] f* xmm6_13 + arg2[4] f* xmm4_56 + xmm7_11 f* arg2[6])
    float xmm2_41 = var_84 - var_b4
    int64_t var_34 = xmm3_41
    float xmm3_43 = var_88 - var_b8
    float var_2c = xmm1_63 + arg2[0xa] f* xmm7_11
    float xmm6_15 = xmm4_9 - xmm4_4
    float xmm5_62 = var_a8 - var_b4
    float xmm1_66 = xmm4_24 - xmm4_4
    float xmm7_13 = var_ac - var_b8
    float xmm4_59 = xmm5_62 * xmm1_66 - xmm6_15 * xmm2_41
    float xmm6_17 = xmm6_15 * xmm3_43 - xmm7_13 * xmm1_66
    float xmm7_15 = xmm7_13 * xmm2_41 - xmm5_62 * xmm3_43
    float xmm5_65 = var_c0 - var_90
    float xmm6_19 = xmm5_46 - xmm4_19
    float xmm4_61 = var_a0 - var_94
    float xmm1_69 = arg2[9] f* xmm6_17 + arg2[8] f* xmm4_59
    int64_t xmm3_48 = _mm_unpacklo_ps(xmm1 * xmm4_59 + xmm6_17 f* arg2[1] + xmm7_15 f* arg2[2], 
        arg2[5] f* xmm6_17 + arg2[4] f* xmm4_59 + xmm7_15 f* arg2[6])
    float xmm2_47 = var_9c - var_90
    float xmm7_17 = xmm4_39 - var_94
    int64_t var_28 = xmm3_48
    float xmm3_50 = xmm4_14 - xmm4_19
    float var_20 = xmm1_69 + arg2[0xa] f* xmm7_15
    float xmm1_73 = xmm2_47 * xmm6_19 - xmm3_50 * xmm5_65
    float xmm3_52 = xmm3_50 * xmm7_17 - xmm4_61 * xmm6_19
    float xmm4_63 = xmm4_61 * xmm5_65 - xmm2_47 * xmm7_17
    float xmm2_51 = arg2[9] f* xmm3_52 + arg2[8] f* xmm1_73
    int64_t xmm6_24 = _mm_unpacklo_ps(xmm1 * xmm1_73 + xmm3_52 f* arg2[1] + xmm4_63 f* arg2[2], 
        arg2[5] f* xmm3_52 + arg2[4] f* xmm1_73 + xmm4_63 f* arg2[6])
    int64_t var_1c = xmm6_24
    float xmm2_52 = xmm2_51 + arg2[0xa] f* xmm4_63
    float var_14 = xmm2_52
    uint32_t result = sub_454e70(xmm2_52, &var_58, &var_b8, arg3)
    @__security_check_cookie@4(eax_1 ^ &var_e8)
    return result
}
