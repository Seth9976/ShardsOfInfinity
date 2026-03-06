// 函数名称: sub_42fb70
// 虚拟地址: 0x42fb70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_42fb70(int32_t arg1, void* arg2, int128_t* arg3, int128_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t* esi = arg3
    int32_t* esi = arg3
    int32_t eax = *esi
    int32_t var_1c4
    char const* const ecx
    
    if (eax != 0xffffffff)
        int32_t eax_3
        
        if (eax == 0)
            eax_3 = 2
        label_42fbc9:
            void var_34
            int128_t* eax_4
            
            switch (eax_3)
                case 2
                    eax_4 = sub_42f690(&var_34, arg5)
                case 3
                    int32_t* ecx_2 = *arg5
                    
                    if (ecx_2 - 1 u> 8)
                        sub_44e4d0(arg5, &data_5559b1, "Halt", 
                            "c:\ax2017\jams\shards\code\shardsai.cpp", 0xc4b, "ShAIAction_NetPlay")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    void var_1b4
                    void var_184
                    void var_154
                    void var_124
                    void var_f4
                    void var_c4
                    void var_94
                    int128_t* eax_9
                    
                    switch (ecx_2)
                        case 1
                            eax_9 = sub_430610(&var_34, arg2, esi, &var_34, arg5)
                        case 2
                            int32_t* var_1c0_5 = arg5
                            void var_64
                            eax_9 = sub_42e750(&var_64, arg2, ecx_2, &var_64)
                        case 3
                            eax_9 = sub_430920(&var_94, arg5, ecx_2, 6, arg5[0xcc], arg5[0xcd])
                        case 4
                            eax_9 = sub_42e940(&var_c4, arg5)
                        case 5
                            eax_9 = sub_42e9b0(&var_f4, arg5)
                        case 6
                            eax_9 = sub_430920(&var_124, arg5, ecx_2, 0xb, arg5[0xcc], arg5[0xcd])
                        case 7
                            eax_9 = sub_430920(&var_154, arg5, ecx_2, 0xa, arg5[0xcc], arg5[0xcd])
                        case 8
                            eax_9 = sub_430920(&var_184, arg5, ecx_2, 0xc, arg5[0xcc], arg5[0xcd])
                        case 9
                            eax_9 = sub_430920(&var_1b4, arg5, ecx_2, 7, arg5[0xcc], arg5[0xcd])
                    
                    int128_t xmm1 = eax_9[1]
                    int128_t xmm2 = eax_9[2]
                    *arg4 = *eax_9
                    arg4[1] = xmm1
                    arg4[2] = xmm2
                    return arg4
                case 4
                    int32_t* var_1c0_3 = arg5
                    eax_4 = sub_42f430(&var_34, arg2, arg3, &var_34)
            
            *arg4 = *eax_4
            arg4[1] = eax_4[1]
            arg4[2] = eax_4[2]
            return arg4
        
        int32_t eax_2 = eax - 1
        
        if (eax == 1)
            eax_3 = 4
            goto label_42fbc9
        
        eax = eax_2 - 1
        
        if (eax_2 == 1)
            eax_3 = 3
            goto label_42fbc9
        
        char const* const var_1c0_1 = "ShAIAction"
        var_1c4 = 0xe92
        ecx = "Halt"
    else
        char const* const var_1c0 = "ShAIAction"
        var_1c4 = 0xe83
        ecx = "ai.aiLevel != DBAI_NONE"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsai.cpp", var_1c4, "ShAIAction")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
