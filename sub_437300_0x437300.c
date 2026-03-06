// 函数名称: sub_437300
// 虚拟地址: 0x437300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_437300(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* i_1 = nullptr
    int32_t* i_1 = nullptr
    sub_445070(&data_5bcd7c, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 0 && i[2] == arg2 && i[3] == 0xa && i[4] == 0)
            uint32_t eax_2 = zx.d((i[1]).w)
            char const* const var_24
            int32_t var_20
            char const* const var_1c_2
            char* ecx
            
            if (eax_2 u< 0xc8)
                eax_2 = *((eax_2 << 5) + arg1 + 0x14)
                
                if (*(eax_2 + 0x28) == 3)
                    return *eax_2
                
                var_1c_2 = "GetHeroCard"
                var_20 = 0xc9f
                var_24 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                ecx = "def.type == HERO"
            else
                var_1c_2 = "CardGet"
                var_20 = 0x87
                var_24 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
                ecx = "idNoMimic < MAX_CARDS"
            
            sub_44e4d0(eax_2, &data_5559b1, ecx, var_24, var_20, var_1c_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_445070(&data_5bcd7c, &i_1)
    
    return 4
}
