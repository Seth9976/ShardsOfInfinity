// 函数名称: __FindAndUnlinkFrame
// 虚拟地址: 0x51cbe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*__FindAndUnlinkFrame(void* arg1)
{
    // 第一条实际指令: int32_t esi = *(sub_51e354() + 0x24)
    int32_t esi = *(sub_51e354() + 0x24)
    void* eax_1 = sub_51e354()
    
    if (arg1 == esi)
        *(eax_1 + 0x24) = *(arg1 + 4)
        return eax_1
    
    int32_t* edx_1 = *(eax_1 + 0x24) + 4
    
    while (true)
        void* eax_2 = *edx_1
        
        if (eax_2 == 0)
            sub_52f140()
            noreturn
        
        if (arg1 == eax_2)
            break
        
        edx_1 = eax_2 + 4
    
    int32_t eax_3 = *(arg1 + 4)
    *edx_1 = eax_3
    return eax_3
}
