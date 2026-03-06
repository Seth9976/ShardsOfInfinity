// 函数名称: sub_42da00
// 虚拟地址: 0x42da00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_42da00(int32_t arg1, int32_t* arg2))[0x4]
{
    // 第一条实际指令: int32_t ecx = *arg2
    int32_t ecx = *arg2
    
    if (ecx s< 0x400)
        uint32_t (* result)[0x4] = ecx * 0x30 + arg1
        *arg2 = ecx + 1
        _memset(result, 0, 0x30)
        return result
    
    sub_44e4d0(arg1, &data_5559b1, "numActions < MAX_ACTIONS", 
        "c:\ax2017\jams\shards\code\shardsai.cpp", 0x12b, "ActionAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
