// 函数名称: sub_49cd70
// 虚拟地址: 0x49cd70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_49cd70(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_543a00
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_224 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = *(arg3 + 0x30)
    int32_t result = sub_4459f0(**(esi + 0x2e4))
    void* esi_2 = *(esi + 0x2dc) * 0x134 + *result
    result.b = *(esi_2 + 0xda)
    char var_14d = result.b
    
    if (*(esi_2 + 0x128) != 0 || *(esi_2 + 0x124) != 0 || *(esi_2 + 0x12c) != 0 || result.b != 0
            || *(esi_2 + 0x120) != 0)
        void* eax_5 = data_cdf428
        
        if (eax_5 == 0)
            char const* const var_228_36 = "GetGameData"
            int32_t var_22c_16 = 0x45
            char const* const var_230_14 = "c:\ax2017\engine\game.h"
            sub_44e4d0(eax_5, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, 
                "GetGameData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* eax_6 = *(eax_5 + 0x10)
        *(eax_6 + 0x28) += 1
        int32_t* eax_8 = *(*(arg3 + 0x30) + 0x2e4)
        result = eax_8[0x18]
        
        if (((result.b & 1) == 0 || *(arg3 + 0x40) == 0)
                && ((result.b & 2) == 0 || *(arg3 + 0x40) != 0))
            float eax_9 = sub_49bcf0(arg3, arg2)
            float var_1ac = eax_9
            float var_1a8
            float var_118[0x4]
            
            if (var_14d == 0)
                float var_18c_1
                char var_14d_1
                char var_14c_1
                
                if (*(esi_2 + 0xdf) == 0)
                    var_14c_1 = eax_9.b
                    eax_9.b = var_1ac:3.b
                    char var_14a_3 = var_1ac:2.b
                    char var_14b_2 = eax_9:1.b
                    char var_149_3 = eax_9.b
                    float ecx_8 = var_14c_1.d
                    var_14d_1 = eax_9.b
                    var_14c_1.d = 0
                    var_18c_1 = ecx_8
                else
                    char edx_1 = var_1ac:3.b
                    char var_14c
                    var_14c.w = 0
                    char var_14a_1 = 0
                    char var_149_1 = edx_1
                    var_18c_1 = var_14c.d
                    float ecx_7
                    ecx_7.b = var_1ac:2.b
                    var_14d_1 = edx_1
                    var_14c_1 = eax_9.b
                    char var_14a_2 = ecx_7.b
                    char var_14b_1 = eax_9:1.b
                    char var_149_2 = 0xff
                
                int32_t eax_11 = var_14c_1.d
                int32_t* ecx_9 = arg4
                int128_t var_128 = *(arg2 + 0x68)
                var_118 = *(arg2 + 0x78)
                int128_t var_48 = *(arg2 + 0x68)
                float var_38_1[0x4] = *(arg2 + 0x78)
                float xmm0_10 = *ecx_9
                float temp0_1 = data_5c779c.d
                xmm0_10 - temp0_1
                int32_t* eax_12
                eax_12:1.b = (xmm0_10 == temp0_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_10, temp0_1) ? 1 : 0) << 2 | (xmm0_10 < temp0_1 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                float var_1c8[0x4]
                
                if (p_2)
                label_49d04c:
                    int32_t* var_228_1 = ecx_9
                    int128_t var_1d8
                    ecx_9 = &var_1d8
                    sub_4a0490(eax_12, &var_128, ecx_9, var_228_1)
                    var_48 = var_1d8
                    var_38_1 = var_1c8
                else
                    float xmm0_11 = ecx_9[5]
                    float temp1_1 = data_5c77ac:4
                    xmm0_11 - temp1_1
                    eax_12:1.b = (xmm0_11 == temp1_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_11, temp1_1) ? 1 : 0) << 2 | (xmm0_11 < temp1_1 ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        goto label_49d04c
                    
                    float xmm0_12 = ecx_9[6]
                    float temp2_1 = data_5c77ac:8
                    xmm0_12 - temp2_1
                    eax_12:1.b = (xmm0_12 == temp2_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_12, temp2_1) ? 1 : 0) << 2 | (xmm0_12 < temp2_1 ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        goto label_49d04c
                    
                    float xmm0_13 = ecx_9[7]
                    float temp3_1 = data_5c77ac:0xc
                    xmm0_13 - temp3_1
                    eax_12:1.b = (xmm0_13 == temp3_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_13, temp3_1) ? 1 : 0) << 2 | (xmm0_13 < temp3_1 ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        goto label_49d04c
                    
                    float xmm0_14 = ecx_9[4]
                    float temp4_1 = data_5c77ac.d
                    xmm0_14 - temp4_1
                    eax_12:1.b = (xmm0_14 == temp4_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_14, temp4_1) ? 1 : 0) << 2 | (xmm0_14 < temp4_1 ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (p_10)
                        goto label_49d04c
                    
                    float xmm0_15 = ecx_9[1]
                    float temp5_1 = data_5c779c:4
                    xmm0_15 - temp5_1
                    eax_12:1.b = (xmm0_15 == temp5_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_15, temp5_1) ? 1 : 0) << 2 | (xmm0_15 < temp5_1 ? 1 : 0)
                    bool p_12 = unimplemented  {test ah, 0x44}
                    
                    if (p_12)
                        goto label_49d04c
                    
                    float xmm0_16 = ecx_9[2]
                    float temp6_1 = data_5c779c:8
                    xmm0_16 - temp6_1
                    eax_12:1.b = (xmm0_16 == temp6_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_16, temp6_1) ? 1 : 0) << 2 | (xmm0_16 < temp6_1 ? 1 : 0)
                    bool p_14 = unimplemented  {test ah, 0x44}
                    
                    if (p_14)
                        goto label_49d04c
                    
                    float xmm0_17 = ecx_9[3]
                    float temp7_1 = data_5c779c:0xc
                    xmm0_17 - temp7_1
                    eax_12:1.b = (xmm0_17 == temp7_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_17, temp7_1) ? 1 : 0) << 2 | (xmm0_17 < temp7_1 ? 1 : 0)
                    bool p_16 = unimplemented  {test ah, 0x44}
                    
                    if (p_16)
                        goto label_49d04c
                
                int64_t var_190
                void* var_228_2 = &var_190:4
                result = sub_49b6b0(&var_48, arg2, ecx_9, &var_48)
                
                if (var_18c_1:3.b != 0)
                    int32_t eax_14 = *(arg3 + 0x38)
                    int32_t ecx_11 = *(esi_2 + 0xf4) - 1
                    
                    if (eax_14 s< 0)
                        eax_14 = 0
                    else if (eax_14 s> ecx_11)
                        eax_14 = ecx_11
                    
                    int32_t edx_5 = *(esi_2 + 0xf0)
                    int32_t ecx_13 = *(arg3 + 0x34)
                    
                    if (ecx_13 s< 0)
                        ecx_13 = 0
                    else if (ecx_13 s> edx_5 - 1)
                        ecx_13 = edx_5 - 1
                    
                    if (eax_14 s< 0 || eax_14 s>= *(esi_2 + 0xf4) || ecx_13 s< 0 || ecx_13 s>= edx_5)
                        char const* const var_228_35 = "SpriteUVFromStrip"
                        int32_t var_22c_15 = 0x496
                        char const* const var_230_13 = "c:\ax2017\engine\sprite.cpp"
                        sub_44e4d0(eax_14, &data_5559b1, 
                            "x >= 0 && x < numCols && y >= 0 && y < numRows", 
                            "c:\ax2017\engine\sprite.cpp", 0x496, "SpriteUVFromStrip")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    float xmm0_21 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xf4)))
                    float xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_14))
                    float xmm2_3 = _mm_cvtepi32_ps(zx.o(eax_14 + 1)) / xmm0_21
                    float xmm1_2 = _mm_cvtepi32_ps(zx.o(edx_5))
                    int32_t* ecx_14 = *(esi_2 + 0x128)
                    int32_t* edx_6 = *(esi_2 + 0x124)
                    var_1a8 = xmm4_2 / xmm0_21
                    float var_1a0_2 = xmm2_3
                    float var_19c_2 = _mm_cvtepi32_ps(zx.o(ecx_13 + 1)) / xmm1_2
                    float var_1a4_2 = _mm_cvtepi32_ps(zx.o(ecx_13)) / xmm1_2
                    float xmm0_25[0x4] = var_1a8.o
                    var_118 = xmm0_25
                    var_1c8 = xmm0_25
                    
                    if (ecx_14 != 0)
                        edx_6 = sub_4a31a0(ecx_14)
                    
                    int32_t* ecx_15 = eax_8[7]
                    int32_t eax_19 = *(esi_2 + 0x12c)
                    
                    if (ecx_15 != 0)
                        edx_6 = ecx_15
                    
                    int32_t* var_16c_1 = edx_6
                    int32_t ecx_17 = eax_8[6]
                    
                    if (ecx_17 != 0)
                        eax_19 = ecx_17
                    
                    var_14c_1.d = eax_19
                    void* eax_20 = data_cdf428
                    *(eax_6 + 0x2c) += 1
                    data_65b360.d = *(eax_20 + 0x2c) f- *(*(arg3 + 0x30) + 0x2e8)
                    int64_t var_f4
                    int128_t var_e8
                    int128_t var_d8
                    int128_t var_c8
                    int128_t var_a8
                    float var_98[0x4]
                    
                    if (*(esi_2 + 0x120) != 0)
                        if (edx_6 == 0)
                            if (data_e499e0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                int32_t* var_228_3 = &data_e499e0
                                edx_6 = __Init_thread_header(&data_e499e0)
                                
                                if (data_e499e0 == 0xffffffff)
                                    int32_t var_14_1 = 0
                                    int32_t* var_228_4 = &data_e499e0
                                    data_e499e4 = sub_48d5b0("sys/draw3d.material", 5)
                                    int32_t var_14_2 = 0xffffffff
                                    edx_6 = __Init_thread_footer(&data_e499e0)
                            
                            var_16c_1 = data_e499e4
                        
                        int128_t* eax_28 = *(esi_2 + 0x130)
                        
                        if (eax_28 u> 4)
                            char const* const var_228_37 = "ParticleSpotDraw"
                            int32_t var_22c_17 = 0x8a5
                            char const* const var_230_15 = "c:\ax2017\engine\particle.cpp"
                            sub_44e4d0(eax_28, &data_5559b1, "Halt", "c:\ax2017\engine\particle.cpp", 
                                0x8a5, "ParticleSpotDraw")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        float xmm7_1 = var_38_1[3]
                        int128_t xmm1_3 = data_65aeb0
                        float var_100_2
                        int64_t* const edx_7
                        
                        switch (eax_28)
                            case 1
                                int32_t eax_26 = data_65aec8
                                var_118[1].q = data_65aec0
                                float xmm4_5 = var_118[1] - var_38_1[1]
                                float xmm2_5 = var_118[2] - var_38_1[2]
                                var_128 = xmm1_3
                                var_118[3] = eax_26
                                float xmm3_5 = var_118[3] - xmm7_1
                                float xmm1_8 = 1f / (
                                    sub_412d90(xmm4_5 * xmm4_5 + xmm2_5 * xmm2_5 + xmm3_5 * xmm3_5)
                                    + 9.99999975e-06f)
                                float xmm4_7[0x4] = xmm4_5 * xmm1_8
                                int64_t xmm2_7 = xmm2_5 * xmm1_8
                                float xmm3_7 = xmm3_5 * xmm1_8
                                var_f4 = _mm_unpacklo_ps(xmm4_7, xmm2_7)
                                float xmm3_8 = xmm3_7 * 0f
                                float var_ec_1 = xmm3_7
                                int64_t xmm1_10 = xmm2_7.d - xmm3_8
                                float xmm3_9 = xmm3_8 f- xmm4_7
                                var_190 = xmm1_10
                                float xmm4_9 = xmm4_7 f* 0f - xmm2_7 f* 0f
                                edx_7 = &data_5718c8
                                float xmm1_15 = 1f / (
                                    sub_412d90(xmm1_10.d f* xmm1_10 + xmm3_9 * xmm3_9 + xmm4_9 * xmm4_9)
                                    + 9.99999975e-06f)
                                var_190 = _mm_unpacklo_ps(var_190.d f* xmm1_15, xmm3_9 * xmm1_15)
                                var_100_2 = xmm4_9 * xmm1_15
                            label_49d6a4:
                                float var_188_2 = var_100_2
                                eax_28, edx_6 = sub_413000(&var_118, edx_7, &data_571928, &var_118, 
                                    &var_190, &var_f4)
                                xmm1_3 = data_65aeb0
                                var_48 = *eax_28
                            case 2
                                var_1c8[3] = sub_4145b0(-0.785398185f)
                                float xmm0_47[0x4]
                                edx_6, xmm0_47 = sub_4145d0(-0.785398185f)
                                int64_t xmm1_17 = xmm0_47[0] * 0f
                                int64_t xmm0_48 = _mm_unpacklo_ps(xmm0_47, xmm1_17)
                                xmm1_3 = data_65aeb0
                                var_1c8[2] = xmm1_17
                                var_1c8[0].q = xmm0_48
                                var_48 = var_1c8
                            case 3
                                float xmm3_12 = var_48:4.d
                                float xmm2_9 = var_38_1[0]
                                float xmm5_1 = var_48:0xc.d
                                var_118[1].q = data_65aec0
                                var_128 = xmm1_3
                                float xmm1_18 = var_48:8.d
                                var_118[3] = data_65aec8
                                float xmm6_3 = xmm3_12 * xmm5_1 + xmm2_9 * xmm1_18
                                float xmm6_4[0x4] = xmm6_3 + xmm6_3
                                float xmm4_14 = xmm5_1 * xmm1_18 - xmm3_12 * xmm2_9
                                float xmm1_21 = var_118[1] - var_38_1[1]
                                float var_15c_3 = xmm6_4
                                float xmm3_15 = var_118[2] - var_38_1[2]
                                int64_t xmm4_15 = xmm4_14 + xmm4_14
                                float xmm5_5 = xmm5_1 * xmm5_1 - xmm1_18 * xmm1_18 - xmm3_12 * xmm3_12
                                    + xmm2_9 * xmm2_9
                                float xmm2_12 = var_118[3] - xmm7_1
                                var_f4 = _mm_unpacklo_ps(xmm6_4, xmm4_15)
                                float var_160_1 = xmm4_15
                                float var_ec_2 = xmm5_5
                                float xmm1_26 = 1f / (sub_412d90(xmm1_21 * xmm1_21 + xmm3_15 * xmm3_15
                                    + xmm2_12 * xmm2_12) + 9.99999975e-06f)
                                float xmm5_7 = xmm1_21 * xmm1_26
                                float xmm3_17 = xmm2_12 * xmm1_26
                                float xmm4_17 = xmm3_15 * xmm1_26
                                float xmm2_15 = xmm5_7 * xmm5_5 - xmm3_17 * var_15c_3
                                float xmm1_29 = xmm3_17 * var_160_1 - xmm5_5 * xmm4_17
                                float xmm7_5 = var_15c_3 * xmm4_17 - xmm5_7 * var_160_1
                                edx_7 = &data_5718bc
                                float xmm1_34 = 1f / (
                                    sub_412d90(xmm1_29 * xmm1_29 + xmm2_15 * xmm2_15 + xmm7_5 * xmm7_5)
                                    + 9.99999975e-06f)
                                var_190 = _mm_unpacklo_ps(xmm1_34 * xmm1_29, xmm1_34 * xmm2_15)
                                var_100_2 = xmm1_34 * xmm7_5
                                goto label_49d6a4
                            case 4
                                eax_28, edx_6 = sub_49ff30(&var_118, arg3 + 0xc, &data_571928, &var_118)
                                xmm1_3 = data_65aeb0
                                var_48 = *eax_28
                        
                        float xmm0_74 = arg2[3]
                        xmm0_74 f- 0
                        eax_28:1.b = (xmm0_74 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_74, 0f) ? 1 : 0) << 2 | (xmm0_74 < 0f ? 1 : 0)
                        bool p_18 = unimplemented  {test ah, 0x44}
                        
                        if (p_18)
                            int64_t xmm0_75 = data_65aec0
                            var_118[3] = data_65aec8
                            var_118[1].q = xmm0_75
                            var_128 = xmm1_3
                            float eax_36 = eax_8[0x12]
                            var_190 = *(eax_8 + 0x40)
                            float xmm1_37 = var_190.d - var_118[1]
                            float xmm2_20 = var_18c_1 - var_118[2]
                            float xmm3_20 = eax_36 - var_118[3]
                            float xmm0_81
                            edx_6, xmm0_81 =
                                sub_412d90(xmm1_37 * xmm1_37 + xmm2_20 * xmm2_20 + xmm3_20 * xmm3_20)
                            float xmm3_21 = arg2[3]
                            float xmm4_18 = 1f / (xmm0_81 + 9.99999975e-06f)
                            float xmm1_46 = xmm3_21 * xmm4_18 * xmm2_20 + var_38_1[2]
                            float xmm3_23 = xmm3_21 * xmm4_18 * xmm3_20 + var_38_1[3]
                            var_38_1[1] = xmm3_21 * xmm4_18 * xmm1_37 + var_38_1[1]
                            var_38_1[2] = xmm1_46
                            var_38_1[3] = xmm3_23
                        
                        int128_t* eax_38 = sub_45c3f0(&var_a8, edx_6, &var_48, &var_a8)
                        var_e8 = *eax_38
                        var_d8 = eax_38[1]
                        var_c8 = eax_38[2]
                        int128_t var_b8_1 = eax_38[3]
                        void var_68
                        int128_t* eax_40 = sub_47bdc0(&var_68, edx_6, arg2, &var_68)
                        var_a8 = *eax_40
                        var_98 = eax_40[1]
                        int128_t var_88_1 = eax_40[2]
                        int128_t var_78 = eax_40[3]
                        int128_t* eax_41 = sub_45c570(&var_68)
                        float var_228_10 = var_1ac
                        var_a8 = *eax_41
                        var_98 = eax_41[1]
                        int128_t var_88_2 = eax_41[2]
                        int128_t var_78_1 = eax_41[3]
                        float (* eax_42)[0x4] = sub_45c020(&var_118, var_228_10)
                        var_118 = *eax_42
                        sub_456bf0(&var_118)
                        int32_t var_230_2 = 0
                        int32_t var_234_1 = var_14c_1.d
                        int32_t* var_238_1 = var_16c_1
                        result = sub_459880(eax_42, &var_a8, *(esi_2 + 0x120))
                        sub_456bf0(&data_571934)
                        data_65b360.d = 0
                    else
                        int64_t var_1b4
                        int64_t var_180
                        int64_t var_108
                        
                        if (eax_8[0x1d].b == 0)
                            if (edx_6 == 0 && *(esi_2 + 0xe1) != edx_6.b)
                                if (data_e499f8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                    int32_t* var_228_25 = &data_e499f8
                                    __Init_thread_header(&data_e499f8)
                                    
                                    if (data_e499f8 == 0xffffffff)
                                        int32_t var_14_7 = 3
                                        int32_t* var_228_26 = &data_e499f8
                                        data_e499fc = sub_48d5b0("sys\SpriteAdditive.material", 5)
                                        int32_t var_14_8 = 0xffffffff
                                        __Init_thread_footer(&data_e499f8)
                                
                                var_16c_1 = data_e499fc
                            
                            float xmm0_177 = *(arg3 + 0x24)
                            xmm0_177 - 0f
                            int32_t* eax_43
                            eax_43:1.b = (xmm0_177 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_177, 0f) ? 1 : 0) << 2 | (xmm0_177 < 0f ? 1 : 0)
                            bool p_26 = unimplemented  {test ah, 0x44}
                            float xmm0_178[0x4]
                            
                            if (p_26)
                                float xmm0_179 = xmm0_177 * 0.5f
                                int32_t var_fc_2 = sub_4145b0(xmm0_179)
                                float xmm0_182 = sub_4145d0(xmm0_179)
                                float xmm1_97[0x4] = xmm0_182 * 0f
                                float var_100_10 = xmm0_182
                                var_108 = _mm_unpacklo_ps(xmm1_97, xmm1_97)
                                xmm0_178 = var_108.o
                            else
                                xmm0_178 = data_5724f8
                            
                            bool cond:3_1 = *(esi_2 + 0x130) != 4
                            var_118 = xmm0_178
                            float xmm0_183[0x4] = var_118
                            var_1ac = 0f
                            var_118 = xmm0_183
                            var_1b4 = 0
                            
                            if (not(cond:3_1))
                                int64_t xmm1_99 = *(arg3 + 0xc)
                                var_180 = xmm1_99
                                float xmm1_100 = *(arg3 + 0x10)
                                float xmm1_102 = *(arg3 + 0x14)
                                float xmm1_104 = 1f / (sub_412d90(xmm1_99.d f* xmm1_99
                                    + xmm1_100 * xmm1_100 + xmm1_102 * xmm1_102) + 9.99999975e-06f)
                                float var_fc_3 = *(arg3 + 0x14) * xmm1_104
                                var_108 =
                                    _mm_unpacklo_ps(var_180.d f* xmm1_104, *(arg3 + 0x10) * xmm1_104)
                                var_48 = *sub_413180(&var_1a8, &data_5718bc, &var_108:4, &var_1a8)
                            
                            float xmm2_58[0x4] = *(esi_2 + 0x100)
                            xmm2_58 f- 0
                            int128_t* eax_101
                            eax_101:1.b = (xmm2_58 f== 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_58, 0f) ? 1 : 0) << 2 | (xmm2_58 f< 0f ? 1 : 0)
                            bool p_28 = unimplemented  {test ah, 0x44}
                            bool p_30
                            
                            if (not(p_28))
                                float xmm0_194 = *(esi_2 + 0x104)
                                xmm0_194 f- 0
                                eax_101:1.b = (xmm0_194 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_194, 0f) ? 1 : 0) << 2
                                    | (xmm0_194 < 0f ? 1 : 0)
                                p_30 = unimplemented  {test ah, 0x44}
                            
                            if (p_28 || p_30)
                                int32_t var_1a0_7 = 0
                                int32_t var_fc_4 = 0
                                var_108 = _mm_unpacklo_ps(xmm2_58, *(esi_2 + 0x104))
                                float* eax_105 = sub_45c5b0(&var_1a8, &var_108:4, &var_118, &var_1a8)
                                float eax_106 = eax_105[2]
                                var_f4 = *eax_105
                                float xmm0_198 = arg2[2] f* eax_106
                                var_1b4 = _mm_unpacklo_ps(*arg2 f* var_f4.d, arg2[1] f* var_f4:4.d)
                                var_1ac = xmm0_198
                            
                            int32_t* edx_31 = &var_118
                            int128_t* eax_110 = sub_49fbe0(&var_a8, edx_31, &var_1b4, &var_a8, arg2)
                            var_e8 = *eax_110
                            var_d8 = eax_110[1]
                            var_c8 = eax_110[2]
                            int128_t var_b8_2 = eax_110[3]
                            void var_218
                            int128_t* eax_112 = sub_45c3f0(&var_218, edx_31, &var_48, &var_218)
                            var_a8 = *eax_112
                            var_98 = eax_112[1]
                            int128_t var_88_3 = eax_112[2]
                            int128_t var_78_3 = eax_112[3]
                            float* eax_114 = sub_45c930(&var_218, &var_e8, &var_a8, &var_218)
                            var_38_1[1] = 0
                            bool cond:4_1 = *(arg3 + 0x40) == 0
                            var_38_1[2] = 0
                            int128_t xmm0_207 = *(eax_114 + 0x20)
                            var_38_1[3] = 0x3f800000
                            float xmm1_107[0x4] = *eax_114
                            float xmm2_63[0x4] = *(eax_114 + 0x10)
                            var_c8 = xmm0_207
                            int128_t xmm0_208 = *(eax_114 + 0x30)
                            float var_4c = xmm1_107
                            int128_t var_b8_3 = xmm0_208
                            var_48:8.d = xmm2_63
                            var_48.d = _mm_shuffle_ps(xmm1_107, xmm1_107, 0x55)
                            int32_t xmm0_212 = _mm_shuffle_ps(xmm2_63, xmm2_63, 0x55)
                            int32_t xmm1_108 = _mm_shuffle_ps(xmm1_107, xmm1_107, 0xff)
                            int32_t xmm2_64 = _mm_shuffle_ps(xmm2_63, xmm2_63, 0xff)
                            var_48:4.d = xmm1_108
                            var_48:0xc.d = xmm0_212
                            var_38_1[0] = xmm2_64
                            int32_t* esi_5
                            
                            if (cond:4_1 || *(esi_2 + 0xe0) == 0)
                                esi_5 = var_16c_1
                            else
                                float xmm0_214 = var_1ac + 0f
                                var_108 = _mm_unpacklo_ps(var_1b4.d - 1f, var_1b4:4.d + 1f)
                                float var_fc_5 = xmm0_214
                                int128_t* eax_117 =
                                    sub_49fbe0(&var_218, &var_118, &var_108:4, &var_218, arg2)
                                var_e8 = *eax_117
                                var_d8 = eax_117[1]
                                var_c8 = eax_117[2]
                                int128_t var_b8_4 = eax_117[3]
                                float* eax_119 = sub_45c930(&var_218, &var_e8, &var_a8, &var_218)
                                esi_5 = var_16c_1
                                int32_t* var_154_1
                                var_154_1.w = 0
                                var_154_1:2.b = 0
                                var_b8_4:4.d = 0
                                float xmm1_111[0x4] = *eax_119
                                float xmm2_68[0x4] = *(eax_119 + 0x10)
                                var_b8_4:8.d = 0
                                int128_t var_88_4 = *(eax_119 + 0x20)
                                var_b8_4:0xc.d = 0x3f800000
                                int128_t xmm0_220 = *(eax_119 + 0x30)
                                eax_119.b = var_14d_1
                                eax_119.b u>>= 2
                                var_154_1:3.b = eax_119.b
                                int128_t var_78_4 = xmm0_220
                                int32_t var_154_3 = 0
                                int32_t var_178_13 = 0
                                var_c8.d = _mm_shuffle_ps(xmm1_111, xmm1_111, 0x55)
                                int32_t xmm0_224 = _mm_shuffle_ps(xmm2_68, xmm2_68, 0x55)
                                var_d8:0xc.d = xmm1_111
                                var_c8:8.d = xmm2_68
                                int32_t xmm1_112 = _mm_shuffle_ps(xmm1_111, xmm1_111, 0xff)
                                int32_t xmm2_69 = _mm_shuffle_ps(xmm2_68, xmm2_68, 0xff)
                                var_180:4.d = 0
                                var_c8:4.d = xmm1_112
                                var_c8:0xc.d = xmm0_224
                                var_b8_4.d = xmm2_69
                                sub_47d3c0(&var_1c8, &var_d8:0xc, var_14c_1.d, &var_1c8, &var_180:4, 
                                    esi_5)
                            
                            int32_t* eax_123 = var_14c_1.d
                            
                            if (eax_123 == 0)
                                int32_t var_228_33 = 0x53
                                void* eax_122 = *(sub_4459f0(esi_5) + 4)
                                eax_123 = sub_4b8b40(eax_122, *(eax_122 + 4) + 4, &data_5b6224, 0x53)
                            
                            result = sub_47d3c0(eax_123, &var_4c, eax_123, &var_1c8, &var_190:4, esi_5)
                            data_65b360.d = 0
                        else
                            if (edx_6 == 0)
                                void* ecx_24 = *fsbase->ThreadLocalStoragePointer
                                int32_t* eax_49
                                
                                if (*(esi_2 + 0xe1) == edx_6.b)
                                    if (data_e499f0 s> *(ecx_24 + 4))
                                        int32_t* var_228_13 = &data_e499f0
                                        __Init_thread_header(&data_e499f0)
                                        
                                        if (data_e499f0 == 0xffffffff)
                                            int32_t var_14_5 = 2
                                            int32_t* var_228_14 = &data_e499f0
                                            data_e499f4 = sub_48d5b0("sys/particle_3d.material", 5)
                                            int32_t var_14_6 = 0xffffffff
                                            __Init_thread_footer(&data_e499f0)
                                    
                                    eax_49 = data_e499f4
                                else
                                    if (data_e499e8 s> *(ecx_24 + 4))
                                        int32_t* var_228_11 = &data_e499e8
                                        __Init_thread_header(&data_e499e8)
                                        
                                        if (data_e499e8 == 0xffffffff)
                                            int32_t var_14_3 = 1
                                            int32_t* var_228_12 = &data_e499e8
                                            data_e499ec =
                                                sub_48d5b0("sys/particle_3d_additive.material", 5)
                                            int32_t var_14_4 = 0xffffffff
                                            __Init_thread_footer(&data_e499e8)
                                    
                                    eax_49 = data_e499ec
                                
                                var_16c_1 = eax_49
                            
                            int32_t ecx_25
                            
                            if (*(esi_2 + 0xe2) != 0 || *(esi_2 + 0xe3) != 0)
                                ecx_25 = *(arg3 + 0x284)
                            
                            if ((*(esi_2 + 0xe2) == 0 && *(esi_2 + 0xe3) == 0) || ecx_25 s<= 1)
                                __builtin_memcpy(&var_98, 
                                    "\x00\x00\x00\xbf\x00\x00\x00\xbf\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x"
                                "00\x00\xbf\x00\x00\x00\x00\x00\x00\x00\xbf\x00\x00\x00\x3f\x00\x00\x00"
                                "00\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x00", 
                                    0x30)
                                int32_t* ecx_33 = &var_1c8
                                sub_47c080(ecx_33, &var_c8)
                                var_1b4:4.d = *(esi_2 + 0xf8)
                                var_1ac = *(esi_2 + 0xfc)
                                
                                if (*(*(*(arg3 + 0x30) + 0x2e4) + 0x18) != 0)
                                    float eax_70
                                    float edx_20
                                    eax_70, ecx_33, edx_20 = sub_432570(var_14c_1.d)
                                    float xmm0_103 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xf4)))
                                    var_180:4.d = eax_70
                                    float xmm3_26 = var_180:4.d * 0.00999999978f / xmm0_103
                                    float xmm0_105 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xf0)))
                                    var_1b4:4.d = xmm3_26
                                    var_1ac = edx_20 * 0.00999999978f / xmm0_105
                                
                                int32_t eax_71 = *(esi_2 + 0x130)
                                
                                if (eax_71 u> 4)
                                    char const* const var_228_39 = "ParticleSpotDraw"
                                    int32_t var_22c_19 = 0x94c
                                    char const* const var_230_17 = "c:\ax2017\engine\particle.cpp"
                                    sub_44e4d0(eax_71, &data_5559b1, "Halt", 
                                        "c:\ax2017\engine\particle.cpp", 0x94c, "ParticleSpotDraw")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                float xmm7_6 = var_38_1[3]
                                int128_t xmm1_47 = data_65aeb0
                                int128_t* eax_74
                                void* edx_22
                                int128_t xmm0_127
                                int64_t xmm2_33
                                
                                switch (eax_71)
                                    case 0
                                        var_1c8[3] = sub_4145b0(-0.785398185f)
                                        float xmm0_107[0x4] = sub_4145d0(-0.785398185f)
                                        ecx_33 = &var_118
                                        int64_t xmm1_49 = xmm0_107[0] * 0f
                                        int64_t xmm0_108 = _mm_unpacklo_ps(xmm0_107, xmm1_49)
                                        var_1c8[2] = xmm1_49
                                        var_1c8[0].q = xmm0_108
                                        var_118 = var_1c8
                                        xmm0_127 = *sub_47f1e0(&var_1c8, &var_48:4, ecx_33, &var_1c8)
                                        xmm1_47 = data_65aeb0
                                    case 1
                                        int64_t xmm0_110 = data_65aec0
                                        float xmm2_26 = var_38_1[2]
                                        int32_t eax_75 = data_65aec8
                                        var_128 = xmm1_47
                                        var_118[3] = eax_75
                                        float xmm3_28 = xmm7_6 - var_118[3]
                                        var_118[1].q = xmm0_110
                                        float xmm1_51 = var_38_1[1] - var_118[1]
                                        float xmm2_27 = xmm2_26 - var_118[2]
                                        float xmm3_29 = 1f / (sub_412d90(xmm1_51 * xmm1_51
                                            + xmm2_27 * xmm2_27 + xmm3_28 * xmm3_28) + 9.99999975e-06f)
                                        float xmm4_21[0x4] = xmm3_29 * xmm1_51
                                        int64_t xmm2_29 = xmm3_29 * xmm2_27
                                        float xmm3_30 = xmm3_29 * xmm3_28
                                        var_f4 = _mm_unpacklo_ps(xmm4_21, xmm2_29)
                                        float xmm3_31 = xmm3_30 * 0f
                                        float var_ec_5 = xmm3_30
                                        float xmm1_57 = xmm2_29.d - xmm3_31
                                        float xmm3_32 = xmm3_31 f- xmm4_21
                                        float xmm4_23 = xmm4_21 f* 0f - xmm2_29 f* 0f
                                        edx_22 = &data_5718bc
                                        float xmm1_62 = 1f / (sub_412d90(xmm1_57 * xmm1_57
                                            + xmm3_32 * xmm3_32 + xmm4_23 * xmm4_23) + 9.99999975e-06f)
                                        xmm2_33 = _mm_unpacklo_ps(xmm1_62 * xmm1_57, xmm1_62 * xmm3_32)
                                        float var_178_7 = xmm1_62 * xmm4_23
                                    label_49e0c1:
                                        var_180 = xmm2_33
                                        eax_74, ecx_33 = sub_413000(&var_118, edx_22, &data_571928, 
                                            &var_118, &var_180, &var_f4)
                                        xmm0_127 = *eax_74
                                        xmm1_47 = data_65aeb0
                                    case 2
                                        xmm0_127 = data_5724f8
                                    case 3
                                        float xmm3_33 = var_48:4.d
                                        float xmm2_34 = var_38_1[0]
                                        float xmm5_9 = var_48:0xc.d
                                        var_118[1].q = data_65aec0
                                        var_128 = xmm1_47
                                        float xmm1_64 = var_48:8.d
                                        var_118[3] = data_65aec8
                                        float xmm6_8 = xmm3_33 * xmm5_9 + xmm2_34 * xmm1_64
                                        float xmm6_9[0x4] = xmm6_8 + xmm6_8
                                        float xmm4_26 = xmm5_9 * xmm1_64 - xmm3_33 * xmm2_34
                                        float xmm1_67 = var_118[1] - var_38_1[1]
                                        float var_158_5 = xmm6_9
                                        float xmm3_36 = var_118[3] - xmm7_6
                                        int64_t xmm4_27 = xmm4_26 + xmm4_26
                                        float xmm5_13 = xmm5_9 * xmm5_9 - xmm1_64 * xmm1_64
                                            - xmm3_33 * xmm3_33 + xmm2_34 * xmm2_34
                                        float xmm2_37 = var_118[2] - var_38_1[2]
                                        var_f4 = _mm_unpacklo_ps(xmm6_9, xmm4_27)
                                        float var_ec_6 = xmm5_13
                                        float var_194_4 = xmm4_27
                                        float xmm1_72 = 1f / (sub_412d90(xmm1_67 * xmm1_67
                                            + xmm2_37 * xmm2_37 + xmm3_36 * xmm3_36) + 9.99999975e-06f)
                                        float xmm5_15 = xmm1_72 * xmm2_37
                                        float xmm1_73 = xmm1_72 * xmm3_36
                                        float xmm2_39 = xmm1_72 * xmm1_67
                                        float xmm3_39 = xmm2_39 * xmm5_13 - xmm1_73 * var_158_5
                                        float xmm4_30 = xmm1_73 * var_194_4 - xmm5_15 * xmm5_13
                                        float xmm5_17 = xmm5_15 * var_158_5 - var_194_4 * xmm2_39
                                        float xmm0_148 = sub_412d90(xmm4_30 * xmm4_30
                                            + xmm3_39 * xmm3_39 + xmm5_17 * xmm5_17) + 9.99999975e-06f
                                        edx_22 = &var_108:4
                                        float xmm1_79 = 1f / xmm0_148
                                        xmm2_33 = _mm_unpacklo_ps(xmm1_79 * xmm4_30, xmm1_79 * xmm3_39)
                                        int32_t var_1a0_3 = 0x80000000
                                        float var_178_10 = xmm1_79 * xmm5_17
                                        var_108 = _mm_unpacklo_ps(0x80000000, 0xbf800000)
                                        int32_t var_fc_1 = 0x80000000
                                        goto label_49e0c1
                                    case 4
                                        eax_74, ecx_33 =
                                            sub_49ff30(&var_118, arg3 + 0xc, &data_571928, &var_118)
                                        xmm0_127 = *eax_74
                                        xmm1_47 = data_65aeb0
                                
                                var_48 = xmm0_127
                                float xmm0_151 = arg2[3]
                                xmm0_151 - 0f
                                int32_t* eax_83
                                eax_83:1.b = (xmm0_151 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_151, 0f) ? 1 : 0) << 2
                                    | (xmm0_151 < 0f ? 1 : 0)
                                bool p_20 = unimplemented  {test ah, 0x44}
                                int32_t* eax_87
                                
                                if (not(p_20))
                                    eax_87 = arg2
                                else
                                    int64_t xmm0_152 = data_65aec0
                                    var_118[3] = data_65aec8
                                    var_118[1].q = xmm0_152
                                    var_128 = xmm1_47
                                    float eax_86 = eax_8[0x12]
                                    var_f4 = *(eax_8 + 0x40)
                                    float xmm1_83 = var_f4.d - var_118[1]
                                    float xmm2_43 = var_f4:4.d - var_118[2]
                                    float xmm3_41 = eax_86 - var_118[3]
                                    float xmm0_158
                                    ecx_33, xmm0_158 = sub_412d90(xmm1_83 * xmm1_83 + xmm2_43 * xmm2_43
                                        + xmm3_41 * xmm3_41)
                                    eax_87 = arg2
                                    float xmm1_88 = 1f / (xmm0_158 + 9.99999975e-06f)
                                    float xmm1_89 = eax_87[3]
                                    float xmm2_47 = xmm2_43 * xmm1_88 * xmm1_89 + var_38_1[2]
                                    float xmm3_45 = xmm3_41 * xmm1_88 * xmm1_89 + var_38_1[3]
                                    var_38_1[1] = xmm1_83 * xmm1_88 * xmm1_89 + var_38_1[1]
                                    var_38_1[2] = xmm2_47
                                    var_38_1[3] = xmm3_45
                                
                                int32_t* var_22c_7 = ecx_33
                                float var_148[0x8]
                                sub_49bff0(&var_1b4:4, &var_48, &var_148, &var_1b4:4, esi_2 + 0x100, 
                                    *(arg3 + 0x24), eax_87)
                                float (* ecx_36)[0x4] = &var_98
                                sub_49a3a0(ecx_36, &var_148)
                                float xmm0_165 = arg2[0x17]
                                xmm0_165 f- 0
                                float eax_90
                                eax_90:1.b = (xmm0_165 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_165, 0f) ? 1 : 0) << 2
                                    | (xmm0_165 < 0f ? 1 : 0)
                                bool p_22 = unimplemented  {test ah, 0x44}
                                bool p_24
                                
                                if (not(p_22))
                                    float xmm0_166 = arg2[0x18]
                                    xmm0_166 f- 0
                                    eax_90:1.b = (xmm0_166 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_166, 0f) ? 1 : 0) << 2
                                        | (xmm0_166 < 0f ? 1 : 0)
                                    p_24 = unimplemented  {test ah, 0x44}
                                
                                if (p_22 || p_24)
                                    void* edx_27 = &var_98[2]
                                    int32_t* i_3 = nullptr
                                    float* var_154_2 = &var_98[2]
                                    int32_t* i
                                    
                                    do
                                        int32_t eax_92 = data_65aec8
                                        float xmm3_46 = *(edx_27 - 8)
                                        float xmm1_90 = *(edx_27 - 4)
                                        float xmm2_48 = *edx_27
                                        var_128 = data_65aeb0
                                        var_118[3] = eax_92
                                        float xmm2_49 = xmm2_48 - var_118[3]
                                        var_118[1].q = data_65aec0
                                        float xmm3_47 = xmm3_46 - var_118[1]
                                        float xmm1_91 = xmm1_90 - var_118[2]
                                        float xmm3_53 = (sub_412d90(xmm3_47 * xmm3_47
                                            + xmm1_91 * xmm1_91 + xmm2_49 * xmm2_49) f- arg2[0x17])
                                            / (arg2[0x18] f- arg2[0x17])
                                        int32_t xmm0_173 = (zx.o(0)).d
                                        
                                        if (not(0 f>= xmm3_53))
                                            if (xmm3_53 < 1f)
                                                xmm0_173 = sub_4145f0(1, xmm3_53, (zx.o(0)).d, 1f)
                                            else
                                                xmm0_173 = 0x3f800000
                                        
                                        char* var_15c_6 = sub_47bf90(&var_190:4, &data_65ae40, xmm0_173)
                                        edx_27 = &var_154_2[3]
                                        char* eax_93
                                        eax_93.b = var_18c_1:3.b
                                        var_15c_6:3.b = eax_93.b
                                        *(&var_48:4 + (i_3 << 3)) = eax_11
                                        *(&var_48 + (i_3 << 3)) = var_15c_6
                                        i = i_3 + 1
                                        i_3 = i
                                        var_154_2 = edx_27
                                    while (i s< 4)
                                    
                                    float xmm1_94[0x4] = var_98
                                    int32_t* var_228_24 = var_16c_1
                                    int128_t var_78_2
                                    float xmm3_55 =
                                        var_78_2:8.d + _mm_shuffle_ps(xmm1_94, xmm1_94, 0x55)
                                    int32_t var_240_1 = 1
                                    float xmm2_55 =
                                        (var_78_2:0xc.d + _mm_shuffle_ps(xmm1_94, xmm1_94, 0xaa)) * 0.5f
                                    result = sub_457e00(&var_48, &var_c8, &var_98, &var_48, 1, 
                                        _mm_unpacklo_ps((var_78_2:4.d f+ xmm1_94) * 0.5f, 
                                            xmm3_55 * 0.5f), 
                                        xmm2_55, var_14c_1.d, i)
                                    data_65b360.d = 0
                                else
                                    result = sub_4585d0(&var_190:4, &var_c8, ecx_36, &var_190:4, 
                                        var_14c_1.d, var_16c_1)
                                    data_65b360.d = 0
                            else
                                void* eax_51 = *(*(arg3 + 0x30) + 0x2e4)
                                
                                if (*(eax_51 + 0x75) == 0)
                                    int32_t eax_52 = ecx_25 * 9
                                    int32_t var_ec_3 = *(arg3 + (eax_52 << 2) + 0x28)
                                    var_f4 = *(arg3 + (eax_52 << 2) + 0x20)
                                    int64_t* eax_55 = sub_49fd50(&var_1a8, &var_f4, arg4, &var_1a8)
                                    int32_t eax_56 = eax_55[1].d
                                    var_f4 = *eax_55
                                    int32_t var_ec_4 = eax_56
                                    eax_51 = sub_45ade0(&var_f4)
                                    ecx_25 = *(arg3 + 0x284)
                                
                                if (ecx_25 s> 0x10)
                                    char const* const var_228_38 = "ParticleSpotDraw"
                                    int32_t var_22c_18 = 0x8dd
                                    char const* const var_230_16 = "c:\ax2017\engine\particle.cpp"
                                    sub_44e4d0(eax_51, &data_5559b1, 
                                        "pSpot->numTrailSegments <= MAX_TRAIL_SEGMENTS", 
                                        "c:\ax2017\engine\particle.cpp", 0x8dd, "ParticleSpotDraw")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                int32_t i_2 = 1
                                
                                if (ecx_25 s> 1)
                                    void* esi_3 = arg3 + 0x8c
                                    int32_t i_1
                                    
                                    do
                                        sub_47c080(&var_1c8, &var_c8)
                                        int128_t* var_228_16 = &var_1c8
                                        float* ecx_29 = esi_3
                                        
                                        if (i_2 == *(arg3 + 0x284) - 1)
                                            ecx_29 = nullptr
                                        
                                        int32_t edx_14 = neg.d(i_2 - 1)
                                        int32_t var_238_2 = 4
                                        sub_459e70(
                                            sub_49c870(esi_3 - 0x6c, 
                                                sbb.d(edx_14, edx_14, i_2 != 1) & (esi_3 - 0x6c), 
                                                &var_98, esi_3 - 0x48, esi_3 - 0x24, ecx_29, 
                                                *(esi_3 - 0x2c)), 
                                            &var_98, arg4)
                                        sub_4585d0(&var_190:4, &var_c8, &var_98, &var_190:4, 
                                            var_14c_1.d, var_16c_1)
                                        i_1 = i_2 + 1
                                        esi_3 += 0x24
                                        i_2 = i_1
                                    while (i_1 s< *(arg3 + 0x284))
                                
                                result = *(*(arg3 + 0x30) + 0x2e4)
                                
                                if (*(result + 0x75) != 0)
                                    data_65b360.d = 0
                                else
                                    sub_45ae60()
                                    data_65b360.d = 0
            else
                void* eax_10 = data_65ae00
                var_1a8 = 0f
                int32_t var_1a4_1 = 0
                int32_t var_1a0_1 = _mm_cvtepi32_ps(zx.o(*(eax_10 + 0x14)))
                int32_t var_19c_1 = _mm_cvtepi32_ps(zx.o(*(eax_10 + 0x18)))
                var_118 = var_1a8.o
                result = sub_47d680(&var_118, &var_1ac)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
