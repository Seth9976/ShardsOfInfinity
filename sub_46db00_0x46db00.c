// 函数名称: sub_46db00
// 虚拟地址: 0x46db00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_46db00(int32_t arg1, char* arg2, char** arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    char** var_420 = arg3
    char** var_420_1 = arg3
    char* const edx_20
    
    if (arg4 == 0x6c)
    label_46dfa0:
        edx_20 = &data_5559b1
    label_46dfa7:
        sub_44f240(arg3, edx_20)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return arg3
    
    void* eax_3 = sub_46d840(arg2, arg4)
    int64_t var_45c
    int32_t var_454_1
    int32_t var_450_2
    double xmm0_1
    
    if (arg4 - 0x6d u> 3)
        void* eax_14 = sub_4b8c10(&data_5b1d6c, arg4)
        
        switch (*(eax_14 + 0x10) - 1)
            case 0
                int32_t eax_15 = sub_4b88a0(eax_14, eax_3, &data_5b1d6c, arg4)
                void* eax_16 = sub_4b8cc0(&data_5b1d6c, arg4)
                
                if (eax_16 != 0)
                    sub_44f2d0(arg3, sub_48d060(eax_16, eax_15))
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return arg3
                
                int32_t var_450_7 = eax_15
                void* const var_454_2 = &data_5828f8
                var_45c:4.d = arg3
                sub_44f980()
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 3
                var_450_2 = arg4
                int32_t ecx_38
                float xmm0_26
                ecx_38, xmm0_26 = sub_4b89b0(eax_14, eax_3, &data_5b1d6c, var_450_2)
                xmm0_1 = fconvert.d(xmm0_26)
                var_454_1 = ecx_38
            case 7
                sub_44f2d0(arg3, sub_4b8a40(eax_14, eax_3, &data_5b1d6c, arg4))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0xe
                void* eax_20 = sub_4b8b40(eax_14, eax_3, &data_5b1d6c, arg4)
                
                if (eax_20 == 0)
                    goto label_46dfa0
                
                char* eax_21 = *(eax_20 + 0x20)
                *arg3 = eax_21
                
                if (eax_21 == 0 || *eax_21 == 0)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return arg3
                
                char* eax_22 = sub_44f000(arg3)
                *(eax_22 + 4) += 1
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0x15
                float* eax_26
                int32_t edx_15
                eax_26, edx_15 = sub_4b8ac0(eax_14, eax_3, &data_5b1d6c, data_e4712c, arg4)
                double xmm0_14
                int32_t var_464
                int32_t var_454_3
                
                if (arg4 != 0x79)
                    var_454_3.q = _mm_cvtps_pd(eax_26[3])
                    int64_t var_45c_2 = _mm_cvtps_pd(eax_26[2])
                    var_464.q = _mm_cvtps_pd(eax_26[1])
                    xmm0_14 = _mm_cvtps_pd(*eax_26)
                else
                    float xmm2_1[0x4] = *(*(arg2 + 0x63c) * 0x208 + arg2 + 0x14)
                    float xmm3_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa) f- xmm2_1
                    float xmm1_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
                    float xmm0_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
                    float xmm1_3 = xmm1_2 - xmm0_3
                    float xmm3_5 = xmm3_3 * eax_26[2] f+ xmm2_1
                    float xmm5_3 = xmm3_3 * *eax_26 f+ xmm2_1
                    float xmm4_3 = xmm1_3 * eax_26[1] + xmm0_3
                    float xmm2_4 = eax_26[3] * xmm1_3 + xmm0_3
                    float xmm1_4
                    
                    if (xmm3_5 <= xmm5_3)
                        xmm1_4 = xmm3_5
                        xmm3_5 = xmm5_3
                    else
                        xmm1_4 = xmm5_3
                    
                    float xmm0_4
                    
                    if (xmm2_4 <= xmm4_3)
                        xmm0_4 = xmm2_4
                        xmm2_4 = xmm4_3
                    else
                        xmm0_4 = xmm4_3
                    
                    float var_41c = xmm1_4
                    float var_418_1 = xmm0_4
                    float var_414_1 = xmm3_5
                    float var_410_1 = xmm2_4
                    void var_43c
                    float xmm1_5[0x4] = *sub_47bc00(&var_43c, edx_15, &var_41c, &var_43c)
                    var_454_3.q = fconvert.d(_mm_shuffle_ps(xmm1_5, xmm1_5, 0xff))
                    double var_45c_1 = fconvert.d(_mm_shuffle_ps(xmm1_5, xmm1_5, 0xaa))
                    var_464.q = fconvert.d(_mm_shuffle_ps(xmm1_5, xmm1_5, 0x55))
                    xmm0_14 = fconvert.d(xmm1_5)
                int32_t var_46c
                var_46c.q = xmm0_14
                char const* const var_470 = "%g %g %g %g"
                sub_44f980(arg3, "%g %g %g %g")
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0x16
                int64_t* eax_30 = sub_4b8ac0(eax_14, eax_3, &data_5b1d6c, data_e47100, arg4)
                int32_t var_454_4
                var_454_4.q = _mm_cvtps_pd(*(eax_30 + 4))
                int64_t var_45c_3 = _mm_cvtps_pd(*eax_30)
                char const* const var_460 = "%g %g"
                sub_44f980(arg3, "%g %g")
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0x28
                char* eax_32 = sub_4b8ac0(eax_14, eax_3, &data_5b1d6c, data_dff654, arg4)
                var_45c:4.d = zx.d(eax_32[3])
                var_45c.d = zx.d(eax_32[2])
                uint32_t var_460_1 = zx.d(eax_32[1])
                uint32_t var_464_2 = zx.d(*eax_32)
                char const* const var_468 = "%d %d %d %d"
                sub_44f980(arg3, "%d %d %d %d")
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            default
                int32_t eax_35 = data_dff714
                
                if (eax_14 != eax_35)
                    edx_20 = "unknown type"
                    goto label_46dfa7
                
                sub_44f2d0(arg3, *sub_4b8ac0(eax_35, eax_3, &data_5b1d6c, eax_35, arg4))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
    else
        int32_t var_428
        void var_40c
        sub_46d960(&var_428, &var_40c, arg2, &var_428)
        int32_t eax_6
        int32_t edx_2
        edx_2:eax_6 = muls.dp.d(0x66666667, arg5 - var_428)
        var_450_2 = 0x6c
        int32_t edx_3 = edx_2 s>> 1
        int32_t eax_7 = sub_4b8ac0(eax_6, eax_3, &data_5b1d6c, data_dff698, 0x6c)
        
        if (eax_7 == 0)
            goto label_46dfa0
        
        int32_t* edi_5 = (((edx_3 u>> 0x1f) + edx_3) << 4) + *(eax_7 + 4)
        
        switch (arg4)
            case 0x6d
                sub_44f2d0(arg3, sub_48d060(&data_571ae0, *edi_5))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
            case 0x6e
                xmm0_1 = _mm_cvtps_pd(edi_5[1])
            case 0x6f
                xmm0_1 = _mm_cvtps_pd(edi_5[2])
            case 0x70
                sub_44f2d0(arg3, sub_48d060(&data_571e58, edi_5[3]))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg3
    
    var_454_1.q = xmm0_1
    var_45c:4.d = &data_584ae4
    var_45c.d = arg3
    sub_44f980(var_45c, var_454_1, var_450_2)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg3
}
