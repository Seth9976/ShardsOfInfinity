// 函数名称: sub_44d460
// 虚拟地址: 0x44d460
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_44d460(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t eax = data_65aabc
    uint32_t eax = data_65aabc
    char const* const var_c
    int32_t var_8
    char const* const var_4
    char* ecx
    
    if (eax != 0)
        if (*(eax + 0x434) == 0)
            return *((arg2 << 2) + &data_e47348)
        
        int32_t ecx_1 = data_5c2e2c
        
        if (ecx_1 != 0)
            eax = zx.d(arg2.w)
            
            if (eax u< 0xc8)
                *((arg2 << 2) + &data_e47348) = *((eax << 5) + ecx_1 + 0x14) + 0x10
                return *((arg2 << 2) + &data_e47348)
            
            var_4 = "CardGet"
            var_8 = 0x87
            var_c = "c:\ax2017\jams\shards\code\shardsgame.cpp"
            ecx = "idNoMimic < MAX_CARDS"
        else
            var_4 = "ShGameGet"
            var_8 = 0x26fe
            var_c = "c:\ax2017\jams\shards\code\shardsclient.cpp"
            ecx = "gShardsClient.g"
    else
        var_4 = "GetClient"
        var_8 = 0x74
        var_c = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_c, var_8, var_4)
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
