// 函数名称: sub_48b3f0
// 虚拟地址: 0x48b3f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_48b3f0(int32_t arg1, int32_t* arg2, int32_t* arg3, uint32_t arg4)
{
    // 第一条实际指令: uint32_t eax = sub_48abc0(arg2[3])
    uint32_t eax = sub_48abc0(arg2[3])
    
    if (eax.b != 0)
        void* edx = arg2[3]
        int32_t ecx_1 = *(edx + 0x10)
        uint32_t eax_1 = ecx_1 - 5
        int32_t var_18
        char* ecx_2
        
        if (eax_1 u> 0xc)
        label_48b4c6:
            
            if (ecx_1 s> 0 && ecx_1 s< 0x12)
                char const* const var_14_7 = "DefinitionDeleteField"
                var_18 = 0x21f
                ecx_2 = "!DefTypeIsBuiltIn(pField->pDefMap)"
                goto label_48b50e
            
            uint32_t eax_10 = arg4
            
            if (eax_10 == 0 && (ecx_1 == 0x13 || ecx_1 == 0x14))
                eax_10 = arg2[7]
            
            return sub_48b560(eax_10, edx, *arg2 + arg3, eax_10)
        
        eax_1 = zx.d(lookup_table_48b544[eax_1])
        
        switch (eax_1)
            case 0
                uint32_t* esi = arg2[4]
                uint32_t eax_2 = sub_48b360(eax_1, arg2, arg3, arg4, *(esi + arg3))
                *(esi + arg3) = 0
                return eax_2
            case 1
                return sub_48b2e0(eax_1, arg2[7], *arg2 + arg3, arg2, arg4)
            case 2
                return sub_48b200(*arg2 + arg3, arg2[9]) __tailcall
            case 3
                eax = arg2[4]
                int32_t edx_6 = *(arg3 + eax)
                
                if (edx_6 != 0xffffffff)
                    int32_t* eax_8 = *arg2 + arg3
                    return sub_4b8590(eax_8, edx_6, arg4, eax_8)
            case 4
                int32_t eax_5 = *arg2
                uint32_t ecx_9
                ecx_9.b = *(arg3 + eax_5) != 0
                return sub_48b360(eax_5, arg2, arg3, arg4, ecx_9)
            case 5
                char const* const var_14_1 = "DefinitionDeleteField"
                var_18 = 0x1f4
                ecx_2 = "Halt"
            label_48b50e:
                sub_44e4d0(eax_1, &data_5559b1, ecx_2, "c:\ax2017\engine\definition.cpp", var_18, 
                    "DefinitionDeleteField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            case 6
                goto label_48b4c6
    
    return eax
}
