// 函数名称: sub_50ecf0
// 虚拟地址: 0x50ecf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_50ecf0(void* arg1)
{
    // 第一条实际指令: char* eax = *(arg1 + 0xa8)
    char* eax = *(arg1 + 0xa8)
    int32_t ecx = *(arg1 + 0xac)
    char edx
    
    if (eax u< ecx)
        edx = *eax
        eax = &eax[1]
        *(arg1 + 0xa8) = eax
    else if (*(arg1 + 0x20) == 0)
        edx = 0
    else
        sub_50ebb0(arg1)
        char* eax_1 = *(arg1 + 0xa8)
        ecx = *(arg1 + 0xac)
        edx = *eax_1
        eax = &eax_1[1]
        *(arg1 + 0xa8) = eax
    
    uint32_t edi = zx.d(edx)
    
    if (eax u>= ecx)
        if (*(arg1 + 0x20) == 0)
            return edi << 8
        
        sub_50ebb0(arg1)
        eax = *(arg1 + 0xa8)
    
    ecx.b = *eax
    *(arg1 + 0xa8) = &eax[1]
    return zx.d(ecx.b) + (edi << 8)
}
