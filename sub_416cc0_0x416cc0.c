// 函数名称: sub_416cc0
// 虚拟地址: 0x416cc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_416cc0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* ecx = data_65aabc
    
    if (ecx != 0)
        return sub_41b1b0(ecx + 0x444, arg1)
    
    sub_44e4d0(arg1, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
