// 函数名称: sub_45ade0
// 虚拟地址: 0x45ade0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_45ade0(int64_t* arg1)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    char const* const ecx
    
    if (data_cdf3e9 != 0)
        if (data_cdf3e8 == 0)
            data_cdf3e8 = 1
            data_cdf3ec.q = *arg1
            int32_t result = arg1[1].d
            data_cdf3f4 = result
            return result
        
        char const* const var_4_1 = "Draw3DQuadGroupStart"
        var_8 = 0xaf3
        ecx = "!gDraw3DData.quadGroupDrawing"
    else
        char const* const var_4 = "Draw3DQuadGroupStart"
        var_8 = 0xaf2
        ecx = "gDraw3DData.submittingRenderItems"
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\draw3d.cpp", var_8, "Draw3DQuadGroupStart")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
