// 函数名称: sub_4bd290
// 虚拟地址: 0x4bd290
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_4bd290(void* arg1))[0x4]
{
    // 第一条实际指令: void* ebx = nullptr
    void* ebx = nullptr
    int32_t var_8 = 0
    
    if (*(arg1 + 8) s> 0)
        int32_t eax_1 = 0
        int32_t var_c_1 = 0
        
        while (true)
            int32_t* esi_2 = *(arg1 + 4) + eax_1
            void* eax_2 = _strchr(esi_2[1], 0x20)
            int32_t var_24_6
            char* ecx_5
            
            if (eax_2 != 0)
                char const* const var_20_6 = "AttribTableInit"
                var_24_6 = 0x37
                ecx_5 = "strchr(pAttribField->fieldName, ' ') == NULL"
            else
                eax_2 = _strchr(esi_2[1], 0x3c)
                
                if (eax_2 != 0)
                    char const* const var_20_5 = "AttribTableInit"
                    var_24_6 = 0x38
                    ecx_5 = "strchr(pAttribField->fieldName, '<') == NULL"
                else
                    eax_2 = _strchr(esi_2[1], 0x3e)
                    
                    if (eax_2 != 0)
                        char const* const var_20_4 = "AttribTableInit"
                        var_24_6 = 0x39
                        ecx_5 = "strchr(pAttribField->fieldName, '>') == NULL"
                    else
                        eax_2 = _strchr(esi_2[1], 0x26)
                        
                        if (eax_2 != 0)
                            char const* const var_20_3 = "AttribTableInit"
                            var_24_6 = 0x3a
                            ecx_5 = "strchr(pAttribField->fieldName, '&') == NULL"
                        else
                            eax_2 = _strchr(esi_2[1], 0x22)
                            
                            if (eax_2 != 0)
                                char const* const var_20_2 = "AttribTableInit"
                                var_24_6 = 0x3b
                                ecx_5 = "strchr(pAttribField->fieldName, '"') == NULL"
                            else
                                esi_2[3] = sub_491050(esi_2[2])
                                eax_2 = *esi_2
                                
                                if (eax_2 u>= 0x3e8)
                                    char const* const var_20_1 = "AttribTableInit"
                                    var_24_6 = 0x40
                                    ecx_5 = "pAttribField->position < 1000"
                                else
                                    if (eax_2 s> ebx)
                                        ebx = eax_2
                                    
                                    int32_t ecx_2 = var_8 + 1
                                    eax_1 = var_c_1 + 0x3c
                                    var_8 = ecx_2
                                    var_c_1 = eax_1
                                    
                                    if (ecx_2 s>= *(arg1 + 8))
                                        break
                                    
                                    continue
            
            sub_44e4d0(eax_2, &data_5559b1, ecx_5, "c:\ax2017\engine\attribmapregistry.cpp", var_24_6, 
                "AttribTableInit")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    int32_t esi_3 = (ebx + 1) << 2
    uint32_t (* eax_5)[0x4] = sub_45cd70(esi_3)
    uint32_t (* result)[0x4] = _memset(eax_5, 0, esi_3)
    *(arg1 + 0x10) = ebx + 1
    int32_t i = 0
    *(arg1 + 0xc) = eax_5
    
    if (*(arg1 + 8) s> 0)
        int32_t edi_2 = 0
        
        do
            i += 1
            result = *(arg1 + 0xc)
            int32_t* edx_2 = *(arg1 + 4) + edi_2
            edi_2 += 0x3c
            (*result)[*edx_2] = edx_2
        while (i s< *(arg1 + 8))
    
    return result
}
