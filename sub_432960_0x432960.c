// 函数名称: sub_432960
// 虚拟地址: 0x432960
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_432960(void* arg1, int32_t arg2)
{
    // 第一条实际指令: char const* const var_10
    char const* const var_10
    int32_t var_c
    char const* const var_8
    uint32_t eax
    char* ecx
    
    if (*arg1 == 0)
        int32_t edx = data_5c2e2c
        
        if (edx != 0)
            eax = zx.d((*(arg1 + 4)).w)
            
            if (eax u< 0xc8)
                int32_t result
                result.b = **((eax << 5) + edx + 0x14) == arg2
                return result
            
            var_8 = "CardGet"
            var_c = 0x87
            var_10 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
            ecx = "idNoMimic < MAX_CARDS"
        else
            var_8 = "ShGameGet"
            var_c = 0x26fe
            var_10 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
            ecx = "gShardsClient.g"
    else
        var_8 = "CardIs"
        var_c = 0x1a2
        var_10 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
        ecx = "gfx.type == SHGFX_CARD"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
