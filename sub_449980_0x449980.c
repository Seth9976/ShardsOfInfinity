// 函数名称: sub_449980
// 虚拟地址: 0x449980
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_449980(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t esi = *(arg3 + 0x1e54)
    int32_t esi = *(arg3 + 0x1e54)
    int32_t var_14
    char const* const ecx
    
    if (esi s>= 0)
        if (esi s< 0x10)
            void* ecx_1 = arg3 + (esi + 0x276) * 0xc
            *(arg3 + 0x1e54) = esi + 1
            *(ecx_1 + 4) = arg4
            *ecx_1 = arg2
            *(ecx_1 + 8) = arg5
            return arg5
        
        char const* const var_10_1 = "AddExecStack"
        var_14 = 0x85e
        ecx = "g.numExecStack < MAX_YIELDS"
    else
        char const* const var_10 = "AddExecStack"
        var_14 = 0x85d
        ecx = "g.numExecStack >= 0"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_14, 
        "AddExecStack")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
