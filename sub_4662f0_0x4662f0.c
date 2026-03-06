// 函数名称: sub_4662f0
// 虚拟地址: 0x4662f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4662f0(void* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* edi = *(*(arg1 + 0x63c) * 0x208 + arg1 + 0xe4)
    void* ebx = sub_495430(*(arg1 + 0x684))
    int32_t* var_30_1
    int32_t* ecx
    int32_t edi_1
    
    if (ebx != 0)
        ecx = sub_4459f0(*ebx)
        edi_1 = 0
        var_30_1 = ecx
    
    if (ebx == 0 || ecx[1] s<= 0)
    label_466379:
        ecx.b = 0
    else
        int32_t eax_5 = 0
        int32_t var_10_1 = 0
        
        while (true)
            int32_t eax_6
            eax_6, ecx = sub_4b8b40(eax_5, *ecx + eax_5, &data_5b39c8, 8)
            
            if (eax_6 != 0)
                ecx.b = 1
                break
            
            ecx = var_30_1
            edi_1 += 1
            eax_5 = var_10_1 + 0x134
            var_10_1 = eax_5
            
            if (edi_1 s>= ecx[1])
                goto label_466379
    
    void* eax_9 = *(arg1 + 0x63c) * 0x208 + arg1
    float var_44
    int64_t var_3c
    float var_30_2
    int64_t var_24
    float xmm4_3
    float xmm6_3
    
    if (ecx.b == 0)
        float xmm2_3 = *(arg1 + 0x6d4)
        float xmm1_7 = *(arg1 + 0x6d8)
        float xmm3_1 = *(arg1 + 0x6cc)
        float xmm5_1 = *(arg1 + 0x6d0)
        xmm4_3 = (xmm2_3 - xmm3_1) / 100f
        int64_t xmm3_3 = (xmm3_1 + xmm2_3) * 0.5f
        float xmm5_3 = (xmm5_1 + xmm1_7) * 0.5f
        xmm6_3 = (xmm1_7 - xmm5_1) / 100f
        var_3c = xmm3_3
        var_30_2 = xmm5_3
        int32_t var_20_2 = xmm3_3
        float var_1c_3 = xmm5_3
    else
        float xmm1_2 = (*(eax_9 + 0x1c) f- *(eax_9 + 0x14)) / 100f
        float xmm2_2 = (*(eax_9 + 0x20) f- *(eax_9 + 0x18)) / 100f
        float var_58_1 = (*(arg1 + 0x6d8) f+ *(arg1 + 0x6d0)) * 0.5f
        float xmm1_5 = (*(arg1 + 0x6d4) f+ *(arg1 + 0x6cc)) * 0.5f
        float var_5c_1 = xmm1_5
        int64_t* eax_10 = sub_466120(&var_44)
        int32_t var_1c_1 = eax_10[1].d
        var_24 = *eax_10
        int64_t xmm0_5 = var_24.d
        var_3c = xmm0_5
        int32_t var_20_1 = xmm0_5
        float xmm0_6 = *(arg1 + 0x6e8)
        xmm4_3 = xmm1_2 * 0.0500000007f * xmm0_6 f* data_65ae28:0xc
        xmm6_3 = xmm2_2 * 0.0500000007f * xmm0_6 f* data_65ae28:0xc
        var_30_2 = xmm1_5
        float var_1c_2 = xmm1_5
    
    float xmm2_4 = *(eax_9 + 0x178)
    float xmm1_8 = *(eax_9 + 0x24)
    void* result
    void* result_1
    void* result_2
    
    if (edi == 0)
        result_2 = arg1 + 0x688
        result_1 = result_2
        
        if (ebx == 0)
        label_466586:
            result_1 = result_2
            goto label_466589
        
        edi = nullptr
    label_466589:
        result = result_1
        *result = edi
        
        if (ebx != 0)
            xmm1_8 f- 0
            result:1.b = (xmm1_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_8, 0f) ? 1 : 0) << 2
                | (xmm1_8 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                float xmm2_5 = xmm2_4 * 0.5f
                *(ebx + 0x40) = _mm_unpacklo_ps(zx.o(var_3c), var_30_2)
                int32_t xmm0_10 = __minss_xmmss_memss(xmm4_3, xmm6_3)
                *(ebx + 0x48) = 0
                *(ebx + 0x2c) = xmm0_10
                float xmm0_12 = sub_4145d0(xmm2_5)
                var_3c.d = xmm0_12
                float xmm1_11 = xmm0_12 * 0f
                var_44 = xmm1_11
                float var_40_1 = xmm1_11
                var_3c:4.d = sub_4145b0(xmm2_5)
                *(ebx + 0x30) = var_44.o
                sub_49a150(ebx, arg2)
                result = sub_4660e0(arg1)
    else
        bool p_2
        
        if (ebx == 0)
            xmm1_8 f- 0
            eax_9:1.b = (xmm1_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_8, 0f) ? 1 : 0) << 2
                | (xmm1_8 < 0f ? 1 : 0)
            p_2 = unimplemented  {test ah, 0x44}
        
        if (ebx != 0 || not(p_2))
            result_2 = arg1 + 0x688
            result_1 = result_2
            
            if (edi == *result_2)
                goto label_466586
            
            if (ebx != 0)
                sub_4954d0(ebx)
            
            goto label_466546
        
        result = arg1 + 0x688
        result_1 = result
        
        if (edi != *result || *(arg1 + 9) != ebx.b)
        label_466546:
            ebx = sub_4953d0(edi, &var_24:4)
            *(arg1 + 0x684) = *(ebx + 0x78)
            goto label_466589
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
