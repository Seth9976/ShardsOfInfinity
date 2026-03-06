// 函数名称: sub_4b3f40
// 虚拟地址: 0x4b3f40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4b3f40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t var_14
    int32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< data_654cc8)
            int32_t edi_1 = data_654cc4
            eax = edx_1 * 0xf10
            
            if (*(eax + edi_1 + 0xf0c) == arg1)
                int32_t* esi_1 = edx_1 * 0xf10 + edi_1
                
                if (esi_1[0x3c2].b == 0)
                    sub_4b4b60(&esi_1[1], *esi_1)
                    esi_1[0x3c2].b = 1
                
                return &esi_1[1]
        
        char const* const var_10_1 = "DataArray<struct MaterialCacheItem>::DataArrayGet"
        var_14 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_10 = "DataArray<struct MaterialCacheItem>::DataArrayGet"
        var_14 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct MaterialCacheItem>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
