// 函数名称: sub_4833f0
// 虚拟地址: 0x4833f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4833f0(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4, void* arg5, void* arg6, int32_t arg7)
{
    // 第一条实际指令: void* ebx = arg5
    void* ebx = arg5
    int32_t* esi = arg2
    int32_t result = *(*(ebx + 0x18) + 0xc)
    int32_t result_1 = result
    char const* const var_30_1
    int32_t var_2c_1
    char const* const var_28_1
    char* ecx
    
    if (result != 0)
        int32_t result_2 = 0
        
        if (arg4 s<= 0)
        label_48349b:
            result.b = 1
            return result
        
        int32_t edi_1 = arg7
        
        while (true)
            void* ecx_1 = *(ebx + 0x18)
            
            if (*(ecx_1 + 0x10) != 0xf)
                char eax_6 = sub_48abc0(ecx_1)
                void* ecx_5 = *(ebx + 0x18)
                
                if (eax_6 != 0)
                    int32_t eax_7 = *(ecx_5 + 0x10)
                    
                    if (eax_7 != 8)
                        result = eax_7 - 1
                        
                        if (result u<= 0x10)
                            var_28_1 = "DefBinReadFixupArray"
                            var_2c_1 = 0x325
                            var_30_1 = "c:\ax2017\engine\defbin.cpp"
                            ecx = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
                            break
                        
                        if (sub_483940(result, esi, arg3, ecx_5, arg6, edi_1) == 0)
                            return 0
                    else if (sub_483320(eax_7, esi, arg3, edi_1) == 0)
                        return 0
                else
                    void* var_28_3 = ecx_5
                    sub_482ac0(ecx_5)
            else
                char* eax_1 = *esi
                int32_t edi_2 = *(ebx + 0x20)
                char* var_c = eax_1
                
                if (eax_1 == 0)
                    edi_1 = arg7
                else
                    if (sub_483320(eax_1, &var_c, arg3, arg7) == 0)
                        return 0
                    
                    char* ebx_1 = var_c
                    int32_t* eax_3
                    
                    if (edi_2 != 0)
                        eax_3 = sub_48d5b0(ebx_1, edi_2)
                    else if (*ebx_1 != 0)
                        if (edi_2 == 0)
                            edi_2 = sub_495050(ebx_1)
                        
                        eax_3 = sub_48d5b0(ebx_1, edi_2)
                    else
                        eax_3 = nullptr
                    
                    ebx = arg5
                    *esi = eax_3
                    edi_1 = arg7
            
            esi += result_1
            result = result_2 + 1
            result_2 = result
            
            if (result s>= arg4)
                goto label_48349b
    else
        var_28_1 = "DefinitionGetSize"
        var_2c_1 = 0x6d
        var_30_1 = "c:\ax2017\engine\definition.cpp"
        ecx = "pDefMap->definitionSize != 0"
    
    sub_44e4d0(result, &data_5559b1, ecx, var_30_1, var_2c_1, var_28_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
