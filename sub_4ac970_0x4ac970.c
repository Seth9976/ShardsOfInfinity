// 函数名称: sub_4ac970
// 虚拟地址: 0x4ac970
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4ac970(int32_t arg1)
{
    // 第一条实际指令: if (data_cdf3e9 != 0)
    if (data_cdf3e9 != 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "!gDraw3DData.submittingRenderItems", 
            "c:\ax2017\engine\renderer.cpp", 0x28a, "GraphicsSetMainRT")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_4bd1a0(0)
    (*(*data_ce19b4 + 0x84))(arg1)
    void* result = data_ce19c4
    *(result + 0xe1) = 0
    
    if (data_65b224 == 0)
        return result
    
    data_65b224 = 0
    return sub_456ed0(&data_65ae44) __tailcall
}
