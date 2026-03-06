// 函数名称: sub_4761e0
// 虚拟地址: 0x4761e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4761e0(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    int32_t edx = *(arg1 + 0x7f4)
    
    if (edx == 0)
        return 0
    
    int32_t edx_1 = *(arg1 + (edx << 2) + 0x7f4)
    int32_t var_c
    uint32_t result
    char const* const ecx_1
    
    if (edx_1 != 0)
        result = zx.d(edx_1.w)
        
        if (result u< data_5c99a4)
            result = data_5c99a0 + result * 0x1008
            
            if (*(result + 0x1004) == edx_1)
                return result
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx_1 = "id != DATAID_NULL"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
