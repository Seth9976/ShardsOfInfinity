// 函数名称: sub_45aba0
// 虚拟地址: 0x45aba0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_45aba0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_2c
    char const* const ecx
    
    if (data_cdf3e9 != 0)
        char const* const var_28 = "Draw3DRenderItemSubmissionBegin"
        var_2c = 0xaab
        ecx = "!gDraw3DData.submittingRenderItems"
    else if (data_7db388 != 0)
        char const* const var_28_1 = "Draw3DRenderItemSubmissionBegin"
        var_2c = 0xaac
        ecx = "gDraw3DData.renderItemCount == 0"
    else if (data_cdb38c == 0)
        if (data_cdf3e8 == 0)
            int128_t xmm1 = data_571934
            data_65b2b8 = xmm1
            int32_t var_c = 0xbf800000
            data_65b2d8 = xmm1
            data_65b2c8 = zx.o(0)
            data_cdf3e9 = 1
            int64_t xmm1_1 = _mm_unpacklo_ps(0x3f800000, 0xbf800000)
            data_65b2b4 = 0
            data_65b2e8 = 0
            int64_t var_14 = xmm1_1
            void var_24
            int32_t edx
            int64_t* eax_3 = sub_452d30(&var_24, edx, &var_14, &var_24)
            data_65b144.q = *eax_3
            int32_t result = eax_3[1].d
            int128_t xmm0_1 = data_571934
            data_65b144:8 = result
            __builtin_memset(&data_65b35c, 0, 0x24)
            data_65b174 = xmm0_1
            data_65b380 = 7
            data_65b384 = 0x3f800000
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        char const* const var_28_4 = "Draw3DRenderItemSubmissionBegin"
        var_2c = 0xaae
        ecx = "!gDraw3DData.quadGroupDrawing"
    else
        char const* const var_28_2 = "Draw3DRenderItemSubmissionBegin"
        var_2c = 0xaad
        ecx = "gDraw3DData.renderQuadCount == 0"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx, "c:\ax2017\engine\draw3d.cpp", var_2c, 
        "Draw3DRenderItemSubmissionBegin")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
