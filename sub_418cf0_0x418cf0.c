// 函数名称: sub_418cf0
// 虚拟地址: 0x418cf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_418cf0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = sub_418c50(*arg1)
    int32_t eax = sub_418c50(*arg1)
    void* ecx_1 = data_65aabc
    
    if (ecx_1 == 0)
        sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* result = sub_41b1b0(ecx_1 + 0x444, eax)
    int32_t* result_1 = result
    
    if (arg1[2].b != 0 && result_1[0x6d] == 1)
        result = sub_416d70(sub_418c50(arg1[1]))
        result_1[0x6d] = 2
    
    return result
}
