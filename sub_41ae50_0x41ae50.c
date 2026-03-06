// 函数名称: sub_41ae50
// 虚拟地址: 0x41ae50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_41ae50(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* result = data_65aabc
    
    if (result == 0)
        sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(result + 0x648) != arg1)
        *(result + 0x648) = arg1
        result = sub_41adc0()
        int32_t ecx = data_5bb240
        
        if (result.b != 0)
            ecx = 0x16
        
        data_5bb240 = ecx
    
    return result
}
