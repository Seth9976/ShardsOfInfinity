// 函数名称: sub_449a10
// 虚拟地址: 0x449a10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_449a10(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x1e54)
    void* result = *(arg1 + 0x1e54)
    bool cond:0 = result s<= 0
    
    if (result != 0)
        while (true)
            int32_t var_24_4
            char const* const var_20_5
            char* ecx_11
            
            if (cond:0)
                var_20_5 = "PopExecStack"
                var_24_4 = 0x868
                ecx_11 = "g.numExecStack > 0"
            else
                void* ecx = arg1 + ((result * 3 + 0x762) << 2)
                *ecx = *(arg1 + 0x1d88)
                *(ecx + 8) = *(arg1 + 0x1d90)
                sub_51dd40(arg1 + 0x1d88, arg1 + 0x1d94, *(arg1 + 0x1e54) * 0xc)
                int32_t ecx_1 = *(arg1 + 0x1e54)
                void* edx_2 = arg1 + (ecx_1 + 0x276) * 0xc
                *(arg1 + 0x1e54) = ecx_1 - 1
                uint32_t edi_1 = *edx_2
                uint32_t ebx_1 = *(edx_2 + 4)
                
                if (*(edx_2 + 8) != 0)
                    result = sub_44c050(edx_2 + 4, edi_1, arg1, edx_2 + 4)
                label_449b79:
                    
                    if (*(arg1 + 0x1a04) != 0)
                        break
                    
                    result = *(arg1 + 0x1e54)
                    cond:0 = result s<= 0
                    
                    if (result == 0)
                        break
                    
                    continue
                else
                    result = zx.d(ebx_1.w)
                    
                    if (result u>= 0xc8)
                        var_20_5 = "CardGet"
                        var_24_4 = 0x90
                        ecx_11 = "idNoMimic < MAX_CARDS"
                    else
                        result = (result << 5) + arg1
                        
                        if (edi_1 != 0xffffffff)
                            sub_4461a0(sub_446860(arg1, ebx_1), ebx_1, arg1, 5, edi_1)
                            int32_t* eax_14 = *(result + 0x14)
                            
                            if (*eax_14 == 0xf)
                                eax_14 = sub_445a20(eax_14, 9, arg1, edi_1, ebx_1, 0, 0, 0)
                            
                            uint32_t eax_15 = sub_4496d0(eax_14, edi_1, arg1, ebx_1, 0)
                            
                            if (*(arg1 + 0x1a04) != 0 && *(arg1 + 0x1a08) != 0xa)
                                return sub_445a20(eax_15, 9, arg1, edi_1, ebx_1, 0, 0, 0)
                            
                            int32_t edi_2 = *(*(result + 0x14) + 0x28)
                            sub_446860(arg1, ebx_1)
                            int32_t eax_18
                            eax_18.b = edi_2 == 2
                            int32_t edx_8
                            edx_8.b = edi_2 == 2
                            result = sub_445a20(
                                sub_4461a0((eax_18 << 2) + 6, ebx_1, arg1, (eax_18 << 2) + 6, edi_1), 
                                (edx_8 << 1) + 8, arg1, edi_1, ebx_1, 0, 0, 0)
                            goto label_449b79
                        
                        var_20_5 = "MoveCard"
                        var_24_4 = 0x294
                        ecx_11 = "where == CW_GLOBAL_DECK || where == CW_GLOBAL_DISCARD"
            
            sub_44e4d0(result, &data_5559b1, ecx_11, "c:\ax2017\jams\shards\code\shardsgame.cpp", 
                var_24_4, var_20_5)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return result
}
