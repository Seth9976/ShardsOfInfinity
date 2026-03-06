// 函数名称: sub_483610
// 虚拟地址: 0x483610
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_483610(void* arg1, void* arg2, void* arg3, void* arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: void* edx = arg4
    void* edx = arg4
    
    if (*(edx + 8) != 0)
        int32_t i_1
        
        for (int32_t i = 0; i != 0xffffffff; i = i_1)
            i_1 = i + 1
            int32_t* esi_1 = *(edx + 4) + i * 0x3c
            
            if (i_1 s>= *(edx + 8))
                i_1 = 0xffffffff
            
            void* eax_1 = esi_1[3]
            int32_t edi_1 = *(eax_1 + 0x10)
            char* var_c
            
            if (edi_1 != 0xf)
                arg1 = sub_48abc0(eax_1)
                
                if (arg1.b != 0)
                    if (edi_1 == 0x11)
                        sub_483530()
                        noreturn
                    
                    if (edi_1 != 5)
                        if (edi_1 == 6)
                            arg1 = sub_4833f0(arg1, *esi_1 + arg2, arg3, esi_1[7], esi_1, nullptr, arg6)
                            goto label_4838c0
                        
                        if (edi_1 == 8 || edi_1 == 0xc)
                        label_4838b8:
                            arg1 = sub_483320(arg1, *esi_1 + arg2, arg3, arg6)
                            goto label_4838c0
                        
                        if (edi_1 != 0xb)
                            int32_t var_28_4
                            char const* const var_24_11
                            void* eax_13
                            char* ecx_26
                            
                            if (edi_1 != 9)
                                eax_13 = *(eax_1 + 0x10) - 1
                                
                                if (eax_13 u> 0x10)
                                    void* eax_18 = arg5
                                    
                                    if (eax_18 == 0 && (edi_1 == 0x13 || edi_1 == 0x14))
                                        eax_18 = esi_1[7]
                                    
                                    arg1 = sub_483940(eax_18, *esi_1 + arg2, arg3, eax_1, eax_18, arg6)
                                    goto label_4838c0
                                
                                var_24_11 = "DefBinReadFixupField"
                                var_28_4 = 0x414
                                ecx_26 = "!DefTypeIsBuiltIn(pFieldDefMap)"
                            label_483917:
                                sub_44e4d0(eax_13, &data_5559b1, ecx_26, "c:\ax2017\engine\defbin.cpp", 
                                    var_28_4, var_24_11)
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            void* eax_10 = esi_1[4] + arg2
                            int32_t edx_8 = *eax_10
                            *eax_10 = edx_8
                            char* eax_11 = sub_4b8c10(arg5, edx_8)
                            var_c = eax_11
                            
                            if (*(eax_11 + 0x10) == 0xf)
                                int32_t var_24_6 = esi_1[8]
                                arg1 = sub_483380(eax_11, *esi_1 + arg2, arg3, arg6)
                                goto label_4838c0
                            
                            if (sub_48abc0(eax_11) != 0)
                                arg1 = *(eax_11 + 0x10)
                                
                                if (arg1 == 8)
                                    goto label_4838b8
                                
                                eax_13 = arg1 - 1
                                
                                if (eax_13 u<= 0x10)
                                    var_24_11 = "DefBinReadFixupTagValue"
                                    var_28_4 = 0x3a4
                                    ecx_26 = "!DefTypeIsBuiltIn(pDefMap)"
                                    goto label_483917
                                
                                int32_t* eax_14 = *esi_1
                                void* esi_3 = *(eax_14 + arg2)
                                
                                if (sub_48acc0(eax_11) + esi_3 s> arg6)
                                    arg1.b = 0
                                    return arg1
                                
                                void* edx_13 = esi_3 + arg3
                                
                                if (edx_13 s<= arg2)
                                    arg1.b = 0
                                    return arg1
                                
                                char* var_2c_4 = var_c
                                *(eax_14 + arg2) = edx_13
                                arg1 = sub_483940(arg3, edx_13, arg3, var_2c_4, nullptr, arg6)
                                goto label_4838c0
                            
                            sub_4b8540(arg5, *eax_10)
                            void* var_24_7 = arg5
                            sub_482ac0(eax_11)
                            edx = arg4
                        else
                            int32_t* ecx_12 = *esi_1
                            var_c = ecx_12
                            int32_t edi_4 = *(ecx_12 + arg2)
                            
                            if (edi_4 != 0)
                                arg1 = esi_1[0xa]
                                
                                if ((arg1.b & 0x10) != 0)
                                    edx = arg4
                                else
                                    if ((arg1 & 0x100) == 0 || edi_4 s< arg6)
                                        void* eax_7 = arg3 + edi_4
                                        *(ecx_12 + arg2) = eax_7
                                        arg1 = sub_48acc0(esi_1[6]) + edi_4
                                        
                                        if (arg1 s> arg6 || eax_7 s<= arg2)
                                            arg1.b = 0
                                            return arg1
                                        
                                        arg1 = sub_4833f0(arg1, *(var_c + arg2), arg3, 1, esi_1, 
                                            nullptr, arg6)
                                        goto label_4838c0
                                    
                                    *(ecx_12 + arg2) = edi_4
                                    edx = arg4
                            else
                                *(ecx_12 + arg2) = edi_4
                                edx = arg4
                    else
                        void** eax_5 = esi_1[4]
                        arg1 = sub_483570(eax_5, arg2, arg3, esi_1, arg5, *(eax_5 + arg2), arg6)
                    label_4838c0:
                        
                        if (arg1.b == 0)
                            arg1.b = 0
                            return arg1
                        
                        edx = arg4
                else
                    void* var_24_2 = eax_1
                    sub_482ac0(esi_1[3])
                    edx = arg4
            else
                int32_t esi_2 = esi_1[8]
                int32_t* eax_3 = *esi_1 + arg2
                arg1 = *eax_3
                var_c = arg1
                
                if (arg1 != 0)
                    if (sub_483320(arg1, &var_c, arg3, arg6).b == 0)
                        arg1.b = 0
                        return arg1
                    
                    char* edi_3 = var_c
                    
                    if (esi_2 != 0)
                        *eax_3 = sub_48d5b0(edi_3, esi_2)
                    else if (*edi_3 != 0)
                        if (esi_2 == 0)
                            esi_2 = sub_495050(edi_3)
                        
                        *eax_3 = sub_48d5b0(edi_3, esi_2)
                    else
                        *eax_3 = 0
                    
                    edx = arg4
    
    arg1.b = 1
    return arg1
}
