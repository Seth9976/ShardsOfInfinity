// 函数名称: sub_418d80
// 虚拟地址: 0x418d80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_418d80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0xec)
    int32_t edi = *(arg1 + 0xec)
    int32_t esi = 0
    void* eax
    
    if (edi s> 0)
        eax = arg1 + 0x28
        
        do
            if (*(eax - 4) == 1 && *eax == arg2)
                return eax - 0x18
            
            esi += 1
            eax += 0x2c
        while (esi s< edi)
    
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x783, 
        "GetPlayerByAccountID")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
