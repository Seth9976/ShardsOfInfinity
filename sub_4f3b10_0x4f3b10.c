// 函数名称: sub_4f3b10
// 虚拟地址: 0x4f3b10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4f3b10(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void var_b8
    void var_b8
    int32_t eax_1 = __security_cookie ^ &var_b8
    int32_t* esi = arg1
    int32_t* var_ac = esi
    int32_t* result
    int32_t mxcsr
    
    if (*(*(arg2 + 0x58) + 4) == 0x20)
        result, mxcsr = sub_4f9530(arg1)
    
    if (*(*(arg2 + 0x58) + 4) != 0x20 || result.b == 0)
        int32_t eax_4 = *esi
        
        if (eax_4 == 9)
            float xmm5_2 = float.s(esi[3]) * 0.00150000001f
            float xmm0_4 = (*(arg2 + 0x30) f- *(arg2 + 0x24)) * xmm5_2 f+ *(arg2 + 0x24)
            int64_t xmm6_5 = _mm_unpacklo_ps(
                (*(arg2 + 0x28) f- *(arg2 + 0x1c)) * xmm5_2 f+ *(arg2 + 0x1c), 
                (*(arg2 + 0x2c) f- *(arg2 + 0x20)) * xmm5_2 f+ *(arg2 + 0x20))
            *(arg2 + 0x1c) = xmm6_5
            *(arg2 + 0x24) = xmm0_4
            eax_4 = *esi
        
        int64_t var_a8_1 = 0
        float var_9c
        float var_60
        float var_40[0x4]
        int128_t var_3c
        
        if (eax_4 == 3)
            void* eax_5 = *(arg2 + 0x58)
            
            if (eax_5 != 0 && *(eax_5 + 4) == 0x19)
                int16_t x87control_1 =
                    sub_4d5420(eax_5, &data_ce2728, &var_40, &data_ce271c, &data_5718bc)
                void* esi_1 = data_65ae00
                var_60 = 0f
                int32_t var_5c_1 = 0
                int32_t var_58_2 = _mm_cvtepi32_ps(zx.o(*(esi_1 + 0x14)))
                int32_t var_54_1 = _mm_cvtepi32_ps(zx.o(*(esi_1 + 0x18)))
                int128_t var_8c_1 = var_60.o
                double xmm0_11 = __libm_sse2_tan_precise(mxcsr, x87control_1, 0x3fe0c15240000000)
                uint128_t xmm2_1 = zx.o(*(esi_1 + 0x14))
                float xmm1_1 = fconvert.s(xmm0_11)
                int32_t var_64_1 = data_ce2724
                float xmm0_13 = _mm_cvtepi32_ps(zx.o(*(esi_1 + 0x18)))
                esi = var_ac
                float var_90_1 = xmm1_1
                float xmm2_4 = _mm_cvtepi32_ps(xmm2_1) / xmm0_13 * xmm1_1
                float var_94_1 = xmm2_4
                var_9c = xmm2_4 ^ (data_59e5c0.o).d
                int32_t var_98_1 = xmm1_1 ^ (data_59e5c0.o).d
                int64_t var_6c_1 = data_ce271c.q
                int128_t var_7c_1 = var_3c
                int64_t* eax_8 = sub_4b7dc0(&var_60, &esi[4], &var_9c, &var_60)
                float xmm2_5 = var_a8_1.d
                float xmm3_1[0x4] = *eax_8
                var_3c:0xc.q = eax_8[2]
                float xmm5_3 = var_3c:0xc.d
                var_40 = xmm3_1
                float xmm3_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
                float var_2c
                float xmm1_6 = xmm5_3 * xmm2_5 + xmm3_2 * xmm2_5 + var_2c
                
                if (not(9.99999975e-06f f> sub_41b760(xmm1_6)))
                    float xmm6_6 = var_3c.d
                    float xmm7_1 = var_40[0]
                    float xmm1_11 = xmm6_6 * xmm2_5 + xmm7_1 * xmm2_5 f+ var_3c:4.d + -0f
                    
                    if (not(xmm2_5 < xmm1_11 * xmm1_6))
                        int32_t* ecx_2 = *(arg2 + 0x58)
                        float xmm1_13 = (xmm1_11 / xmm1_6) ^ (data_59e5c0.o).d
                        float xmm4_7 = var_2c * xmm1_13 f+ var_3c:4.d
                        float xmm3_5[0x4] =
                            _mm_unpacklo_ps(xmm3_2 * xmm1_13 + xmm7_1, xmm5_3 * xmm1_13 + xmm6_6)
                        var_40 = xmm3_5
                        int64_t var_20 = xmm3_5
                        float var_18_1 = xmm4_7
                        int32_t* eax_10
                        eax_10, mxcsr = sub_495370(ecx_2, &var_20)
                        
                        if (sub_44eea0(0x10) != 0)
                            int64_t xmm0_28 = var_40.q
                            *(arg2 + 0x64) = eax_10[0x1e]
                            *(arg2 + 0x74) = xmm0_28
                            *(arg2 + 0x7c) = xmm4_7
                            *(arg2 + 0x68) = 0
        
        if (*esi == 3)
            void* eax_15 = *(arg2 + 0x58)
            
            if (eax_15 != 0 && *(eax_15 + 4) == 2)
                int16_t x87control_2 =
                    sub_4d5420(eax_15, &data_ce2728, &var_40, &data_ce271c, &data_5718bc)
                void* esi_2 = data_65ae00
                var_60 = 0f
                float var_5c_2 = 0f
                uint128_t xmm0_29 = zx.o(*(esi_2 + 0x18))
                float xmm1_15 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0x14)))
                int32_t var_54_2 = _mm_cvtepi32_ps(xmm0_29)
                int128_t var_8c_2 = var_60.o
                double xmm0_32 = __libm_sse2_tan_precise(mxcsr, x87control_2, 0x3fe0c15240000000)
                uint128_t xmm2_6 = zx.o(*(esi_2 + 0x14))
                float xmm1_17 = fconvert.s(xmm0_32)
                int32_t var_64_2 = data_ce2724
                float xmm0_34 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0x18)))
                esi = var_ac
                float var_90_2 = xmm1_17
                float xmm2_9 = _mm_cvtepi32_ps(xmm2_6) / xmm0_34 * xmm1_17
                float var_94_2 = xmm2_9
                var_9c = xmm2_9 ^ (data_59e5c0.o).d
                int32_t var_98_2 = xmm1_17 ^ (data_59e5c0.o).d
                int64_t var_6c_2 = data_ce271c.q
                int128_t var_7c_2 = var_3c
                int64_t* eax_18 = sub_4b7dc0(&var_40, &esi[4], &var_9c, &var_40)
                float xmm2_10 = var_a8_1.d
                float xmm3_6[0x4] = *eax_18
                int64_t xmm0_40 = eax_18[2]
                float xmm5_6 = xmm0_40.d
                float xmm4_8 = xmm0_40:4.d
                var_60.o = xmm3_6
                float xmm3_7 = _mm_shuffle_ps(xmm3_6, xmm3_6, 0xff)
                float xmm6_10 = xmm5_6 * xmm2_10 + xmm3_7 * xmm2_10 + xmm4_8
                
                if (not(9.99999975e-06f f> sub_41b760(xmm6_10)))
                    float xmm1_23 = var_5c_2 * xmm2_10 + var_60 * xmm2_10 + xmm1_15 + -0f
                    
                    if (not(xmm2_10 < xmm1_23 * xmm6_10))
                        int32_t* ecx_5 = data_ce2758
                        float xmm1_25 = (xmm1_23 / xmm6_10) ^ (data_59e5c0.o).d
                        var_40 = xmm3_7 * xmm1_25 + var_60
                        char** eax_19 = sub_4b6020(ecx_5)
                        int64_t xmm0_50 = _mm_unpacklo_ps(var_40, xmm5_6 * xmm1_25 + var_5c_2)
                        int32_t eax_20 = eax_19[0x1a]
                        *(eax_19 + 8) = xmm0_50
                        eax_19[4] = xmm4_8 * xmm1_25 + xmm1_15
                        data_ce2780 = eax_20
                        void* eax_22 = *sub_490e40(eax_19[1])
                        
                        if (eax_22 != 0 && *(eax_22 + 0x40) s> 0)
                            int32_t eax_23 = data_ce2784
                            
                            if (eax_23 != 0xffffffff)
                                sub_4ba8f0(eax_23, eax_19[1], eax_19, eax_23)
        
        result = sub_4b6d20(data_ce2780)
        int32_t* result_1 = result
        
        if (result_1 == 0)
        label_4f40b1:
            
            if (*esi == 0 && esi[1] == 0x74)
                uint128_t xmm1_27 = zx.o(var_a8_1)
                data_ce2728 = _mm_unpacklo_ps(xmm1_27, xmm1_27)
                data_ce2730 = 0
                data_ce271c.q = _mm_unpacklo_ps(xmm1_27, 0x41000000)
                data_ce2724 = 0x40800000
                sub_53c570()
                data_ce2734 = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(-4.0)))) ^ (data_59e5c0.o).d
                result = sub_53c570()
                data_ce2738 = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(4.0)))) ^ (data_59e5c0.o).d
        else if (*esi == 0)
            if (esi[1] == 0x61)
                result = sub_490e40(result_1[1])
                
                if (*(*result + 0x40) s> 0)
                    int32_t ecx_13 = data_ce2784 + 1
                    data_ce2784 = ecx_13
                    result = *result
                    
                    if (ecx_13 s< result[0x10])
                        result = sub_4ba8f0(result, result_1[1], result_1, ecx_13)
                    else
                        data_ce2784 = 0xffffffff
                        void* ecx_14 = result_1[0xb]
                        
                        if (ecx_14 != 0)
                            result = sub_4b9020(ecx_14, 0)
            
            goto label_4f40b1
    
    @__security_check_cookie@4(eax_1 ^ &var_b8)
    return result
}
