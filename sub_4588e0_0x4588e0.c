// 函数名称: sub_4588e0
// 虚拟地址: 0x4588e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4588e0(int32_t arg1, float* arg2, float* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t eax_2 = data_dff644
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    float* esi = arg3
    float* var_84 = esi
    
    if (1f f> *(arg4 + 0xc))
        eax_2 = data_dff64c
    
    float eax_3 = esi[3]
    sub_454d50(eax_3, data_dfd4c4, 0x40, *(esi + 4), eax_3, eax_2)
    int32_t eax_4 = data_cdb38c
    int32_t ebx = 0
    int32_t var_7c = 0
    data_cdb38c = eax_4 + 0x40
    int32_t result = 0
    int32_t result_1 = 0
    
    while (true)
        float xmm1_4 = _mm_cvtepi32_ps(zx.o(result)) * 0.125f * 3.14159274f
        float xmm0_4 = _mm_cvtepi32_ps(zx.o(result + 1)) * 0.125f * 3.14159274f
        float xmm0_7 = sub_4145b0(xmm1_4) * *esi
        float xmm0_10 = sub_4145b0(xmm0_4) * *esi
        int32_t edi = 0
        float xmm0_12 = sub_4145d0(xmm1_4)
        float xmm0_14 = sub_4145d0(xmm0_4)
        void* esi_2 = eax_4 * 0xa0 + 0x7db3a4 + ebx * 0xa0
        
        while (true)
            float xmm1_8 = _mm_cvtepi32_ps(zx.o(edi)) * 0.125f * 6.28318548f
            float xmm0_18 = _mm_cvtepi32_ps(zx.o(edi + 1)) * 0.125f * 6.28318548f
            float xmm0_21 = sub_4145b0(xmm1_8) * *var_84
            float xmm0_24 = sub_4145b0(xmm0_18) * *var_84
            float xmm0_27 = sub_4145d0(xmm1_8) * *var_84
            float xmm0_29 = sub_4145d0(xmm0_18)
            float xmm3_1 = var_84[2]
            float xmm4_2 = xmm0_29 * *var_84
            float xmm5_3 = xmm0_12 * xmm0_27 + xmm3_1
            float xmm2_1 = var_84[1]
            float xmm5_5 = var_84[3] + xmm0_7
            float xmm0_32 = xmm0_12 * xmm4_2 + xmm3_1
            float xmm6_3 = xmm0_12 * xmm0_21 + xmm2_1
            float xmm0_34 = xmm0_14 * xmm0_21
            float var_4c_1 = xmm0_34
            float xmm0_35 = xmm0_34 + xmm2_1
            float xmm1_12 = xmm0_14 * xmm0_27 + xmm3_1
            float xmm7_3 = xmm0_12 * xmm0_24 + xmm2_1
            float xmm0_37 = var_84[3] + xmm0_10
            float xmm5_8 = xmm0_14 * xmm0_24 + xmm2_1
            float xmm0_42 = xmm0_14 * xmm4_2 + xmm3_1
            float xmm1_17 = *arg2 * xmm6_3 + xmm5_3 * arg2[1] + xmm5_5 * arg2[2] + arg2[3]
            float xmm2_2 = arg2[7]
            float xmm0_51 = arg2[0xa]
            float xmm1_22 = xmm6_3 * arg2[4] + arg2[5] * xmm5_3 + xmm5_5 * arg2[6] + xmm2_2
            float xmm1_23 = arg2[0xb]
            float xmm4_7 = xmm5_3 * arg2[9] + xmm6_3 * arg2[8] + xmm5_5 * arg2[0xa] + xmm1_23
            int64_t var_3c = _mm_unpacklo_ps(xmm1_17, xmm1_22)
            float var_34_1 = xmm4_7
            float xmm4_11 = *arg2 * xmm7_3 + xmm0_32 * arg2[1] + xmm5_5 * arg2[2]
            float var_64_2 = xmm4_11
            float xmm0_63 = xmm4_11 + arg2[3]
            int64_t xmm4_16 = arg2[4] * xmm7_3 + arg2[5] * xmm0_32 + xmm5_5 * arg2[6] + xmm2_2
            float xmm6_9 = xmm0_32 * arg2[9] + xmm7_3 * arg2[8] + xmm5_5 * arg2[0xa] + xmm1_23
            int64_t var_30_1 = _mm_unpacklo_ps(xmm0_63, xmm4_16)
            float var_28_1 = xmm6_9
            float var_54_3 = xmm4_16
            float xmm4_18 = xmm1_12 * arg2[1] + *arg2 * xmm0_35 + xmm0_37 * arg2[2]
            float var_50_2 = xmm4_18
            float xmm0_75 = xmm4_18 + arg2[3]
            float xmm3_6[0x4] = xmm0_75
            float xmm4_21 = arg2[4] * xmm0_35 + arg2[5] * xmm1_12 + arg2[6] * xmm0_37
            float var_4c_4 = xmm4_21
            float xmm0_83 = xmm4_21 + xmm2_2
            float xmm7_8 = xmm0_35 * arg2[8] + xmm1_12 * arg2[9] + arg2[0xa] * xmm0_37
            int64_t var_24_1 = _mm_unpacklo_ps(xmm3_6, xmm0_83)
            float xmm7_9 = xmm7_8 + xmm1_23
            float var_1c_1 = xmm7_9
            float xmm4_26 = xmm5_8 * *arg2 + xmm0_42 * arg2[1] + xmm0_37 * arg2[2]
            float var_5c_3 = xmm4_26
            float xmm5_10[0x4] = xmm4_26 + arg2[3]
            float xmm4_31 = xmm0_42 * arg2[9] + xmm5_8 * arg2[8] + xmm0_37 * xmm0_51 + xmm1_23
            int64_t xmm6_15 = xmm0_42 * arg2[5] + xmm5_8 * arg2[4] + xmm0_37 * arg2[6] + arg2[7]
            int64_t var_18_1 = _mm_unpacklo_ps(xmm5_10, xmm6_15)
            float var_10_1 = xmm4_31
            float var_90_1
            float var_4c_6
            float eax_13
            float xmm1_31
            
            if (result_1 != 0)
                float xmm7_13 = xmm7_9 - xmm6_9
                float xmm1_33 = xmm6_9 - xmm4_7
                float xmm6_18 = xmm0_83 - var_54_3
                float xmm2_11 = var_54_3 - xmm1_22
                float xmm5_13 = xmm0_75 - xmm0_63
                float xmm3_13 = xmm0_63 - xmm1_17
                float xmm4_36 = xmm6_18 * xmm1_33 - xmm7_13 * xmm2_11
                var_90_1 = xmm4_36
                float xmm5_15 = xmm5_13 * xmm2_11 - xmm6_18 * xmm3_13
                float xmm7_15 = xmm7_13 * xmm3_13 - xmm5_13 * xmm1_33
                var_4c_6 = xmm7_15
                xmm1_31 = 1f / (sub_412d90(xmm7_15 * xmm7_15 + xmm4_36 * xmm4_36 + xmm5_15 * xmm5_15)
                    + 9.99999975e-06f)
                eax_13 = xmm5_15 * xmm1_31
            else
                float xmm4_32 = xmm4_31 - xmm7_9
                float xmm7_10 = xmm7_9 - xmm6_9
                float xmm6_16 = xmm6_15 f- xmm0_83
                float xmm1_25 = xmm0_83 - var_54_3
                float xmm5_11 = xmm5_10 f- xmm3_6
                float xmm3_7 = xmm3_6 f- xmm0_63
                float xmm2_9 = xmm1_25 * xmm4_32 - xmm7_10 * xmm6_16
                float xmm7_12 = xmm7_10 * xmm5_11 - xmm3_7 * xmm4_32
                var_90_1 = xmm2_9
                float xmm3_9 = xmm3_7 * xmm6_16 - xmm1_25 * xmm5_11
                var_4c_6 = xmm7_12
                xmm1_31 = 1f / (sub_412d90(xmm7_12 * xmm7_12 + xmm2_9 * xmm2_9 + xmm3_9 * xmm3_9)
                    + 9.99999975e-06f)
                eax_13 = xmm3_9 * xmm1_31
            
            int64_t xmm0_126 = _mm_unpacklo_ps(var_90_1 * xmm1_31, var_4c_6 * xmm1_31)
            float xmm3_16 = xmm0_126.d
            float xmm4_37 = xmm0_126:4.d
            float xmm4_40 = xmm4_37 * arg2[9] + xmm3_16 * arg2[8] + eax_13 * arg2[0xa]
            float var_bc_1 = xmm4_37 * arg2[5] + xmm3_16 * arg2[4] + eax_13 * arg2[6]
            int64_t var_140_1
            
            if (ebx s>= 0x40)
                char const* const var_134_1 = "Draw3DSphere"
                int32_t var_138_1 = 0x6a8
                var_140_1:4.d = "c:\ax2017\engine\draw3d.cpp"
                sub_44e4d0(eax_13, &data_5559b1, "quadIndex < totalQuads")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int64_t xmm5_16 = (xmm3_16 * *arg2 + xmm4_37 * arg2[1] + eax_13 * arg2[2]).q
            int64_t* edi_4 = &var_3c
            int32_t i_1 = 4
            int32_t i
            
            do
                int32_t eax_14 = edi_4[1].d
                *(esi_2 - 0x18) = *edi_4
                *(esi_2 - 0x10) = eax_14
                *(esi_2 - 0xc) = xmm5_16
                *(esi_2 - 4) = xmm4_40
                var_140_1.o = *arg4
                int32_t eax_16 = sub_45c850(var_140_1)
                edi_4 += 0xc
                *(esi_2 + 4) = 0
                *(esi_2 + 8) = 0x3f000000
                *esi_2 = (((((eax_16 u>> 0x18 << 8) + zx.d(eax_16.b)) << 8) + zx.d((eax_16 u>> 8).b))
                    << 8) + zx.d((eax_16 u>> 0x10).b)
                *(esi_2 + 0xc) = 0x3f000000
                esi_2 += 0x28
                i = i_1
                i_1 -= 1
            while (i != 1)
            edi += 1
            ebx = var_7c + 1
            var_7c = ebx
            
            if (edi s>= 8)
                result += 1
                esi = var_84
                result_1 = result
                
                if (result s< 8)
                    break
                
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
}
