// 函数名称: sub_41af80
// 虚拟地址: 0x41af80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_41af80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0xe4)
    int32_t esi = *(arg1 + 0xe4)
    int32_t eax = 0
    
    if (esi s> 0)
        do
            if (*(arg1 + 0x24) == arg2)
                return arg1 + 8
            
            eax += 1
            arg1 += 0x2c
        while (eax s< esi)
    
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0xabb, 
        "GameGetPlayer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
