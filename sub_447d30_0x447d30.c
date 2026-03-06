// 函数名称: sub_447d30
// 虚拟地址: 0x447d30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_447d30(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: uint32_t eax = arg4
    uint32_t eax = arg4
    uint32_t ecx = zx.d(eax.w)
    int32_t var_28
    char const* const var_24
    char* ecx_1
    
    if (ecx u< 0xc8)
        uint32_t ecx_2 = ecx << 5
        int32_t var_24_1 = *(*(ecx_2 + arg3 + 0x14) + 0x24)
        int32_t var_28_1 = *sub_445b50(arg3, *(ecx_2 + arg3 + 8))
        int32_t var_2c_1 = *sub_445b50(arg3, arg2)
        char const* const var_30_1 = "%s destroys %s's champion %s."
        void* var_34_1 = arg3
        eax = ecx_2
        uint32_t ecx_5 = *(eax + arg3 + 8)
        int32_t ecx_6 = *(arg3 + 0x2168)
        uint32_t esi_2
        
        if (ecx_6 == 2 || ecx_6 == 3)
            esi_2 = arg4
        else
            uint32_t (* eax_4)[0x4] = sub_44d360(arg3, arg2)
            esi_2 = arg4
            *eax_4 = 5
            (*eax_4)[1] = esi_2
            (*eax_4)[2] = ecx_5
            eax = ecx_2
        
        if (*(eax + arg3 + 4) == 0xa)
            int32_t ecx_9 = *(eax + arg3 + 8)
            
            if (ecx_9 != arg2)
                eax = *(eax + arg3 + 0x14)
                
                if (*(eax + 0x28) == 2)
                    if (ecx_9 != 0xffffffff)
                        return sub_445a20(sub_4469f0(eax, esi_2, arg3, 9, ecx_9), 0x24, arg3, arg2, 
                            esi_2, 0, 0, 0)
                    
                    var_24 = "ShDestroyChampion"
                    var_28 = 0x544
                    ecx_1 = "c.owner != PLAYER_NONE"
                else
                    var_24 = "ShDestroyChampion"
                    var_28 = 0x542
                    ecx_1 = "c.def->type == CHAM"
            else
                var_24 = "ShDestroyChampion"
                var_28 = 0x541
                ecx_1 = "c.owner != who"
        else
            var_24 = "ShDestroyChampion"
            var_28 = 0x540
            ecx_1 = "c.where == CW_PLAYER_CONSTRUCT"
    else
        var_24 = "CardGet"
        var_28 = 0x90
        ecx_1 = "idNoMimic < MAX_CARDS"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_28, var_24)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
