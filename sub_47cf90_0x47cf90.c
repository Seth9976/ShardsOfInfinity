// 函数名称: sub_47cf90
// 虚拟地址: 0x47cf90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_47cf90(int32_t arg1, float* arg2, int32_t* arg3, float* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_ce19c4
    int32_t* edx = arg5
    int32_t* var_5c = arg3
    int32_t* var_60 = edx
    int32_t eax_3
    float var_4c
    float var_2c
    
    if (*(eax_2 + 0xe3) == 0)
        void* eax_7 = data_cdf424
        int32_t var_74_2 = arg6
        float xmm0_10 = arg2[1] f+ *(eax_7 + 0x24)
        float xmm3_5 = *(eax_7 + 0x20)
        float xmm2_5 = *arg2 + xmm3_5
        float xmm3_6 = xmm3_5 + arg2[2]
        float var_28_2 = xmm0_10
        float var_20_2 = xmm0_10
        float xmm0_12 = arg2[3] f+ *(eax_7 + 0x24)
        var_2c = xmm2_5
        float var_1c_2 = xmm2_5
        float xmm2_6 = *arg4
        int32_t xmm1_13 = arg4[2]
        float var_18_2 = xmm0_12
        float var_10_2 = xmm0_12
        int32_t xmm0_13 = arg4[1]
        int32_t var_48_2 = xmm0_13
        int32_t var_40_2 = xmm0_13
        int32_t xmm0_14 = arg4[3]
        float var_24_2 = xmm3_6
        float var_14_2 = xmm3_6
        var_4c = xmm2_6
        int32_t var_44_2 = xmm1_13
        float var_3c_2 = xmm2_6
        int32_t var_38_2 = xmm0_14
        int32_t var_34_2 = xmm1_13
        int32_t var_30_2 = xmm0_14
        eax_3 = sub_47c490(arg4, &var_4c, &var_2c, edx, arg3, arg3)
    else
        float xmm1_3 = (arg2[2] - *arg2) * 6.5f f/ *(eax_2 + 0xe8)
        float xmm1_4
        
        if (0 f<= xmm1_3)
            xmm1_4 = xmm1_3 + 0.5f
        else
            xmm1_4 = xmm1_3 - 0.5f
        
        eax_3 = int.d(xmm1_4)
        int32_t edi_1 = 1
        
        if (eax_3 s> 1)
            edi_1 = eax_3
        
        int32_t ebx_1 = 0
        
        if (edi_1 s> 0)
            float xmm0_2 = _mm_cvtepi32_ps(zx.o(edi_1))
            float var_58 = xmm0_2
            float eax_6
            
            do
                float xmm1_6 = _mm_cvtepi32_ps(zx.o(ebx_1))
                void* eax_4 = data_cdf424
                float xmm6_1 = *arg2
                float xmm7_2 = xmm1_6 / xmm0_2
                float xmm5_1 = *(eax_4 + 0x24)
                float xmm4_2 = arg2[2] - xmm6_1
                float xmm1_8 = (xmm1_6 + 1f) / xmm0_2
                int32_t var_74_1 = arg6
                float xmm0_4 = xmm5_1 + arg2[1]
                float xmm5_2 = xmm5_1 + arg2[3]
                float var_48_1 = xmm0_4
                float var_40_1 = xmm0_4
                float var_38_1 = xmm5_2
                float var_30_1 = xmm5_2
                float xmm1_11 = xmm1_8 * xmm4_2 + xmm6_1 f+ *(eax_4 + 0x20)
                float xmm3_4 = xmm7_2 * xmm4_2 + xmm6_1 f+ *(eax_4 + 0x20)
                int32_t* eax_5 = arg4
                float var_44_1 = xmm1_11
                float var_34_1 = xmm1_11
                float xmm1_12 = *eax_5
                float xmm0_6 = eax_5[2] f- xmm1_12
                var_4c = xmm3_4
                float var_3c_1 = xmm3_4
                int32_t xmm0_7 = eax_5[1]
                float xmm7_4 = xmm7_2 * xmm0_6 + xmm1_12
                int32_t var_28_1 = xmm0_7
                float xmm2_3 = xmm1_8 * xmm0_6 + xmm1_12
                int32_t var_20_1 = xmm0_7
                int32_t xmm0_8 = eax_5[3]
                int32_t var_18_1 = xmm0_8
                var_2c = xmm7_4
                float var_1c_1 = xmm7_4
                float var_24_1 = xmm2_3
                float var_14_1 = xmm2_3
                int32_t var_10_1 = xmm0_8
                eax_6 = sub_47c490(eax_5, &var_2c, &var_4c, edx, arg3, arg3)
                xmm0_2 = var_58
                ebx_1 += 1
                arg3 = var_5c
                edx = var_60
            while (ebx_1 s< edi_1)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_6
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_3
}
