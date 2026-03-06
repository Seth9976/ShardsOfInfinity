// 函数名称: sub_456c90
// 虚拟地址: 0x456c90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_456c90(int32_t arg1 @ xmm1)
{
    // 第一条实际指令: if (data_cdf3e9 != 0)
    if (data_cdf3e9 != 0)
        int128_t xmm0 = data_571934
        data_65b2e8 = arg1
        data_65b2d8 = xmm0
        return 
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "gDraw3DData.submittingRenderItems", "c:\ax2017\engine\draw3d.cpp", 
        0x331, "Draw3DAmbientLight")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
