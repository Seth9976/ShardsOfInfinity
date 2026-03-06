// 函数名称: sub_45eca0
// 虚拟地址: 0x45eca0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_45eca0(uint32_t arg1, int32_t arg2))[0x4]
{
    // 第一条实际指令: int32_t esi = arg1 + (arg2 << 2)
    int32_t esi = arg1 + (arg2 << 2)
    uint32_t edx = *(esi + 0xbf8)
    int32_t var_c
    uint32_t (* result)[0x4]
    char const* const ecx
    
    if (edx != 0)
    label_45ecd1:
        result = zx.d(edx.w)
        
        if (result u< data_5c99a4)
            result = data_5c99a0 + result * 0x1008
            
            if ((*result)[0x401] == edx)
                return result
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        result = sub_45e790(arg1)
        edx = (*result)[0x401]
        *(esi + 0xbf8) = edx
        
        if (edx != 0)
            goto label_45ecd1
        
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
