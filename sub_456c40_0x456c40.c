// 函数名称: sub_456c40
// 虚拟地址: 0x456c40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_456c40(int32_t arg1)
{
    // 第一条实际指令: if (data_cdf3e9 != 0)
    if (data_cdf3e9 != 0)
        int32_t result = data_65b35c
        data_65b35c = arg1
        return result
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "gDraw3DData.submittingRenderItems", "c:\ax2017\engine\draw3d.cpp", 
        0x327, "Draw3DLayer")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
