// 函数名称: sub_446260
// 虚拟地址: 0x446260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_446260(int32_t* arg1, int32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t var_18
    int32_t var_18
    char const* const var_14
    char* ecx
    
    if (arg4 s< 6)
        uint32_t ecx_1 = zx.d(arg2.w)
        
        if (ecx_1 u< 0xc8)
            uint32_t ecx_2 = ecx_1 << 5
            arg1 = nullptr
            *(ecx_2 + arg3 + 4) = 4
            *(ecx_2 + arg3 + 8) = 0xffffffff
            *(ecx_2 + arg3 + 0x10) = arg4
            *(ecx_2 + arg3 + 0xc) = 0
            
            if (arg4 s< 5)
                arg1 = *(arg3 + (arg4 << 2) + 0x19e0)
                *(ecx_2 + arg3 + 0xc) = arg1
            
            if (arg4 s> 0)
                *(sub_445c00(arg3, (*(arg3 + (arg4 << 2) + 0x19d8)).w) + 8) = arg2
                arg1 = *(ecx_2 + arg3 + 0xc)
            
            if (arg1 != arg2)
                *(arg3 + (arg4 << 2) + 0x19dc) = arg2
                int32_t* edi_1 = arg3 + 0x19dc
                int32_t esi_1 = 1
                int32_t* ebx_1 = arg3 + 0x19e0
                int32_t ecx_4
                
                while (true)
                    ecx_4 = esi_1
                    
                    if (esi_1 s< 6)
                        break
                    
                label_446341:
                    esi_1 += 1
                    ebx_1 = &ebx_1[1]
                    edi_1 = &edi_1[1]
                    
                    if (esi_1 s>= 7)
                        return arg1
                
                int32_t i = *edi_1
                arg1 = ebx_1
                
                while (i == 0 || i != *arg1)
                    ecx_4 += 1
                    arg1 = &arg1[1]
                    
                    if (ecx_4 s>= 6)
                        goto label_446341
                
                var_14 = "AddCardCenter"
                var_18 = 0x1ea
                ecx = "g.center[i] != g.center[j]"
            else
                var_14 = "AddCardCenter"
                var_18 = 0x1e0
                ecx = "c.next != id"
        else
            var_14 = "CardGet"
            var_18 = 0x90
            ecx = "idNoMimic < MAX_CARDS"
    else
        var_14 = "AddCardCenter"
        var_18 = 0x1d6
        ecx = "slot < 6"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
