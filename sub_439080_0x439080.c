// 函数名称: sub_439080
// 虚拟地址: 0x439080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_439080()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_5bccbd = data_5bccbd == 0
    void* result = sub_41ad20()
    void* ecx = data_65aabc
    void* result_1 = result
    char const* const var_38
    int32_t var_34
    char const* const var_30_1
    char* ecx_1
    
    if (ecx != 0)
        if (*(ecx + 0x434) != 1 || *(result_1 + 0x104) == 2)
        label_43922d:
            result = data_5c2e30
            
            if (*result != 0xa)
            label_439314:
                
                if (data_5bccbd != 0)
                    data_5bb240 = 0x3e9
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return result
                
                sub_45e9a0(&data_5bb250:4)
                int64_t xmm0 = data_5bb244
                data_5bb258 = data_5bb24c
                int32_t eax_17 = data_5bb25c
                data_5bb24c = eax_17
                data_5bb250 = xmm0
                data_5bb244:4 = 0
                data_5bb244.d = 0
                data_5bb25c = eax_17 + 1
                data_5bb240 = 0
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_17 + 1
            
            if (ecx == 0)
                goto label_4390b5
            
            if (*(ecx + 0x434) == 2 && *(result_1 + 0x104) != 2)
                int32_t eax_10 = *result_1
                *(result_1 + 0x104) = 2
                int32_t var_14 = eax_10
                int32_t var_c_1 = 0xffffffff
                sub_444860()
                int32_t edi_1 = *(result_1 + 0xec)
                int32_t edx_3 = 0
                int32_t eax_12
                
                if (edi_1 s<= 0)
                label_4392c2:
                    eax_12 = 0
                else
                    void* esi_2 = result_1 + 0x2c
                    
                    while (true)
                        result = *esi_2
                        
                        if (result s< 0)
                            var_30_1 = "PGUIGet"
                            var_34 = 0x512
                            ecx_1 = "who >= 0"
                            goto label_4393eb
                        
                        if (result s>= 5)
                            var_30_1 = "PGUIGet"
                            var_34 = 0x513
                            ecx_1 = "(int)who < (int)MAX_PLAYERS"
                            goto label_4393eb
                        
                        void* eax_11 = result * 0x4c
                        
                        if (*(eax_11 + 0x5bcb14) + *(eax_11 + 0x5bcb2c) s> 0)
                            int32_t eax_15 = edx_3 * 0x2c
                            
                            if (*(eax_15 + result_1 + 0x24) != 1)
                                goto label_4392c2
                            
                            eax_12 = *(eax_15 + result_1 + 0x28)
                            break
                        
                        edx_3 += 1
                        esi_2 += 0x2c
                        
                        if (edx_3 s>= edi_1)
                            goto label_4392c2
                
                int32_t var_10_1 = eax_12
                void* eax_13 = sub_411690()
                void* ecx_19 = data_65acf4
                result = *(eax_13 + 0x14)
                
                if (result != 0)
                    uint32_t edx_4 = zx.d(result.w)
                    
                    if (edx_4 u< *(ecx_19 + 4))
                        void* esi_4 = edx_4 * 0x4c + *ecx_19
                        
                        if (*(esi_4 + 0x48) == result)
                            int32_t var_30_2 = 0xf42b3
                            sub_450c90(result, 0xc, esi_4 + 0x3c)
                            result = sub_450a70(&var_14, 0xc, esi_4 + 0x3c, &var_14)
            
            goto label_439314
        
        *(result_1 + 0x104) = 2
        sub_42b530(result_1, *(sub_411690() + 0x438))
        int32_t eax_3 = *(result_1 + 0xec)
        int32_t esi_1
        
        if (eax_3 == 2)
            esi_1 = 0
        label_43913a:
            void* result_2 = result_1
            void* ebx = result_1 + 0x2c
            int32_t var_1c_1 = 0
            int32_t ecx_3 = 0
            
            while (true)
                if (*(ebx - 8) == 0x3e8)
                    void* eax_6 = sub_433c60(*ebx)
                    int32_t i = *(ebx - 4)
                    int32_t ecx_6 = *(eax_6 + 0x24) + *(eax_6 + 0xc)
                    void* eax_7 = data_65ac38
                    int32_t ecx_7 = 0
                    int32_t edx_2 = *(eax_7 + 0xb20)
                    
                    if (edx_2 s> 0)
                        while (*(eax_7 + 0x23c) != i)
                            ecx_7 += 1
                            eax_7 += 0x2c8
                            
                            if (ecx_7 s>= edx_2)
                                goto label_43920b
                        
                        if (eax_7 != 0)
                            result = sub_42aaa0(i) + 0x25c
                            int32_t ecx_9
                            ecx_9.b = ecx_6 s<= 0
                            
                            if (ecx_9 == 0)
                                *(result + (esi_1 << 2) + 0x48) += 1
                                *(result + (esi_1 << 2) + 0x24) += 1
                            else if (ecx_9 == 1)
                                *(result + (esi_1 << 2) + 0x54) += 1
                                *(result + (esi_1 << 2) + 0x30) += 1
                            else
                                if (ecx_9 != 2)
                                    var_30_1 = "StatsSubmitLocal"
                                    var_34 = 0x79b
                                    var_38 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
                                    ecx_1 = "Halt"
                                    break
                                
                                *(result + (esi_1 << 2) + 0x60) += 1
                                *(result + (esi_1 << 2) + 0x3c) += 1
                            
                            sub_42a740(data_65ac38)
                            
                            if (*(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x23c) == i)
                                sub_418050(esi_1)
                    
                label_43920b:
                    result_2 = result_1
                    ecx_3 = var_1c_1
                
                ecx_3 += 1
                ebx += 0x2c
                var_1c_1 = ecx_3
                
                if (ecx_3 s>= *(result_2 + 0xec))
                    ecx = data_65aabc
                    goto label_43922d
        else
            if (eax_3 == 3)
                esi_1 = 1
                goto label_43913a
            
            result = eax_3 - 4
            
            if (eax_3 == 4)
                esi_1 = 2
                goto label_43913a
            
            var_30_1 = "ShToggleScore"
            var_34 = 0x120f
            ecx_1 = "Halt"
        label_4393eb:
            var_38 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
    else
    label_4390b5:
        var_30_1 = "GetClient"
        var_34 = 0x74
        var_38 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_38, var_34, var_30_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
