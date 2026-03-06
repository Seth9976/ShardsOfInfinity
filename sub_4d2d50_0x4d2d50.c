// 函数名称: sub_4d2d50
// 虚拟地址: 0x4d2d50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4d2d50(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t* esi_1 = arg2[4] + arg3
    int32_t* edi_1 = *arg2 + arg3
    char const* const var_20_1
    int32_t var_1c_1
    char const* const var_18
    char* ecx_1
    
    if (arg4 s< 0 || arg4 s>= *esi_1)
        var_18 = "DefinitionVariableArrayDeleteItem"
        var_1c_1 = 0x85
        var_20_1 = "c:\ax2017\engine\defeditor.cpp"
        ecx_1 = "position >= 0 && position < *pcount"
    else
        arg1 = *(arg2[6] + 0xc)
        
        if (arg1 != 0)
            int32_t* ebx_2 = arg1 * arg4 + *edi_1
            sub_48b260(arg1, arg2, ebx_2, arg5)
            int32_t edx = *esi_1
            
            if (edx != 1)
                void* eax_4 = (edx - arg4 - 1) * arg1
                
                if (eax_4 s> 0)
                    sub_51d5b0(ebx_2, ebx_2 + arg1, eax_4)
                    edx = *esi_1
                
                *esi_1 = edx - 1
                return edx - 1
            
            int32_t result = *edi_1
            
            if (result != 0)
                result = _aligned_free_base(result)
            
            *edi_1 = 0
            *esi_1 = 0
            return result
        
        var_18 = "DefinitionGetSize"
        var_1c_1 = 0x6d
        var_20_1 = "c:\ax2017\engine\definition.cpp"
        ecx_1 = "pDefMap->definitionSize != 0"
    
    sub_44e4d0(arg1, &data_5559b1, ecx_1, var_20_1, var_1c_1, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
