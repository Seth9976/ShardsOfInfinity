// 函数名称: sub_47f0b0
// 虚拟地址: 0x47f0b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_47f0b0(int32_t arg1, int128_t* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg6 == 0)
        int32_t eax_3 = sub_47d1f0(arg5, arg2, arg3, &data_571d08, arg4, arg5)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_3
    
    int128_t var_4c
    __builtin_memcpy(&var_4c, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x20)
    int128_t* ecx_4 = sub_47e960(arg6, &var_4c)
    int128_t* eax_4 = data_cdf424
    float* edx_1 = &var_4c
    int32_t var_2c
    int32_t xmm1_1
    
    if (*(eax_4 + 0x38) == 0)
        float xmm2_2[0x4] = *arg2
        var_2c = xmm2_2
        int32_t xmm0_4 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55)
        xmm1_1 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
        int32_t var_1c_2 = xmm2_2
        int32_t xmm2_3 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
        int32_t var_28_2 = xmm0_4
        int32_t var_20_2 = xmm0_4
        int32_t var_18_2 = xmm2_3
        int32_t var_10_2 = xmm2_3
    label_47f1b0:
        int32_t var_94_3 = arg5
        int32_t var_24_1 = xmm1_1
        int32_t var_14_1 = xmm1_1
        eax_4 = sub_47c490(eax_4, edx_1, &var_2c, arg4, ecx_4, arg3)
    else
        ecx_4 = arg2
        int32_t var_80
        void var_6c
        eax_4 = sub_47ed90(eax_4 + 0x28, edx_1, ecx_4, eax_4 + 0x28, &var_80, &var_6c)
        
        if (eax_4.b != 0)
            edx_1 = &var_6c
            int32_t xmm2_1 = var_80
            int32_t var_78
            xmm1_1 = var_78
            int32_t var_7c
            int32_t var_28_1 = var_7c
            int32_t var_20_1 = var_7c
            var_2c = xmm2_1
            int32_t var_1c_1 = xmm2_1
            int32_t var_74
            int32_t var_18_1 = var_74
            int32_t var_10_1 = var_74
            goto label_47f1b0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_4
}
