// 函数名称: sub_488a60
// 虚拟地址: 0x488a60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_488a60(int32_t arg1, uint32_t (* arg2)[0x4], int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_654ebc)
            int32_t esi_1 = data_654eb8
            arg1 = edx * 0x438
            
            if (*(arg1 + esi_1 + 0x434) == arg3)
                uint32_t (* eax)[0x4] = sub_486810(arg1, arg2, edx * 0x438 + esi_1, &data_5559b1)
                (*eax)[0x19] = *eax + 1
                char** result = sub_44f590(&(*eax)[0x1a], arg4)
                *(eax + 0x151) = 1
                return result
        
        char const* const var_10_2 = "DataArray<struct UIState>::DataArrayGet"
        var_14 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_10 = "DataArray<struct UIState>::DataArrayGet"
        var_14 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
