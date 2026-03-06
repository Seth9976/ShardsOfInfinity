// 函数名称: sub_4870b0
// 虚拟地址: 0x4870b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4870b0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t* ecx = arg5
    int32_t* ecx = arg5
    
    if (ecx == 0)
        ecx = *(arg3 + 0xa0)
    
    uint32_t result_1 = sub_4869c0(ecx)
    uint32_t result = result_1
    int32_t var_14
    char* ecx_1
    
    if (result != 0)
        uint32_t ecx_2 = zx.d(result.w)
        
        if (ecx_2 u< data_654ebc)
            result_1 = ecx_2 * 0x438 + data_654eb8
            
            if (*(result_1 + 0x434) == result)
                void* edx_1 = ecx_2 * 0x438 + data_654eb8
                *(edx_1 + 0xc) = arg2
                *(edx_1 + 0x10) = *arg4
                *(edx_1 + 0x14) = arg4[1]
                return result
        
        char const* const var_10_1 = "DataArray<struct UIState>::DataArrayGet"
        var_14 = 0x6d
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_10 = "DataArray<struct UIState>::DataArrayGet"
        var_14 = 0x6c
        ecx_1 = "id != DATAID_NULL"
    
    sub_44e4d0(result_1, &data_5559b1, ecx_1, "c:\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
