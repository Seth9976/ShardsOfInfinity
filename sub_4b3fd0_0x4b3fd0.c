// 函数名称: sub_4b3fd0
// 虚拟地址: 0x4b3fd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_4b3fd0()
{
    // 第一条实际指令: void* edx = data_654cc4
    void* edx = data_654cc4
    
    if (edx == 0)
        return 
    
    void* eax = nullptr
    
    while (true)
        if (eax != 0)
            eax += 0xf10
        else
            eax = edx
        
        void* ecx_2 = data_654cc8 * 0xf10 + edx
        
        if (eax u>= ecx_2)
            break
        
        while (true)
            int32_t esi_1 = *(eax + 0xf0c)
            
            if ((esi_1 & 0xffff0000) != 0)
                int32_t edx_1 = data_654cd0
                data_654cd0 = zx.d(esi_1.w)
                *(eax + 0xf0c) = edx_1
                data_654cd4 -= 1
                edx = data_654cc4
                break
            
            eax += 0xf10
            
            if (eax u>= ecx_2)
                goto label_4b4017
    
    label_4b4017:
    data_654cc8 = 0
    data_654cd0 = 0
    
    if (edx != 0)
        _aligned_free_base(edx)
    
    __builtin_memset(&data_654cc4, 0, 0x14)
    data_654cdc = 0
}
