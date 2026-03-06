// 函数名称: sub_413f80
// 虚拟地址: 0x413f80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_413f80(void* arg1)
{
    // 第一条实际指令: float xmm2 = *(arg1 + 0x608)
    float xmm2 = *(arg1 + 0x608)
    xmm2 f- 0
    void* result
    result:1.b =
        (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2 | (xmm2 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
    label_413fd8:
        bool cond:0_1 = 0f f> *(arg1 + 0x610)
        result = data_65ae00
        uint128_t xmm3_1 = zx.o(*(result + 0x18))
        int32_t xmm0_5 = _mm_cvtepi32_ps(zx.o(*(result + 0x14)))
        int32_t xmm3_2 = _mm_cvtepi32_ps(xmm3_1)
        
        if (not(cond:0_1) && not(xmm2 f> xmm0_5) && not(0 f> *(arg1 + 0x614))
                && not(*(arg1 + 0x60c) f> xmm3_2))
            result = data_cdf424
            int32_t i = 0
            int128_t xmm0_7 = *(result + 0x28)
            int32_t ecx = *(result + 0x38)
            *(result + 0x28) = *(arg1 + 0x608)
            *(result + 0x38) = 0xffffffff
            
            if (*(arg1 + 0x400) s> 0)
                void* ecx_1 = arg1 + 0x404
                void* var_34_1 = ecx_1
                
                do
                    if (*(arg1 + 0x618) != i)
                        bool p_9
                        
                        if (*(arg1 + 0x620) == i)
                            float xmm0_9 = *(arg1 + 0x624)
                            xmm0_9 f- 0
                            result:1.b = (xmm0_9 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2 | (xmm0_9 < 0f ? 1 : 0)
                            p_9 = unimplemented  {test ah, 0x44}
                        
                        if (*(arg1 + 0x620) != i || not(p_9))
                            sub_468d10(*ecx_1)
                            ecx_1 = var_34_1
                    
                    i += 1
                    ecx_1 += 4
                    var_34_1 = ecx_1
                while (i s< *(arg1 + 0x400))
                
                result = data_cdf424
            
            *(result + 0x28) = xmm0_7
            *(result + 0x38) = ecx
            int32_t ecx_3 = *(arg1 + 0x618)
            
            if (ecx_3 != 0xffffffff)
                result = sub_468d10(*(arg1 + (ecx_3 << 2) + 0x404))
            
            int32_t ecx_5 = *(arg1 + 0x620)
            
            if (ecx_5 != 0xffffffff)
                float xmm0_11 = *(arg1 + 0x624)
                xmm0_11 - 0f
                result:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
                    | (xmm0_11 < 0f ? 1 : 0)
                bool p_11 = unimplemented  {test ah, 0x44}
                
                if (p_11)
                    return sub_468d10(*(arg1 + (ecx_5 << 2) + 0x404))
    else
        float xmm0_1 = *(arg1 + 0x60c)
        xmm0_1 f- 0
        result:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_413fd8
        
        float xmm0_2 = *(arg1 + 0x610)
        xmm0_2 f- 0
        result:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
            | (xmm0_2 < 0f ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_413fd8
        
        float xmm0_3 = *(arg1 + 0x614)
        xmm0_3 f- 0
        result:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
            | (xmm0_3 < 0f ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            goto label_413fd8
    
    return result
}
