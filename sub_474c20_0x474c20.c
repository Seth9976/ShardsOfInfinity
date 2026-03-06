// 函数名称: sub_474c20
// 虚拟地址: 0x474c20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_474c20(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_c = arg2
    int32_t var_c = arg2
    int32_t var_28
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_5c99a4)
            int32_t edi_1 = data_5c99a0
            arg1 = edx * 0x1008
            
            if (*(arg1 + edi_1 + 0x1004) == arg3)
                int32_t result = edx * 0x1008
                int32_t result_1 = result
                
                if (*(result + edi_1 + 0x788) != 0)
                    return result
                
                int32_t eax = *arg4
                *(arg2 + (eax << 2)) = arg3
                arg1 = eax + 1
                *arg4 = arg1
                
                if (edx u< data_5c99a4)
                    arg1 = edx * 0x1008
                    void* edx_1 = data_5c99a0
                    
                    if (*(arg1 + edx_1 + 0x1004) == arg3)
                        result = result_1
                        int32_t i = 0
                        
                        if (*(result + edx_1 + 0x7f4) s> 0)
                            int32_t* esi_2 = edx_1 + 0x7f8 + result
                            
                            do
                                *esi_2
                                sub_474c20(arg4)
                                result = result_1
                                esi_2 = &esi_2[1]
                                i += 1
                            while (i s< *(result + edx_1 + 0x7f4))
                        
                        return result
        
        char const* const var_24_3 = "DataArray<struct UI2>::DataArrayGet"
        ecx = "DataArrayTryToGet(id) != NULL"
        var_28 = 0x6d
    else
        char const* const var_24_1 = "DataArray<struct UI2>::DataArrayGet"
        var_28 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_28, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
