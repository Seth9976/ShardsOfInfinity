// 函数名称: sub_482610
// 虚拟地址: 0x482610
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_482610()
{
    // 第一条实际指令: void* eax_4 = data_65ae00
    void* eax_4 = data_65ae00
    int32_t* ecx = data_cdf448
    
    if (*(eax_4 + 0x29) != 0)
        char edx = *(eax_4 + 0x27)
        int32_t xmm0_3
        
        if (edx != 0 && data_ce19bd != 0)
            float xmm0_1 = ecx[9]
            
            if (data_ce1a6c != 0)
                xmm0_3 = __minss_xmmss_memss(xmm0_1 + 0.0399999991f, 0x3f800000)
            else
                xmm0_3 = __maxss_xmmss_memss(xmm0_1 - 0.0399999991f, 0)
        else if (*(data_65ae04 + 0x18) != 0 || edx != 0)
            xmm0_3 = __minss_xmmss_memss(ecx[9] f+ 0.0399999991f, 0x3f800000)
        else
            xmm0_3 = __maxss_xmmss_memss(ecx[9] f- 0.0399999991f, 0)
        
        ecx[9] = xmm0_3
    
    void* esi = nullptr
    
    while (true)
        void* edx_1
        
        if (esi != 0)
            edx_1 = *ecx
            esi += 0x64
        else
            esi = *ecx
            edx_1 = esi
        
        void* eax_2 = ecx[1] * 0x64 + edx_1
        
        if (esi u>= eax_2)
            break
        
        while ((*(esi + 0x60) & 0xffff0000) == 0)
            esi += 0x64
            
            if (esi u>= eax_2)
                goto label_4826b9
        
        sub_4824d0(esi)
        ecx = data_cdf448
    
    label_4826b9:
    jump(*(*data_cdf444 + 0x14))
}
