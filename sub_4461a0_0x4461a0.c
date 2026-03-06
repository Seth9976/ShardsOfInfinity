// 函数名称: sub_4461a0
// 虚拟地址: 0x4461a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4461a0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t result_1
    int32_t result_1
    void* eax_1 = sub_4460d0(&result_1, arg4, arg3, arg5, &result_1)
    *eax_1 = arg2
    int32_t var_24_1
    char const* const var_20_1
    char* ecx
    
    if (arg5 != 0xffffffff || arg4 == 2 || arg4 == 3 || arg4 == 4 || arg4 == 1)
        uint32_t ecx_1 = zx.d(arg2.w)
        
        if (ecx_1 u< 0xc8)
            int32_t result = result_1
            uint32_t ecx_2 = ecx_1 << 5
            *(ecx_2 + arg3 + 8) = arg5
            *(ecx_2 + arg3 + 4) = arg4
            *(ecx_2 + arg3 + 0x10) = result
            *(ecx_2 + arg3 + 0xc) = 0
            return result
        
        var_20_1 = "CardGet"
        var_24_1 = 0x90
        ecx = "idNoMimic < MAX_CARDS"
    else
        var_20_1 = "AddCardTail"
        var_24_1 = 0x1a7
        ecx = "where == CW_GLOBAL_DECK || where == CW_GLOBAL_DISCARD || where == CW_GLOBAL_CENTER || "
        "where == CW_GLOBAL_HERO"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_24_1, 
        var_20_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
