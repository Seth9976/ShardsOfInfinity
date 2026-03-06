// 函数名称: sub_443df0
// 虚拟地址: 0x443df0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_443df0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    void* result = data_65aabc
    
    if (result == 0)
        sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(result + 0x434) != 0)
        result = sub_443fc0()
        
        if (arg1 == *(result + 0x14))
            return sub_443dc0()
    
    return result
}
