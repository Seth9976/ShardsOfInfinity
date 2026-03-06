// 函数名称: sub_4476a0
// 虚拟地址: 0x4476a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4476a0(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x1a04) == 0)
    if (*(arg1 + 0x1a04) == 0)
        *(arg1 + 0x1a04) = 1
        _memset(arg1 + 0x1a08, 0, 0x380)
        return arg1 + 0x1a08
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "g.numYlds == 0", "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x47a, 
        "ShYieldAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
