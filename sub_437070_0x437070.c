// 函数名称: sub_437070
// 虚拟地址: 0x437070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_437070(int32_t arg1)
{
    // 第一条实际指令: int32_t* i_1 = nullptr
    int32_t* i_1 = nullptr
    sub_445070(&data_5bcd7c, &i_1)
    int32_t* i
    
    for (i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 0 && i[1] == arg1)
            return i
        
        sub_445070(&data_5bcd7c, &i_1)
    
    sub_44e4d0(i, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 0xc44, 
        "LookupCard")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
