// 函数名称: sub_4ae8c0
// 虚拟地址: 0x4ae8c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4ae8c0(int32_t arg1, void* arg2, void* arg3, float arg4 @ xmm2, void* arg5)
{
    // 第一条实际指令: if (*(arg2 + 8) == 0)
    if (*(arg2 + 8) == 0)
        float xmm0_1 = *(arg2 + 0x1c)
        xmm0_1 f- 0
        arg1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            *(arg3 + 0x28) = xmm0_1
        
        if (*(arg3 + 0x1c) != 0)
            if (*(arg2 + 0x17) != 0)
                *(arg3 + 0x34) = *(arg2 + 0x14)
            
            if (*(arg2 + 0x1b) != 0)
                *(arg3 + 0x38) = *(arg2 + 0x18)
    
    int32_t eax_2 = *(arg2 + 0x10)
    
    if (eax_2 != 0)
        *(arg3 + 0x44) = eax_2
    
    int32_t* eax_3 = *(arg2 + 4)
    void* result
    
    if (eax_3 != 0)
        *(arg3 + 0x2c) = *eax_3
        *(arg3 + 0x30) = *(arg2 + 0xc)
        *(arg3 + 0x10) = *(arg2 + 0x20)
        *(arg3 + 0x14) = *(arg2 + 0x24)
        *(arg3 + 0x70) = *(arg2 + 0x28)
        *(arg3 + 0x74) = *(arg2 + 0x2c)
        result = *(arg2 + 4)
    
    if (eax_3 == 0 || result == 0)
        *(arg3 + 0x2c) = **(arg5 + 4)
        *(arg3 + 0x30) = *(arg5 + 0xc)
        *(arg3 + 0x10) = *(arg5 + 0x20)
        *(arg3 + 0x14) = *(arg5 + 0x24)
        *(arg3 + 0x70) = *(arg5 + 0x28)
        result = *(arg5 + 0x2c)
        *(arg3 + 0x74) = result
    
    if (*(arg3 + 0x1c) != 0 && *(arg2 + 8) != 0)
        void* eax_16 = sub_490c60(*(arg3 + 0x2c))
        float eax_17
        float edx
        eax_17, edx = sub_432570(**(arg2 + 8))
        float var_38_1 = eax_17
        int32_t eax_19
        int32_t edx_1
        edx_1:eax_19 = mulu.dp.d(0x80808081, zx.d(*(arg2 + 0x14)) * zx.d(*(arg3 + 0x3c)) + 0x80)
        int32_t eax_21
        int32_t edx_2
        edx_2:eax_21 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x3d)) * zx.d(*(arg2 + 0x15)) + 0x80)
        int32_t eax_25
        int32_t edx_3
        edx_3:eax_25 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x3e)) * zx.d(*(arg2 + 0x16)) + 0x80)
        int32_t eax_29
        int32_t edx_4
        edx_4:eax_29 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x3f)) * zx.d(*(arg2 + 0x17)) + 0x80)
        int32_t eax_33
        int32_t edx_5
        edx_5:eax_33 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x40)) * zx.d((edx_1 u>> 7).b) + 0x80)
        int32_t eax_36
        int32_t edx_7
        edx_7:eax_36 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x41)) * zx.d((edx_2 u>> 7).b) + 0x80)
        uint8_t var_b_1 = (edx_7 u>> 7).b
        int32_t eax_39
        int32_t edx_9
        edx_9:eax_39 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x42)) * zx.d((edx_3 u>> 7).b) + 0x80)
        uint8_t var_a_1 = (edx_9 u>> 7).b
        int32_t eax_40
        int32_t edx_14
        edx_14:eax_40 = mulu.dp.d(0x80808081, zx.d(*(arg3 + 0x43)) * zx.d((edx_4 u>> 7).b) + 0x80)
        uint8_t var_9_1 = (edx_14 u>> 7).b
        uint8_t var_c_1
        var_c_1.d = 0
        float xmm2 = *(arg2 + 0x1c)
        float xmm1_1 = 1f
        xmm2 f- 0
        int32_t var_14_2 = 0
        int32_t var_18 = (edx_5 u>> 7).b.d
        var_c_1.d = 0x3f800000
        int32_t eax_41
        eax_41:1.b =
            (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2 | (xmm2 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            xmm1_1 = xmm2
            var_c_1.d = xmm1_1
        
        float xmm3_2 = *(arg3 + 0x20) f+ *(arg3 + 0xc)
        int32_t eax_43 = data_cdf424
        float xmm2_4 = _mm_cvtepi32_ps(zx.o(*(eax_16 + 4))) f+ *(arg3 + 0x24) - edx * xmm1_1
        int128_t var_40
        
        if (*(eax_43 + 0x38) == 0)
            int32_t* esi_1 = **(arg2 + 8)
            float xmm0_18 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x34))) * xmm1_1 + xmm3_2
            float xmm0_22 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0xc))) * xmm1_1 + xmm2_4
            float eax_50
            float edx_18
            eax_50, edx_18 = sub_432570(esi_1)
            float xmm2_6 = var_c_1.d
            float var_64 = xmm2_6
            int32_t var_58_1 = 0
            int32_t var_4c_1 = 0
            int32_t var_60_1 = 0
            float var_54_1 = xmm2_6
            int32_t var_48_1 = 0
            int32_t var_44_1 = 0x3f800000
            float var_5c_1 = eax_50 * xmm2_6 * 0.5f + xmm0_18
            float var_50_1 = edx_18 * xmm2_6 * 0.5f + xmm0_22
            var_40 = data_59e460
            void var_88
            sub_412bf0(&var_64, arg3 + 0x4c, &var_88, &var_64)
            result = sub_47d3c0(&var_40, &var_88, esi_1, &var_40, &var_18, 0)
        else
            float xmm0_5 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x34)))
            int32_t* ecx_29 = **(arg2 + 8)
            float xmm0_7 = xmm0_5 * xmm1_1 + xmm3_2
            float xmm0_11 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0xc))) * xmm1_1 + xmm2_4
            float eax_44
            int32_t ecx_30
            float edx_16
            eax_44, ecx_30, edx_16 = sub_432570(ecx_29)
            int32_t var_9c_1 = ecx_30
            var_40.d = xmm0_7
            var_40:4.d = xmm0_11
            float var_38_2 = eax_44 f* var_c_1.d + xmm0_7
            float var_34_2 = edx_16 f* var_c_1.d + xmm0_11
            result = sub_47d820(&var_40, arg3 + 0x4c, **(arg2 + 8), &var_40, data_cdf424 + 0x28, 
                &data_571d08, &var_18)
    
    *(arg3 + 0xc) = *(arg3 + 0xc) + arg4
    return result
}
