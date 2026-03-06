// 函数名称: sub_4e0e60
// 虚拟地址: 0x4e0e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_4e0e60(int32_t arg1, int32_t arg2, int64_t* arg3, int64_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = *(arg3 + 0x24)
    *arg4 = 0
    int64_t xmm0_1 = *arg3
    float xmm3 = xmm0_1:4.d
    float xmm2 = xmm0_1.d
    int32_t* ecx_2 = (zx.d(ebx.b) << 6) + arg2
    arg4[1].d = 0
    float eax_2 = arg3[1].d
    float xmm5 = *arg4
    float xmm4_4 = ecx_2[1] f* xmm3 + *ecx_2 * xmm2 + ecx_2[2] f* eax_2 f+ ecx_2[3]
    float xmm7_4 = ecx_2[5] f* xmm3 + ecx_2[4] f* xmm2 + ecx_2[6] f* eax_2 f+ ecx_2[7]
    float xmm6_3 = ecx_2[9] f* xmm3 + ecx_2[8] f* xmm2 + ecx_2[0xa] f* eax_2
    float xmm0_16 = _mm_cvtepi32_ps(zx.o((arg3[5].d).b)) / 255f
    float eax_7 = arg3[1].d
    int32_t* ecx_5 = (zx.d((ebx u>> 8).b) << 6) + arg2
    int64_t xmm0_17 = *arg3
    float xmm7_6 = xmm7_4 * xmm0_16 f+ *(arg4 + 4)
    float xmm6_6 = (xmm6_3 f+ ecx_2[0xb]) * xmm0_16 f+ arg4[1].d
    float xmm3_1 = xmm0_17:4.d
    float xmm2_1 = xmm0_17.d
    float xmm4_10 = ecx_5[1] f* xmm3_1 + *ecx_5 * xmm2_1 + ecx_5[2] f* eax_7 f+ ecx_5[3]
    float xmm4_15 = ecx_5[5] f* xmm3_1 + ecx_5[4] f* xmm2_1 + ecx_5[6] f* eax_7 f+ ecx_5[7]
    float xmm7_10 = ecx_5[9] f* xmm3_1 + ecx_5[8] f* xmm2_1 + ecx_5[0xa] f* eax_7
    float xmm0_32 = _mm_cvtepi32_ps(zx.o((arg3[5].d u>> 8).b)) / 255f
    float eax_13 = arg3[1].d
    int32_t* ecx_8 = (zx.d((ebx u>> 0x10).b) << 6) + arg2
    int64_t xmm0_33 = *arg3
    float xmm7_13 = (xmm7_10 f+ ecx_5[0xb]) * xmm0_32 + xmm6_6
    float xmm3_2 = xmm0_33:4.d
    float xmm2_2 = xmm0_33.d
    float xmm6_11 = ecx_8[1] f* xmm3_2 + *ecx_8 * xmm2_2 + ecx_8[2] f* eax_13 f+ ecx_8[3]
    float xmm5_6 = ecx_8[5] f* xmm3_2 + ecx_8[4] f* xmm2_2 + ecx_8[6] f* eax_13 f+ ecx_8[7]
    float xmm4_22 = ecx_8[9] f* xmm3_2 + ecx_8[8] f* xmm2_2 + ecx_8[0xa] f* eax_13 f+ ecx_8[0xb]
    int32_t ecx_9 = arg3[5].d
    float xmm0_48 = _mm_cvtepi32_ps(zx.o((ecx_9 u>> 0x10).b)) / 255f
    float eax_17 = arg3[1].d
    int32_t* ebx_3 = (ebx u>> 0x18 << 6) + arg2
    *arg4 = xmm4_10 * xmm0_32 + xmm5 + xmm4_4 * xmm0_16 + xmm6_11 * xmm0_48
    float xmm6_13 = ebx_3[1]
    float xmm5_8 = ebx_3[5]
    float xmm4_24 = ebx_3[9]
    *(arg4 + 4) = xmm4_15 * xmm0_32 + xmm7_6 + xmm5_6 * xmm0_48
    int64_t xmm0_53 = *arg3
    float xmm3_3 = xmm0_53:4.d
    float xmm2_3 = xmm0_53.d
    float xmm6_17 = xmm6_13 * xmm3_3 + *ebx_3 * xmm2_3 + ebx_3[2] f* eax_17 f+ ebx_3[3]
    float xmm5_12 = xmm5_8 * xmm3_3 + ebx_3[4] f* xmm2_3 + ebx_3[6] f* eax_17 f+ ebx_3[7]
    float xmm4_27 = xmm4_24 * xmm3_3 + ebx_3[8] f* xmm2_3 + ebx_3[0xa] f* eax_17
    float xmm0_68 = _mm_cvtepi32_ps(zx.o(ecx_9 u>> 0x18)) / 255f
    float xmm4_30 = (xmm4_27 f+ ebx_3[0xb]) * xmm0_68 + xmm7_13 + xmm4_22 * xmm0_48
    float xmm0_70 = *arg4 + xmm6_17 * xmm0_68
    *(arg4 + 4) = xmm5_12 * xmm0_68 f+ *(arg4 + 4)
    arg4[1].d = xmm4_30
    *arg4 = xmm0_70
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
