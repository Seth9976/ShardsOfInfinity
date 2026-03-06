// 函数名称: sub_43a300
// 虚拟地址: 0x43a300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_43a300(int32_t arg1)
{
    // 第一条实际指令: void* result = sub_443fc0()
    void* result = sub_443fc0()
    
    if (result != 0)
        return result
    
    if (arg1 == 3)
        return sub_43a240(0) __tailcall
    
    if (arg1 == 4)
        return sub_43a240(result + 1) __tailcall
    
    sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x143d, 
        "GameSpecific_GeneralAction")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
