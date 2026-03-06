// 函数名称: sub_44d360
// 虚拟地址: 0x44d360
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_44d360(int32_t* arg1, uint32_t arg2))[0x4]
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t eax = data_5c6394
    int32_t var_1c
    char const* const ecx
    
    if (eax u< data_5c638c)
        int32_t ecx_1 = data_5c6390
        int32_t edi_1 = data_5c6388
        
        if (ecx_1 u<= edi_1)
            int32_t edx = data_5c6384
            int32_t eax_1
            
            if (ecx_1 != edi_1)
                edi_1 = ecx_1
                eax_1 = *(edx + ecx_1 * 0x38 + 0x34)
            else
                eax_1 = edi_1 + 1
                data_5c6388 = eax_1
            
            data_5c6390 = eax_1
            uint32_t (* result)[0x4] = edx + edi_1 * 0x38
            _memset(result, 0, 0x34)
            (*result)[0xd] = data_5c6398 << 0x10 | edi_1
            int32_t ecx_3 = data_5c6398 + 1
            
            if (ecx_3 == 0x10000)
                ecx_3 = 1
            
            data_5c6394 += 1
            data_5c6398 = ecx_3
            (*result)[0xb] = *arg1
            uint32_t ecx_6 = (*result)[0xd]
            result[3][0] = arg2
            data_5c63a0 = ecx_6
            return result
        
        char const* const var_18_1 = "DataArray<struct LogEntry2>::DataArrayAlloc"
        var_1c = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const var_18 = "DataArray<struct LogEntry2>::DataArrayAlloc"
        var_1c = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_1c, 
        "DataArray<struct LogEntry2>::DataArrayAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
