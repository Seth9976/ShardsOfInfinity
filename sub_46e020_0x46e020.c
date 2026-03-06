// 函数名称: sub_46e020
// 虚拟地址: 0x46e020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_46e020(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    char* var_c_1 = arg2
    int32_t var_20_1
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t ecx_1 = zx.d(arg3.w)
        
        if (ecx_1 u< data_5c99a4)
            int32_t edi_1 = data_5c99a0
            arg1 = ecx_1 * 0x1008
            
            if (*(arg1 + edi_1 + 0x1004) == arg3)
                int32_t eax = arg4
                void* ebx = ecx_1 * 0x1008
                char* ecx_2 = *(ebx + edi_1 + 0x698)
                void* ebx_1 = ebx + edi_1
                
                if (*(ebx_1 + 0x754) == eax || eax == 0xffffffff)
                    char* const eax_1 = &data_5559b1
                    
                    if (ecx_2 != 0)
                        eax_1 = ecx_2
                    
                    if (__stricmp(eax_1, arg2) == 0)
                        return arg3
                    
                    eax = arg4
                
                int32_t i = 0
                
                if (*(ebx_1 + 0x7f4) s> 0)
                    void* edi_2 = ebx_1 + 0x7f8
                    
                    do
                        *edi_2
                        int32_t eax_3 = sub_46e020(eax)
                        
                        if (eax_3 != 0)
                            return eax_3
                        
                        eax = arg4
                        i += 1
                        edi_2 += 4
                    while (i s< *(ebx_1 + 0x7f4))
                
                return 0
        
        char const* const var_1c_4 = "DataArray<struct UI2>::DataArrayGet"
        var_20_1 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_1c_1 = "DataArray<struct UI2>::DataArrayGet"
        var_20_1 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_20_1, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
