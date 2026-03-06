// 函数名称: sub_487b30
// 虚拟地址: 0x487b30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_487b30(int32_t arg1, void* arg2, void* arg3, int128_t* arg4, int128_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_8 = eax_1
    
    if (*(arg3 + 4) != 6)
        sub_44e4d0(eax_1, &data_5559b1, "el.type == UI_GROUP", "c:\ax2017\engine\uidef.cpp", 0x815, 
            "UIElementGroupTransform")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    float xmm0 = *(arg2 + 0x10)
    xmm0 - 1f
    eax_1:1.b =
        (xmm0 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 1f) ? 1 : 0) << 2 | (xmm0 < 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        int32_t ecx = arg5[5].d
        *arg4 = *arg5
        arg4[1] = arg5[1]
        arg4[2] = arg5[2]
        arg4[3] = arg5[3]
        arg4[4] = arg5[4]
        arg4[5].d = ecx
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return arg4
    
    int32_t ecx_3 = *(arg3 + 0x64)
    int32_t xmm5 = (zx.o(0)).d
    float xmm0_6 = xmm0 - 0f
    int32_t xmm7
    
    if (not(0 f< xmm0_6))
        xmm7 = (zx.o(0)).d
    else if (xmm0_6 < 1f)
        xmm7 = sub_4145f0(ecx_3, xmm0_6, (zx.o(0)).d, 1f)
        xmm5 = (zx.o(0)).d
    else if (ecx_3 == 0xa || ecx_3 == 0xc || ecx_3 == 0xb || ecx_3 == 0xd || ecx_3 == 0xe
            || ecx_3 == 0xf || ecx_3 == 0x13)
        xmm7 = (zx.o(0)).d
    else
        xmm7 = 0x3f800000
    
    int128_t xmm1_2 = *arg5
    int128_t xmm0_8 = arg5[2]
    int32_t var_14 = arg5[5].d
    float xmm2_2[0x4] = arg5[1]
    float xmm3 = 0f f- *(arg3 + 0x60)
    float xmm4_1 = (0f f- *(arg3 + 0x5c)) f* xmm7
    int128_t var_64 = xmm1_2
    int128_t var_44 = xmm0_8
    float xmm4_3 = (xmm4_1 f+ *(arg3 + 0x5c)) f* *(arg5 + 0xc)
    int128_t var_34 = arg5[3]
    var_64.d = xmm1_2 f+ xmm4_3
    float xmm3_3 = (xmm3 f* xmm7 f+ *(arg3 + 0x60)) f* *(arg5 + 0xc)
    int128_t var_24 = arg5[4]
    float xmm1_6 = (1f f- *(arg3 + 0x54)) f* xmm7 f+ *(arg3 + 0x54)
    var_64:4.d = var_64:4.d + xmm3_3
    float xmm0_13 = xmm2_2[3]
    xmm2_2[2] = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa) + xmm4_3
    xmm2_2[3] = xmm0_13 + xmm3_3
    
    if (not(0f > xmm1_6))
        xmm5 = _mm_min_ss(0x3f800000, xmm1_6)
    
    float xmm0_15 = *(arg3 + 0x58)
    var_64:8.d = xmm5 f* var_64:8.d
    void var_7c
    int128_t* eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_485510(&var_7c, arg3 + 0xc, arg5, &var_7c, arg3 + 0x1c)
    float xmm2_5[0x4] = *eax_6
    float xmm1_8 = _mm_shuffle_ps(xmm2_5, xmm2_5, 0x55)
    void var_d4
    int128_t* eax_8 = sub_487840(&var_d4, edx_1, &var_64, (1f - xmm0_15) f* xmm7 + xmm0_15, &var_d4, 
        (xmm2_5[0] + _mm_shuffle_ps(xmm2_5, xmm2_5, 0xaa)) * 0.5f, 
        (xmm1_8 + _mm_shuffle_ps(xmm2_5, xmm2_5, 0xff)) * 0.5f)
    int32_t ecx_6 = eax_8[5].d
    *arg4 = *eax_8
    arg4[1] = eax_8[1]
    arg4[2] = eax_8[2]
    arg4[3] = eax_8[3]
    arg4[4] = eax_8[4]
    arg4[5].d = ecx_6
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return arg4
}
