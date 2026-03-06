// 函数名称: sub_4dbc50
// 虚拟地址: 0x4dbc50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4dbc50(int32_t arg1)
{
    // 第一条实际指令: float red_1
    float red_1
    int32_t eax_1 = __security_cookie ^ &red_1
    
    if (data_cdf3e9 != 0)
        sub_44e4d0(eax_1, &data_5559b1, "!gDraw3DData.submittingRenderItems", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x1333, "OpenGLInterface::RenderTargetClear")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int16_t eax_2 = arg1.w
    uint32_t mask = 0x4000
    float xmm4_1 = _mm_cvtepi32_ps(zx.o(eax_2.b))
    void* ecx_1 = data_ce26e8
    float red = xmm4_1 / 255f
    float green = _mm_cvtepi32_ps(zx.o(eax_2:1.b)) / 255f
    float blue = _mm_cvtepi32_ps(zx.o(arg1:2.b)) / 255f
    float alpha = _mm_cvtepi32_ps(zx.o(arg1:3.b)) / 255f
    float xmm0 = *(ecx_1 + 0x4230)
    xmm0 - red
    red_1 = red
    uint32_t eax_5
    eax_5:1.b =
        (xmm0 == red ? 1 : 0) << 6 | (is_unordered.d(xmm0, red) ? 1 : 0) << 2 | (xmm0 < red ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
    label_4dbd38:
        glClearColor(red, green, blue, alpha)
        ecx_1 = data_ce26e8
        *(ecx_1 + 0x4230) = red_1
        *(ecx_1 + 0x4234) = green
        *(ecx_1 + 0x4238) = blue
        *(ecx_1 + 0x423c) = alpha
    else
        float xmm0_1 = *(ecx_1 + 0x4234)
        xmm0_1 - green
        eax_5:1.b = (xmm0_1 == green ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, green) ? 1 : 0) << 2
            | (xmm0_1 < green ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_4dbd38
        
        float xmm0_2 = *(ecx_1 + 0x4238)
        xmm0_2 - blue
        eax_5:1.b = (xmm0_2 == blue ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, blue) ? 1 : 0) << 2
            | (xmm0_2 < blue ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_4dbd38
        
        float xmm0_3 = *(ecx_1 + 0x423c)
        xmm0_3 - alpha
        eax_5:1.b = (xmm0_3 == alpha ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, alpha) ? 1 : 0) << 2
            | (xmm0_3 < alpha ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            goto label_4dbd38
    
    if (*(data_65ae00 + 0x20) != 0)
        mask = 0x4100
        
        if (*(ecx_1 + 0x4050) != 1)
            *(ecx_1 + 0x4050) = 1
            glDepthMask(1)
    
    int32_t result = glClear(mask)
    @__security_check_cookie@4(eax_1 ^ &red_1)
    return result
}
