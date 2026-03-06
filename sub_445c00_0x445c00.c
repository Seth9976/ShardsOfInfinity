// 函数名称: sub_445c00
// 虚拟地址: 0x445c00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_445c00(int32_t arg1, int16_t arg2)
{
    // 第一条实际指令: uint32_t eax_4 = zx.d(arg2)
    uint32_t eax_4 = zx.d(arg2)
    
    if (eax_4 u< 0xc8)
        return (eax_4 << 5) + 4 + arg1
    
    sub_44e4d0(eax_4, &data_5559b1, "idNoMimic < MAX_CARDS", 
        "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x90, "CardGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
