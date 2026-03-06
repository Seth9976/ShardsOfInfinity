// 函数名称: ??$TypeMatchHelper@V__FrameHandler3@@@@YAHPBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_ThrowInfo@@@Z
// 虚拟地址: 0x51eb39
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$TypeMatchHelper@V__FrameHandler3@@@@YAHPBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_ThrowInfo@@@Z(char* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: void* eax = *(arg1 + 4)
    void* eax = *(arg1 + 4)
    
    if (eax != 0)
        char* ecx_1 = eax + 8
        
        if (*ecx_1 != 0 && ((*arg1 & 0x80) == 0 || (*arg2 & 0x10) == 0))
            void* ebx_1 = *(arg2 + 4)
            
            if (eax != ebx_1)
                char* eax_1 = ebx_1 + 8
                int32_t eax_3
                
                while (true)
                    ebx_1.b = *ecx_1
                    char temp0_1 = *eax_1
                    bool c_1 = ebx_1.b u< temp0_1
                    
                    if (ebx_1.b == temp0_1)
                        if (ebx_1.b == 0)
                            eax_3 = 0
                            break
                        
                        ebx_1.b = ecx_1[1]
                        char temp1_1 = eax_1[1]
                        c_1 = ebx_1.b u< temp1_1
                        
                        if (ebx_1.b == temp1_1)
                            ecx_1 = &ecx_1[2]
                            eax_1 = &eax_1[2]
                            
                            if (ebx_1.b != 0)
                                continue
                            
                            eax_3 = 0
                            break
                    
                    eax_3 = sbb.d(eax_1, eax_1, c_1) | 1
                    break
                
                if (eax_3 != 0)
                    return 0
            
            if (((*arg2 & 2) == 0 || (*arg1 & 8) != 0) && ((*arg3 & 1) == 0 || (*arg1 & 1) != 0)
                    && ((*arg3 & 2) == 0 || (*arg1 & 2) != 0))
                return 1
            
            return 0
    
    return 1
}
