// 函数名称: sub_41b0e0
// 虚拟地址: 0x41b0e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_41b0e0()
{
    // 第一条实际指令: void* eax_3 = data_65aabc
    void* eax_3 = data_65aabc
    char const* const var_14
    int32_t var_10
    char const* const var_c
    char* ecx
    
    if (eax_3 != 0)
        if (*(eax_3 + 0x434) == 1)
            int32_t esi_1 = *(eax_3 + 0x648)
            void* result = sub_4297e0(sub_41ad20(), esi_1)
            
            if (*(result + 8) s<= *(result + 0xc))
                return result
            
            void* eax_1 = sub_41ad20()
            int128_t* eax_2 = sub_4297e0(eax_1, esi_1)
            eax_3 = sub_436a50(eax_2, *(eax_2 + 0xc))
            
            if (eax_3 != 0xffffffff)
                *(eax_2 + 0xc) = eax_3
                eax_2[1].d = 0
                return sub_441b80(eax_1, 0x557e44) __tailcall
            
            var_c = "GameRedo"
            var_10 = 0xb03
            ecx = "choice != -1"
        else
            var_c = "GameRedo"
            var_10 = 0xaf9
            ecx = "GetClient().activeGame.gameType == GAME_LOCAL"
        
        var_14 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
    else
        var_c = "GetClient"
        var_10 = 0x74
        var_14 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_44e4d0(eax_3, &data_5559b1, ecx, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
