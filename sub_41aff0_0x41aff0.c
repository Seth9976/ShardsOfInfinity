// 函数名称: sub_41aff0
// 虚拟地址: 0x41aff0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_41aff0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = data_65aabc
    char const* const var_1c
    int32_t var_18
    char const* const __saved_ebx
    char* ecx_1
    
    if (eax == 0)
    label_41b0a1:
        __saved_ebx = "GetClient"
        var_18 = 0x74
        var_1c = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    else
        if (*(eax + 0x434) == 1)
            eax = sub_41ad20()
            void* ecx_2 = data_65aabc
            
            if (ecx_2 == 0)
                goto label_41b0a1
            
            int32_t esi = *(ecx_2 + 0x648)
            void* result = sub_4297e0(sub_41ad20(), esi)
            
            if (*(result + 0xc) s<= 0)
                return result
            
            void* eax_2 = sub_4297e0(eax, esi)
            int32_t i_1 = 0
            int32_t i = 0
            
            if (*(eax_2 + 0xc) != 0)
                do
                    int32_t i_2 = i_1
                    i_1 = i
                    i = sub_436a50(eax_2, i)
                    
                    if (i == 0xffffffff)
                        i_1 = i_2
                        break
                while (i != *(eax_2 + 0xc))
            
            *(eax_2 + 0xc) = i_1
            *(eax_2 + 0x10) = 0
            return sub_441b80(eax, 0x557e44)
        
        __saved_ebx = "GameUndo"
        var_18 = 0xac9
        var_1c = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_1 = "GetClient().activeGame.gameType == GAME_LOCAL"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_1c, var_18, __saved_ebx)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
