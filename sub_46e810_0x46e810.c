// 函数名称: sub_46e810
// 虚拟地址: 0x46e810
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_46e810(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = sub_46e5c0(arg1)
    int32_t eax = sub_46e5c0(arg1)
    int32_t var_14
    char const* const ecx
    
    if (arg1 != 0)
        int32_t ecx_1 = data_5c99a4
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< ecx_1)
            int32_t edi_1 = data_5c99a0
            eax = edx_1 * 0x1008
            
            if (*(eax + edi_1 + 0x1004) == arg1)
                void* ebx_2 = edx_1 * 0x1008 + edi_1
                eax = *(ebx_2 + 0x6a8)
                data_5cda2c = eax
                data_5cea2c = 1
                
                if (edx_1 u< ecx_1)
                    eax = edx_1 * 0x1008
                    
                    if (*(eax + edi_1 + 0x1004) == arg1)
                        data_5cea30 = sub_46e4e0(ebx_2)
                        return sub_51d5b0(&(&data_5cda24)[data_64f840 * 0x407], &data_5cda28, 0x1018)
        
        char const* const var_10_1 = "DataArray<struct UI2>::DataArrayGet"
        ecx = "DataArrayTryToGet(id) != NULL"
        var_14 = 0x6d
    else
        char const* const var_10 = "DataArray<struct UI2>::DataArrayGet"
        var_14 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
