// 函数名称: sub_485aa0
// 虚拟地址: 0x485aa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_485aa0(int32_t arg1, void* arg2, void* arg3, int128_t* arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx = *(arg3 + 0xa0)
    
    if (ecx == 0)
        int128_t* ecx_1 = arg5
        *arg4 = *ecx_1
        arg4[1] = ecx_1[1]
        arg4[2] = ecx_1[2]
        arg4[3] = ecx_1[3]
        int32_t ecx_2 = ecx_1[5].d
        arg4[4] = ecx_1[4]
        arg4[5].d = ecx_2
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return arg4
    
    float var_70[0x4]
    int128_t var_3c = *sub_486000(&var_70, arg2, ecx, &var_70)
    int128_t* eax_7 = sub_485510(&var_70, arg3 + 0xc, arg5, &var_70, arg3 + 0x1c)
    float xmm2_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x8c)))
    float xmm0_6[0x4] = *eax_7
    float var_18 = xmm2_1
    float var_2c = xmm2_1
    float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x88)))
    float var_1c = xmm0_8
    float xmm3 = xmm0_8
    float var_28 = xmm0_8
    float xmm4 = xmm0_8
    float var_20 = xmm0_8
    
    if (arg7 != 0)
        uint128_t xmm2_2 = zx.o(*arg7)
        float xmm0_10 = _mm_cvtepi32_ps(zx.o(arg7[1]))
        xmm2_1 = _mm_cvtepi32_ps(xmm2_2)
        var_1c = xmm0_10
        xmm3 = xmm0_10
        var_18 = xmm2_1
        xmm4 = xmm0_10
        var_2c = xmm2_1
        var_28 = xmm0_10
        var_20 = xmm0_10
    
    float var_48
    float var_44
    
    if (*(arg2 + 0x7c) == 0)
        var_48 = *(arg3 + 0x94)
        var_44 = *(arg3 + 0x90)
        var_18 = xmm2_1
        var_1c = xmm3
        var_20 = xmm4
    else
        var_48 = *(arg2 + 0x80)
        var_44 = *(arg2 + 0x84)
    
    float xmm1_4 = var_3c:0xc.d f- var_3c:4.d
    float xmm0_16 = var_3c:8.d f- var_3c.d
    var_3c:0xc.d = xmm1_4
    var_3c:8.d = xmm0_16
    float eax_10
    float edx_1
    eax_10, edx_1 = sub_485870(*eax_7, var_3c:8.d, var_3c:0xc.d, var_48, var_44, *(arg3 + 0x9c), 
        *(arg3 + 0x98), var_2c, var_28)
    bool cond:1 = *(arg3 + 0xad) == 0
    float xmm4_2 = _mm_shuffle_ps(xmm0_6, xmm0_6, 0xff)
    float xmm5_1[0x4] = _mm_shuffle_ps(xmm0_6, xmm0_6, 0x55)
    float xmm4_3 = xmm4_2 f- xmm5_1
    var_70 = xmm5_1
    float xmm3_3 = _mm_shuffle_ps(xmm0_6, xmm0_6, 0xaa) f- xmm0_6
    float xmm7_2 = xmm0_16 * var_18 + (var_18 - 1f) * eax_10
    float xmm2_6 = xmm1_4 * var_20 + (var_1c - 1f) * edx_1
    float xmm3_5 = xmm4_3 / xmm2_6
    float xmm2_8 = xmm3_3 / xmm7_2
    float xmm1_9 = _mm_min_ss(xmm2_8, xmm3_5)
    float var_20_1 = xmm1_9
    
    if (not(cond:1))
        xmm1_9 = arg5[3]
        var_20_1 = xmm1_9
    
    int128_t var_c8 = *arg5
    int128_t xmm0_22 = *(arg5 + 0x10)
    int128_t var_e8 = xmm0_22
    int128_t var_b8 = xmm0_22
    int128_t var_a8 = *(arg5 + 0x20)
    int128_t var_98 = *(arg5 + 0x30)
    int32_t edi_1 = arg5[0x14]
    int128_t var_88 = *(arg5 + 0x40)
    int32_t* eax_13
    float xmm1_13
    float xmm2_9
    
    if (*(arg3 + 0xac) != 0)
        var_70 = xmm0_6
        int32_t eax_14
        int32_t edx_4
        eax_14, edx_4 = sub_41b6f0(&var_70)
        xmm2_9 = var_20_1
        var_3c:8.d = eax_14
        eax_13 = arg6
        var_3c:0xc.d = edx_4
        float xmm1_16 = _mm_cvtepi32_ps(zx.o(*eax_13)) * (eax_10 * xmm2_9 + xmm2_8 * xmm0_16)
        float xmm0_52 = _mm_cvtepi32_ps(zx.o(eax_13[1]))
        xmm1_13 = xmm1_16 f+ var_3c:8.d
        float xmm0_54 = xmm0_52 * (edx_1 * xmm2_9 + xmm3_5 * xmm1_4) f+ var_3c:0xc.d
        var_b8:8.d = xmm1_13
        var_c8:4.d = xmm0_54
        var_b8.d = xmm2_8 / xmm2_9 - 1f
        var_b8:0xc.d = xmm0_54
        var_b8:4.d = xmm3_5 / xmm2_9 - 1f
        var_e8 = var_b8
    else
        float xmm7_3 = xmm7_2 * xmm1_9
        float xmm0_27 = xmm2_6 * xmm1_9
        int32_t eax_11
        int32_t edx_2
        eax_11, edx_2 = sub_4afaf0(*(arg3 + 0xa4))
        var_3c:8.d = eax_11
        var_3c:0xc.d = edx_2
        float xmm4_9 = var_3c:8.d * xmm3_3 + xmm0_6[0] - ((xmm7_3 - 0f) f* var_3c:8.d + 0f)
        var_3c.d = xmm4_9
        var_3c:8.d = xmm4_9 + xmm7_3
        float xmm3_9 = var_3c:0xc.d * xmm4_3 + var_70[0] - ((xmm0_27 - 0f) f* var_3c:0xc.d + 0f)
        var_3c:4.d = xmm3_9
        var_3c:0xc.d = xmm3_9 + xmm0_27
        int32_t eax_12
        int32_t edx_3
        eax_12, edx_3 = sub_41b6f0(&var_3c)
        xmm2_9 = var_20_1
        var_3c:8.d = eax_12
        eax_13 = arg6
        var_3c:0xc.d = edx_3
        float xmm1_12 = _mm_cvtepi32_ps(zx.o(*eax_13)) * (eax_10 * xmm2_9 + xmm0_16 * xmm1_9)
        float xmm0_41 = _mm_cvtepi32_ps(zx.o(eax_13[1]))
        xmm1_13 = xmm1_12 f+ var_3c:8.d
        var_c8:4.d = xmm0_41 * (edx_1 * xmm2_9 + xmm1_4 * xmm1_9) f+ var_3c:0xc.d
    
    int32_t* ecx_10 = *(arg3 + 0xa0)
    var_c8:0xc.d = xmm2_9
    var_c8.d = xmm1_13
    
    if (ecx_10[1] != 0x1e)
        sub_44e4d0(eax_13, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
            "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_15 = sub_4459f0(ecx_10)
    int128_t xmm2_10 = data_571cf8
    int128_t xmm3_23 = *(eax_15 + 8)
    int128_t xmm1_17 = *(eax_15 + 8)
    *arg4 = var_c8
    arg4[1] = var_e8
    arg4[2] = xmm1_17
    arg4[3] = xmm2_10
    arg4[4] = xmm3_23
    arg4[5].d = edi_1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
