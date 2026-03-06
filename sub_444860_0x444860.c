// 函数名称: sub_444860
// 虚拟地址: 0x444860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_444860()
{
    // 第一条实际指令: int32_t result = data_5c2e2c
    int32_t result = data_5c2e2c
    
    if (result != 0)
        return result
    
    sub_44e4d0(result, &data_5559b1, "gShardsClient.g", "c:\ax2017\jams\shards\code\shardsclient.cpp", 
        0x26fe, "ShGameGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
