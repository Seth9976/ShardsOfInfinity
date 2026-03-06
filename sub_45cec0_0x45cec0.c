// 函数名称: sub_45cec0
// 虚拟地址: 0x45cec0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_45cec0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (data_cdf414 != 0)
        return 
    
    uint32_t (* edi_1)[0x4] = sub_45cd70(0xa0)
    _memset(edi_1, 0, 0xa0)
    int32_t eax_2 = 0
    data_cdf414 = edi_1
    int32_t var_8_1 = 0
    void* ebx_1 = nullptr
    
    while (true)
        int32_t esi_1 = 1 << (eax_2.b + 4)
        void* ecx_2 = ebx_1 + edi_1
        
        if (esi_1 u< 4)
            sub_44e4d0(eax_2, &data_5559b1, "itemSize_arg >= sizeof(void*)", 
                "c:\ax2017\engine\xalloc.cpp", 0xf, "XAllocator::Initialize")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *ecx_2 = 0
        *(ecx_2 + 4) = 0
        *(ecx_2 + 0xc) = 0
        *(ecx_2 + 0x10) = esi_1
        *(ecx_2 + 8) = divs.dp.d(0x10000, esi_1)
        sub_45ce30(ecx_2)
        ebx_1 += 0x14
        eax_2 = var_8_1 + 1
        var_8_1 = eax_2
        
        if (ebx_1 s>= 0x8c)
            *(data_cdf414 + 0x9c) = 0xffffffff
            break
        
        edi_1 = data_cdf414
}
