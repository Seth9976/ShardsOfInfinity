// 函数名称: sub_45e790
// 虚拟地址: 0x45e790
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_45e790(uint32_t arg1))[0x4]
{
    // 第一条实际指令: int32_t eax = data_5c99b0
    int32_t eax = data_5c99b0
    int32_t var_24
    char const* const ecx
    
    if (eax u< data_5c99a8)
        int32_t ecx_1 = data_5c99a4
        eax = data_5c99ac
        int32_t var_8_1 = ecx_1
        
        if (eax u<= ecx_1)
            int32_t edx = data_5c99a0
            int32_t eax_1
            
            if (eax != ecx_1)
                ecx_1 = eax
                var_8_1 = ecx_1
                eax_1 = *(eax * 0x1008 + edx + 0x1004)
            else
                eax_1 = ecx_1 + 1
                data_5c99a4 = eax_1
            
            data_5c99ac = eax_1
            uint32_t (* result)[0x4] = ecx_1 * 0x1008 + edx
            _memset(result, 0, 0x1004)
            int32_t (__fastcall* var_20_1)(void* arg1) = sub_461440
            `eh vector constructor iterator'(&result[1], 0x208, 3, sub_4613b0)
            (*result)[0x1a6] = &data_5559b1
            result[0x6a][0] = &data_5559b1
            __builtin_memset(&(*result)[0x1d6], 0, 0x24)
            _memset(&(*result)[0x1e6], 0, 0x5c)
            (*result)[0x1f3] = 0xff000000
            (*result)[0x1f6] = 0xff000000
            (*result)[0x1f7] = 0xffffffff
            void* edx_1 = data_dff710
            (*result)[0x1fb] = 1
            result[0x7d][0] = 0x3f800000
            (*result)[0x401] = data_5c99b4 << 0x10 | var_8_1
            int32_t eax_7 = data_5c99b4 + 1
            
            if (eax_7 == 0x10000)
                eax_7 = 1
            
            data_5c99b0 += 1
            data_5c99b4 = eax_7
            (*result)[0x195] = 1
            (*result)[0x18f] = 0
            result[0x64][0] = 0
            (*result)[0x191] = 0
            sub_48b160(&result[1], edx_1)
            sub_48b160(&(*result)[0x86], data_dff710)
            sub_48b160(&result[0x42], data_dff710)
            (*result)[0x1e1] = arg1
            return result
        
        char const* const var_20_2 = "DataArray<struct UI2>::DataArrayAlloc"
        var_24 = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const var_20 = "DataArray<struct UI2>::DataArrayAlloc"
        var_24 = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_24, 
        "DataArray<struct UI2>::DataArrayAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
