// 函数名称: sub_48af50
// 虚拟地址: 0x48af50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_48af50(int32_t arg1, void* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t* esi = arg4
    int32_t* esi = arg4
    int32_t* edi_1 = *esi + arg3
    
    if (sub_48ac30(arg2) == 0)
        void* ecx_1 = *(arg2 + 0x10)
        
        if (ecx_1 - 1 u<= 0x10)
            void* eax_2 = ecx_1 - 5
            int32_t var_20
            char const* const var_1c_1
            char* ecx_3
            
            switch (eax_2)
                case nullptr, 4, 0xc
                    int32_t eax_3 = esi[4]
                    *(arg3 + eax_3) = 0
                    *edi_1 = 0
                    return eax_3
                case 1
                    void* edi_3 = *esi + arg3
                    eax_2 = *(esi[6] + 0xc)
                    
                    if (eax_2 == 0)
                        var_1c_1 = "DefinitionGetSize"
                        var_20 = 0x6d
                        ecx_3 = "pDefMap->definitionSize != 0"
                        goto label_48b08c
                    
                    int32_t i = 0
                    
                    if (esi[7] s<= 0)
                        return eax_2
                    
                    uint32_t (* eax_6)[0x4]
                    
                    do
                        eax_6 = sub_48b0e0(edi_3, esi)
                        edi_3 += eax_2
                        i += 1
                    while (i s< esi[7])
                    
                    return eax_6
                case 3
                    int32_t eax_7 = esi[9]
                    *edi_1 = eax_7
                    return eax_7
                case 6
                    char* ecx_2 = esi[9]
                    
                    if (ecx_2 == 0)
                        *edi_1 = 0
                        return 0
                    
                    char* eax_4 = sub_48bb00(ecx_2, esi[6])
                    *edi_1 = eax_4
                    return eax_4
                case 7
                    *edi_1 = esi[9]
                    return sub_48ae20(arg3, esi)
                default
                    var_1c_1 = "DefinitionFillSubFieldWithDefaults"
                    var_20 = 0x14c
                    ecx_3 = "Halt"
                label_48b08c:
                    sub_44e4d0(eax_2, &data_5559b1, ecx_3, "c:\ax2017\engine\definition.cpp", var_20, 
                        var_1c_1)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
    
    int32_t eax_11 = *(arg2 + 0x10) - 1
    
    if (eax_11 u> 0x10)
        char* ecx_6 = esi[9]
        
        if (ecx_6 != 0)
            return sub_51d5b0(edi_1, ecx_6, *(esi[3] + 0xc))
    
    return sub_48ae70(eax_11, arg2, edi_1, esi)
}
