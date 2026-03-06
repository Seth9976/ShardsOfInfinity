// 函数名称: sub_4f18d0
// 虚拟地址: 0x4f18d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4f18d0(int32_t arg1, int32_t* arg2, float* arg3, void* arg4)
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = arg2[1]
    uint32_t (* eax)[0x4] = arg2[1]
    float ebx = *arg2
    uint32_t (* var_18)[0x4] = eax
    float var_1c = ebx
    int32_t eax_2 = *(arg4 + 0x30)
    int32_t var_10 = eax_2
    int32_t eax_4 = sub_4dd620(eax_2) i* ebx
    int32_t var_14 = eax_4
    void* eax_6 = sub_45cd70(sub_4dd7f0(eax_4, eax, ebx, eax_2))
    bool cond:0 = arg2[4] != 8
    int32_t* ecx_3 = arg2[0xf]
    void* var_20 = eax_6
    int128_t var_34
    
    if (cond:0)
        int32_t var_44_1 = *ecx_3
        int32_t var_48_1 = ecx_3[1]
        var_34 = var_20.o
        int32_t var_24_1 = eax_2
        char eax_11 = sub_4ded00(eax_2, &var_34, ecx_3, var_48_1)
        
        if (eax_11 == 0)
            return eax_11
    else
        var_34.d = ecx_3[1]
        int32_t ecx_5 = *arg2
        var_34:4.d = ecx_5
        var_34:8.d = arg2[1]
        var_34:0xc.d = sub_4dd730(ecx_5, arg2[5])
        int32_t var_24 = arg2[5]
        sub_4ddd60(&var_34, &var_20)
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(ebx))
    float xmm2 = *(arg4 + 0x4c)
    float xmm0_3 = xmm0_2 / xmm2
    float xmm0_4
    
    if (0 f<= xmm0_3)
        xmm0_4 = xmm0_3 + 0.5f
    else
        xmm0_4 = xmm0_3 - 0.5f
    
    float ecx_7 = int.d(xmm0_4)
    float xmm0_8 = _mm_cvtepi32_ps(zx.o(eax)) / xmm2
    float xmm0_9
    
    if (0 f<= xmm0_8)
        xmm0_9 = xmm0_8 + 0.5f
    else
        xmm0_9 = xmm0_8 - 0.5f
    
    xmm2 - 1f
    int32_t edx_4 = int.d(xmm0_9)
    void* eax_12
    eax_12:1.b =
        (xmm2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 1f) ? 1 : 0) << 2 | (xmm2 < 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1) || ecx_7 s<= 0 || edx_4 s<= 0)
        void* eax_16 = var_20
        arg3[1] = eax
        arg3[2] = eax_16
        eax_16.b = 1
        *arg3 = ebx
        return eax_16
    
    *arg3 = ecx_7
    arg3[1] = edx_4
    float eax_14
    int32_t ecx_9
    eax_14, ecx_9 = sub_45cd70(sub_4dd7f0(eax_12, edx_4, ecx_7, eax_2))
    arg3[2] = eax_14
    int32_t var_4c = arg3[1]
    sub_50c9b0(eax_14, ebx, var_20, eax, ecx_9, eax_14, *arg3)
    int32_t eax_15
    eax_15.b = 1
    return eax_15
}
