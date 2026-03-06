// 函数名称: sub_432710
// 虚拟地址: 0x432710
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_432710(int32_t arg1, int128_t* arg2, void* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int128_t xmm0 = *arg2
    int128_t xmm0 = *arg2
    int32_t var_6c = 1
    int128_t var_68 = xmm0
    
    if (arg5 != 0)
        *(arg3 + 0x450) = 0
        __builtin_memcpy(arg3, &var_6c, 0x68)
        __builtin_memcpy(arg3 + 0x68, &var_6c, 0x68)
        return arg2
    
    int32_t ebx = *(arg3 + 0x450)
    void var_dc
    
    if (ebx == 0)
        *(arg3 + 0x45c) = ebx
        __builtin_memcpy(arg3, arg3 + 0x68, 0x68)
        __builtin_memcpy(&var_dc, &var_6c, 0x68)
        int32_t var_74 = arg4
        int32_t var_70 = ebx
        __builtin_memcpy(arg3 + 0xd0, &var_dc, 0x70)
        *(arg3 + 0x450) = 1
        return arg4
    
    if (ebx s>= 8)
        sub_44e4d0(arg2, &data_5559b1, "numTargets < MAX_QUEUED", 
            "c:\ax2017\jams\shards\code\cardmotion.h", 0x7f, "MoveComponent<struct ShLoc>::QueueMove")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    __builtin_memcpy(&var_dc, &var_6c, 0x68)
    int32_t var_74_1 = arg4
    int32_t eax_3 = ebx * 0x70
    int32_t var_70_1 = 0
    __builtin_memcpy(arg3 + 0xd0 + eax_3, &var_dc, 0x70)
    *(arg3 + 0x450) += 1
    return eax_3
}
