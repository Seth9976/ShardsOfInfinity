// 函数名称: sub_49bcf0
// 虚拟地址: 0x49bcf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __fastcallsub_49bcf0(void* arg1, void* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = *(arg1 + 0x30)
    int32_t* esi = *(eax_2 + 0x2e4)
    int128_t xmm0 = *(arg2 + 0x24)
    int32_t edx = esi[0xa]
    float var_70
    float var_60
    int128_t var_50
    float result
    
    if (edx s> 0)
        int32_t eax_3 = *(arg1 + 0x3c)
        
        if (eax_3 s< 0)
            eax_3 = 0
        else if (eax_3 s> edx)
            eax_3 = edx
        
        int64_t* eax_5 = (eax_3 << 4) + esi[9]
        int128_t var_90
        var_90:4.q = *eax_5
        var_90:0xc.d = eax_5[1].d
        var_90.d = &var_50
        float xmm1_1[0x4] = *sub_4a0190(var_90)
        result = xmm1_1[0] f* xmm0.d
        var_60 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55) f* xmm0:4.d
        var_70 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa) f* xmm0:8.d
        var_50 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff) f* xmm0:0xc.d
    else if (*(arg2 + 0x64) == 0)
        var_50 = xmm0:0xc.d
        var_70 = xmm0:8.d
        var_60 = xmm0:4.d
        result = xmm0.d
    else
        double var_28
        int32_t* eax_8 = sub_4a00d0(&var_28, *(arg2 + 0x24))
        int128_t var_38
        var_38:4.q = *eax_8
        float xmm0_5[0x2] = *(arg2 + 0x34) f+ var_38:4.d
        var_38:0xc.d = eax_8[2]
        float var_3c_1 = xmm0_5
        var_28 = _mm_cvtps_pd(xmm0_5)
        sub_53c580()
        float xmm0_7 = fconvert.s(fconvert.t(360.0))
        
        if (not(0f <= var_3c_1))
            xmm0_7 = xmm0_7 + 360f
        
        var_38:4.d = xmm0_7
        var_38:8.d = *(arg2 + 0x38) f+ var_38:8.d
        var_38:0xc.d = *(arg2 + 0x3c) f* var_38:0xc.d
        int128_t var_90_1
        var_90_1:4.q = var_38:4.q
        var_90_1:0xc.d = var_38:0xc.d
        var_90_1.d = &var_50
        int96_t xmm0_13 = (*sub_4a0190(var_90_1)).12
        var_50 = *(arg2 + 0x30)
        var_60 = xmm0_13:4.d
        var_70 = xmm0_13:8.d
        result = xmm0_13.d
    
    float var_3c_2 = 1f
    
    if (not(esi[0x13] f<= 0f))
        int32_t eax_13 = *sub_4459f0(*esi)
        
        if (*(*(eax_2 + 0x2dc) * 0x134 + eax_13 + 0xde) == 0)
            var_3c_2 = esi[0x14] f/ esi[0x13]
    
    float xmm1_7 = *(arg2 + 0x40)
    float xmm2_9 = xmm1_7 * result
    
    if (not(xmm2_9 <= 0.999000013f))
        result.b = 0xff
    else if (0.00100000005f <= xmm2_9)
        result.b = (int.d(xmm2_9 * 255f + 0.5f)).b
    else
        result.b = 0
    
    float xmm2_13 = xmm1_7 * var_60
    
    if (not(xmm2_13 <= 0.999000013f))
        result:1.b = 0xff
    else if (0.00100000005f <= xmm2_13)
        result:1.b = (int.d(xmm2_13 * 255f + 0.5f)).b
    else
        result:1.b = 0
    
    float xmm1_8 = xmm1_7 * var_70
    
    if (not(xmm1_8 <= 0.999000013f))
        result:2.b = 0xff
    else if (0.00100000005f <= xmm1_8)
        result:2.b = (int.d(xmm1_8 * 255f + 0.5f)).b
    else
        result:2.b = 0
    
    float xmm0_23 = esi[0x19] f* var_3c_2 f* var_50.d
    
    if (not(xmm0_23 <= 0.999000013f))
        result:3.b = 0xff
    else if (0.00100000005f <= xmm0_23)
        result:3.b = (int.d(xmm0_23 * 255f + 0.5f)).b
    else
        result:3.b = 0
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
