// 函数名称: sub_49b6b0
// 虚拟地址: 0x49b6b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_49b6b0(int32_t arg1, void* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    uint32_t var_14 = __security_cookie ^ &__saved_ebp
    int32_t xmm1 = (zx.o(0)).d
    float xmm2[0x2] = *(arg2 + 0x10)
    
    if (not(xmm2 f<= 0))
        double var_68_1 = _mm_cvtps_pd(*(arg3 + 0x14))
        long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm2))
        sub_53c580()
        xmm1 = (zx.o(0)).d
        float xmm0_4 = fconvert.s(x87_r6_1)
        
        if (not(0f f<= *(arg3 + 0x14)))
            xmm0_4 = xmm0_4 f+ *(arg2 + 0x10)
        
        *(arg3 + 0x14) = xmm0_4
    
    float xmm2_1[0x2] = *(arg2 + 0x14)
    xmm2_1 f- 0
    uint32_t result
    result:1.b = (xmm2_1 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
        | (xmm2_1 f< 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        int64_t var_68_3 = _mm_cvtps_pd(*(arg3 + 0x18))
        unimplemented  {fld st0, qword [ebp-0x58]}
        int64_t var_68_4 = _mm_cvtps_pd(xmm2_1)
        unimplemented  {fld st0, qword [ebp-0x58]}
        sub_53c580()
        xmm1 = (zx.o(0)).d
        float var_44_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
        unimplemented  {fstp dword [ebp-0x34], st0}
        float xmm0_8 = var_44_2
        
        if (not(0f f<= *(arg3 + 0x18)))
            xmm0_8 = xmm0_8 f+ *(arg2 + 0x14)
        
        *(arg3 + 0x18) = xmm0_8
    
    float xmm2_2[0x2] = *(arg2 + 0x18)
    xmm2_2 f- 0
    result:1.b = (xmm2_2 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2
        | (xmm2_2 f< 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        int64_t var_68_5 = _mm_cvtps_pd(*(arg3 + 0x1c))
        unimplemented  {fld st0, qword [ebp-0x58]}
        int64_t var_68_6 = _mm_cvtps_pd(xmm2_2)
        unimplemented  {fld st0, qword [ebp-0x58]}
        result = sub_53c580()
        xmm1 = (zx.o(0)).d
        float var_44_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
        unimplemented  {fstp dword [ebp-0x34], st0}
        float xmm0_12 = var_44_3
        
        if (not(0f f<= *(arg3 + 0x1c)))
            xmm0_12 = xmm0_12 f+ *(arg2 + 0x18)
        
        *(arg3 + 0x1c) = xmm0_12
    
    float xmm4 = *(arg2 + 0x20)
    void* ecx_1
    
    if (xmm4 <= 0f)
        ecx_1 = arg4
    else
        float xmm3_1[0x4] = data_65aeb0
        float eax_1 = data_65aec8
        float xmm1_2 = *(arg2 + 0x1c) * 0.5f
        float xmm5_2 = xmm4 * 0.5f
        int64_t xmm0_13 = data_65aec0
        float xmm1_4 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
        float xmm6_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
        float xmm2_4 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
        float xmm7_3 = xmm2_4 f* xmm3_1 - xmm1_4 * xmm6_2
        float xmm6_4 = xmm6_2 * xmm2_4 + xmm1_4 f* xmm3_1
        float xmm1_8 = (xmm7_3 + xmm7_3) * xmm5_2 f+ xmm0_13.d
        float xmm0_23 = *(arg3 + 0x14) - xmm1_8
        float xmm7_11 = (xmm2_4 * xmm2_4 - xmm6_2 * xmm6_2 + xmm1_4 * xmm1_4 - xmm3_1[0] f* xmm3_1)
            * xmm5_2 f+ xmm0_13:4.d
        float xmm6_7 = (xmm6_4 + xmm6_4) * xmm5_2 + eax_1
        float xmm1_10 = *(arg3 + 0x18) - xmm7_11
        float xmm0_25 = *(arg3 + 0x1c) - xmm6_7
        float xmm0_28 = sub_453f10(xmm1_10 / xmm4)
        float xmm0_30 = xmm0_28 * 36.1300011f + xmm0_25
        float xmm1_13 = xmm0_28 * 27.7700005f + xmm0_23
        int64_t var_68_7 = _mm_cvtps_pd(*(arg2 + 0x20))
        double var_50_1 = fconvert.d(xmm1_13)
        unimplemented  {fld st0, qword [ebp-0x40]}
        unimplemented  {fld st0, qword [ebp-0x58]}
        sub_53c580()
        float var_4c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        float xmm0_34 = var_4c_2
        
        if (not(0f <= xmm1_13))
            xmm0_34 = xmm0_34 f+ *(arg2 + 0x20)
        
        float xmm0_35 = xmm0_34 - xmm5_2
        int64_t var_50_2 = _mm_cvtps_pd(xmm1_10)
        unimplemented  {fld st0, qword [ebp-0x40]}
        unimplemented  {fld st0, qword [ebp-0x58]}
        sub_53c580()
        float var_4c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        float xmm0_38 = var_4c_3
        
        if (not(0f <= xmm1_10))
            xmm0_38 = xmm0_38 f+ *(arg2 + 0x20)
        
        float xmm0_39 = xmm0_38 - xmm5_2
        int64_t var_78_1 = _mm_cvtps_pd(xmm0_30)
        unimplemented  {fld st0, qword [ebp-0x68]}
        unimplemented  {fld st0, qword [ebp-0x58]}
        sub_53c580()
        float var_74_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
        unimplemented  {fstp dword [ebp-0x64], st0}
        float xmm4_1 = var_74_2
        
        if (not(0f <= xmm0_30))
            xmm4_1 = xmm4_1 f+ *(arg2 + 0x20)
        
        float xmm4_2 = xmm4_1 - xmm5_2
        *(arg3 + 0x14) = _mm_unpacklo_ps(xmm0_35 + xmm1_8, xmm0_39 + xmm7_11)
        *(arg3 + 0x1c) = xmm4_2 + xmm6_7
        float xmm0_47 = (sub_412d90(xmm0_39 * xmm0_39 + xmm0_35 * xmm0_35 + xmm4_2 * xmm4_2) - xmm1_2)
            / (xmm5_2 - xmm1_2)
        xmm1 = (zx.o(0)).d
        float xmm0_48
        
        if (not(0 f< xmm0_47))
            xmm0_48 = 1f
        else if (xmm0_47 < 1f)
            xmm0_48 = sub_4145f0(1, xmm0_47, 1f, (zx.o(0)).d)
            xmm1 = (zx.o(0)).d
        else
            xmm0_48 = (zx.o(0)).d
        
        ecx_1 = arg4
        float xmm2_11 = _mm_cvtepi32_ps(zx.o(*(ecx_1 + 3))) * xmm0_48
        
        if (not(xmm2_11 <= 0.999000013f))
            result.b = 0xff
            *(ecx_1 + 3) = 0xff
        else if (0.00100000005f <= xmm2_11)
            result = int.d(xmm2_11 * 255f + 0.5f)
            *(ecx_1 + 3) = result.b
        else
            result.b = 0
            *(ecx_1 + 3) = 0
    
    float xmm4_4 = *(arg2 + 0x44)
    float xmm2_14 = *(arg2 + 0x48)
    
    if (not(xmm2_14 <= xmm4_4))
        float xmm0_51 = (*(arg3 + 0x1c) - xmm4_4) / (xmm2_14 - xmm4_4)
        int32_t xmm0_52
        
        if (not(0 f< xmm0_51))
            xmm0_52 = (zx.o(0)).d
        else if (xmm0_51 < 1f)
            xmm0_52 = sub_4145f0(1, xmm0_51, xmm1, 1f)
            ecx_1 = arg4
        else
            xmm0_52 = 0x3f800000
        
        float xmm2_19 = _mm_cvtepi32_ps(zx.o(*(ecx_1 + 3))) f* xmm0_52
        float xmm2_20
        
        if (0 f<= xmm2_19)
            xmm2_20 = xmm2_19 + 0.5f
        else
            xmm2_20 = xmm2_19 - 0.5f
        
        result = int.d(xmm2_20)
        *(ecx_1 + 3) = result.b
    
    if (not(*(arg2 + 0x50) f<= *(arg2 + 0x4c)))
        int128_t var_40_2 = data_65aeb0
        int64_t xmm0_55 = data_65aec0
        float xmm1_20 = *(arg3 + 0x1c) - data_65aec8
        float xmm0_57 = *(arg3 + 0x18) f- xmm0_55:4.d
        float xmm2_22 = *(arg3 + 0x14) f- xmm0_55.d
        float xmm3_8 = (sub_412d90(xmm0_57 * xmm0_57 + xmm2_22 * xmm2_22 + xmm1_20 * xmm1_20) f-
            *(arg2 + 0x4c)) / (*(arg2 + 0x50) f- *(arg2 + 0x4c))
        int32_t xmm0_64 = 0x3f800000
        
        if (not(0 f>= xmm3_8))
            if (xmm3_8 < 1f)
                xmm0_64 = sub_4145f0(1, xmm3_8, 1f, (zx.o(0)).d)
            else
                xmm0_64 = (zx.o(0)).d
        
        float xmm2_27 = _mm_cvtepi32_ps(zx.o(*(arg4 + 3))) f* xmm0_64
        float xmm2_28
        
        if (0 f<= xmm2_27)
            xmm2_28 = xmm2_27 + 0.5f
        else
            xmm2_28 = xmm2_27 - 0.5f
        
        result = int.d(xmm2_28)
        *(arg4 + 3) = result.b
    
    if (not(*(arg2 + 0x58) f<= *(arg2 + 0x54)))
        int128_t var_40_3 = data_65aeb0
        int64_t xmm0_68 = data_65aec0
        float xmm1_24 = *(arg3 + 0x1c) - data_65aec8
        float xmm0_70 = *(arg3 + 0x18) f- xmm0_68:4.d
        float xmm2_30 = *(arg3 + 0x14) f- xmm0_68.d
        float xmm3_11 = (sub_412d90(xmm0_70 * xmm0_70 + xmm2_30 * xmm2_30 + xmm1_24 * xmm1_24) f-
            *(arg2 + 0x54)) / (*(arg2 + 0x58) f- *(arg2 + 0x54))
        int32_t xmm1_26
        
        if (0 f< xmm3_11)
            xmm1_26 = 0x3f800000
            
            if (not(xmm3_11 >= 1f))
                xmm1_26 = sub_4145f0(1, xmm3_11, (zx.o(0)).d, 1f)
        else
            xmm1_26 = (zx.o(0)).d
        
        float xmm2_35 = _mm_cvtepi32_ps(zx.o(*(arg4 + 3))) f* xmm1_26
        float xmm2_36
        
        if (0 f<= xmm2_35)
            xmm2_36 = xmm2_35 + 0.5f
        else
            xmm2_36 = xmm2_35 - 0.5f
        
        result = int.d(xmm2_36)
        *(arg4 + 3) = result.b
    
    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
    return result
}
