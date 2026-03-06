// 函数名称: sub_45f100
// 虚拟地址: 0x45f100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_45f100(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: if (arg3[1] != 0x22)
    if (arg3[1] != 0x22)
        sub_44e4d0(arg1, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI2", "c:\ax2017\engine\ui2.cpp", 
            0x623, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* ecx = sub_4459f0(arg3)
    float xmm2 = *(ecx + 0x10)
    xmm2 f- 0
    void* eax
    eax:1.b = (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2 | (xmm2 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    bool p_3
    
    if (not(p_1))
        float xmm0_1 = *(ecx + 0x14)
        xmm0_1 f- 0
        eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        p_3 = unimplemented  {test ah, 0x44}
    
    int32_t xmm0_3
    
    if (p_1 || p_3)
        xmm0_3 = *(ecx + 0x14)
        float var_c_1 = xmm2
    else
        int32_t var_c = *(ecx + 8)
        xmm0_3 = *(ecx + 0xc)
    
    int32_t var_10 = 0
    int32_t var_8 = xmm0_3
    *arg4 = 0.o
    return arg4
}
