// 函数名称: sub_482c00
// 虚拟地址: 0x482c00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_482c00(int32_t arg1, int32_t arg2, void** arg3, void* arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: void** edi = arg3
    void** edi = arg3
    char eax = sub_48abc0(*(arg4 + 0x18))
    void* ecx_2 = arg4
    void* eax_1
    
    if (eax == 0)
        eax_1 = *(ecx_2 + 0x18)
    
    if (eax != 0 || *(eax_1 + 0x10) == 0xf)
        eax_1 = *(*(ecx_2 + 0x18) + 0xc)
        void* var_8_1 = eax_1
        char const* const var_24
        int32_t var_20_1
        char const* const var_1c_1
        char* ecx_3
        
        if (eax_1 == 0)
            var_1c_1 = "DefinitionGetSize"
            var_20_1 = 0x6d
            var_24 = "c:\ax2017\engine\definition.cpp"
            ecx_3 = "pDefMap->definitionSize != 0"
        label_482cf4:
            sub_44e4d0(eax_1, &data_5559b1, ecx_3, var_24, var_20_1, var_1c_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t ebx_1 = 0
        
        if (arg2 s> 0)
            while (true)
                void* edx = *(ecx_2 + 0x18)
                int32_t* eax_3 = *(edx + 0x10)
                
                if (eax_3 != 0xf)
                    if (eax_3 != 8)
                        eax_1 = eax_3 - 1
                        
                        if (eax_1 u<= 0x10)
                            break
                        
                        sub_483010(eax_1, edx, edi, arg5, arg6)
                    else
                        char* ecx_5 = &data_5559b1
                        
                        if ((*(ecx_2 + 0x28) & 0x10) == 0)
                            ecx_5 = *edi
                        
                        sub_482b20(eax_3, arg6[1] + *arg6, ecx_5, arg6)
                    
                    ecx_2 = arg4
                else
                    void* eax_4 = *edi
                    
                    if (eax_4 != 0)
                        char* ecx_4 = &data_5559b1
                        int32_t* eax_5 = *(eax_4 + 0x20)
                        
                        if (eax_5 != 0)
                            ecx_4 = eax_5
                        
                        sub_482b20(eax_5, arg6[1] + *arg6, ecx_4, arg6)
                        ecx_2 = arg4
                
                ebx_1 += 1
                arg6[1] += var_8_1
                edi += var_8_1
                
                if (ebx_1 s>= arg2)
                    return var_8_1
            
            var_1c_1 = "DefBinSerializeArray"
            var_20_1 = 0x1aa
            var_24 = "c:\ax2017\engine\defbin.cpp"
            ecx_3 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
            goto label_482cf4
    
    return eax_1
}
