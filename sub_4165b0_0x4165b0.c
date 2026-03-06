// 函数名称: sub_4165b0
// 虚拟地址: 0x4165b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4165b0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    int32_t eax
    char const* const ecx
    
    if (*(arg2 + 0x14) == 3)
        int32_t ecx_4 = 0
        int32_t ebx_3 = (arg2 - arg1 - 8) s/ 0x2c
        int32_t edx_2 = 0
        
        if (*(arg1 + 0x1c) == 3 && *(arg1 + 0x20) == *(arg2 + 0x18))
            edx_2 = 1
            ecx_4.b = ebx_3 s> 0
        
        if (*(arg1 + 0x48) == 3 && *(arg1 + 0x4c) == *(arg2 + 0x18))
            edx_2 += 1
            int32_t eax_4 = ecx_4 + 1
            
            if (ebx_3 s<= 1)
                eax_4 = ecx_4
            
            ecx_4 = eax_4
        
        if (*(arg1 + 0x74) == 3 && *(arg1 + 0x78) == *(arg2 + 0x18))
            edx_2 += 1
            int32_t eax_6 = ecx_4 + 1
            
            if (ebx_3 s<= 2)
                eax_6 = ecx_4
            
            ecx_4 = eax_6
        
        if (*(arg1 + 0xa0) == 3 && *(arg1 + 0xa4) == *(arg2 + 0x18))
            edx_2 += 1
            int32_t eax_8 = ecx_4 + 1
            
            if (ebx_3 s<= 3)
                eax_8 = ecx_4
            
            ecx_4 = eax_8
        
        if (*(arg1 + 0xcc) == 3 && *(arg1 + 0xd0) == *(arg2 + 0x18))
            edx_2 += 1
            int32_t eax_10 = ecx_4 + 1
            
            if (ebx_3 s<= 4)
                eax_10 = ecx_4
            
            ecx_4 = eax_10
        
        int32_t ecx_6 = sbb.d(1, 1, 1 u< edx_2) & (ecx_4 + 1)
        int32_t eax_12 = *(arg2 + 0x18)
        eax = eax_12
        
        if (eax_12 != 0)
            int32_t temp1_1 = eax
            eax -= 1
            
            if (temp1_1 != 1)
                int32_t temp2_1 = eax
                eax -= 1
                
                if (temp2_1 != 1)
                    char const* const var_10_1 = "GetAIName"
                    var_14 = 0x3d9
                else if (ecx_6 u> 4)
                    char const* const var_10_2 = "GetAIName"
                    var_14 = 0x3d6
                else
                    switch (ecx_6)
                        case 0
                            return "Hard AI"
                        case 1
                            return "Hard AI 1"
                        case 2
                            return "Hard AI 2"
                        case 3
                            return "Hard AI 3"
                        case 4
                            return "Hard AI 4"
            else if (ecx_6 u> 4)
                char const* const var_10_3 = "GetAIName"
                var_14 = 0x3c7
            else
                switch (ecx_6)
                    case 0
                        return &data_555e18
                    case 1
                        return "AI 1"
                    case 2
                        return "AI 2"
                    case 3
                        return "AI 3"
                    case 4
                        return "AI 4"
        else if (ecx_6 u> 4)
            char const* const var_10_4 = "GetAIName"
            var_14 = 0x3b8
        else
            switch (ecx_6)
                case 0
                    return "Easy AI"
                case 1
                    return "Easy AI 1"
                case 2
                    return "Easy AI 2"
                case 3
                    return "Easy AI 3"
                case 4
                    return "Easy AI 4"
        
        ecx = "Halt"
    else
        char const* const var_10 = "GetAIName"
        var_14 = 0x3a6
        ecx = "player.playerType == DBGAMEPLAYERTYPE_AI"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", var_14, 
        "GetAIName")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
