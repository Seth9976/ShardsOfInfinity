// 函数名称: sub_469800
// 虚拟地址: 0x469800
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_469800(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4 @ xmm3, int32_t arg5)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x75c)
    int32_t edx = *(arg3 + 0x75c)
    int32_t* eax_1 = *(arg3 + 0x758)
    int32_t esi = 0
    int32_t edi = arg5
    
    if (edx s> 0)
        while (eax_1[1] != edi || *eax_1 != arg2)
            esi += 1
            eax_1 = &eax_1[6]
            
            if (esi s>= edx)
                goto label_469847
    
    if (edx s<= 0 || eax_1 == 0)
    label_469847:
        int32_t* ecx
        
        if (*(arg3 + 0x760) != 0)
            ecx = arg3 + 0x758
        else
            ecx = arg3 + 0x758
            *ecx = sub_45cff0(0x3000)
            ecx[1] = 0
            ecx[2] = 0x200
        
        eax_1 = sub_47b660(ecx)
    
    *eax_1 = arg2
    
    if (edi == 0xfffffc18)
        edi = *(arg3 + 0x754)
    
    eax_1[1] = edi
    eax_1[4] = arg4
    eax_1[2] = 0
    return sub_4660e0(arg3)
}
