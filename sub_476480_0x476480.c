// 函数名称: sub_476480
// 虚拟地址: 0x476480
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_476480()
{
    // 第一条实际指令: int32_t edx = data_5cd9fc
    int32_t edx = data_5cd9fc
    int32_t var_c
    uint32_t eax
    char const* const ecx_1
    
    if (edx != 0)
        eax = zx.d(edx.w)
        
        if (eax u< data_5c99a4)
            void* ecx_3 = eax * 0x1008 + data_5c99a0
            
            if (*(ecx_3 + 0x1004) == edx)
                sub_4761e0(ecx_3)
                int32_t esi
                return sub_475a20(esi, &data_571d90)
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx_1 = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
