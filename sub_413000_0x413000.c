// 函数名称: sub_413000
// 虚拟地址: 0x413000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_413000(int32_t arg1, float* arg2, int32_t* arg3, int128_t* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm5 = *arg3
    float var_60 = xmm5
    float xmm6 = arg6[1]
    float xmm3 = *arg6
    float xmm1_2 = arg2[1] f* arg3[2] - arg2[2] f* arg3[1]
    float var_74 = xmm6
    float var_80 = xmm3
    float xmm1_3 = *arg2
    float xmm2_2 = xmm5 * arg2[2] - xmm1_3 f* arg3[2]
    float xmm1_5 = xmm1_3 f* arg3[1] - xmm5 * arg2[1]
    float xmm2_3 = *arg5
    float xmm4_1 = xmm2_3 f* arg6[2]
    float xmm7_2 = xmm6 f* arg5[2] - arg6[2] f* arg5[1]
    float var_84 = xmm2_3
    float var_7c = xmm7_2
    float var_70 = xmm4_1 - xmm3 f* arg5[2]
    int32_t var_5c = arg3[1]
    void var_30
    void* ecx = &var_30
    int32_t var_58 = arg3[2]
    float var_54 = *arg2
    int32_t var_50 = arg2[1]
    int32_t var_4c = arg2[2]
    float var_48 = xmm1_2
    float var_44 = xmm2_2
    float var_40 = xmm1_5
    int32_t var_78 = arg5[1]
    float* edx_1 = &var_84
    int32_t var_6c = arg5[2]
    float var_64 = xmm3 f* arg5[1] - xmm2_3 * xmm6
    int32_t var_68 = arg6[2]
    sub_412bf0(&var_60, edx_1, ecx, &var_60)
    float var_98[0x5]
    *arg4 = *sub_412db0(&var_98, edx_1, ecx, &var_98)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
