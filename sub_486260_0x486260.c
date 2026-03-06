// 函数名称: sub_486260
// 虚拟地址: 0x486260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_486260(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t* arg6, int128_t* arg7)
{
    // 第一条实际指令: void var_b8
    void var_b8
    int32_t eax_1 = __security_cookie ^ &var_b8
    int32_t edi = *arg2
    int32_t eax_4 = arg5
    int32_t edx_1
    
    if (arg2[0xf] s<= edi)
        edx_1 = 0
    else
        edx_1 = arg2[0x10]
    
    if (eax_4 == 0)
        if (arg2[0x25] s<= edi)
            eax_4 = *(arg3 + 0x68)
        else
            eax_4 = arg2[0x26]
    
    int32_t* edi_1 = nullptr
    
    if (edx_1 == 0)
        edi_1 = eax_4
    
    if (edx_1 != 0 || edi_1 != 0)
        int32_t eax_6
        int32_t edx_2
        
        if (arg6 != 0)
            eax_6 = *arg6
            edx_2 = 0
        else if (arg2[0x22] s<= *arg2)
            eax_6 = *(arg3 + 0x84)
            edx_2 = 0
        else
            eax_6 = arg2[0x23]
            edx_2 = arg2[0x24]
        
        int32_t var_7c = eax_6
        int32_t var_78_1 = edx_2
        float xmm0_3 = _mm_cvtepi32_ps(zx.o(eax_6 u>> 0x18)) f* arg4[2]
        float xmm0_4
        
        if (0 f<= xmm0_3)
            xmm0_4 = xmm0_3 + 0.5f
        else
            xmm0_4 = xmm0_3 - 0.5f
        
        eax_4 = int.d(xmm0_4)
        var_7c:3.b = eax_4.b
        
        if (eax_4.b != 0)
            float var_30[0x4] = *(arg3 + 0xc)
            void var_40
            int128_t xmm0_6 = *sub_485510(&var_40, &var_30, arg4, &var_40, arg3 + 0x1c)
            eax_4 = data_65ae00
            int128_t var_a0 = xmm0_6
            float xmm4_1 = var_a0:0xc.d
            float xmm2_1 = var_a0:8.d
            float xmm6_1 = var_a0:4.d
            float xmm3_1 = var_a0.d
            
            if (*(eax_4 + 0x27) != 0 || *(eax_4 + 0x39) != 0)
            label_4863e2:
                int32_t edx_4 = *arg2
                float xmm5_3
                float xmm7_1
                
                if (arg2[0x14] s<= edx_4)
                    xmm5_3 = 1f
                    xmm7_1 = 1f
                else
                    xmm5_3 = arg2[0x15]
                    xmm7_1 = arg2[0x16]
                
                float xmm0_10 = (xmm2_1 - xmm3_1) * xmm5_3 * 0.5f
                float xmm1_6 = (xmm4_1 - xmm6_1) * xmm7_1 * 0.5f
                float xmm3_3 = (xmm3_1 + xmm2_1) * 0.5f
                float xmm6_3 = (xmm6_1 + xmm4_1) * 0.5f
                float xmm5_5 = xmm0_10 + xmm3_3
                float xmm3_4 = xmm3_3 - xmm0_10
                float xmm7_3 = xmm1_6 + xmm6_3
                float xmm6_4 = xmm6_3 - xmm1_6
                var_a0:8.d = xmm5_5
                float xmm5_6 = xmm5_5 - xmm3_4
                var_a0.d = xmm3_4
                var_a0:0xc.d = xmm7_3
                float xmm7_4 = xmm7_3 - xmm6_4
                var_a0:4.d = xmm6_4
                
                if (*(arg3 + 0x6c) != 0)
                    int32_t eax_13
                    int32_t edx_5
                    eax_13, edx_5 = sub_41b6f0(&var_a0)
                    int128_t xmm0_11 = data_57251c
                    var_a0.d = eax_13
                    int128_t var_70
                    __builtin_memcpy(&var_70, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x24)
                    float xmm1_7[0x4] = data_57252c
                    float xmm4_2 = arg4[3]
                    var_a0:4.d = edx_5
                    var_70.d = xmm0_11 f* xmm4_2
                    float xmm3_6 = var_a0:4.d / xmm4_2
                    var_70:0xc.d = var_70:0xc.d * xmm4_2
                    float xmm2_3 = var_a0.d / xmm4_2
                    var_70:4.d = var_70:4.d * xmm4_2
                    int128_t var_60
                    var_60.d = var_60.d * xmm4_2
                    float xmm0_20 = var_60:0xc.d * xmm4_2
                    var_60:8.d = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xaa) * xmm4_2
                    var_60:0xc.d = xmm0_20
                    int32_t eax_16 = sub_4c6310(&var_7c, &var_70, edi_1, xmm2_3, xmm3_6, 
                        xmm5_6 / xmm4_2, xmm7_4 / xmm4_2, &var_7c, 1)
                    @__security_check_cookie@4(eax_1 ^ &var_b8)
                    return eax_16
                
                int128_t* ecx_6 = arg7
                
                if (ecx_6 == 0)
                    ecx_6 = arg3 + 0x74
                
                float xmm0_25[0x4] = *ecx_6
                float xmm4_4 = _mm_shuffle_ps(xmm0_25, xmm0_25, 0xff)
                var_30 = xmm0_25
                float xmm1_12 = xmm5_6 f* xmm0_25 + xmm3_4
                float xmm1_14 = _mm_shuffle_ps(xmm0_25, xmm0_25, 0xaa)
                float xmm5_8 = xmm5_6 * xmm1_14 + xmm3_4
                float xmm3_8 = _mm_shuffle_ps(xmm0_25, xmm0_25, 0x55)
                var_a0:8.d = xmm5_8
                float xmm2_6 = xmm3_8 * xmm7_4 + xmm6_4
                float xmm2_8 = xmm4_4 * xmm7_4
                float var_b0_2 = xmm2_8
                float xmm7_6 = xmm2_8 + xmm6_4
                var_a0.d = xmm1_12
                var_a0:4.d = xmm2_6
                var_a0:0xc.d = xmm7_6
                float xmm6_5
                float xmm7_7
                
                if (arg2[0x11] s<= edx_4)
                    xmm6_5 = 1f
                    xmm7_7 = 1f
                else
                    xmm6_5 = arg2[0x12]
                    xmm7_7 = arg2[0x13]
                
                bool cond:4_1 = *(arg3 + 0x70) == 0
                var_30[0] = (xmm0_25 f- 0.5f) * xmm6_5 + 0.5f
                var_30[1] = (xmm3_8 - 0.5f) * xmm7_7 + 0.5f
                var_30[2] = (xmm1_14 - 0.5f) * xmm6_5 + 0.5f
                var_30[3] = (xmm4_4 - 0.5f) * xmm7_7 + 0.5f
                
                if (not(cond:4_1))
                    int32_t*** eax_19 = *edi_1
                    
                    if (eax_19 == 0)
                        edx_4.b = 0
                        sub_4aa5d0(edi_1, edx_4.b)
                        eax_19 = *edi_1
                        
                        if (eax_19 == 0)
                            sub_48dac0(edi_1)
                            eax_19 = *edi_1
                    
                    float xmm5_9 = xmm5_8 - xmm1_12
                    int32_t* ecx_10 = **eax_19
                    int32_t eax_21 = *ecx_10
                    double xmm0_31[0x2] =
                        _mm_cvtepi32_pd(zx.q(eax_21)) f+ *((eax_21 u>> 0x1f << 3) + &data_59e4f0)
                    int32_t eax_23 = ecx_10[1]
                    float xmm3_13 = _mm_cvtpd_ps(xmm0_31) f* ecx_10[2]
                    float xmm2_12 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_23)) f+
                        *((eax_23 u>> 0x1f << 3) + &data_59e4f0)) f* ecx_10[2]
                    float xmm0_36 = xmm7_6 - xmm2_6
                    int32_t ecx_12 = *(arg3 + 0x70)
                    float xmm1_20 = _mm_min_ss(xmm5_9 / xmm3_13, xmm0_36 / xmm2_12)
                    float xmm3_14 = xmm3_13 * xmm1_20
                    var_a0.d = xmm2_12 * xmm1_20
                    float eax_25
                    float edx_7
                    eax_25, edx_7 = sub_4afaf0(ecx_12)
                    float xmm4_8 = var_a0.d
                    float xmm3_18 = eax_25 * xmm5_9 + xmm1_12 - ((xmm3_14 - 0f) * eax_25 + 0f)
                    var_a0.d = xmm3_18
                    var_a0:8.d = xmm3_18 + xmm3_14
                    float xmm2_17 = edx_7 * xmm0_36 + xmm2_6 - ((xmm4_8 - 0f) * edx_7 + 0f)
                    var_a0:4.d = xmm2_17
                    var_a0:0xc.d = xmm2_17 + xmm4_8
                
                eax_4 = sub_47d1f0(&var_30, &var_a0, edi_1, &var_30, &var_7c, edx_1)
            else if (not(0f > xmm2_1) && not(xmm3_1 f> _mm_cvtepi32_ps(zx.o(*(eax_4 + 0x14))))
                    && not(0 f> xmm4_1) && not(xmm6_1 f> _mm_cvtepi32_ps(zx.o(*(eax_4 + 0x18)))))
                goto label_4863e2
    
    @__security_check_cookie@4(eax_1 ^ &var_b8)
    return eax_4
}
