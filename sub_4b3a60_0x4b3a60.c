// 函数名称: sub_4b3a60
// 虚拟地址: 0x4b3a60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_4b3a60()
{
    // 第一条实际指令: void* edx = data_655ab8
    void* edx = data_655ab8
    
    if (edx == 0)
        return 
    
    void* eax = nullptr
    
    while (true)
        if (eax != 0)
            eax += 0x4d0
        else
            eax = edx
        
        void* ecx_2 = data_655abc * 0x4d0 + edx
        
        if (eax u>= ecx_2)
            break
        
        while (true)
            int32_t esi_1 = *(eax + 0x4cc)
            
            if ((esi_1 & 0xffff0000) != 0)
                int32_t edx_1 = data_655ac4
                data_655ac4 = zx.d(esi_1.w)
                *(eax + 0x4cc) = edx_1
                data_655ac8 -= 1
                edx = data_655ab8
                break
            
            eax += 0x4d0
            
            if (eax u>= ecx_2)
                goto label_4b3aa7
    
    label_4b3aa7:
    data_655abc = 0
    data_655ac4 = 0
    
    if (edx != 0)
        _aligned_free_base(edx)
    
    __builtin_memset(&data_655ab8, 0, 0x14)
    data_655ad0 = 0
}
