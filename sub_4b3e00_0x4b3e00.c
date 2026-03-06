// 函数名称: sub_4b3e00
// 虚拟地址: 0x4b3e00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4b3e00(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t ebx = data_654cc8
    void* eax = nullptr
    void* edi = data_654cc4
    void* edx_1 = ebx * 0xf10 + edi
    
    while (true)
        if (eax != 0)
            eax += 0xf10
        else
            eax = edi
        
        if (eax u>= edx_1)
            break
        
        while (true)
            int32_t result = *(eax + 0xf0c)
            
            if ((result & 0xffff0000) != 0)
                if (*eax != arg1)
                    break
                
                return result
            
            eax += 0xf10
            
            if (eax u>= edx_1)
                goto label_4b3e57
    
    label_4b3e57:
    int32_t eax_2 = data_654cd4
    int32_t var_1c
    char const* const ecx
    
    if (eax_2 u< data_654ccc)
        eax_2 = data_654cd0
        
        if (eax_2 u<= ebx)
            int32_t eax_3
            
            if (eax_2 != ebx)
                ebx = eax_2
                eax_3 = *(eax_2 * 0xf10 + edi + 0xf0c)
            else
                eax_3 = ebx + 1
                data_654cc8 = eax_3
            
            data_654cd0 = eax_3
            void* esi_2 = ebx * 0xf10 + edi
            _memset(esi_2, 0, 0xf0c)
            *(esi_2 + 0xf0c) = data_654cd8 << 0x10 | ebx
            int32_t eax_9 = data_654cd8 + 1
            
            if (eax_9 == 0x10000)
                eax_9 = 1
            
            data_654cd4 += 1
            data_654cd8 = eax_9
            *esi_2 = arg1
            return *(esi_2 + 0xf0c)
        
        char const* const var_18_1 = "DataArray<struct MaterialCacheItem>::DataArrayAlloc"
        var_1c = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const var_18 = "DataArray<struct MaterialCacheItem>::DataArrayAlloc"
        var_1c = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_1c, 
        "DataArray<struct MaterialCacheItem>::DataArrayAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
