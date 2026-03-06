// 函数名称: sub_4ac8c0
// 虚拟地址: 0x4ac8c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* const __convention("regparm")sub_4ac8c0(int32_t arg1, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    
    if (data_cdf3e9 != 0)
        sub_44e4d0(arg1, &data_5559b1, "!gDraw3DData.submittingRenderItems", 
            "c:\ax2017\engine\renderer.cpp", 0x277, "GraphicsSetRT")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_4bd1a0(0)
    (*(*data_ce19b4 + 0x88))(arg3, arg2)
    bool cond:1 = data_ce19c0 != 5
    *(data_ce19c4 + 0xe1) = 1
    void* const result
    result.b = 1
    
    if (not(cond:1) && arg4 != 0)
        result = 1
        
        if (data_ce19b8 == 1)
            result = nullptr
    
    if (data_65b224 == result.b)
        return result
    
    data_65b224 = result.b
    return sub_456ed0(&data_65ae44)
}
