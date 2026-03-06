// 函数名称: sub_418c50
// 虚拟地址: 0x418c50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_418c50(int32_t arg1)
{
    // 第一条实际指令: void* ecx = data_65aabc
    void* ecx = data_65aabc
    
    if (ecx == 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* i_1 = nullptr
    sub_412b20(ecx + 0x444, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == arg1)
            return i[0x72]
        
        sub_412b20(ecx + 0x444, &i_1)
    
    return 0
}
