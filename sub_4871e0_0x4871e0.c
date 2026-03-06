// 函数名称: sub_4871e0
// 虚拟地址: 0x4871e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_4871e0(uint32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t ecx = *arg3
    int32_t var_1c_1
    char const* const ecx_2
    
    if (ecx != 0)
        uint32_t edx_1 = zx.d(ecx.w)
        
        if (edx_1 u>= data_654ebc)
        label_48730a:
            char const* const var_18_4 = "DataArray<struct UIState>::DataArrayGet"
            var_1c_1 = 0x6d
            ecx_2 = "DataArrayTryToGet(id) != NULL"
        else
            int32_t esi_2 = data_654eb8
            arg1 = edx_1 * 0x438
            
            if (*(arg1 + esi_2 + 0x434) != ecx)
                goto label_48730a
            
            arg1 = edx_1 * 0x438 + esi_2
            int32_t* ebx_1 = *arg1
            int32_t* esi_3 = ebx_1
            
            if (ebx_1 == 0)
                esi_3 = *(arg2 + 0xa0)
            
            if (esi_3 == *(arg1 + 4))
                return 
            
            arg1 = sub_486c10(ecx)
            
            if (esi_3 == 0)
                return 
            
            uint32_t eax_3 = sub_4870b0(arg1, arg4, arg2, arg5, esi_3)
            arg1 = arg3
            *arg1 = eax_3
            
            if (eax_3 != 0)
                uint32_t ecx_6 = zx.d(eax_3.w)
                
                if (ecx_6 u< data_654ebc)
                    int32_t esi_4 = data_654eb8
                    arg1 = ecx_6 * 0x438
                    
                    if (*(arg1 + esi_4 + 0x434) == eax_3)
                        *(ecx_6 * 0x438 + esi_4) = ebx_1
                        return 
                
                goto label_48730a
            
            char const* const var_18_3 = "DataArray<struct UIState>::DataArrayGet"
            var_1c_1 = 0x6c
            ecx_2 = "id != DATAID_NULL"
    else
        int32_t* ecx_1 = *(arg2 + 0xa0)
        
        if (ecx_1 == 0)
            return 
        
        arg1 = sub_4869c0(ecx_1)
        uint32_t esi_1 = arg1
        
        if (esi_1 != 0)
            uint32_t ecx_3 = zx.d(esi_1.w)
            
            if (ecx_3 u>= data_654ebc)
                goto label_48730a
            
            int32_t edi_1 = data_654eb8
            arg1 = ecx_3 * 0x438
            
            if (*(arg1 + edi_1 + 0x434) != esi_1)
                goto label_48730a
            
            int32_t edx = ecx_3 * 0x438
            *(edx + edi_1 + 0xc) = arg4
            *(edx + edi_1 + 0x10) = *arg5
            *(edx + edi_1 + 0x14) = arg5[1]
            *arg3 = esi_1
            return 
        
        char const* const var_18_1 = "DataArray<struct UIState>::DataArrayGet"
        var_1c_1 = 0x6c
        ecx_2 = "id != DATAID_NULL"
    
    sub_44e4d0(arg1, &data_5559b1, ecx_2, "c:\ax2017\engine\dataarray.h", var_1c_1, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
