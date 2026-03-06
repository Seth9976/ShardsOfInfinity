// 函数名称: sub_457570
// 虚拟地址: 0x457570
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_457570(int128_t* arg1)
{
    // 第一条实际指令: float var_ec
    float var_ec
    int32_t eax_1 = __security_cookie ^ &var_ec
    data_65ae08.o = *arg1
    data_65ae18 = arg1[1]
    uint128_t xmm1 = arg1[2]
    data_65ae28 = xmm1
    data_65ae38.q = arg1[3].q
    int64_t xmm0_3 = data_65ae28:4.q
    float xmm1_1 = _mm_bsrli_si128(xmm1, 0xc)
    int128_t xmm0_4 = data_65ae18:4.o
    int128_t var_80 = xmm0_4
    uint32_t eax_2 = sub_45c2a0(&var_80)
    int32_t var_f8
    char* ecx_1
    
    if (eax_2.b != 0)
        void* eax_3 = data_65ae00
        data_65ae94 = xmm0_4
        data_65aeac = xmm1_1
        data_65aea4 = xmm0_3
        
        if (*(eax_3 + 0x27) == 0)
            data_65ae74 = xmm1_1
            data_65ae90 = xmm1_1
            data_65aec8 = xmm1_1
            data_65ae6c = xmm0_3
            data_65ae5c = xmm0_4
            data_65ae78 = xmm0_4
            data_65ae88 = xmm0_3
            data_65aeb0 = xmm0_4
            data_65aec0 = xmm0_3
            @__security_check_cookie@4(eax_1 ^ &var_ec)
            return eax_3
        
        int64_t xmm0_6 = data_ce1a34
        float eax_4 = data_ce1a3c
        int128_t var_40 = data_ce1a4c
        eax_2 = sub_45c2a0(&var_40)
        
        if (eax_2.b != 0)
            int64_t xmm0_8 = data_ce1a40
            float eax_5 = data_ce1a48
            int128_t var_60 = data_ce1a5c
            eax_2 = sub_45c2a0(&var_60)
            
            if (eax_2.b != 0)
                float xmm3 = xmm0_6:4.d
                float xmm5 = var_80.d
                float xmm2_3 = (xmm0_8.d f- xmm0_6.d) * 0.5f f+ xmm0_6.d
                float xmm4_1 = xmm5 * xmm5
                float xmm1_6 = (xmm0_8:4.d - xmm3) * 0.5f + xmm3
                float xmm0_10 = var_80:8.d
                float xmm1_10 = (eax_5 - eax_4) * 0.5f + eax_4
                float xmm6_1 = xmm0_10 * xmm0_10
                float xmm2_5 = eax_4 + eax_4
                float xmm1_11 = var_80:0xc.d
                var_ec = xmm1_11 * xmm1_11
                float xmm1_13 = var_80:4.d
                float xmm7_1 = xmm1_13 * xmm1_13
                float xmm1_14 = xmm1_13 * xmm5
                float xmm5_2 = xmm0_10 f* var_80:0xc.d
                float xmm0_11 = xmm0_10 f* var_80.d
                float xmm5_4 = xmm1_14 - xmm5_2
                float xmm5_6 = xmm3 + xmm3
                float xmm3_4 = xmm4_1 + var_ec - xmm7_1 - xmm6_1
                float xmm3_6 = var_80:4.d f* var_80:0xc.d
                float xmm0_12 = xmm0_11 + xmm3_6
                float xmm0_18 = xmm5_2 + xmm1_14
                float xmm1_16 = var_ec - xmm4_1
                float xmm4_3 = var_80.d f* var_80:0xc.d
                float xmm0_19 = xmm0_6.d
                var_ec = xmm1_16
                float xmm0_20 = xmm0_19 + xmm0_19
                float xmm1_18 = xmm1_16 + xmm7_1 - xmm6_1
                float xmm1_20 = var_80:8.d f* var_80:4.d
                float xmm4_5 = xmm1_20 - xmm4_3
                float xmm0_23 = xmm0_11 - xmm3_6
                float xmm3_7 = var_40:0xc.d
                float xmm0_25 = xmm4_3 + xmm1_20
                float xmm7_2 = var_80:8.d
                float xmm1_23 = var_ec - xmm7_1 + xmm6_1
                var_ec = xmm1_23
                float xmm4_10 = var_40.d
                float xmm0_30 = xmm0_3.d
                float xmm5_11 = var_80:0xc.d * xmm3_7
                float xmm2_11 = var_40:4.d
                int64_t xmm6_4 = _mm_unpacklo_ps(
                    xmm0_30 + xmm5_6 * xmm5_4 + xmm3_4 f* xmm0_6.d + xmm2_5 * xmm0_12, 
                    xmm0_3:4.d + xmm0_6:4.d * xmm1_18 + xmm0_20 * xmm0_18 + xmm2_5 * xmm4_5)
                float xmm1_26 = var_40:8.d
                int128_t var_90
                var_90:8.d = xmm1_1 + xmm5_6 * xmm0_25 + xmm0_23 * xmm0_20 + eax_4 * xmm1_23
                float xmm5_14 = xmm5_11 - var_80.d * xmm4_10 - var_80:4.d * xmm2_11 - xmm7_2 * xmm1_26
                float xmm5_19 =
                    var_80.d * xmm3_7 + var_80:0xc.d * xmm4_10 + var_80:4.d * xmm1_26 - xmm7_2 * xmm2_11
                float xmm5_24 =
                    var_80:4.d * xmm3_7 + var_80:0xc.d * xmm2_11 + xmm7_2 * xmm4_10 - var_80.d * xmm1_26
                float xmm7_5 = xmm7_2 * xmm3_7 + var_80:0xc.d * xmm1_26 + var_80.d * xmm2_11
                float xmm0_56 = var_80:4.d * xmm4_10
                data_65ae74 = var_90:8.d
                var_40:4.d = xmm5_24
                float xmm5_25 = xmm0_8:4.d
                float xmm7_6 = xmm7_5 - xmm0_56
                float xmm1_28 = eax_5 + eax_5
                var_40.d = xmm5_19
                float xmm3_9 = xmm5_25 + xmm5_25
                var_40:0xc.d = xmm5_14
                data_65ae6c = xmm6_4
                float xmm6_5 = xmm0_8.d
                float xmm4_12 = eax_5 * var_ec
                float xmm6_6 = xmm6_5 + xmm6_5
                var_40:8.d = xmm7_6
                data_65ae5c = var_40
                float xmm3_11 = var_60.d
                float xmm4_13 = var_60:8.d
                float xmm5_29 = var_60:0xc.d
                float xmm2_16 = var_60:4.d
                var_90:8.d = xmm1_1 + xmm6_6 * xmm0_23 + xmm3_9 * xmm0_25 + xmm4_12
                float xmm0_69 = xmm3_11 f* var_80:0xc.d
                int64_t xmm6_12 = _mm_unpacklo_ps(
                    xmm0_30 + xmm6_5 * xmm3_4 + xmm5_4 * xmm3_9 + xmm0_12 * xmm1_28, 
                    xmm0_3:4.d + xmm5_25 * xmm1_18 + xmm6_6 * xmm0_18 + xmm1_28 * xmm4_5)
                var_60.d = xmm5_29 f* var_80.d + xmm0_69 + xmm4_13 f* var_80:4.d - xmm2_16 f* var_80:8.d
                var_60:4.d = xmm5_29 f* var_80:4.d + xmm2_16 f* var_80:0xc.d + xmm3_11 f* var_80:8.d
                    - xmm4_13 f* var_80.d
                float xmm1_43 = xmm5_29 f* var_80:8.d
                float xmm0_81 = xmm4_13 f* var_80:0xc.d
                data_65ae90 = var_90:8.d
                float xmm5_30 = xmm5_29 f* var_80:0xc.d
                float xmm4_14 = xmm4_13 f* var_80:8.d
                data_65ae88 = xmm6_12
                float xmm6_14 = xmm2_3 + xmm2_3
                var_60:8.d = xmm1_43 + xmm0_81 + xmm2_16 f* var_80.d - xmm3_11 f* var_80:4.d
                float xmm3_14 = xmm1_6 + xmm1_6
                var_60:0xc.d = xmm5_30 - xmm3_11 f* var_80.d - xmm2_16 f* var_80:4.d - xmm4_14
                data_65ae78 = var_60
                float xmm0_88 = xmm1_10 + xmm1_10
                var_60:8.d = xmm7_6
                var_90:8.d = xmm1_1 + xmm3_14 * xmm0_25 + xmm6_14 * xmm0_23 + xmm1_10 * var_ec
                int32_t eax_8 = var_90:8.d
                var_60.d = xmm5_19
                var_60:4.d = xmm5_24
                var_60:0xc.d = xmm5_14
                int128_t xmm0_95 = var_60
                data_65aec8 = eax_8
                int64_t xmm4_19 = _mm_unpacklo_ps(
                    xmm0_30 + xmm2_3 * xmm3_4 + xmm5_4 * xmm3_14 + xmm0_12 * xmm0_88, 
                    xmm0_3:4.d + xmm6_14 * xmm0_18 + xmm1_6 * xmm1_18 + xmm0_88 * xmm4_5)
                data_65aeb0 = xmm0_95
                data_65aec0 = xmm4_19
                @__security_check_cookie@4(eax_1 ^ &var_ec)
                return eax_8
            
            char const* const var_f4_2 = "Draw3DSetCamera"
            var_f8 = 0x3e2
            ecx_1 = "QuatIsValid(eyeRight.orientation)"
        else
            char const* const var_f4_1 = "Draw3DSetCamera"
            var_f8 = 0x3dd
            ecx_1 = "QuatIsValid(eyeLeft.orientation)"
    else
        char const* const var_f4 = "Draw3DSetCamera"
        var_f8 = 0x3d4
        ecx_1 = "QuatIsValid(mainPose.orientation)"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx_1, "c:\ax2017\engine\draw3d.cpp", var_f8, "Draw3DSetCamera")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
