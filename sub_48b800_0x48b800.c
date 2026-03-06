// 函数名称: sub_48b800
// 虚拟地址: 0x48b800
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_48b800(int32_t arg1, int32_t* arg2, int32_t arg3, void* arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    uint32_t result = sub_48abc0(arg2[3])
    
    if (result.b != 0)
        int32_t edx = *(arg2[3] + 0x10)
        uint32_t eax_1 = edx - 5
        int32_t var_1c_1
        char const* const var_18_1
        char* ecx_1
        
        if (eax_1 u> 0xc)
        label_48b96b:
            
            if (edx s> 0 && edx s< 0x12)
                var_18_1 = "DefDeepCopyField"
                var_1c_1 = 0x314
                ecx_1 = "!DefTypeIsBuiltIn(pField->pDefMap)"
                goto label_48b9be
            
            void* ebx_3 = arg4
            
            if (ebx_3 == 0 && (edx == 0x13 || edx == 0x14))
                ebx_3 = arg2[7]
            
            int32_t ecx_15 = *arg2
            void* eax_20 = &arg5[ecx_15]
            return sub_48ba10(eax_20, arg2[3], ecx_15 + arg3, ebx_3, eax_20)
        
        eax_1 = zx.d(lookup_table_48b9f4[eax_1])
        
        switch (eax_1)
            case 0
                int32_t* eax_2 = arg2[4]
                return sub_48b760(eax_2, arg2, arg3, arg4, *(eax_2 + arg5), arg5)
            case 1
                void* ecx_4 = *arg2
                void* eax_5 = arg5 + ecx_4
                return sub_48b690(eax_5, arg2[7], ecx_4 + arg3, arg2, nullptr, eax_5)
            case 2
                int32_t* eax_7 = *arg2
                return sub_48b620(eax_7 + arg3, *(eax_7 + arg5))
            case 3
                result = arg2[4]
                int32_t edx_7 = *(arg5 + result)
                
                if (edx_7 != 0xffffffff)
                    void* eax_11 = sub_4b8c10(arg4, edx_7)
                    result = sub_48abc0(eax_11)
                    
                    if (result.b != 0)
                        int32_t eax_12 = *(eax_11 + 0x10)
                        
                        if (eax_12 == 8)
                            int32_t* edx_8 = *arg2
                            return sub_48b620(edx_8 + arg3, *(edx_8 + arg5))
                        
                        eax_1 = eax_12 - 1
                        
                        if (eax_1 u<= 0x10)
                            var_18_1 = "DefDeepCopyTagValue"
                            var_1c_1 = 0x28d
                            ecx_1 = "!DefTypeIsBuiltIn(pDefMap)"
                            goto label_48b9be
                        
                        char** eax_14 = *arg2
                        void* ebx_2 = eax_14 + arg3
                        char* edi_2 = *(eax_14 + arg5)
                        void* eax_15 = sub_48acc0(eax_11)
                        char* eax_16 = sub_45cd70(eax_15)
                        *ebx_2 = eax_16
                        return sub_48ba10(sub_51d5b0(eax_16, edi_2, eax_15), eax_11, *ebx_2, nullptr, 
                            edi_2)
            case 4
                int32_t eax_9 = *arg2
                int32_t ecx_7
                ecx_7.b = *(arg5 + eax_9) != 0
                return sub_48b760(eax_9, arg2, arg3, nullptr, ecx_7, arg5)
            case 5
                var_18_1 = "DefDeepCopyField"
                var_1c_1 = 0x2eb
                ecx_1 = "Halt"
            label_48b9be:
                sub_44e4d0(eax_1, &data_5559b1, ecx_1, "c:\ax2017\engine\definition.cpp", var_1c_1, 
                    var_18_1)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            case 6
                goto label_48b96b
    
    return result
}
