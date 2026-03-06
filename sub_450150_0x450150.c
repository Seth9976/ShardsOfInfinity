// 函数名称: sub_450150
// 虚拟地址: 0x450150
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (*sub_450150())[0x4]
{
    // 第一条实际指令: void* eax_4 = data_65acf4
    void* eax_4 = data_65acf4
    
    if (eax_4 == 0)
        sub_44e4d0(eax_4, &data_5559b1, "gNetwork", "c:\ax2017\engine\network.cpp", 0x11f, 
            "NetMessageAlloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(eax_4 + 0x58) == 0)
        uint32_t (* eax_1)[0x4] = sub_45cd70(0x7ea8)
        _memset(eax_1, 0, 0x7ea8)
        return eax_1
    
    int32_t* edi = *(eax_4 + 0x54)
    void* ecx = edi[2]
    *(eax_4 + 0x54) = ecx
    
    if (ecx == 0)
        *(eax_4 + 0x50) = 0
    else
        *(ecx + 4) = 0
    
    int32_t esi = *edi
    *(eax_4 + 0x58) -= 1
    sub_45d050(edi, 0xc)
    return esi
}
