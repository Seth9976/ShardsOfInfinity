// 函数名称: sub_413510
// 虚拟地址: 0x413510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_413510(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == 2)
    if (arg2 == 2)
        return sub_413580(arg1, *(arg1 + 0x618) - 1)
    
    if (arg2 == 4)
        return sub_413580(arg1, *(arg1 + 0x618) + 1)
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamecardset.cpp", 0x8a, 
        "CardsetSwipe")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
