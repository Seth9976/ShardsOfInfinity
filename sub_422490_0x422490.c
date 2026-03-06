// 函数名称: sub_422490
// 虚拟地址: 0x422490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_422490()
{
    // 第一条实际指令: void* result = data_65aabc
    void* result = data_65aabc
    data_5bb240 = 0x11
    data_65aafc = 0
    data_65ab00 = 0
    
    if (result != 0)
        if (*(result + 0x18) != 3)
            return result
        
        int32_t ecx
        ecx.b = 1
        return sub_4156c0(ecx) __tailcall
    
    sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
