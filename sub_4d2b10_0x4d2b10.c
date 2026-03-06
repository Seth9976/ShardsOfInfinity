// 函数名称: sub_4d2b10
// 虚拟地址: 0x4d2b10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_4d2b10(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4))[0x4]
{
    // 第一条实际指令: int32_t eax = arg4
    int32_t eax = arg4
    int32_t* esi_1 = arg2[4] + arg3
    int32_t* edi_1 = *arg2 + arg3
    int32_t ecx
    
    if (eax s>= 0)
        ecx = *esi_1
    
    char const* const var_34_1
    int32_t var_30_1
    char const* const var_2c_1
    char* ecx_1
    
    if (eax s< 0 || eax s> ecx)
        var_2c_1 = "DefinitionVariableArrayAddItem"
        var_30_1 = 0x29
        var_34_1 = "c:\ax2017\engine\defeditor.cpp"
        ecx_1 = "position >= 0 && position <= *pcount"
    else
        char* ebx_1 = *edi_1
        eax = *(arg2[6] + 0xc)
        
        if (eax != 0)
            char* eax_2 = sub_45cd70((ecx + 1) * eax)
            int32_t edx = eax
            int32_t ecx_4 = arg4
            *edi_1 = eax_2
            void* eax_4 = edx * ecx_4
            void* eax_7 = (*esi_1 - ecx_4) * edx
            void* eax_8 = eax_4
            
            if (eax_8 s> 0)
                sub_51d5b0(eax_2, ebx_1, eax_8)
                ecx_4 = arg4
                eax_8 = eax_4
                edx = eax
            
            if (eax_7 s> 0)
                sub_51d5b0((ecx_4 + 1) * edx + *edi_1, eax_8 + ebx_1, eax_7)
            
            uint32_t (* result)[0x4] = sub_48b0e0(*edi_1 + eax_4, arg2)
            *esi_1 += 1
            
            if (ebx_1 == 0)
                return result
            
            return _aligned_free_base(ebx_1)
        
        var_2c_1 = "DefinitionGetSize"
        var_30_1 = 0x6d
        var_34_1 = "c:\ax2017\engine\definition.cpp"
        ecx_1 = "pDefMap->definitionSize != 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_34_1, var_30_1, var_2c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
