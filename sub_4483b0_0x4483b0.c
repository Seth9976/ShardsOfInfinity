// 函数名称: sub_4483b0
// 虚拟地址: 0x4483b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4483b0(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    
    if (*(arg1 + 0x1a04) == 0)
        void* result = sub_4476a0(arg1)
        *result = 0xa
        *(result + 0x328) = 0
        return result
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "g.numYlds == 0", "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x5ec, 
        "ShYield_Gameover")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
