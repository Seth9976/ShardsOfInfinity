// 函数名称: sub_47db90
// 虚拟地址: 0x47db90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_47db90(int32_t arg1, int32_t* arg2, int32_t* arg3, float* arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_cdf424
    
    if (*(eax_2 + 0x38) != 0)
        int32_t* var_78 = arg3
        void* eax_4 = sub_47d820(eax_2 + 0x28, arg2, arg3, arg4, eax_2 + 0x28, arg5, arg6)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_4
    
    float xmm5_1 = *arg2 * *arg4
    float xmm3_1 = arg2[1] f* arg4[1]
    float xmm7 = arg2[2]
    float xmm6 = arg2[3]
    float xmm2 = arg2[5]
    float xmm4_1 = xmm6 * *arg4
    float xmm5_3 = *arg2 * arg4[2]
    float xmm6_1 = xmm6 * arg4[2]
    float xmm1_4 = arg2[4] f* arg4[1]
    float xmm5_7 = arg2[4] f* arg4[3]
    float xmm1_6 = arg2[1] f* arg4[3]
    float xmm2_1 = *arg5
    float var_28 = xmm2_1
    float var_18 = xmm2_1
    float xmm2_2 = *(eax_2 + 0x20)
    int32_t xmm0_6 = arg5[1]
    int32_t var_24 = xmm0_6
    int32_t var_1c = xmm0_6
    int32_t xmm0_7 = arg5[3]
    int32_t var_14 = xmm0_7
    int32_t var_c = xmm0_7
    int32_t xmm1_9 = arg5[2]
    float var_48 = xmm2_2 + xmm5_1 + xmm3_1 + xmm7
    int32_t var_20 = xmm1_9
    int32_t var_10 = xmm1_9
    float xmm1_10 = *(eax_2 + 0x24)
    float var_44 = xmm1_10 + xmm4_1 + xmm1_4 + xmm2
    float var_40 = xmm2_2 + xmm5_3 + xmm3_1 + xmm7
    float var_3c = xmm1_10 + xmm6_1 + xmm1_4 + xmm2
    float var_38 = xmm2_2 + xmm1_6 + xmm5_1 + xmm7
    float var_30 = xmm2_2 + xmm1_6 + xmm5_3 + xmm7
    float var_34 = xmm1_10 + xmm5_7 + xmm4_1 + xmm2
    int32_t var_78_1 = 0
    float var_2c = xmm1_10 + xmm5_7 + xmm6_1 + xmm2
    float eax_5 = sub_47c490(eax_2, &var_28, &var_48, arg6, arg3, arg3)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_5
}
