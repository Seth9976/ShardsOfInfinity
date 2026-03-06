// 函数名称: sub_4c70b0
// 虚拟地址: 0x4c70b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c70b0(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg2
    void* eax = sub_4c6d50()
    int32_t var_34
    char const* const ecx
    
    if (eax != 0)
        if (arg1 s>= 0 && arg1 s< *(eax + 4))
            data_ce1ca0 - data_ce1ca4
            float* esi_2 = (arg1 << 4) + *eax
            void var_1c
            uint128_t xmm1_1 = *sub_4c7040(&var_1c)
            int32_t ecx_1 = xmm1_1
            int32_t xmm0_3 = _mm_bsrli_si128(xmm1_1, 0xc)
            int32_t xmm0_5 = _mm_bsrli_si128(xmm1_1, 4)
            int32_t result =
                int.d(_mm_cvtepi32_ps(zx.o(_mm_bsrli_si128(xmm1_1, 8) - ecx_1)) * esi_2[2]) + ecx_1
            
            if (ebx.b == 0)
                *esi_2
            else
                esi_2[1]
            
            _mm_cvtepi32_ps(zx.o(xmm0_3 - xmm0_5))
            return result
        
        char const* const var_30_2 = "EditorGetNodePoint"
        var_34 = 0x2e8
        ecx = "nodeIndex >= 0 && nodeIndex < pTrack->paramCount"
    else
        char const* const var_30 = "EditorGetNodePoint"
        var_34 = 0x2e6
        ecx = "pTrack"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\windows\editorwindow.cpp", var_34, 
        "EditorGetNodePoint")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
