// 函数名称: sub_446860
// 虚拟地址: 0x446860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_446860(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    uint32_t ecx = zx.d(arg2.w)
    void* i
    uint32_t ecx_4
    int32_t edx
    void* i_1
    
    if (ecx u< 0xc8)
        uint32_t ecx_1 = ecx << 5
        edx = *(ecx_1 + arg1 + 4)
        int32_t eax = *(ecx_1 + arg1 + 8)
        *(ecx_1 + arg1 + 4) = 0
        *(ecx_1 + arg1 + 8) = 0xffffffff
        i = sub_445c50(eax, edx, arg1, eax)
        i_1 = i
        ecx_4 = zx.d((*i_1).w)
    
    int32_t var_1c
    char const* const var_18_2
    char* ecx_5
    
    if (ecx u>= 0xc8 || ecx_4 u>= 0xc8)
    label_4469b6:
        var_18_2 = "CardGet"
        var_1c = 0x90
        ecx_5 = "idNoMimic < MAX_CARDS"
    else
        int32_t edx_1 = edx
        i = *((ecx_4 << 5) + arg1 + 4)
        
        if (i != edx_1 && i != 0)
            var_18_2 = "RemoveCard"
            var_1c = 0x260
            ecx_5 = "cp0.where == where || cp0.where == CW_NONE"
        else if (edx_1 != 4)
            while (true)
                if (ecx_4 u>= 0xc8)
                    goto label_4469b6
                
                i = *((ecx_4 << 5) + arg1 + 4)
                
                if (i != edx_1 && i != 0)
                    var_18_2 = "RemoveCard"
                    var_1c = 0x274
                    ecx_5 = "cp.where == where || cp.where == CW_NONE"
                    break
                
                int32_t edx_2 = *i_1
                
                if (arg2 == edx_2)
                    i = *(sub_445c00(arg1, edx_2.w) + 8)
                    *i_1 = i
                    
                    if (i == 0)
                    label_446922:
                        return i
                    
                    while (true)
                        i = zx.d(i.w)
                        
                        if (i u>= 0xc8)
                            break
                        
                        int32_t eax_5 = i << 5
                        *(eax_5 + arg1 + 0x10) -= 1
                        i = *(eax_5 + arg1 + 0xc)
                        
                        if (i == 0)
                            return i
                    
                    goto label_4469b6
                
                i = zx.d(edx_2.w)
                
                if (i u>= 0xc8)
                    goto label_4469b6
                
                i_1 = arg1 + 0xc + (i << 5)
                i = *i_1
                
                if (i == 0)
                    var_18_2 = "RemoveCard"
                    var_1c = 0x288
                    ecx_5 = "Halt"
                    break
                
                edx_1 = edx
                ecx_4 = zx.d(i.w)
        else
            i = nullptr
            int32_t* ecx_6 = arg1 + 0x19dc
            
            do
                if (*ecx_6 == arg2)
                    *(arg1 + (i << 2) + 0x19dc) = 0
                    goto label_446922
                
                i += 1
                ecx_6 = &ecx_6[1]
            while (i s< 6)
            
            var_18_2 = "RemoveCard"
            var_1c = 0x26e
            ecx_5 = "Halt"
    
    sub_44e4d0(i, &data_5559b1, ecx_5, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_1c, var_18_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
