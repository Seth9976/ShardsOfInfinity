// 函数名称: sub_456df0
// 虚拟地址: 0x456df0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_456df0(int128_t* arg1)
{
    // 第一条实际指令: if (data_cdf3e9 == 0)
    if (data_cdf3e9 == 0)
        data_65b0d4 = *arg1
        data_65b0e4 = arg1[1]
        data_65b0f4 = arg1[2]
        data_65b104 = arg1[3]
        return 
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "!gDraw3DData.submittingRenderItems", "c:\ax2017\engine\draw3d.cpp", 
        0x364, "Draw3DSetView")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
