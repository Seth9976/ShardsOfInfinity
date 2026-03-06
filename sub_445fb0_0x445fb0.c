// 函数名称: sub_445fb0
// 虚拟地址: 0x445fb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_445fb0(int32_t* arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: *arg1 = arg2
    *arg1 = arg2
    arg1[2] = arg3
    int32_t eax
    int32_t eax_2 = *sub_445c50(eax, arg3, arg2, arg4)
    
    if (eax_2 == 0)
        arg1[1] = 0
        arg1[3] = 0
    else
        uint32_t eax_3 = zx.d(eax_2.w)
        int32_t var_18
        char const* const var_14_1
        char* ecx_1
        
        if (eax_3 u>= 0xc8)
            var_14_1 = "CardGet"
            var_18 = 0x87
            ecx_1 = "idNoMimic < MAX_CARDS"
        label_4460a1:
            sub_44e4d0(eax_3, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_18, 
                var_14_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_3 = (eax_3 << 5) + 4 + arg2
        arg1[1] = eax_3
        
        if (*eax_3 != arg3)
            var_14_1 = "Cards::Cards"
            var_18 = 0x16a
            ecx_1 = "start.c->where == where"
            goto label_4460a1
        
        if (arg3 != 4)
            arg1[3] = *(eax_3 + 8)
            return arg1
        
        int32_t eax_7 = *(eax_3 + 0xc) + 1
        
        if (eax_7 s>= 6)
        label_446045:
            arg1[3] = 0
            return arg1
        
        int32_t* ecx_3 = arg2 + 0x19dc + (eax_7 << 2)
        int32_t edx_1
        
        while (true)
            edx_1 = *ecx_3
            
            if (edx_1 != 0)
                break
            
            eax_7 += 1
            ecx_3 = &ecx_3[1]
            
            if (eax_7 s>= 6)
                goto label_446045
        
        arg1[3] = edx_1
        eax_3 = sub_445bb0(arg2, edx_1.w)
        
        if (*eax_3 != 4)
            var_14_1 = "Cards::Cards"
            var_18 = 0x174
            ecx_1 = "cNext->where == where"
            goto label_4460a1
    
    return arg1
}
