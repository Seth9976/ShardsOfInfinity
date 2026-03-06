// 函数名称: sub_42f430
// 虚拟地址: 0x42f430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_42f430(int32_t arg1, void* arg2, int128_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: uint32_t eax_1 = *arg4 - 1
    uint32_t eax_1 = *arg4 - 1
    int32_t var_5c_6
    char const* const var_58_6
    char* ecx_3
    
    if (eax_1 u> 8)
        var_58_6 = "ShAIAction_HeuristicPlay"
        var_5c_6 = 0xc6a
        ecx_3 = "Halt"
    else
        int32_t var_44
        int64_t var_3c
        int32_t* eax_3
        int32_t* eax_6
        int32_t* ecx
        
        switch (eax_1)
            case 0
                eax_3 = sub_430300(&var_44, arg2, ecx, &var_44, arg4)
            label_42f467:
                *arg3 = *eax_3
                arg3[1] = *(eax_3 + 0x10)
                arg3[2] = *(eax_3 + 0x20)
                return arg3
            case 1
                int32_t* var_58_2 = arg4
                eax_3 = sub_42e750(&var_44, arg2, ecx, &var_44)
                goto label_42f467
            case 2
                int32_t var_40_1 = 6
                var_44 = 3
            label_42f49d:
                int32_t var_58_3 = arg4[0xcd]
                int64_t var_1c
                var_1c:4.d = 0
                int32_t* var_5c_3 = arg4[0xcc]
                __builtin_memset(&var_3c:4, 0, 0x1c)
                eax_6 = sub_42e870(eax_1, arg2, arg2, var_5c_3, var_58_3)
            label_42f4d3:
                var_3c.d = eax_6
                var_1c.d = 1
                *arg3 = var_44.o
                int64_t var_34
                arg3[1] = var_34.o
                int64_t var_24
                arg3[2] = var_24.o
                return arg3
            case 3
                eax_3 = sub_42e940(&var_44, arg4)
                goto label_42f467
            case 4
                eax_3 = sub_42e9b0(&var_44, arg4)
                goto label_42f467
            case 5
                var_44 = 6
                int32_t var_40_2 = 0xb
                goto label_42f49d
            case 6
                eax_1 = arg4[0xcd]
                int32_t* edx = arg4[0xcc]
                __builtin_memset(&var_3c, 0, 0x28)
                var_44 = 7
                int32_t var_40_3 = 0xa
                
                if (eax_1 s> 0)
                    void* eax_8 = sub_445af0(arg2, *edx)
                    int32_t* ecx_5 = edx
                    int32_t ebx_1 = 1
                    int32_t edi_1 = *(eax_8 + 0xc)
                    int32_t esi_1 = *(eax_8 + 8)
                    eax_6 = *ecx_5
                    arg4 = eax_6
                    
                    if (eax_1 s> 1)
                        do
                            void* eax_9 = sub_445af0(arg2, ecx_5[ebx_1])
                            int32_t ecx_7 = *(eax_9 + 0xc)
                            int32_t eax_10
                            bool cond:2_1
                            
                            if (ecx_7 s< 0x14)
                                eax_10 = *(eax_9 + 8)
                                
                                if (eax_10 s> esi_1)
                                label_42f5f0:
                                    esi_1 = eax_10
                                    edi_1 = ecx_7
                                    eax_6 = edx[ebx_1]
                                    arg4 = eax_6
                                else if (eax_10 != esi_1)
                                    eax_6 = arg4
                                else
                                    cond:2_1 = ecx_7 s<= edi_1
                                label_42f5eb:
                                    
                                    if (not(cond:2_1))
                                        goto label_42f5f0
                                    
                                    eax_6 = arg4
                            else if (ecx_7 s<= edi_1)
                                if (ecx_7 == edi_1)
                                    eax_10 = *(eax_9 + 8)
                                    cond:2_1 = eax_10 s<= esi_1
                                    goto label_42f5eb
                                
                                eax_6 = arg4
                            else
                                edi_1 = ecx_7
                                esi_1 = *(eax_9 + 8)
                                eax_6 = edx[ebx_1]
                                arg4 = eax_6
                            ecx_5 = edx
                            ebx_1 += 1
                        while (ebx_1 s< eax_1)
                    
                    goto label_42f4d3
            case 7
                var_44 = 8
                int32_t var_40_4 = 0xc
                goto label_42f49d
            case 8
                var_44 = 9
                int32_t var_40_5 = 7
                goto label_42f49d
        
        var_58_6 = "FindBestOpponent"
        var_5c_6 = 0x384
        ecx_3 = "numOpponents > 0"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_3, "c:\ax2017\jams\shards\code\shardsai.cpp", var_5c_6, 
        var_58_6)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
