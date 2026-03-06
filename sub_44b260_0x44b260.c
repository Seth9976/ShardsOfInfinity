// 函数名称: sub_44b260
// 虚拟地址: 0x44b260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_44b260(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    uint32_t eax = arg4
    int32_t* edi = arg3
    uint32_t ebx = zx.d(eax.w)
    int32_t var_1c
    char const* const var_18
    char* ecx
    uint32_t (* eax_6)[0x4]
    uint32_t esi_2
    
    if (arg5 == 3)
        if (ebx u< 0xc8)
            int32_t var_18_1 = *(edi[ebx * 8 + 5] + 0x24)
            int32_t var_1c_1 = *sub_445b50(arg3, arg2)
            char const* const var_20_1 = "%s mercs %s."
            int32_t* var_24_1 = edi
            int32_t eax_5 = edi[0x85a]
            esi_2 = arg2
            
            if (eax_5 == 2 || eax_5 == 3)
                goto label_44b346
            
            eax_6 = sub_44d360(edi, esi_2)
            *eax_6 = 4
            goto label_44b340
        
        var_18 = "CardGet"
        var_1c = 0x90
        ecx = "idNoMimic < MAX_CARDS"
    else if (ebx u< 0xc8)
        uint32_t var_18_2 = arg5
        int32_t var_1c_2 = *(edi[ebx * 8 + 5] + 0x24)
        int32_t var_20_2 = *sub_445b50(arg3, arg2)
        char const* const var_24_2 = "%s buys %s (dest %d)."
        int32_t* var_28_1 = edi
        int32_t eax_11 = edi[0x85a]
        esi_2 = arg2
        
        if (eax_11 == 2 || eax_11 == 3)
            goto label_44b346
        
        eax_6 = sub_44d360(edi, esi_2)
        *eax_6 = 3
    label_44b340:
        (*eax_6)[1] = arg4
    label_44b346:
        uint32_t* edx_2 = edi[ebx * 8 + 5]
        eax = *edx_2
        
        if (eax == 0 || eax s> 8)
            int32_t eax_12 = edx_2[2]
            edi[esi_2 * 0x27 + 0x79a] -= eax_12
            return sub_44ae50(sub_445a20(eax_12, 0x20, edi, esi_2, 0, edx_2[2], 0, 0), esi_2, edi, 
                arg4, arg5)
        
        var_18 = "ShBuy"
        var_1c = 0xb0d
        ecx = "def.card == CARD_NONE || def.card > CARD_INFINITY_SHARD"
    else
        var_18 = "CardGet"
        var_1c = 0x90
        ecx = "idNoMimic < MAX_CARDS"
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
