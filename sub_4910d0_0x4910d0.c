// 函数名称: sub_4910d0
// 虚拟地址: 0x4910d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4910d0()
{
    // 第一条实际指令: int32_t result = data_cdf478
    int32_t result = data_cdf478
    int32_t ecx = 0
    int32_t var_8 = 0
    
    if (result s> 0)
        int32_t esi_1 = data_cdf884
        void* ebx_1 = &data_cdf480
        void* var_c_1 = &data_cdf480
        
        do
            int32_t* ebx_2 = *ebx_1
            char const* const var_28
            int32_t var_24
            char const* const var_20
            void* eax_2
            char* ecx_8
            char* const edx_3
            
            if (ebx_2[1] != 0 && ebx_2[2] != 0)
                for (int32_t i = 0; i != 0xffffffff; )
                    int32_t ecx_3 = i * 0xf
                    i += 1
                    
                    if (i s>= ebx_2[2])
                        i = 0xffffffff
                    
                    void* edi_1 = ebx_2[1] + (ecx_3 << 2)
                    int32_t eax_1 = sub_491050(*(edi_1 + 8))
                    char* ecx_5 = *(edi_1 + 0x14)
                    *(edi_1 + 0xc) = eax_1
                    eax_2 = sub_491050(ecx_5)
                    bool cond:0_1 = (*(edi_1 + 0x28) & 0x100) == 0
                    *(edi_1 + 0x18) = eax_2
                    
                    if (not(cond:0_1) && i != 0xffffffff)
                        var_20 = "DefTypeInitializeFields"
                        var_24 = 0x5a
                        var_28 = "c:\ax2017\engine\deftyperegistry.cpp"
                        edx_3 = "The hw buffer must be the last field in the definition\n"
                        ecx_8 = "HaltMsg"
                        goto label_491279
                    
                    int32_t eax_3 = *(*(edi_1 + 0xc) + 0xc)
                    
                    if (eax_3 != 0 && eax_3 != *(edi_1 + 0x34))
                        int32_t var_20_1 = *(edi_1 + 4)
                        int32_t var_24_1 = *ebx_2
                        eax_2 = sub_44e260("In definition %s field %s has the wrong type")
                        edx_3 = "The field type in a definition is wrong\n"
                        ecx_8 = "HaltMsg"
                        var_20 = "DefTypeInitializeFields"
                        var_24 = 0x63
                        var_28 = "c:\ax2017\engine\deftyperegistry.cpp"
                        goto label_491279
                    
                    int32_t eax_4 = *(edi_1 + 0x38)
                    
                    if (eax_4 != 0 && *(eax_2 + 0xc) != eax_4)
                        int32_t var_20_2 = *(edi_1 + 4)
                        int32_t var_24_2 = *ebx_2
                        eax_2 = sub_44e260("In definition %s ptr field %s has the wrong type")
                        edx_3 = "The field type in a definition is wrong\n"
                        ecx_8 = "HaltMsg"
                        var_20 = "DefTypeInitializeFields"
                        var_24 = 0x6d
                        var_28 = "c:\ax2017\engine\deftyperegistry.cpp"
                        goto label_491279
                
                esi_1 = data_cdf884
                result = data_cdf478
                ecx = var_8
            
            void* edi_2 = *var_c_1
            int32_t edx_2 = *(edi_2 + 0x1c)
            
            if (edx_2 != 0)
                int32_t ecx_7 = 0
                eax_2 = &data_cdf888
                
                while (true)
                    if (ecx_7 s>= esi_1)
                        var_20 = "AssetRegistrySetDefMap"
                        var_24 = 0x92
                        ecx_8 = "Halt"
                        goto label_49126f
                    
                    if (*eax_2 == edx_2)
                        break
                    
                    ecx_7 += 1
                    eax_2 += 0x1c
                
                if (*(eax_2 + 0x18) != 0)
                    var_20 = "AssetRegistrySetDefMap"
                    var_24 = 0x8c
                    ecx_8 = "pAssetTableItem->pDefMap == NULL"
                label_49126f:
                    edx_3 = &data_5559b1
                    var_28 = "c:\ax2017\engine\assettyperegistry.cpp"
                label_491279:
                    sub_44e4d0(eax_2, edx_3, ecx_8, var_28, var_24, var_20)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                ecx = var_8
                *(eax_2 + 0x18) = edi_2
                result = data_cdf478
            
            ecx += 1
            ebx_1 = var_c_1 + 4
            var_8 = ecx
            var_c_1 = ebx_1
        while (ecx s< result)
    
    return result
}
