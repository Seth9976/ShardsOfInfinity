// 函数名称: sub_445a20
// 虚拟地址: 0x445a20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_445a20(int32_t arg1, int32_t arg2, void* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t result = *(arg3 + 0x2168)
    int32_t result = *(arg3 + 0x2168)
    
    if (result != 2 && result != 3)
        if (data_dff630 == 1)
            return sub_4403d0(result, arg4, arg2, arg5, arg6, arg7, arg8, 1)
        
        int32_t eax_1 = data_5c2d98
        
        if (eax_1 s>= 0x400)
            sub_44e4d0(eax_1, &data_5559b1, "c.numEffects < MAX_EFFECTS", 
                "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x1c93, "ShEffectAlloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t ecx_1 = eax_1 * 3
        data_5c2d98 = eax_1 + 1
        (&data_5bcd9c)[ecx_1 * 2] = arg4
        (&data_5bcda0)[ecx_1 * 2] = arg5
        (&data_5bcda4)[ecx_1 * 2] = arg6
        (&data_5bcda8)[ecx_1 * 2] = arg7
        result = arg8
        (&data_5bcd98)[ecx_1 * 2] = arg2
        (&data_5bcdac)[ecx_1 * 2] = result
    
    return result
}
