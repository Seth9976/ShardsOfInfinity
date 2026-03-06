// 函数名称: sub_4497f0
// 虚拟地址: 0x4497f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4497f0(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: uint32_t eax_1 = zx.d(arg4.w)
    uint32_t eax_1 = zx.d(arg4.w)
    int32_t var_28
    char const* const var_24
    char* ecx
    
    if (eax_1 u< 0xc8)
        eax_1 <<= 5
        int32_t ebx_1 = *(eax_1 + arg3 + 8)
        
        if (arg2 == ebx_1)
            int32_t edi_1 = *(eax_1 + arg3 + 4)
            int32_t eax_2 = *(eax_1 + arg3 + 0x14)
            int32_t ecx_1 = *(arg3 + 0x19d0)
            int32_t eax_3 = 0
            int32_t edx_1
            
            if (ecx_1 s> 0)
                while (*(arg3 + eax_3 + 0x1908) != 0)
                    eax_3 += 1
                    
                    if (eax_3 s>= ecx_1)
                        goto label_44986f
                
                *(eax_3 + arg3 + 0x1908) = 1
                edx_1 = *(arg3 + 0x1904) + eax_3
                goto label_4498d7
            
        label_44986f:
            eax_1 = *(arg3 + 0x1904)
            
            if (eax_1 s< 0xc8)
                eax_1 += ecx_1
                
                if (eax_1 s< 0xc8)
                    *(ecx_1 + arg3 + 0x1908) = 1
                    int32_t ecx_2 = *(arg3 + 0x19d0)
                    edx_1 = *(arg3 + 0x1904) + ecx_2
                    *(arg3 + 0x19d0) = ecx_2 + 1
                label_4498d7:
                    void* ecx_4 = arg3 + 4 + (edx_1 << 5)
                    *ecx_4 = edi_1
                    int32_t edi_2 = data_659a70
                    *(ecx_4 + 0x10) = eax_2
                    *(ecx_4 + 4) = ebx_1
                    *(ecx_4 + 8) = 0
                    *(ecx_4 + 0x18) = edi_2
                    data_659a70 = edi_2 + 1
                    int32_t result_1 = (ecx_4 - arg3 - 4) s>> 5
                    uint32_t result
                    
                    if (edi_2 == 0)
                        result = result_1
                    else
                        result = edi_2 << 0x10 | result_1
                    
                    sub_445a20(sub_4461a0(edi_2 + 1, result, arg3, edi_1, ebx_1), 5, arg3, arg2, 
                        result, arg4, 0, 0)
                    return result
                
                var_24 = "CardAllocMimic"
                var_28 = 0xda
                ecx = "g.numCards + g.numMimics < MAX_CARDS"
            else
                var_24 = "CardAllocMimic"
                var_28 = 0xd9
                ecx = "g.numCards < MAX_CARDS"
        else
            var_24 = "CreateMimicCard"
            var_28 = 0x84d
            ecx = "who == card.owner"
    else
        var_24 = "CardGet"
        var_28 = 0x90
        ecx = "idNoMimic < MAX_CARDS"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_28, var_24)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
