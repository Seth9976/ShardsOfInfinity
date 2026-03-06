// 函数名称: sub_437010
// 虚拟地址: 0x437010
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_437010()
{
    // 第一条实际指令: void* eax = data_65aabc
    void* eax = data_65aabc
    data_5bcaf8 = 0
    data_5bcb00 = 0xffffffff
    data_5bcaf0 = 1
    
    if (eax != 0)
        int32_t result = *(eax + 0x648)
        data_5bcaf4 = result
        return result
    
    sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
