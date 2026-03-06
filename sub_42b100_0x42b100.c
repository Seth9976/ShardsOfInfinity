// 函数名称: sub_42b100
// 虚拟地址: 0x42b100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_42b100()
{
    // 第一条实际指令: int32_t result = data_65ac30
    int32_t result = data_65ac30
    
    if (result != 0)
        return result
    
    sub_44e4d0(result, &data_5559b1, "gGameSettings.localSettings", 
        "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
