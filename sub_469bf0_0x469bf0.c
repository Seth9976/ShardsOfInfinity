// 函数名称: sub_469bf0
// 虚拟地址: 0x469bf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_469bf0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_1c
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_5c99a4)
            int32_t edi_1 = data_5c99a0
            arg1 = edx * 0x1008
            
            if (*(arg1 + edi_1 + 0x1004) == arg3)
                void* ebx = edx * 0x1008
                int32_t ecx_1 = 0
                int32_t edx_1 = *(ebx + edi_1 + 0x75c)
                void* ebx_1 = ebx + edi_1
                int32_t* eax = *(ebx_1 + 0x758)
                
                if (edx_1 s> 0)
                    while (eax[1] != arg5 || *eax != arg2)
                        ecx_1 += 1
                        eax = &eax[6]
                        
                        if (ecx_1 s>= edx_1)
                            goto label_469c6b
                
                if (edx_1 s<= 0 || eax == 0)
                label_469c6b:
                    void* ecx_2
                    
                    if (*(ebx_1 + 0x760) != 0)
                        ecx_2 = ebx_1 + 0x758
                    else
                        ecx_2 = ebx_1 + 0x758
                        *ecx_2 = sub_45cff0(0x3000)
                        *(ecx_2 + 4) = 0
                        *(ecx_2 + 8) = 0x200
                    
                    eax = sub_47b660(ecx_2)
                
                *eax = arg2
                eax[1] = arg5
                eax[2] = 1
                eax[5] = arg4
                return sub_4660e0(ebx_1)
        
        char const* const var_18_1 = "DataArray<struct UI2>::DataArrayGet"
        var_1c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_18 = "DataArray<struct UI2>::DataArrayGet"
        var_1c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_1c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
