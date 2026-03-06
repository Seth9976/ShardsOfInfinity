// 函数名称: sub_448bb0
// 虚拟地址: 0x448bb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_448bb0(void* arg1, uint32_t arg2, void* arg3, uint32_t arg4, void* arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    uint32_t ebx = arg5
    uint32_t esi = arg2
    uint32_t var_8_1 = esi
    
    if (ebx == 0)
        return 
    
    void* eax = sub_445b50(arg3, arg2)
    arg5 = eax
    int32_t ecx = *eax
    
    if (ebx != 0xffffffff)
        uint32_t var_18_3 = ebx
        int32_t var_1c_3 = ecx
        char const* const var_20_2 = "%s gains %d power."
        void* var_24_4 = arg3
        int32_t ecx_9 = *(arg3 + 0x2168)
        
        if (ecx_9 != 2 && ecx_9 != 3)
            uint32_t (* eax_6)[0x4] = sub_44d360(arg3, esi)
            (*eax_6)[5] = 1
            (*eax_6)[6] = 1
            (*eax_6)[7] = ebx
            eax = arg5
        
        *(eax + 0x14) += ebx
        sub_445a20(eax, 0x11, arg3, esi, arg4, ebx, ebx, 0)
        goto label_448d43
    
    int32_t var_18_1 = ecx
    char const* const var_1c_1 = "%s gains infinite power."
    void* var_20_1 = arg3
    *(eax + 0x14) = ebx
    uint32_t (* eax_1)[0x4] = *(arg3 + 0x2168)
    
    if (eax_1 != 2 && eax_1 != 3)
        eax_1 = sub_44d360(arg3, esi)
        (*eax_1)[5] = 1
        (*eax_1)[6] = 1
        (*eax_1)[7] = ebx
    
    void* eax_2 = sub_445a20(eax_1, 0x14, arg3, esi, arg4, 0, 0, 0)
    int32_t i = 0
    
    if (*(arg3 + 0x2164) s> 0)
        do
            if (i != esi)
                void* eax_3 = sub_445b50(arg3, i)
                uint32_t var_28_2 = *(eax_3 + 4)
                *(eax_3 + 8) = 0
                sub_445a20(eax_3, 1, arg3, var_28_2, 0, 0, 0, 0)
                eax_2 = sub_445a20(arg5, 0x27, arg3, *(arg5 + 4), *(eax_3 + 4), 0, 0, 0)
                esi = var_8_1
            
            i += 1
        while (i s< *(arg3 + 0x2164))
    
    arg1 = sub_445a20(eax_2, 0x29, arg3, esi, arg4, 1, 0, 0)
    int32_t var_1c_2
    char const* const var_18_2
    char* ecx_7
    
    if (*(arg3 + 0x1a04) != 0)
        var_18_2 = "ShYield_Gameover"
        var_1c_2 = 0x5ec
        ecx_7 = "g.numYlds == 0"
        goto label_448d6f
    
    void* eax_5 = sub_4476a0(arg3)
    *eax_5 = 0xa
    *(eax_5 + 0x328) = 0
    label_448d43:
    arg1 = *(arg5 + 0x14)
    
    if (arg1 s>= 0 || arg1 == 0xffffffff)
        return 
    
    var_18_2 = "ExecGainPower"
    var_1c_2 = 0x71f
    ecx_7 = "player.power >= 0 || player.power == -1"
    label_448d6f:
    sub_44e4d0(arg1, &data_5559b1, ecx_7, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_1c_2, 
        var_18_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
