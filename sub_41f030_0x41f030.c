// 函数名称: sub_41f030
// 虚拟地址: 0x41f030
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_41f030()
{
    // 第一条实际指令: void* ecx_2 = data_65aabc
    void* ecx_2 = data_65aabc
    
    if (ecx_2 != 0)
        *(ecx_2 + 0x424) = 0
        return sub_412ab0(ecx_2 + 0x444) __tailcall
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
