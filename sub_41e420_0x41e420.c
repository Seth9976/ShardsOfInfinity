// 函数名称: sub_41e420
// 虚拟地址: 0x41e420
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_41e420()
{
    // 第一条实际指令: int32_t eax_1 = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x244)
    int32_t eax_1 = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x244)
    
    if (eax_1 == 0)
        int32_t result
        result.b = *(sub_411690() + 0x1c) != 6
        return result
    
    if (eax_1 == 1)
        return 3
    
    if (eax_1 == 2)
        return 2
    
    sub_44e4d0(eax_1 - 2, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
        0x7b2, "GetUserOnlineState")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
