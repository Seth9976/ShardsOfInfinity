// 函数名称: sub_425b30
// 虚拟地址: 0x425b30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_425b30(int32_t arg1, int32_t arg2, int32_t* arg3, float arg4 @ xmm2, char arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    float xmm0_1 = sub_4297a0(arg4 * 8f)
    int32_t xmm1 = (zx.o(0)).d
    float xmm0_2
    
    if (0 f<= xmm0_1)
        xmm0_2 = xmm0_1 + 0.5f
    else
        xmm0_2 = xmm0_1 - 0.5f
    
    int32_t eax = int.d(xmm0_2)
    
    if (arg5 == 1)
        arg3[1] = 0
    
    if (eax s> arg2 && arg2 == 0 && arg5 == 1)
        eax = 0
        arg3[1] = 1
        *arg3 = 1
    else if (arg3[1] != 1 || arg2 != 0)
        arg3[1] = 0
        eax = arg2 + 1
        *arg3 = 1
    
    int32_t* edi_1 = data_65ac30
    
    if (edi_1 == 0)
        sub_44e4d0(eax, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    float xmm2_1 = edi_1[1]
    float xmm0_5 = _mm_cvtepi32_ps(zx.o(eax)) * 0.125f
    
    if (arg3 != &data_65aae8)
        edi_1[1] = xmm0_5
    else
        *edi_1 = xmm0_5
        xmm0_5 = xmm2_1
    
    if (arg5 != 0)
    label_425bee:
        data_dfcea0
        sub_482460()
        xmm0_5 = edi_1[1]
        xmm1 = (zx.o(0)).d
    else
        xmm0_5 - xmm2_1
        eax:1.b = (xmm0_5 == xmm2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, xmm2_1) ? 1 : 0) << 2
            | (xmm0_5 < xmm2_1 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            goto label_425bee
    
    float xmm3 = *edi_1
    int32_t xmm2_2
    
    if (0f <= xmm0_5)
        xmm2_2 = _mm_min_ss(0x3f800000, xmm0_5)
    else
        xmm2_2 = (zx.o(0)).d
    
    void* eax_1 = data_cdf448
    *(eax_1 + 0x1c) = xmm2_2
    
    if (not(0f > xmm3))
        xmm1 = _mm_min_ss(0x3f800000, xmm3)
    
    *(eax_1 + 0x20) = xmm1
    return sub_429a80()
}
