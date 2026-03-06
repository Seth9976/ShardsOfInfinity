// 函数名称: sub_4bcb60
// 虚拟地址: 0x4bcb60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4bcb60(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    float xmm1 = arg3[7]
    float xmm2 = arg3[1]
    float xmm0 = arg3[0xe]
    float xmm0_1 = arg3[0xb]
    float xmm0_2 = arg3[5]
    float xmm2_1 = xmm2 * xmm1
    float xmm6 = arg3[6]
    float xmm7 = arg3[2]
    float xmm3_1 = xmm2 * xmm6
    float xmm5 = arg3[5]
    float xmm3_3 = xmm7 * xmm1
    float xmm5_1 = xmm5 f* arg3[3]
    float xmm6_1 = xmm6 f* arg3[3]
    float xmm4_1 = xmm5 * xmm7
    float xmm2_7 = xmm0_2 f* arg3[0xa] f* arg3[0xf] - xmm0_2 * xmm0_1 * xmm0
        + arg3[6] f* arg3[0xb] f* arg3[0xd] - arg3[9] f* arg3[6] f* arg3[0xf]
    float xmm0_17 = arg3[1]
    float xmm1_9 = xmm0_17 f* arg3[0xa] f* arg3[0xf] - xmm0_17 * xmm0_1 * xmm0
        + xmm7 f* arg3[0xb] f* arg3[0xd] - arg3[9] f* xmm7 f* arg3[0xf]
    float xmm0_45 = (xmm2_7 + arg3[9] f* xmm1 f* arg3[0xe] - arg3[0xa] f* xmm1 f* arg3[0xd]) f* *arg3
        - (xmm1_9 + arg3[9] f* arg3[3] f* arg3[0xe] - arg3[0xa] f* arg3[3] f* arg3[0xd]) f* arg3[4] + (
        xmm3_1 f* arg3[0xf] - xmm2_1 f* arg3[0xe] + xmm3_3 f* arg3[0xd] - xmm4_1 f* arg3[0xf]
        + xmm5_1 f* arg3[0xe] - xmm6_1 f* arg3[0xd]) f* arg3[8]
    float xmm0_46 = xmm0_45 - (xmm3_1 f* arg3[0xb] - xmm2_1 f* arg3[0xa] + xmm3_3 f* arg3[9]
        - xmm4_1 f* arg3[0xb] + xmm5_1 f* arg3[0xa] - xmm6_1 f* arg3[9]) f* arg3[0xc]
    
    if (9.99999975e-06f f> _mm_cvtpd_ps(__andps_xmmxud_memxud(_mm_cvtps_pd(xmm0_46 - 0f), data_59e5a0)))
        sub_44e4d0(arg1, &data_5559b1, U"0", "c:\ax2017\engine\mat4.cpp", 0x124, "Mat4Inverse")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    float var_68
    float* eax_1 = sub_4bc6d0(&var_68, arg2, arg3, &var_68)
    float xmm4_3 = 1f / xmm0_46
    float xmm1_22[0x4] = *eax_1
    float xmm2_11[0x4] = *(eax_1 + 0x10)
    float xmm3_5[0x4] = *(eax_1 + 0x20)
    float xmm5_3[0x4] = *(eax_1 + 0x30)
    var_68 = xmm1_22[0] * xmm4_3
    float var_64 = _mm_shuffle_ps(xmm1_22, xmm1_22, 0x55) * xmm4_3
    float xmm0_57 = _mm_shuffle_ps(xmm1_22, xmm1_22, 0xaa) * xmm4_3
    float xmm1_24 = _mm_shuffle_ps(xmm1_22, xmm1_22, 0xff) * xmm4_3
    float var_60 = xmm0_57
    float xmm0_59 = xmm2_11[0] * xmm4_3
    float var_5c = xmm1_24
    float var_54 = _mm_shuffle_ps(xmm2_11, xmm2_11, 0x55) * xmm4_3
    float xmm0_65 = _mm_shuffle_ps(xmm2_11, xmm2_11, 0xaa) * xmm4_3
    float xmm2_13 = _mm_shuffle_ps(xmm2_11, xmm2_11, 0xff) * xmm4_3
    float var_50 = xmm0_65
    float xmm0_67 = xmm3_5[0] * xmm4_3
    float var_4c = xmm2_13
    float var_44 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0x55) * xmm4_3
    float xmm0_73 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0xaa) * xmm4_3
    float xmm3_7 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0xff) * xmm4_3
    float var_40 = xmm0_73
    float xmm0_75 = xmm5_3[0] * xmm4_3
    float var_3c = xmm3_7
    float var_34 = _mm_shuffle_ps(xmm5_3, xmm5_3, 0x55) * xmm4_3
    float var_30 = _mm_shuffle_ps(xmm5_3, xmm5_3, 0xaa) * xmm4_3
    float var_2c = _mm_shuffle_ps(xmm5_3, xmm5_3, 0xff) * xmm4_3
    *arg4 = var_68.o
    arg4[1] = xmm0_59.o
    arg4[2] = xmm0_67.o
    arg4[3] = xmm0_75.o
    return arg4
}
