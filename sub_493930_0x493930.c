// 函数名称: sub_493930
// 虚拟地址: 0x493930
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_493930(uint32_t arg1, void* arg2, char* arg3, int32_t* arg4, char* arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t* var_8 = arg3
    
    if ((arg6 & 0x40) != 0)
        goto label_49397c
    
    char* var_24 = arg3
    void* const ecx_1
    
    if (arg5 != 0)
        sub_44f240(&var_24, arg5)
        var_8 = sub_492d70(arg3)
    label_49397c:
        int32_t* result = arg4
        int32_t edi = 0
        
        if (*result s<= 0)
            return result
        
        while (true)
            int32_t eax_1 = result[1]
            int32_t edx_1 = *(eax_1 + (edi << 3))
            int32_t* esi = eax_1 + (edi << 3)
            
            if (edx_1 != 0xffffffff)
                arg6.d = &esi[1]
                char* eax_3 = sub_4b8bc0(arg2, edx_1)
                int32_t* eax_4 = sub_4b8c10(arg2, *esi)
                
                if (eax_4[4] - 1 u> 0x10)
                    arg1 = sub_48ac30(eax_4)
                    
                    if (arg1.b == 0)
                        if ((sub_4b8c70(arg2, *esi) & 0x40) == 0)
                            *arg6.d
                            int32_t* eax_8 = sub_492c80(var_8, eax_3)
                            var_24 = nullptr
                            eax_8[2]
                            sub_494270(eax_4, var_24)
                        else
                            arg1 = eax_4[1]
                            
                            if ((*(arg1 + 0x28) & 0x40) == 0)
                                break
                            
                            var_24 = nullptr
                            int32_t var_28_5 = 0
                            sub_492f40(arg1, *arg6.d, var_8, *(arg1 + 0xc), eax_3, 0, var_24)
                    else
                        var_24 = nullptr
                        int32_t var_28_4 = 0
                        sub_492f40(arg1, *arg6.d, var_8, eax_4, eax_3, 0, var_24)
                else
                    char* eax_5 = sub_4b8cc0(arg2, *esi)
                    int32_t edx_4 = *esi
                    var_24 = eax_5
                    void* var_28_2 = arg2
                    int32_t eax_6 = sub_4b8c70(arg2, edx_4)
                    sub_492f40(eax_6, arg6.d, var_8, eax_4, eax_3, eax_6, var_24)
            
            result = arg4
            edi += 1
            
            if (edi s>= *result)
                return result
        
        var_24 = "DefParseTreeMakeFromDefinitionTagValue"
        int32_t var_28_7 = 0x6fb
        char const* const var_2c_4 = "c:\ax2017\engine\defparsetree.cpp"
        ecx_1 = "pDefMap->pDTMapFields[0].fieldFlags & DEF_FIELD_FLAG_INLINE_XML"
    else
        char const* const var_28_1 = "XString::XString"
        int32_t var_2c_1 = 0x94
        char const* const var_30_1 = "c:\ax2017\engine\xstring.cpp"
        ecx_1 = &data_582858
    
    sub_44e4d0(arg1, &data_5559b1, ecx_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
