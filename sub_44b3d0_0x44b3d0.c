// 函数名称: sub_44b3d0
// 虚拟地址: 0x44b3d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_44b3d0(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: uint32_t eax_1 = zx.d(arg4.w)
    uint32_t eax_1 = zx.d(arg4.w)
    uint32_t var_10 = eax_1
    int32_t var_28
    char const* const var_24
    char* ecx
    
    if (eax_1 u< 0xc8)
        void* edx_1 = arg3 + 4 + (eax_1 << 5)
        int32_t var_24_1 = *(*(edx_1 + 0x10) + 0x24)
        int32_t var_28_1 = *sub_445b50(arg3, *(edx_1 + 4))
        int32_t var_2c_1 = *sub_445b50(arg3, arg2)
        char const* const var_30_1 = "%s damages %s's champion %s."
        void* var_34_1 = arg3
        int32_t eax_6 = *(edx_1 + 4)
        eax_1 = *(arg3 + 0x2168)
        
        if (eax_1 != 2 && eax_1 != 3)
            eax_1 = sub_44d360(arg3, arg2)
            *(eax_1 + 4) = arg4
            *eax_1 = 5
            *(eax_1 + 8) = eax_6
        
        if (*edx_1 != 0xa)
            var_24 = "ShDamageChampion"
            var_28 = 0xb3b
            ecx = "c.where == CW_PLAYER_CONSTRUCT"
        else if (*(edx_1 + 4) != arg2)
            void* eax_9 = *((var_10 << 5) + arg3 + 0x14)
            eax_1 = sub_445b50(arg3, arg2)
            uint32_t var_10_1 = eax_1
            
            if (*(eax_9 + 0x2c) s<= *(eax_1 + 0x14))
                eax_1 = sub_4475d0(eax_1, arg2, arg3, edx_1)
                
                if (eax_1.b != 0)
                    uint32_t ecx_9 = *(eax_9 + 0x2c)
                    *(var_10_1 + 0x14) -= ecx_9
                    eax_1 = *(edx_1 + 4)
                    
                    if (eax_1 != 0xffffffff)
                        return sub_445a20(sub_4469f0(eax_1, arg4, arg3, 9, eax_1), 0x25, arg3, arg2, 
                            arg4, ecx_9, 0, 0)
                    
                    var_24 = "ShDamageChampion"
                    var_28 = 0xb46
                    ecx = "c.owner != PLAYER_NONE"
                else
                    var_24 = "ShDamageChampion"
                    var_28 = 0xb41
                    ecx = "CanDestoryWithPower(g, who, c)"
            else
                var_24 = "ShDamageChampion"
                var_28 = 0xb3f
                ecx = "def.health <= player.power"
        else
            var_24 = "ShDamageChampion"
            var_28 = 0xb3c
            ecx = "c.owner != who"
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
