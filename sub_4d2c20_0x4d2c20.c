// 函数名称: sub_4d2c20
// 虚拟地址: 0x4d2c20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4d2c20(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* eax = arg2
    int32_t* eax = arg2
    int32_t* edx_1 = eax[4] + arg3
    int32_t* edi_1 = *eax + arg3
    int32_t* var_18 = eax
    int32_t edx_2
    
    if (arg4 s>= 0)
        edx_2 = *edx_1
    
    char const* const var_38_1
    int32_t var_34_1
    char const* const var_30_1
    char* ecx_1
    
    if (arg4 s< 0 || arg4 s> edx_2)
        var_30_1 = "DefinitionVariableArrayInsertItems"
        var_34_1 = 0x56
        var_38_1 = "c:\ax2017\engine\defeditor.cpp"
        ecx_1 = "position >= 0 && position <= *pcount"
    else
        eax = eax[6]
        char* result = *edi_1
        int32_t ebx_1 = eax[3]
        
        if (ebx_1 != 0)
            char* eax_1 = sub_45cd70((arg5 + edx_2) * ebx_1)
            int32_t edx_3 = arg4
            *edi_1 = eax_1
            void* esi_1 = ebx_1 * edx_3
            void* eax_4 = (*edx_1 - edx_3) * ebx_1
            
            if (esi_1 s> 0)
                sub_51d5b0(eax_1, result, esi_1)
                edx_3 = arg4
            
            if (eax_4 s> 0)
                sub_51d5b0((arg5 + edx_3) * ebx_1 + *edi_1, result + esi_1, eax_4)
            
            if (arg5 s> 0)
                int32_t i_1 = arg5
                int32_t i
                
                do
                    sub_48b0e0(*edi_1 + esi_1, var_18)
                    esi_1 += ebx_1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            *edx_1 += arg5
            
            if (result == 0)
                return result
            
            return _aligned_free_base(result)
        
        var_30_1 = "DefinitionGetSize"
        var_34_1 = 0x6d
        var_38_1 = "c:\ax2017\engine\definition.cpp"
        ecx_1 = "pDefMap->definitionSize != 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_38_1, var_34_1, var_30_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
