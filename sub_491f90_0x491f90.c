// 函数名称: sub_491f90
// 虚拟地址: 0x491f90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_491f90(int32_t arg1, int32_t* arg2, int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t* eax_1 = *arg2 + arg3
    int32_t* eax_1 = *arg2 + arg3
    int32_t* eax_3 = arg2[4] + arg3
    int32_t* var_10 = eax_3
    int32_t ebx = *eax_3
    char const* const var_2c_1
    int32_t var_28_1
    char const* const var_24_1
    char* ecx
    
    if (ebx u> 0xf4240)
        var_24_1 = "DefParseReadVariableArray"
        var_28_1 = 0x25b
        ecx = "oldCount >= 0 && oldCount <=1000000"
        var_2c_1 = "c:\ax2017\engine\defparsetree.cpp"
    else
        eax_3 = arg2[6]
        int32_t esi_1 = eax_3[3]
        
        if (esi_1 != 0)
            char* edx_1 = sub_45cd70(esi_1 * (ebx + 1))
            eax_3 = eax_1
            char* ecx_3 = *eax_3
            
            if (ebx s> 0)
                if (ecx_3 != 0)
                    sub_51d5b0(edx_1, ecx_3, esi_1 * ebx)
                    eax_3 = eax_1
                    int32_t ecx_4 = *eax_3
                    
                    if (ecx_4 != 0)
                        _aligned_free_base(ecx_4)
                        eax_3 = eax_1
                    
                    goto label_492033
                
                var_24_1 = "DefParseReadVariableArray"
                var_28_1 = 0x264
                ecx = "*ppSubDefinition"
            else if (ecx_3 == 0)
            label_492033:
                *eax_3 = edx_1
                *var_10 = ebx + 1
                void* esi_3 = esi_1 * ebx + edx_1
                uint32_t eax_8 = sub_48ac30(arg2[6])
                void* edx_2 = arg2[6]
                
                if (eax_8.b != 0)
                    return sub_491920(eax_8, edx_2, esi_3, arg2, arg4)
                
                eax_3 = *(edx_2 + 0x10) - 1
                
                if (eax_3 u> 0x10)
                    return sub_492980(arg4, edx_2, esi_3, *(arg4 + 8), 0)
                
                var_24_1 = "DefParseReadVariableArray"
                var_28_1 = 0x278
                ecx = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
            else
                var_24_1 = "DefParseReadVariableArray"
                var_28_1 = 0x26a
                ecx = "*ppSubDefinition == NULL"
            
            var_2c_1 = "c:\ax2017\engine\defparsetree.cpp"
        else
            var_24_1 = "DefinitionGetSize"
            var_28_1 = 0x6d
            var_2c_1 = "c:\ax2017\engine\definition.cpp"
            ecx = "pDefMap->definitionSize != 0"
    
    sub_44e4d0(eax_3, &data_5559b1, ecx, var_2c_1, var_28_1, var_24_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
