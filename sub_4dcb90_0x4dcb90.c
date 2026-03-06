// 函数名称: sub_4dcb90
// 虚拟地址: 0x4dcb90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __thiscallsub_4dcb90(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ecx = data_ce19c4
    void* ecx = data_ce19c4
    
    if (*(ecx + 0xe0) != 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "!gpRenderAppData->uiProjectedInto3D", 
            "c:\ax2017\engine\openglgraphics.cpp", 0x1515, "OpenGLInterface::GetUIMatrix")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_1 = data_65ae00
    __builtin_memcpy(arg2, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    *arg2 = 2f / _mm_cvtepi32_ps(zx.o(*(eax_1 + 0x14)))
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_1 + 0x18)))
    arg2[3] = 0xbf800000
    arg2[7] = 0x3f800000
    arg2[5] = -2f / xmm0_3
    float var_48[0x10]
    float* result = sub_45c930(&var_48, arg2, ecx + 0xa0, &var_48)
    int128_t xmm1_2 = *(result + 0x10)
    int128_t xmm2 = *(result + 0x20)
    int128_t xmm3 = *(result + 0x30)
    *arg2 = *result
    *(arg2 + 0x10) = xmm1_2
    *(arg2 + 0x20) = xmm2
    *(arg2 + 0x30) = xmm3
    
    if (*(arg1 + 0x4260) != 0)
        arg2[5] ^= (data_59e5c0.o).d
        arg2[7] ^= (data_59e5c0.o).d
    
    return result
}
