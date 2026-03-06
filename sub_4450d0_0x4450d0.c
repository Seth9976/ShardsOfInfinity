// 函数名称: sub_4450d0
// 虚拟地址: 0x4450d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_4450d0(int32_t* arg1))[0x4]
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    int32_t var_14
    char const* const ecx
    
    if (eax u< arg1[2])
        eax = arg1[3]
        int32_t edi_1 = arg1[1]
        
        if (eax u<= edi_1)
            int32_t ecx_1 = *arg1
            int32_t eax_1
            
            if (eax != edi_1)
                edi_1 = eax
                eax_1 = *(eax * 0x568 + ecx_1 + 0x564)
            else
                eax_1 = edi_1 + 1
                arg1[1] = eax_1
            
            arg1[3] = eax_1
            uint32_t (* result)[0x4] = edi_1 * 0x568 + ecx_1
            _memset(result, 0, 0x564)
            (*result)[0x159] = arg1[5] << 0x10 | edi_1
            arg1[5] += 1
            
            if (arg1[5] == 0x10000)
                arg1[5] = 1
            
            arg1[4] += 1
            return result
        
        char const* const var_10_1 = "DataArray<struct ShGfx>::DataArrayAlloc"
        var_14 = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const var_10 = "DataArray<struct ShGfx>::DataArrayAlloc"
        var_14 = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct ShGfx>::DataArrayAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
