// 函数名称: sub_44edc0
// 虚拟地址: 0x44edc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_44edc0(int32_t* arg1)
{
    // 第一条实际指令: if (data_ce1488 s> 0)
    if (data_ce1488 s> 0)
        *arg1 = data_ce1494
        arg1[1] = data_ce1498
        int32_t eax_2
        eax_2.b = 1
        return eax_2
    
    CURSORINFO pci
    pci.cbSize = 0x14
    pci.flags = 0
    pci.hCursor = 0
    pci.ptScreenPos.x = 0
    pci.ptScreenPos.y = 0
    GetCursorInfo(&pci)
    BOOL eax_4
    POINT point
    
    if ((pci.flags.b & 2) != 0 || *(data_65ae04 + 0x18) == 0)
        *arg1 = 0
        arg1[1] = 0
    else if (GetCursorPos(&point) != 0)
        ScreenToClient(data_ce1790, &point)
        int32_t edx_1
        eax_4, edx_1 = sub_4a4db0(point.x, point.y)
        *arg1 = eax_4
        float xmm1_1 = *arg1
        arg1[1] = edx_1
        
        if (not(0f > xmm1_1))
            eax_4 = data_65ae00
            
            if (not(xmm1_1 f>= _mm_cvtepi32_ps(zx.o(*(eax_4 + 0x14)))))
                int32_t xmm1_2 = arg1[1]
                
                if (not(0 f> xmm1_2) && not(xmm1_2 f>= _mm_cvtepi32_ps(zx.o(*(eax_4 + 0x18)))))
                    eax_4.b = 1
                    return eax_4
    eax_4.b = 0
    return eax_4
}
