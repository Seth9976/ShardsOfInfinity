// 函数名称: sub_42bf40
// 虚拟地址: 0x42bf40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_42bf40()
{
    // 第一条实际指令: void* eax = data_65ac30
    void* eax = data_65ac30
    
    if (eax != 0)
        int32_t result = *(eax + 0x20)
        
        if (result == 0)
            return 2
        
        return result
    
    sub_44e4d0(eax, &data_5559b1, "gGameSettings.localSettings", 
        "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
