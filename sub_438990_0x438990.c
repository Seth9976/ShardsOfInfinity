// 函数名称: sub_438990
// 虚拟地址: 0x438990
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_438990(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0xffffffff)
    if (arg1 == 0xffffffff)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "who != PLAYER_NONE", 
            "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x1034, "NumCardsWhereNonMimic")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t result = 0
    int32_t* i_1 = nullptr
    sub_445070(&data_5bcd7c, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 0 && i[2] == arg1 && i[3] == 9 && *(i + 0x16) == 0)
            result += 1
        
        sub_445070(&data_5bcd7c, &i_1)
    
    return result
}
