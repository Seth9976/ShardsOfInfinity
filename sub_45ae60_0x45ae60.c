// 函数名称: sub_45ae60
// 虚拟地址: 0x45ae60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_45ae60()
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    char const* const ecx
    
    if (data_cdf3e9 != 0)
        if (data_cdf3e8 != 0)
            data_cdf3e8 = 0
            data_cdf404 = 0
            return 
        
        char const* const var_4_1 = "Draw3DQuadGroupEnd"
        var_8 = 0xafb
        ecx = "gDraw3DData.quadGroupDrawing"
    else
        char const* const var_4 = "Draw3DQuadGroupEnd"
        var_8 = 0xafa
        ecx = "gDraw3DData.submittingRenderItems"
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\draw3d.cpp", var_8, "Draw3DQuadGroupEnd")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
