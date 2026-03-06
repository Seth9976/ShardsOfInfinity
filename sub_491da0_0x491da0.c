// 函数名称: sub_491da0
// 虚拟地址: 0x491da0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_491da0(int32_t arg1, int32_t* arg2, int32_t arg3, void* const arg4)
{
    // 第一条实际指令: void* ebx = *(arg4 + 8)
    void* ebx = *(arg4 + 8)
    void* edi_1 = *arg2 + arg3
    sub_491d30(edi_1 + 0xc, "mFreeListHead", ebx, edi_1 + 0xc)
    sub_491d30(edi_1 + 0x10, "mUsedCount", ebx, edi_1 + 0x10)
    sub_491d30(edi_1 + 0x14, "mNextKey", ebx, edi_1 + 0x14)
    uint32_t result = *(arg2[6] + 0xc)
    char const* const var_34
    int32_t var_30_1
    char const* const var_2c_3
    char* ecx_3
    
    if (result != 0)
        int32_t eax_5 = result + 4
        result = *(edi_1 + 8)
        uint32_t result_1 = result
        
        if (*(edi_1 + 4) == 0)
            int32_t* i = *(ebx + 4)
            
            while (i != 0)
                int32_t* esi_1 = *i
                char* const ecx_4 = &data_5559b1
                i = i[1]
                char* eax_6 = *esi_1
                
                if (eax_6 != 0)
                    ecx_4 = eax_6
                
                result = __stricmp(ecx_4, "item")
                
                if (result == 0)
                    uint32_t result_2 = result_1
                    int32_t var_30_5
                    char* ecx_15
                    
                    if (*(edi_1 + 4) s>= result_2)
                        char const* const var_2c_8 = "DefParseReadDataArray"
                        var_30_5 = 0x22f
                        ecx_15 = "(int)actualCount < maxCount"
                    label_491f42:
                        sub_44e4d0(result_2, &data_5559b1, ecx_15, "c:\ax2017\engine\defparsetree.cpp", 
                            var_30_5, "DefParseReadDataArray")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    arg4 = nullptr
                    sub_491d30(&arg4, "slot", esi_1[2], &arg4)
                    int32_t var_14
                    sub_491d30(&var_14, "id", esi_1[2], &var_14)
                    int32_t eax_9 = var_14
                    int32_t* ecx_9 = arg4 * eax_5 + *edi_1
                    *(ecx_9 + eax_5 - 4) = eax_9
                    result = sub_492ea0(esi_1[2], "value")
                    
                    if ((eax_9 s>> 0x10).w == 0)
                        *(edi_1 + 4) += 1
                    else
                        char eax_10 = sub_48ac30(arg2[6])
                        void* edx_1 = arg2[6]
                        
                        if (eax_10 == 0)
                            result_2 = *(edx_1 + 0x10) - 1
                            
                            if (result_2 u<= 0x10)
                                char const* const var_2c_7 = "DefParseReadDataArray"
                                var_30_5 = 0x248
                                ecx_15 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
                                goto label_491f42
                            
                            result = sub_492980(result, edx_1, ecx_9, *(result + 8), 0)
                            *(edi_1 + 4) += 1
                        else
                            result = sub_491920(result, edx_1, ecx_9, arg2, result)
                            *(edi_1 + 4) += 1
            
            return result
        
        var_2c_3 = "DefParseReadDataArray"
        var_30_1 = 0x223
        var_34 = "c:\ax2017\engine\defparsetree.cpp"
        ecx_3 = "array->mMaxUsedCount == 0"
    else
        var_2c_3 = "DefinitionGetSize"
        var_30_1 = 0x6d
        var_34 = "c:\ax2017\engine\definition.cpp"
        ecx_3 = "pDefMap->definitionSize != 0"
    
    sub_44e4d0(result, &data_5559b1, ecx_3, var_34, var_30_1, var_2c_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
