// 函数名称: sub_414390
// 虚拟地址: 0x414390
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_414390()
{
    // 第一条实际指令: void* edx = data_5bb160
    void* edx = data_5bb160
    
    if (edx == 0)
        return 
    
    void* eax = nullptr
    
    while (true)
        if (eax != 0)
            eax += 0x63c
        else
            eax = edx
        
        void* ecx_2 = data_5bb164 * 0x63c + edx
        
        if (eax u>= ecx_2)
            break
        
        while (true)
            int32_t esi_1 = *(eax + 0x638)
            
            if ((esi_1 & 0xffff0000) != 0)
                int32_t edx_1 = data_5bb16c
                data_5bb16c = zx.d(esi_1.w)
                *(eax + 0x638) = edx_1
                data_5bb170 -= 1
                edx = data_5bb160
                break
            
            eax += 0x63c
            
            if (eax u>= ecx_2)
                goto label_4143d7
    
    label_4143d7:
    data_5bb164 = 0
    data_5bb16c = 0
    
    if (edx != 0)
        _aligned_free_base(edx)
    
    __builtin_memset(&data_5bb160, 0, 0x14)
    data_5bb178 = 0
}
