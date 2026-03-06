// 函数名称: ??$common_splitpath_internal@DV<lambda_81dbc9fe9823f496b2e24900666b26ca>@@V<lambda_2fb3ae78730702381aca7250c89aa958>@@@@YAHQBDQAU?$component_buffers@D@?A0x95109fda@@V<lambda_81dbc9fe9823f496b2e24900666b26ca>@@V<lambda_2fb3ae78730702381aca7250c89aa958>@@@Z
// 虚拟地址: 0x52b6c8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_splitpath_internal@DV<lambda_81dbc9fe9823f496b2e24900666b26ca>@@V<lambda_2fb3ae78730702381aca7250c89aa958>@@@@YAHQBDQAU?$component_buffers@D@?A0x95109fda@@V<lambda_81dbc9fe9823f496b2e24900666b26ca>@@V<lambda_2fb3ae78730702381aca7250c89aa958>@@@Z(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    void* ebx = arg1
    int32_t edi
    int32_t var_18 = edi
    
    if (ebx != 0 && arg2 != 0)
        char* edx_1 = *arg2
        int32_t ecx_1
        ecx_1.b = edx_1 == 0
        int32_t eax_1
        eax_1.b = arg2[1] == 0
        
        if (ecx_1 == eax_1)
            int32_t ecx_2
            ecx_2.b = arg2[2] == 0
            int32_t eax_2
            eax_2.b = arg2[3] == 0
            
            if (ecx_2 == eax_2)
                int32_t ecx_3
                ecx_3.b = arg2[4] == 0
                int32_t eax_3
                eax_3.b = arg2[5] == 0
                
                if (ecx_3 == eax_3)
                    int32_t ecx_4
                    ecx_4.b = arg2[6] == 0
                    int32_t eax_4
                    eax_4.b = arg2[7] == 0
                    
                    if (ecx_4 == eax_4)
                        char* edi_1 = ebx
                        int32_t eax_5 = 1
                        
                        while (*edi_1 != 0)
                            edi_1 = &edi_1[1]
                            int32_t temp0_1 = eax_5
                            eax_5 -= 1
                            
                            if (temp0_1 == 1)
                                break
                        
                        if (*edi_1 != 0x3a)
                            if (edx_1 != 0 && arg2[1] != 0)
                                *edx_1 = 0
                            
                            goto label_52b7a8
                        
                        if (edx_1 == 0)
                            goto label_52b794
                        
                        if (arg2[1] u>= 3)
                            int32_t var_1c_2 = 2
                            void* var_20_2 = ebx
                            int32_t var_24_1 = 0xffffffff
                            char* var_28_1 = edx_1
                            sub_5344b7()
                        label_52b794:
                            ebx = &edi_1[1]
                        label_52b7a8:
                            void* ecx_6 = nullptr
                            void* var_c_1 = nullptr
                            void* edi_2 = ebx
                            void* eax_8
                            eax_8.b = *ebx
                            void* var_8_1 = nullptr
                            
                            if (eax_8.b != 0)
                                do
                                    if (__ismbblead(eax_8.b) == 0)
                                        eax_8.b = *edi_2
                                        
                                        if (eax_8.b == 0x2f || eax_8.b == 0x5c)
                                            var_8_1 = edi_2 + 1
                                        else if (eax_8.b == 0x2e)
                                            var_c_1 = edi_2
                                    else
                                        edi_2 += 1
                                        
                                        if (*edi_2 == 0)
                                            break
                                    
                                    edi_2 += 1
                                    eax_8.b = *edi_2
                                while (eax_8.b != 0)
                                
                                ecx_6 = var_8_1
                            
                            if (ecx_6 == 0)
                                char* eax_12 = arg2[2]
                                
                                if (eax_12 != 0 && arg2[3] != 0)
                                    *eax_12 = 0
                                
                                goto label_52b830
                            
                            if (arg2[2] == 0)
                                goto label_52b81c
                            
                            void* eax_11 = ecx_6 - ebx
                            
                            if (arg2[3] u> eax_11)
                                void* var_1c_4 = eax_11
                                void* var_20_3 = ebx
                                int32_t var_24_2 = 0xffffffff
                                int32_t var_28_2 = arg2[2]
                                sub_5344b7()
                                ecx_6 = var_8_1
                            label_52b81c:
                                ebx = ecx_6
                            label_52b830:
                                void* eax_14 = var_c_1
                                
                                if (eax_14 == 0 || eax_14 u< ebx)
                                    if (arg2[4] == 0)
                                        goto label_52b8a0
                                    
                                    void* edi_4 = edi_2 - ebx
                                    
                                    if (arg2[5] u> edi_4)
                                        void* var_1c_7 = edi_4
                                        void* var_20_6 = ebx
                                        int32_t var_24_5 = 0xffffffff
                                        int32_t var_28_5 = arg2[4]
                                        sub_5344b7()
                                    label_52b8a0:
                                        char* eax_15 = arg2[6]
                                        
                                        if (eax_15 != 0 && arg2[7] != 0)
                                            *eax_15 = 0
                                        
                                        return 0
                                else
                                    if (arg2[4] == 0)
                                        goto label_52b85e
                                    
                                    void* eax_13 = eax_14 - ebx
                                    
                                    if (arg2[5] u> eax_13)
                                        void* var_1c_5 = eax_13
                                        void* var_20_4 = ebx
                                        int32_t var_24_3 = 0xffffffff
                                        int32_t var_28_3 = arg2[4]
                                        sub_5344b7()
                                        eax_14 = var_c_1
                                    label_52b85e:
                                        
                                        if (arg2[6] == 0)
                                            return 0
                                        
                                        void* edi_3 = edi_2 - eax_14
                                        
                                        if (arg2[7] u> edi_3)
                                            void* var_1c_6 = edi_3
                                            void* var_20_5 = eax_14
                                            int32_t var_24_4 = 0xffffffff
                                            int32_t var_28_4 = arg2[6]
                                            sub_5344b7()
                                            return 0
                        
                        int32_t var_1c_1 = arg3
                        reset_buffers<char,class <lambda_89bf6c7d200ebdd35efc9e01f25ff60a> >(arg2)
                        *__errno() = 0x22
                        return 0x22
    
    int32_t var_1c_8 = arg3
    reset_buffers<char,class <lambda_89bf6c7d200ebdd35efc9e01f25ff60a> >(arg2)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16
}
