// 函数名称: sub_4558c0
// 虚拟地址: 0x4558c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4558c0(int32_t arg1, int32_t* arg2, int128_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_70
    int128_t* ecx
    sub_45c730(ecx, &var_70)
    float xmm2 = var_70
    float xmm7 = arg2[3]
    float var_6c
    float xmm1_2 = arg2[8] f* xmm2 + arg2[9] f* var_6c
    float var_68
    float xmm0_11 = arg2[0xa] f* var_68
    int64_t xmm6_5 = _mm_unpacklo_ps(arg2[1] f* var_6c + *arg2 * xmm2 + arg2[2] f* var_68 + xmm7, 
        arg2[4] f* xmm2 + arg2[5] f* var_6c + arg2[6] f* var_68 f+ arg2[7])
    var_70.q = xmm6_5
    float var_68_1 = xmm1_2 + xmm0_11 f+ arg2[0xb]
    float var_64
    float var_60
    float xmm1_7 = arg2[8] f* var_64 + arg2[9] f* var_60
    float var_5c
    float xmm0_23 = arg2[0xa] f* var_5c
    int64_t xmm6_11 = _mm_unpacklo_ps(arg2[1] f* var_60 + *arg2 * var_64 + arg2[2] f* var_5c + xmm7, 
        arg2[4] f* var_64 + arg2[5] f* var_60 + arg2[6] f* var_5c f+ arg2[7])
    var_64.q = xmm6_11
    float var_5c_1 = xmm1_7 + xmm0_23 f+ arg2[0xb]
    float xmm2_3 = arg2[5]
    float xmm5_3 = *arg2
    float var_58
    float var_54
    float var_50
    float xmm1_13 = arg2[8] f* var_58 + arg2[9] f* var_54 + arg2[0xa] f* var_50
    int64_t xmm6_17 = _mm_unpacklo_ps(arg2[1] f* var_54 + *arg2 * var_58 + arg2[2] f* var_50 + xmm7, 
        arg2[4] f* var_58 + arg2[5] f* var_54 + arg2[6] f* var_50 f+ arg2[7])
    var_58.q = xmm6_17
    float xmm6_18 = arg2[7]
    float var_50_1 = xmm1_13 f+ arg2[0xb]
    float var_40
    float xmm1_17 = var_40 f* arg2[4]
    float var_4c
    float var_48
    float var_44
    float xmm0_47 = arg2[9] f* var_48 + var_4c f* arg2[8] + var_44 f* arg2[0xa]
    int64_t xmm5_8 = _mm_unpacklo_ps(xmm5_3 * var_4c + arg2[1] f* var_48 + var_44 f* arg2[2] + xmm7, 
        xmm2_3 * var_48 + var_4c f* arg2[4] + var_44 f* arg2[6] + xmm6_18)
    var_4c.q = xmm5_8
    float var_44_1 = xmm0_47 f+ arg2[0xb]
    float var_30
    float xmm0_58 = var_30 f* arg2[1]
    float var_3c
    float var_38
    float xmm4_21 = var_40 f* arg2[8] + var_3c f* arg2[9] + var_38 f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_14 = _mm_unpacklo_ps(*arg2 * var_40 + var_3c f* arg2[1] + var_38 f* arg2[2] + xmm7, 
        xmm1_17 + var_3c f* arg2[5] + var_38 f* arg2[6] + xmm6_18)
    var_40.q = xmm5_14
    float var_38_1 = xmm4_21
    float var_24
    float xmm0_66 = var_24 f* arg2[1]
    float var_34
    float var_2c
    float xmm4_26 = var_34 f* arg2[8] + var_30 f* arg2[9] + var_2c f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_20 = _mm_unpacklo_ps(*arg2 * var_34 + xmm0_58 + var_2c f* arg2[2] + xmm7, 
        var_34 f* arg2[4] + var_30 f* arg2[5] + var_2c f* arg2[6] + xmm6_18)
    var_34.q = xmm5_20
    float var_2c_1 = xmm4_26
    float var_28
    float var_20
    float xmm4_31 = var_28 f* arg2[8] + var_24 f* arg2[9] + var_20 f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_26 = _mm_unpacklo_ps(*arg2 * var_28 + xmm0_66 + var_20 f* arg2[2] + xmm7, 
        var_28 f* arg2[4] + var_24 f* arg2[5] + var_20 f* arg2[6] + xmm6_18)
    var_28.q = xmm5_26
    float var_20_1 = xmm4_31
    float xmm7_1 = arg2[4]
    float xmm6_19 = arg2[1]
    float var_1c
    float var_18
    float var_14
    float xmm4_36 = var_1c f* arg2[8] + var_18 f* arg2[9] + var_14 f* arg2[0xa] f+ arg2[0xb]
    int64_t xmm5_32 = _mm_unpacklo_ps(*arg2 * var_1c + var_18 f* arg2[1] + var_14 f* arg2[2] + xmm7, 
        var_1c * xmm7_1 + var_18 f* arg2[5] + var_14 f* arg2[6] + xmm6_18)
    var_1c.q = xmm5_32
    float var_b8
    float xmm4_37 = var_b8
    float var_14_1 = xmm4_36
    float var_b4
    float var_b0
    float xmm4_40 = xmm4_37 f* arg2[8] + var_b4 f* arg2[9] + var_b0 f* arg2[0xa]
    var_b8.q = _mm_unpacklo_ps(*arg2 * xmm4_37 + var_b4 * xmm6_19 + var_b0 f* arg2[2], 
        xmm4_37 * xmm7_1 + var_b4 f* arg2[5] + var_b0 f* arg2[6])
    float var_b0_1 = xmm4_40
    float var_a4
    float xmm2_19 = var_a4 f* arg2[0xa]
    float xmm0_97 = *arg2
    float var_ac
    float var_a8
    float xmm4_43 = var_ac f* arg2[8] + var_a8 f* arg2[9]
    var_ac.q = _mm_unpacklo_ps(*arg2 * var_ac + var_a8 * xmm6_19 + var_a4 f* arg2[2], 
        var_ac * xmm7_1 + var_a8 f* arg2[5] + var_a4 f* arg2[6])
    float var_a4_1 = xmm4_43 + xmm2_19
    float xmm0_105 = *arg2
    float var_a0
    float var_9c
    float var_98
    float xmm4_48 = var_a0 f* arg2[8] + var_9c f* arg2[9] + var_98 f* arg2[0xa]
    var_a0.q = _mm_unpacklo_ps(var_9c * xmm6_19 + xmm0_97 * var_a0 + var_98 f* arg2[2], 
        var_a0 * xmm7_1 + var_9c f* arg2[5] + var_98 f* arg2[6])
    float var_98_1 = xmm4_48
    float xmm0_113 = *arg2
    float var_94
    float var_90
    float var_8c
    float xmm4_52 = var_94 f* arg2[8] + var_90 f* arg2[9] + var_8c f* arg2[0xa]
    var_94.q = _mm_unpacklo_ps(var_90 * xmm6_19 + xmm0_105 * var_94 + var_8c f* arg2[2], 
        var_94 * xmm7_1 + var_90 f* arg2[5] + var_8c f* arg2[6])
    float var_8c_1 = xmm4_52
    float xmm0_121 = *arg2
    float var_88
    float var_84
    float var_80
    float xmm4_56 = var_88 f* arg2[8] + var_84 f* arg2[9] + var_80 f* arg2[0xa]
    var_88.q = _mm_unpacklo_ps(var_84 * xmm6_19 + xmm0_113 * var_88 + var_80 f* arg2[2], 
        var_88 * xmm7_1 + var_84 f* arg2[5] + var_80 f* arg2[6])
    float var_80_1 = xmm4_56
    float var_7c
    float var_78
    float var_74
    float xmm4_60 = var_7c f* arg2[8] + var_78 f* arg2[9] + var_74 f* arg2[0xa]
    var_7c.q = _mm_unpacklo_ps(var_78 * xmm6_19 + xmm0_121 * var_7c + var_74 f* arg2[2], 
        var_7c * xmm7_1 + var_78 f* arg2[5] + var_74 f* arg2[6])
    float var_74_1 = xmm4_60
    uint32_t result = sub_454e70(xmm4_60, &var_b8, &var_70, arg3)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
