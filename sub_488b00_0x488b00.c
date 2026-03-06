// 函数名称: sub_488b00
// 虚拟地址: 0x488b00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_488b00(int32_t arg1, uint32_t (* arg2)[0x4]))[0x4]
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    void* eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx = zx.d(arg1.w)
        
        if (edx u< data_654ebc)
            eax = edx * 0x438 + data_654eb8
            
            if (*(eax + 0x434) == arg1)
                uint32_t (* result)[0x4] =
                    sub_486810(eax, arg2, edx * 0x438 + data_654eb8, &data_5559b1)
                *result += 1
                return result
        
        char const* const var_8_1 = "DataArray<struct UIState>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UIState>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
