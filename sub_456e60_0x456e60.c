// 函数名称: sub_456e60
// 虚拟地址: 0x456e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_456e60(int128_t* arg1)
{
    // 第一条实际指令: if (data_cdf3e9 == 0)
    if (data_cdf3e9 == 0)
        data_65b00c = *arg1
        data_65b01c = arg1[1]
        data_65b02c = arg1[2]
        data_65b03c = arg1[3]
        return 
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "!gDraw3DData.submittingRenderItems", "c:\ax2017\engine\draw3d.cpp", 
        0x36a, "Draw3DSetProj")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
