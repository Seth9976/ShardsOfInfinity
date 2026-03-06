// 函数名称: sub_492710
// 虚拟地址: 0x492710
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_492710(int32_t arg1, void* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: void* edi = arg2
    void* edi = arg2
    void* var_8 = edi
    
    if (*(edi + 8) != 0)
        for (int32_t i = 0; i != 0xffffffff; )
            int32_t ecx_2 = i * 0xf
            i += 1
            
            if (i s>= *(edi + 8))
                i = 0xffffffff
            
            int32_t* esi_1 = *(edi + 4) + (ecx_2 << 2)
            char ecx_3 = (esi_1[0xa]).b
            
            if ((ecx_3 & 8) == 0)
                void* edx = esi_1[3]
                void* eax_1 = *(edx + 0x10)
                char const* const var_3c
                int32_t var_38_7
                char const* const var_34_6
                void* eax_3
                char* ecx_18
                
                if (eax_1 == 6)
                    eax_3 = *(esi_1[6] + 0xc)
                    void* var_1c_1 = eax_3
                    
                    if (eax_3 == 0)
                        var_34_6 = "DefinitionGetSize"
                        var_38_7 = 0x6d
                        var_3c = "c:\ax2017\engine\definition.cpp"
                        ecx_18 = "pDefMap->definitionSize != 0"
                    label_49295d:
                        sub_44e4d0(eax_3, &data_5559b1, ecx_18, var_3c, var_38_7, var_34_6)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t eax_4 = esi_1[7]
                    int32_t* edi_2 = *esi_1 + arg3
                    int32_t var_18_1 = 0
                    int32_t* ebx_1 = *(arg4 + 4)
                    
                    if (ebx_1 != 0)
                        while (true)
                            int32_t* eax_6 = *ebx_1
                            char* const ecx_4 = &data_5559b1
                            ebx_1 = ebx_1[1]
                            char* eax_7 = *eax_6
                            
                            if (eax_7 != 0)
                                ecx_4 = eax_7
                            
                            if (__stricmp(esi_1[1], ecx_4) == 0)
                                char eax_9 = sub_48ac30(esi_1[6])
                                void* edx_1 = esi_1[6]
                                
                                if (eax_9 == 0)
                                    eax_3 = *(edx_1 + 0x10) - 1
                                    
                                    if (eax_3 u<= 0x10)
                                        var_34_6 = "DefParseReadFixedArray"
                                        var_38_7 = 0x297
                                        var_3c = "c:\ax2017\engine\defparsetree.cpp"
                                        ecx_18 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
                                        break
                                    
                                    sub_492980(eax_6, edx_1, edi_2, eax_6[2], 0)
                                else
                                    sub_491920(eax_6, edx_1, edi_2, esi_1, eax_6)
                                
                                edi_2 += var_1c_1
                                int32_t eax_14 = var_18_1 + 1
                                var_18_1 = eax_14
                                
                                if (eax_14 == eax_4)
                                    goto label_492802
                            
                            if (ebx_1 == 0)
                                goto label_492802
                        
                        goto label_49295d
                    
                label_492802:
                    edi = var_8
                else if ((ecx_3 & 0x40) != 0)
                    if (eax_1 == 0x13)
                        sub_4924a0(eax_1, esi_1, *esi_1 + arg3, arg4)
                    else if (eax_1 != 0x14)
                        eax_3 = eax_1 - 1
                        
                        if (eax_3 u<= 0x10)
                            var_34_6 = "DefParseReadBlockNoVersion"
                            var_38_7 = 0x44e
                            var_3c = "c:\ax2017\engine\defparsetree.cpp"
                            ecx_18 = "!DefTypeIsBuiltIn(pField->pDefMap)"
                            goto label_49295d
                        
                        sub_492980(eax_3, edx, *esi_1 + arg3, arg4, 0)
                    else
                        void* var_34_5 = arg4
                        sub_492280(eax_1, *esi_1 + arg3, arg3, esi_1)
    
    void* result = arg4
    char*** i_1 = *(result + 4)
    
    while (i_1 != 0)
        char** edx_2 = *i_1
        i_1 = i_1[1]
        char** var_18_2 = edx_2
        
        if (*(edi + 8) != 0)
            for (int32_t j = 0; j != 0xffffffff; )
                int32_t ecx_10 = j * 0xf
                j += 1
                int32_t* edi_3 = *(edi + 4) + (ecx_10 << 2)
                char ecx_11 = (edi_3[0xa]).b
                result = 0xffffffff
                
                if (j s>= *(var_8 + 8))
                    j = 0xffffffff
                
                if ((ecx_11 & 8) == 0)
                    result = edi_3[3]
                    
                    if (*(result + 0x10) != 6 && (ecx_11 & 0x40) == 0)
                        char* eax_17 = *edx_2
                        char* ecx_12 = &data_5559b1
                        
                        if (eax_17 != 0)
                            ecx_12 = eax_17
                        
                        result = __stricmp(edi_3[1], ecx_12)
                        
                        if (result == 0)
                            result = sub_492570(result, edi_3, arg3, var_18_2)
                            edi = var_8
                            break
                        
                        edx_2 = var_18_2
                
                edi = var_8
    
    return result
}
