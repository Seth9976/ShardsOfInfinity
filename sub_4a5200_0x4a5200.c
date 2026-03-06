// 函数名称: sub_4a5200
// 虚拟地址: 0x4a5200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_4a5200()
{
    // 第一条实际指令: void* esi = data_6553cc
    void* esi = data_6553cc
    
    if (esi == 0)
        return 
    
    void* eax = nullptr
    
    while (true)
        if (eax != 0)
            eax += 0x24
        else
            eax = esi
        
        void* edx_1 = esi + data_6553d0 * 0x24
        
        if (eax u>= edx_1)
            break
        
        while (true)
            int32_t ecx_3 = *(eax + 0x20)
            
            if ((ecx_3 & 0xffff0000) != 0)
                int32_t edx_2 = data_6553d8
                data_6553d8 = zx.d(ecx_3.w)
                *(eax + 0x20) = edx_2
                data_6553dc -= 1
                esi = data_6553cc
                break
            
            eax += 0x24
            
            if (eax u>= edx_1)
                goto label_4a5242
    
    label_4a5242:
    data_6553d0 = 0
    data_6553d8 = 0
    
    if (esi != 0)
        _aligned_free_base(esi)
    
    __builtin_memset(&data_6553cc, 0, 0x14)
    data_6553e4 = 0
}
