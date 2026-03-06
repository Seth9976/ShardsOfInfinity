// 函数名称: sub_4355a0
// 虚拟地址: 0x4355a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4355a0(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x450) == 0)
    if (*(arg1 + 0x450) == 0)
        return 
    
    uint32_t eax = *(arg1 + 0x138)
    
    if (eax u> 9)
    label_435600:
        sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x91b, 
            "MoveGetTimeToEnd")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_44e680() __tailcall
        
        breakpoint
    
    eax = zx.d(lookup_table_435630[eax])
    
    switch (eax)
        case 0
            *(arg1 + 0x45c)
        case 2
            _mm_cvtepi32_ps(zx.o(*(arg1 + 0x13c)))
        case 3
            goto label_435600
}
