// 函数名称: sub_41beb0
// 虚拟地址: 0x41beb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_41beb0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    void* ecx = data_65aabc
    
    if (ecx != 0)
        eax = sub_41b1b0(ecx + 0x444, eax)
        int32_t* edx_1 = data_65aabc
        eax[0x6e].b = 1
        
        if (edx_1 != 0)
            eax[0x70] = *edx_1
            int32_t result = edx_1[1]
            eax[0x71] = result
            return result
    
    sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
