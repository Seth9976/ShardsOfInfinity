// 函数名称: ?GetCurrentState@__FrameHandler3@@SAHPAUEHRegistrationNode@@PAXPBU_s_FuncInfo@@@Z
// 虚拟地址: 0x51f6a3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?GetCurrentState@__FrameHandler3@@SAHPAUEHRegistrationNode@@PAXPBU_s_FuncInfo@@@Z(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 4) s> 0x80)
    if (*(arg2 + 4) s> 0x80)
        return *(arg1 + 8)
    
    return sx.d(*(arg1 + 8))
}
