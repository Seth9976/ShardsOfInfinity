// 函数名称: sub_41b950
// 虚拟地址: 0x41b950
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_41b950(int32_t arg1)
{
    // 第一条实际指令: void* result = data_65aabc
    void* result = data_65aabc
    
    if (result != 0)
        *(result + 0x42c) = 2
        *(result + 0x430) = arg1
        return result
    
    sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
