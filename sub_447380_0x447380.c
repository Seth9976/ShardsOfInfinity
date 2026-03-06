// 函数名称: sub_447380
// 虚拟地址: 0x447380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_447380(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    uint32_t esi_1 = zx.d((*arg2).w)
    
    if (esi_1 u< 0xc8)
        return *((esi_1 << 5) + arg1 + 0x14) + arg2[1] * 0xc + 0x34
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "idNoMimic < MAX_CARDS", "c:\ax2017\jams\shards\code\shardsgame.cpp", 
        0x90, "CardGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
