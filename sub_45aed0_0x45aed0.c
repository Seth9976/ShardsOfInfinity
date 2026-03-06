// 函数名称: sub_45aed0
// 虚拟地址: 0x45aed0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_45aed0(int128_t* arg1)
{
    // 第一条实际指令: int32_t eax = data_cdf3fc
    int32_t eax = data_cdf3fc
    
    if (eax u<= 3)
        int32_t ecx_1 = eax * 7
        *arg1 = *((ecx_1 << 2) + &data_65ae5c)
        arg1[1].q = *((ecx_1 << 2) + &data_65ae6c)
        *(arg1 + 0x18) = (&data_65ae74)[ecx_1]
        return arg1
    
    sub_44e4d0(eax, &data_5559b1, 
        "gDraw3DData.renderingDrawEye >= 0 && gDraw3DData.renderingDrawEye < NUM_DRAW_EYES", 
        "c:\ax2017\engine\draw3d.cpp", 0xb2a, "Draw3DGetRenderingEyePose")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
