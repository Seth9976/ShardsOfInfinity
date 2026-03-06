// 函数名称: sub_454ae0
// 虚拟地址: 0x454ae0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (*sub_454ae0())[0x4]
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    int32_t eax
    char const* const ecx
    
    if (data_cdf3e9 != 0)
        eax = data_7db388
        
        if (eax s< 0x1000)
            data_7db388 = eax + 1
            _memset(eax * 0x180 + 0x65b388, 0, 0x180)
            *(eax * 0x180 + 0x65b408) = data_65b2c8
            *(eax * 0x180 + 0x65b418) = data_65b2b8
            *(eax * 0x180 + 0x65b428) = data_65b2d8
            *(eax * 0x180 + 0x65b504) = data_cdf410
            *(eax * 0x180 + 0x65b4f4) = data_65b2a4
            *(eax * 0x180 + 0x65b4a8) = data_65b2e8
            *(eax * 0x180 + 0x65b4ac) = data_65b360
            *(eax * 0x180 + 0x65b4bc) = data_65b370
            *(eax * 0x180 + 0x65b3f4) = data_65b288
            *(eax * 0x180 + 0x65b404) = data_65b298
            *(eax * 0x180 + 0x65b478) = data_65b32c
            *(eax * 0x180 + 0x65b488) = data_65b33c
            *(eax * 0x180 + 0x65b498) = data_65b34c
            *(eax * 0x180 + 0x65b438) = data_65b2ec
            *(eax * 0x180 + 0x65b448) = data_65b2fc
            *(eax * 0x180 + 0x65b458) = data_65b30c
            *(eax * 0x180 + 0x65b468) = data_65b31c
            *(eax * 0x180 + 0x65b4ec) = data_65b380
            *(eax * 0x180 + 0x65b4f0) = data_65b384
            return eax * 0x180 + 0x65b388
        
        char const* const var_8_1 = "RenderItemAlloc"
        var_c = 0x1fe
        ecx = "gDraw3DData.renderItemCount < MAX_RENDER_ITEMS"
    else
        char const* const var_8 = "RenderItemAlloc"
        var_c = 0x1fc
        ecx = "gDraw3DData.submittingRenderItems"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\draw3d.cpp", var_c, "RenderItemAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
