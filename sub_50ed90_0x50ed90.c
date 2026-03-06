// 函数名称: sub_50ed90
// 虚拟地址: 0x50ed90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_50ed90(void* arg1)
{
    // 第一条实际指令: char* eax = *(arg1 + 0xa8)
    char* eax = *(arg1 + 0xa8)
    int32_t ecx = *(arg1 + 0xac)
    char result_1
    
    if (eax u< ecx)
        result_1 = *eax
        eax = &eax[1]
        *(arg1 + 0xa8) = eax
    else if (*(arg1 + 0x20) == 0)
        result_1 = 0
    else
        sub_50ebb0(arg1)
        char* eax_1 = *(arg1 + 0xa8)
        ecx = *(arg1 + 0xac)
        result_1 = *eax_1
        eax = &eax_1[1]
        *(arg1 + 0xa8) = eax
    
    uint32_t result = zx.d(result_1)
    
    if (eax u>= ecx)
        if (*(arg1 + 0x20) == 0)
            return result
        
        sub_50ebb0(arg1)
        eax = *(arg1 + 0xa8)
    
    ecx.b = *eax
    *(arg1 + 0xa8) = &eax[1]
    return (zx.d(ecx.b) << 8) + result
}
