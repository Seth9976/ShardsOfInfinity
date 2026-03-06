// 函数名称: sub_4c1f90
// 虚拟地址: 0x4c1f90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4c1f90(int32_t arg1, int32_t arg2, int32_t arg3, float arg4 @ xmm2, int32_t* arg5)
{
    // 第一条实际指令: float xmm1_3 = _mm_cvtepi32_ps(zx.o(arg2 - 1)) * arg4 + _mm_cvtepi32_ps(zx.o(arg3))
    float xmm1_3 = _mm_cvtepi32_ps(zx.o(arg2 - 1)) * arg4 + _mm_cvtepi32_ps(zx.o(arg3))
    float xmm0_3 = sub_453f10(xmm1_3)
    float xmm2 = (zx.o(0)).d
    float xmm1_5
    
    if (0 f<= xmm0_3)
        xmm1_5 = xmm0_3 + 0.5f
    else
        xmm1_5 = xmm0_3 - 0.5f
    
    int32_t esi = int.d(xmm1_5)
    int32_t edi_2 = arg2 - 1 + arg3
    
    if (esi s< edi_2)
        xmm2 = xmm1_3 - xmm0_3
    
    *arg5 = esi
    int32_t ecx = esi
    
    if (esi s< edi_2)
        ecx = esi + 1
    
    arg5[1] = ecx
    arg5[2] = xmm2
    int32_t var_20
    char* ecx_1
    
    if (arg5[1] != 0xffffffff)
        if (esi != 0xffffffff)
            return esi + 1
        
        char const* const var_1c_1 = "FlanimCalcFrameTime"
        var_20 = 0x2b6
        ecx_1 = "pFrameTime->mFrameIndexBefore != -1"
    else
        char const* const var_1c = "FlanimCalcFrameTime"
        var_20 = 0x2b5
        ecx_1 = "pFrameTime->mFrameIndexAfter != -1"
    
    sub_44e4d0(esi + 1, &data_5559b1, ecx_1, "c:\ax2017\engine\flanim.cpp", var_20, 
        "FlanimCalcFrameTime")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
