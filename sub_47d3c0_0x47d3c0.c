// 函数名称: sub_47d3c0
// 虚拟地址: 0x47d3c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_47d3c0(int32_t arg1, float* arg2, int32_t* arg3, float* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float eax_3
    float edx
    eax_3, edx = sub_432570(arg3)
    int32_t* ecx = data_cdf424
    float xmm6 = arg2[4]
    float xmm7 = arg2[2]
    float xmm2_3 = (arg4[3] - arg4[1]) * edx * 0.5f
    float xmm5_3 = (arg4[2] - *arg4) * eax_3 * 0.5f
    float xmm3_1 = ecx[9] f- xmm2_3
    float xmm2_4 = xmm2_3 f+ ecx[9]
    float xmm4_1 = ecx[8] f- xmm5_3
    float xmm5_4 = xmm5_3 f+ ecx[8]
    float xmm4_2 = arg2[3]
    float xmm5_5 = arg2[5]
    float xmm0_5 = xmm5_4 * *arg2
    float var_4c = xmm3_1 * arg2[1] + xmm4_1 * *arg2 + xmm7
    float xmm2_9 = arg2[1]
    float var_48 = xmm3_1 * xmm6 + xmm4_1 * xmm4_2 + xmm5_5
    float var_44 = xmm3_1 * xmm2_9 + xmm0_5 + xmm7
    float var_40 = xmm5_4 * xmm4_2 + xmm3_1 * xmm6 + xmm5_5
    float var_3c = xmm2_9 * xmm2_4 + *arg2 * xmm4_1 + xmm7
    float var_38 = xmm6 * xmm2_4 + xmm4_2 * xmm4_1 + xmm5_5
    int32_t var_74 = arg6
    int32_t xmm2_13 = arg4[2]
    float var_34 = arg2[1] * xmm2_4 + xmm5_4 * *arg2 + xmm7
    float xmm1_16 = *arg4
    float var_2c = xmm1_16
    int32_t var_24 = xmm2_13
    float var_1c = xmm1_16
    int32_t var_14 = xmm2_13
    float var_30 = xmm5_4 * xmm4_2 + xmm6 * xmm2_4 + xmm5_5
    int32_t xmm0_20 = arg4[1]
    int32_t var_28 = xmm0_20
    int32_t var_20 = xmm0_20
    int32_t xmm0_21 = arg4[3]
    int32_t var_18 = xmm0_21
    int32_t var_10 = xmm0_21
    float result = sub_47c490(arg4, &var_2c, &var_4c, arg5, ecx, arg3)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
