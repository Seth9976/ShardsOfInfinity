// 函数名称: sub_4d8e90
// 虚拟地址: 0x4d8e90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4d8e90(int32_t arg1, float arg2 @ edx, int32_t arg3, int32_t arg4, void* arg5, uint64_t (* arg6)[0x2])
{
    // 第一条实际指令: void var_f98
    void var_f98
    int32_t eax_1 = __security_cookie ^ &var_f98
    float var_f88 = arg2
    char* eax_2 = arg5 - 0x5d
    int32_t var_fa8
    char const* const var_fa4_12
    int32_t __saved_edi
    float i_1
    float var_f80
    int32_t var_f74_2
    int64_t var_f70
    void var_f58
    int32_t var_1c
    float* eax_30
    int32_t eax_47
    char* ecx_37
    
    switch (eax_2)
        case nullptr
            sub_4d6c90(arg6, arg6)
            int32_t eax_3
            eax_3.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_3
        case 1
            sub_4d6c90(arg6, &arg6[4])
            int32_t eax_5
            eax_5.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_5
        case 2
            sub_4d6c90(arg6, &arg6[8])
            int32_t eax_7
            eax_7.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_7
        case 3, 4, 5
            void var_f18
            sub_454570(arg5, &var_f18)
            sub_4d6c90(arg6, &var_f18)
            int32_t eax_9
            eax_9.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_9
        case 6
            void* eax_21 = *(arg6 + 0x33c)
            void* ecx_30
            
            if (eax_21 != 0)
                ecx_30 = *(eax_21 + 0x2c)
            
            if (eax_21 == 0 || ecx_30 == 0)
                sub_44e260("Can't use bones shader on non-animation structure\n")
                int32_t eax_23
                eax_23.b = 1
                @__security_check_cookie@4(eax_1 ^ &var_f98)
                return eax_23
            
            eax_2 = sub_4b6f30(ecx_30 + 0x7c, 0)
            float edx_12 = *(*(*(arg6 + 0x33c) + 0x2c) + 0x80)
            
            if (var_f88 s< edx_12)
                edx_12 = var_f88
            
            if (eax_2 != 0 && edx_12 s> 0)
                sub_4d6c90(arg6, eax_2)
                int32_t eax_22
                eax_22.b = 1
                @__security_check_cookie@4(eax_1 ^ &var_f98)
                return eax_22
            
            var_fa4_12 = "GLGraphicsSetSpecialRenderState"
            var_fa8 = 0xb0b
            ecx_37 = "pBones && numShaderConstants > 0"
            goto label_4d95a2
        case 7, 8, 9, 0xa
            void* eax_18 = data_cdf428
            i_1 = *(arg6 + 0x30c)
            sub_4b40a0(eax_18, (arg5 << 5) + 0x1c4 + arg6[0x35][0].d, &var_f58, arg6, *(eax_18 + 0x2c), 
                &i_1)
            sub_4dd5a0(&var_f58, &var_f58)
            void* var_fa4_10 = &var_f58
            (*__glewUniformMatrix3fv)(arg3, 1)
            int32_t eax_20
            eax_20.b = 1
            @__security_check_cookie@4(var_1c ^ &__saved_edi)
            return eax_20
        case 0xb
            eax_30 = &arg6[0x34]
            goto label_4d9555
        case 0xc
            float xmm0_8 = (*arg6)[0x5f].d
            var_f88 = xmm0_8
            
            if (arg3 s< 0x400)
                int32_t edi_3 = arg3 * 2
                
                if (*(data_ce26e8 + (edi_3 << 3) + 0x28) == var_f88)
                    goto label_4d955d
                
                float* var_fa4_14 = &var_f88
                (*__glewUniform1f)(arg3, xmm0_8)
                int32_t var_f90
                *(data_ce26e8 + (edi_3 << 3) + 0x28) = var_f90
                int32_t eax_28
                eax_28.b = 1
                @__security_check_cookie@4(var_1c ^ &__saved_edi)
                return eax_28
            
            var_fa4_12 = "GLDupCheck_glUniform1f"
            var_fa8 = 0x356
            ecx_37 = "registerIndex < MAX_UNIFORMS"
        label_4d95a2:
            sub_44e4d0(eax_2, &data_5559b1, ecx_37, "c:\ax2017\engine\openglgraphics.cpp", var_fa8, 
                var_fa4_12)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        case 0xf
            int128_t* eax_46 = sub_45aed0(&var_f58)
            var_f80.o = *eax_46
            var_f70 = eax_46[1].q
            eax_47 = *(eax_46 + 0x18)
        label_4d9463:
            int32_t var_f68 = eax_47
            sub_4d6ba0(&var_f70, 1, arg3, &var_f70)
            char* eax_49
            eax_49.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_49
        case 0x10
            eax_47 = data_65aec8
            var_f80.o = data_65aeb0
            var_f70 = data_65aec0
            goto label_4d9463
        case 0x11
            sub_4d6ab0(eax_2, 1, arg3, &data_65ae44)
            char* eax_50
            eax_50.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_50
        case 0x12
            sub_4d6c90(arg6, &arg6[0xc])
            int32_t eax_15
            eax_15.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_15
        case 0x13
            sub_4d6c90(arg6, &arg6[0x10])
            int32_t eax_17
            eax_17.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_17
        case 0x14
            int128_t* eax_25 = sub_45c050(&var_f80, arg2, arg4, &var_f80)
            float xmm2_1[0x4] = *(arg6 + 0x2e8)
            float xmm3_2[0x4] = *eax_25
            float xmm0_2 = xmm3_2[0]
            float xmm1_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
            var_f80 = xmm0_2 f* xmm2_1
            float xmm1_3 = xmm1_2 * _mm_shuffle_ps(xmm3_2, xmm3_2, 0x55)
            float xmm0_7 = _mm_shuffle_ps(xmm3_2, xmm3_2, 0xaa)
            float xmm3_3 = _mm_shuffle_ps(xmm3_2, xmm3_2, 0xff)
            float var_f7c_1 = xmm1_3
            float var_f78_1 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa) * xmm0_7
            float var_f74_1 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff) * xmm3_3
        label_4d9549:
            eax_30 = &var_f80
            goto label_4d9555
        case 0x15
            int32_t var_f78_2 = arg6[0x28][0].d
            var_f80.q = (*arg6)[0x4f]
            sub_4d6ba0(&var_f80, 1, arg3, &var_f80)
            char* eax_33
            eax_33.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_33
        case 0x16
            var_f80.o = _mm_mul_ps(*sub_45c050(&var_f80, arg2, arg4, &var_f80), *(arg6 + 0x2a8))
            goto label_4d9549
        case 0x17
            sub_4d6c90(arg6, &(*arg6)[0x39])
            int32_t eax_13
            eax_13.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_13
        case 0x18
            sub_4d6c90(arg6, &(*arg6)[0x31])
            int32_t eax_11
            eax_11.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_11
        case 0x19
            if (arg2 s> 4)
                var_fa4_12 = "GLGraphicsSetSpecialRenderState"
                var_fa8 = 0xb7f
            label_4d9593:
                ecx_37 = "registerCount <= 4"
                goto label_4d95a2
            
            float i_2 = 0f
            i_1 = 0f
            
            if (arg2 s<= 0)
                goto label_4d955d
            
            void* edi_5 = &(*arg6)[0x49]
            
            do
                int32_t var_f78_3 = *(edi_5 + 8)
                var_f80.q = *edi_5
                sub_4d6ba0(&var_f80, 1, i_2 i+ arg3, &var_f80)
                edi_5 += 0xc
                i_2 = i_1 i+ 1
                i_1 = i_2
            while (i_2 s< var_f88)
            
            char* eax_38
            eax_38.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_38
        case 0x1a
            if (arg2 s> 4)
                var_fa4_12 = "GLGraphicsSetSpecialRenderState"
                var_fa8 = 0xb8a
                goto label_4d9593
            
            sub_4d6ba0(&(*arg6)[0x4f], arg2, arg3, &(*arg6)[0x4f])
            char* eax_40
            eax_40.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_40
        case 0x1b
            if (arg2 s> 4)
                var_fa4_12 = "GLGraphicsSetSpecialRenderState"
                var_fa8 = 0xb95
                goto label_4d9593
            
            if (arg2 s> 0)
                void var_f50
                void* esi_3 = &var_f50
                i_1 = arg2
                void* edi_6 = &(*arg6)[0x55]
                float i
                
                do
                    int128_t* eax_42
                    eax_42, arg2 = sub_45c050(&var_f80, arg2, arg4, &var_f80)
                    float xmm2_4[0x4] = *edi_6
                    edi_6 += 0x10
                    i = i_1
                    i_1 -= 1
                    esi_3 += 0x10
                    float xmm3_4[0x4] = *eax_42
                    float xmm0_13 = xmm2_4[0] f* xmm3_4
                    float xmm1_10 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0x55)
                    *(esi_3 - 0x18) = xmm0_13
                    float xmm1_11 = xmm1_10 * _mm_shuffle_ps(xmm3_4, xmm3_4, 0x55)
                    float xmm0_17 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0xaa)
                    float xmm3_5 = _mm_shuffle_ps(xmm3_4, xmm3_4, 0xff)
                    *(esi_3 - 0x14) = xmm1_11
                    float xmm1_13 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xaa)
                    float xmm2_6 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xff) * xmm3_5
                    *(esi_3 - 0x10) = xmm1_13 * xmm0_17
                    *(esi_3 - 0xc) = xmm2_6
                while (i != 1)
                arg2 = var_f88
            
            sub_4d6ab0(&var_f58, arg2, arg3, &var_f58)
            char* eax_44
            eax_44.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_44
        case 0x1c
            void* eax_51 = data_cdf428
            var_f80 = *(eax_51 + 0x2c)
            int32_t var_f7c_2 = *(eax_51 + 0x28)
            int32_t var_f78_4 = *(data_ce19c4 + 0x94)
            var_f74_2 = 0
            goto label_4d9549
        case 0x1d
            eax_30 = arg6 + 0x30c
            goto label_4d9555
        case 0x1e
            eax_30 = arg6 + 0x31c
            goto label_4d9555
        case 0x1f
            eax_30 = arg6 + 0x2fc
            goto label_4d9555
        case 0x20
            void* eax_53 = data_ce26e8
            int32_t var_f7c_3 = 0
            int32_t var_f78_5 = 0
            var_f80 = *(eax_53 + 0x24) f/ *(eax_53 + 0x20)
            var_f74_2 = 0
            goto label_4d9549
        case 0x21, 0x22, 0x23, 0x24
            eax_30 = arg6[0x35][0].d + (arg5 << 4) + 0x6e4
        label_4d9555:
            sub_4d6ab0(eax_30, 1, arg3, eax_30)
        label_4d955d:
            eax_2.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_2
        case 0x26
            sub_4d6ab0(eax_2, 1, arg3, &data_65b288:4)
            char* eax_45
            eax_45.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_f98)
            return eax_45
    
    eax_2.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_f98)
    return eax_2
}
