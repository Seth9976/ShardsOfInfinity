// 函数名称: sub_445b50
// 虚拟地址: 0x445b50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_445b50(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x2164)
    int32_t esi = *(arg1 + 0x2164)
    int32_t eax = 0
    
    if (esi s> 0)
        do
            if (*(arg1 + 0x1e5c) == arg2)
                return arg1 + 0x1e58
            
            eax += 1
            arg1 += 0x9c
        while (eax s< esi)
    
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x7e, 
        "GetPlayer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
