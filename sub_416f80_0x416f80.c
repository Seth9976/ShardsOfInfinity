// 函数名称: sub_416f80
// 虚拟地址: 0x416f80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_416f80(int32_t arg1)
{
    // 第一条实际指令: void* ebx = data_65aabc
    void* ebx = data_65aabc
    
    if (ebx == 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_1 = sub_42aaa0(*(data_65ac38 + 0xb24))
    *(eax_1 + 0x110) = 1
    void* eax_2 = sub_42aaa0(*(data_65ac38 + 0xb24))
    *(eax_2 + 0x240) -= 1
    sub_42a740(data_65ac38)
    int32_t esi_1 = *(eax_2 + 0x240)
    *(ebx + 0x434) = 1
    *(ebx + 0x438) = esi_1
    sub_429850(ebx, ebx + 0x460, eax_1 + 0x10, 4, arg1)
    sub_416be0()
    sub_441b80(ebx + 0x460, 0x557e38)
    return sub_42b530(ebx + 0x460, esi_1)
}
