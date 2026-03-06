// 函数名称: sub_46f400
// 虚拟地址: 0x46f400
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* const __fastcallsub_46f400(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    int32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< data_5c99a4)
            int32_t esi_1 = data_5c99a0
            eax = edx_1 * 0x1008
            
            if (*(eax + esi_1 + 0x1004) == arg1)
                char* result = *(edx_1 * 0x1008 + esi_1 + 0x698)
                
                if (result != 0)
                    return result
                
                return &data_5559b1
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
