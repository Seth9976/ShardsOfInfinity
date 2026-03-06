// 函数名称: sub_47e2d0
// 虚拟地址: 0x47e2d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_47e2d0(int128_t* arg1)
{
    // 第一条实际指令: float var_8c
    float var_8c
    int32_t eax_1 = __security_cookie ^ &var_8c
    TEB* fsbase
    void* esi = *fsbase->ThreadLocalStoragePointer
    float var_60
    int64_t var_28
    
    if (data_e4998c s> *(esi + 4))
        __Init_thread_header(&data_e4998c)
        
        if (data_e4998c == 0xffffffff)
            int32_t var_20_1 = 0x80000000
            var_28 = _mm_unpacklo_ps(0x80000000, 0xbf800000)
            data_e49990 = *sub_413000(&var_60, &var_28, &data_571928, &var_60, 0x571898, &data_5718b0)
            __Init_thread_footer(&data_e4998c)
    
    if (data_e499a0 s> *(esi + 4))
        __Init_thread_header(&data_e499a0)
        
        if (data_e499a0 == 0xffffffff)
            data_e499a4 =
                *sub_413000(&var_60, &data_571928, &data_5718c8, &var_60, 0x571898, &data_5718b0)
            __Init_thread_footer(&data_e499a0)
    
    if (data_e499b4 s> *(esi + 4))
        __Init_thread_header(&data_e499b4)
        
        if (data_e499b4 == 0xffffffff)
            int128_t* ecx_1 = &data_e499a4
            
            if (*(data_65ae00 + 0x30) == 0)
                ecx_1 = &data_e49990
            
            data_e499b8 = *ecx_1
            __Init_thread_footer(&data_e499b4)
    
    if (data_e499c8 s> *(esi + 4))
        __Init_thread_header(&data_e499c8)
        
        if (data_e499c8 == 0xffffffff)
            data_e499cc = 0xffffffff
            __Init_thread_footer(&data_e499c8)
    
    if (data_e499d0 s> *(esi + 4))
        __Init_thread_header(&data_e499d0)
        
        if (data_e499d0 == 0xffffffff)
            int32_t ecx_2
            ecx_2.b = *(data_65ae00 + 0x30) == 0
            data_e499d4 = (ecx_2 << 1) + 0xffffffff
            __Init_thread_footer(&data_e499d0)
    
    void* eax_15 = data_65ae00
    
    if (*(eax_15 + 0x27) == 0)
        goto label_47e4d8
    
    int128_t var_50
    float eax_16
    int64_t xmm0_5
    float xmm3_1
    float xmm4_1
    
    if ((*(sub_452df0() + 0x1c) & 0x200) != 0 || data_ce19bd != 0)
        uint128_t xmm3_10 = zx.o(data_ce19f8)
        int128_t xmm0_65 = data_65aeb0
        eax_16 = data_65aec8
        xmm4_1 = _mm_cvtepi32_ps(zx.o(data_ce19f4)) * 0.25f
        xmm3_1 = _mm_cvtepi32_ps(xmm3_10) * 0.25f
        var_50 = xmm0_65
        xmm0_5 = data_65aec0
    else
        eax_15 = data_65ae00
    label_47e4d8:
        uint128_t xmm3 = zx.o(*(eax_15 + 0x18))
        eax_16 = data_65aeac
        var_50 = data_65ae94
        xmm0_5 = data_65aea4
        xmm4_1 = _mm_cvtepi32_ps(zx.o(*(eax_15 + 0x14)))
        xmm3_1 = _mm_cvtepi32_ps(xmm3)
    
    float xmm7 = var_50:4.d
    float xmm5 = var_50.d
    float xmm2_2 = data_65ae08 * 3f / (xmm3_1 * 0.5f)
    float xmm6_1 = xmm7 * xmm5
    float xmm3_2 = var_50:8.d
    float xmm0_12 = _mm_cvtepi32_ps(zx.o(data_e499cc)) * xmm4_1 * 0.5f * xmm2_2
    float xmm4_5 = _mm_cvtepi32_ps(zx.o(data_e499d4)) * xmm3_1 * 0.5f
    float xmm1_2 = var_50:0xc.d
    int64_t xmm1_4 = xmm5 * xmm5
    var_8c = xmm1_2 * xmm1_2
    float xmm0_16 = xmm3_2 * xmm3_2
    float xmm3_3 = xmm3_2 f* var_50.d
    float xmm5_2 = xmm3_2 f* var_50:0xc.d
    float xmm4_6 = xmm4_5 * xmm2_2
    float xmm2_4 = xmm7 * xmm7
    float xmm7_1 = xmm7 f* var_50:0xc.d
    float var_88
    var_88.q = xmm1_4
    float xmm4_7 = xmm4_6 + xmm4_6
    float xmm2_6 = xmm0_12 + xmm0_12
    var_28 = (xmm1_4.d + var_8c - xmm2_4 - xmm0_16) * xmm0_12
    float xmm0_23 = var_8c
    var_28 = var_28.d + (xmm6_1 - xmm5_2) * 6f + (xmm7_1 + xmm3_3) * xmm4_7
    float xmm0_24 = xmm0_23 - var_88
    float xmm2_8 = var_50:8.d f* var_50:4.d
    float xmm1_10 = var_50.d f* var_50:0xc.d
    var_8c = xmm0_24
    float xmm5_5 = data_e499b8.d
    float xmm3_9 = data_e499b8:0xc
    float xmm2_9 = data_e499b8:4
    float xmm7_2 = var_50:8.d
    float xmm6_4[0x4] = var_28.d f+ xmm0_5.d
    float xmm4_11 = data_e499b8:8
    float xmm0_37 = (xmm3_3 - xmm7_1) * xmm2_6 + (xmm1_10 + xmm2_8) * 6f
        + (var_8c - xmm2_4 + xmm0_16) * xmm4_6 + eax_16
    var_60 = var_50:0xc.d * xmm5_5 + var_50.d * xmm3_9 + var_50:4.d * xmm4_11 - xmm7_2 * xmm2_9
    float var_5c = var_50:0xc.d * xmm2_9 + var_50:4.d * xmm3_9 + xmm7_2 * xmm5_5 - var_50.d * xmm4_11
    float var_58 = var_50:0xc.d * xmm4_11 + xmm7_2 * xmm3_9 + var_50.d * xmm2_9 - var_50:4.d * xmm5_5
    float xmm1_35 = var_50:0xc.d * xmm3_9 - var_50.d * xmm5_5 - var_50:4.d * xmm2_9
    var_50.d = xmm2_2
    float var_54 = xmm1_35 - xmm7_2 * xmm4_11
    int128_t xmm0_61 = var_60.o
    int64_t xmm6_5 = _mm_unpacklo_ps(xmm6_4, 
        (xmm0_24 + xmm2_4 - xmm0_16) * 3f + (xmm5_2 + xmm6_1) * xmm2_6
            + (xmm2_8 - xmm1_10) * xmm4_7 f+ xmm0_5:4.d)
    float var_34 = xmm0_37
    *arg1 = xmm0_61
    arg1[1] = xmm6_5.o
    @__security_check_cookie@4(eax_1 ^ &var_8c)
    return arg1
}
