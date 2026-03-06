// 函数名称: sub_413310
// 虚拟地址: 0x413310
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (*sub_413310())[0x4]
{
    // 第一条实际指令: int32_t eax = data_5bb170
    int32_t eax = data_5bb170
    int32_t var_14
    char const* const ecx
    
    if (eax u< data_5bb168)
        eax = data_5bb16c
        int32_t edi_1 = data_5bb164
        
        if (eax u<= edi_1)
            int32_t ecx_1 = data_5bb160
            int32_t eax_1
            
            if (eax != edi_1)
                edi_1 = eax
                eax_1 = *(eax * 0x63c + ecx_1 + 0x638)
            else
                eax_1 = edi_1 + 1
                data_5bb164 = eax_1
            
            data_5bb16c = eax_1
            uint32_t (* result)[0x4] = edi_1 * 0x63c + ecx_1
            _memset(result, 0, 0x638)
            (*result)[0x18e] = data_5bb174 << 0x10 | edi_1
            int32_t ecx_3 = data_5bb174 + 1
            
            if (ecx_3 == 0x10000)
                ecx_3 = 1
            
            data_5bb170 += 1
            data_5bb174 = ecx_3
            (*result)[0x186] = 0xffffffff
            result[0x62][0] = 0xffffffff
            return result
        
        char const* const var_10_1 = "DataArray<struct Cardset>::DataArrayAlloc"
        var_14 = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const var_10 = "DataArray<struct Cardset>::DataArrayAlloc"
        var_14 = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct Cardset>::DataArrayAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
