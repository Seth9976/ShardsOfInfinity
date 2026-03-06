// 函数名称: sub_48b690
// 虚拟地址: 0x48b690
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_48b690(int32_t arg1, int32_t arg2, void** arg3, void* arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: void** esi = arg3
    void** esi = arg3
    uint32_t result = sub_48abc0(*(arg4 + 0x18))
    
    if (result.b != 0)
        void* ecx_2 = arg4
        result = *(*(ecx_2 + 0x18) + 0xc)
        uint32_t result_1 = result
        int32_t var_20_1
        char const* const var_1c_1
        char* ecx_3
        
        if (result == 0)
            var_1c_1 = "DefinitionGetSize"
            var_20_1 = 0x6d
            ecx_3 = "pDefMap->definitionSize != 0"
        label_48b73c:
            sub_44e4d0(result, &data_5559b1, ecx_3, "c:\ax2017\engine\definition.cpp", var_20_1, 
                var_1c_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t edi_1 = 0
        
        if (arg2 s> 0)
            int32_t* ebx_2 = arg6 - esi
            
            while (true)
                void* edx = *(ecx_2 + 0x18)
                int32_t eax_1 = *(edx + 0x10)
                
                if (eax_1 != 8)
                    result = eax_1 - 1
                    
                    if (result u<= 0x10)
                        break
                    
                    uint32_t eax_2 = ebx_2 + esi
                    result = sub_48ba10(eax_2, edx, esi, arg5, eax_2)
                else
                    result = sub_48b620(esi, *(ebx_2 + esi))
                
                esi += result_1
                edi_1 += 1
                
                if (edi_1 s>= arg2)
                    return result
                
                ecx_2 = arg4
            
            var_1c_1 = "DefDeepCopyArray"
            var_20_1 = 0x2b4
            ecx_3 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
            goto label_48b73c
    
    return result
}
