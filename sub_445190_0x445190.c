// 函数名称: sub_445190
// 虚拟地址: 0x445190
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_445190(int32_t arg1, char* arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t eax = *arg3
    int32_t eax = *arg3
    
    if (eax == 0)
        if (arg2 != 0)
            *arg2 = 0
        
        *arg4 = *(arg3 + 0x14)
        arg4[1] = *(arg3 + 0x24)
        arg4[2] = *(arg3 + 0x34)
        arg4[3] = *(arg3 + 0x44)
        int32_t ecx_2 = arg3[0x19]
        arg4[4] = *(arg3 + 0x54)
        arg4[5].d = ecx_2
        return arg4
    
    if (eax != 1)
        sub_44e4d0(eax - 1, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\cardmotion.h", 0x40, 
            "CalcTransform")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void var_5c
    int128_t* eax_4 = sub_432dc0(&var_5c, arg2, &arg3[1], &var_5c)
    int32_t ecx_1 = eax_4[5].d
    *arg4 = *eax_4
    arg4[1] = eax_4[1]
    arg4[2] = eax_4[2]
    arg4[3] = eax_4[3]
    arg4[4] = eax_4[4]
    arg4[5].d = ecx_1
    return arg4
}
