// 函数名称: sub_489f50
// 虚拟地址: 0x489f50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_489f50(void* arg1, uint32_t (* arg2)[0x4], int32_t arg3, uint32_t arg4))[0x4]
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_654ebc)
            arg1 = edx * 0x438 + data_654eb8
            
            if (*(arg1 + 0x434) == arg3)
                uint32_t (* result)[0x4] =
                    sub_486810(arg1, arg2, edx * 0x438 + data_654eb8, &data_5559b1)
                (*result)[0x4f] = *result + 1
                result[0x14][0] = arg4
                return result
        
        char const* const var_c_1 = "DataArray<struct UIState>::DataArrayGet"
        var_10 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_c = "DataArray<struct UIState>::DataArrayGet"
        var_10 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_10, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
