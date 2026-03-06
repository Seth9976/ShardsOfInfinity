// 函数名称: sub_4e7290
// 虚拟地址: 0x4e7290
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4e7290(void* arg1, float arg2)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 8)
    int32_t* esi = *(arg1 + 8)
    int32_t ecx
    
    if (not(0f < arg2))
        ecx = 0xffffd8f0
    else if (arg2 < 1f)
        int32_t mxcsr
        int16_t x87control
        float xmm0_4 =
            fconvert.s(__libm_sse2_log10_precise(mxcsr, x87control, _mm_cvtps_pd(1f / arg2))) * -2000f
        float xmm0_5
        
        if (0 f<= xmm0_4)
            xmm0_5 = xmm0_4 + 0.5f
        else
            xmm0_5 = xmm0_4 - 0.5f
        
        ecx = int.d(xmm0_5)
        
        if (ecx s< 0xffffd8f0)
            ecx = 0xffffd8f0
        else if (ecx s> 0)
            ecx = 0
    else
        ecx = 0
    
    int32_t result = (*(*esi + 0x3c))(esi, ecx)
    
    if (result == 0)
        return result
    
    sub_44e4d0(result, &data_5559b1, "hr == S_OK", "c:\ax2017\engine\windows\windowssound.cpp", 0x286, 
        "WindowsSoundInterface::SoundSetVolume")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
