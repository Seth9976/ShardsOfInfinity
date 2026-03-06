// 函数名称: sub_445ed0
// 虚拟地址: 0x445ed0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_445ed0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[3]
    int32_t eax = arg1[3]
    
    if (eax == 0)
        arg1[1] = eax
        return eax
    
    int32_t ecx = *arg1
    uint32_t eax_1 = zx.d(eax.w)
    int32_t var_c
    char const* const var_8
    char* ecx_1
    
    if (eax_1 u< 0xc8)
        eax_1 = (eax_1 << 5) + 4 + ecx
        arg1[1] = eax_1
        int32_t edx_1 = *eax_1
        
        if (edx_1 == arg1[2])
            if (edx_1 != 4)
                eax_1 = *(eax_1 + 8)
                arg1[3] = eax_1
                return eax_1
            
            int32_t edx_3 = *(eax_1 + 0xc) + 1
            
            if (edx_3 s>= 6)
            label_445f4e:
                arg1[3] = 0
                return eax_1
            
            eax_1 = ecx + 0x19dc + (edx_3 << 2)
            
            while (*eax_1 == 0)
                edx_3 += 1
                eax_1 += 4
                
                if (edx_3 s>= 6)
                    goto label_445f4e
            
            int32_t edx_4 = *(ecx + (edx_3 << 2) + 0x19dc)
            arg1[3] = edx_4
            eax_1 = *sub_445bb0(ecx, edx_4.w)
            
            if (eax_1 == arg1[2])
                return eax_1
            
            var_8 = "Cards::CardIt::operator ++"
            var_c = 0x14a
            ecx_1 = "cNext->where == where"
        else
            var_8 = "Cards::CardIt::operator ++"
            var_c = 0x140
            ecx_1 = "c->where == where"
    else
        var_8 = "CardGet"
        var_c = 0x87
        ecx_1 = "idNoMimic < MAX_CARDS"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
