// 函数名称: sub_50be40
// 虚拟地址: 0x50be40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_50be40(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x1c)
    int32_t eax = *(arg1 + 0x1c)
    int32_t edx = *(arg1 + 0xb0)
    void* eax_1 = *(arg1 + 0x40)
    void* eax_2 = *(arg1 + 0x44)
    int32_t eax_3 = *(arg1 + 0x14)
    int32_t eax_4 = *(arg1 + 0x10)
    uint32_t edi_1 = *(arg1 + 0xa0) u>> 2
    int32_t eax_6 = *(arg1 + 0x60) + (*(arg1 + 0x4c) << 1)
    int32_t eax_7 = *(arg1 + 0xb4)
    
    if (edx s< 0)
        return 
    
    int32_t ecx_1 = *(arg1 + 0xa8)
    
    if (arg2 s<= ecx_1)
        return 
    
    while (true)
        int32_t eax_10 = ecx_1
        
        if (ecx_1 s>= 0 && ecx_1 s< *(arg1 + 0x18))
            int32_t* eax_9 = eax_7 + ((edx * edi_1) << 2)
            sub_50a640(eax_9, eax_3, arg1, ecx_1 * eax + eax_4, eax_9, eax_1, eax_2, eax_6)
            eax_10 = *(arg1 + 0xa8)
        
        if (eax_10 == *(arg1 + 0xac))
            *(arg1 + 0xb0) = 0xffffffff
            *(arg1 + 0xa8) = 0
            *(arg1 + 0xac) = 0
            break
        
        ecx_1 = eax_10 + 1
        int32_t eax_12 = *(arg1 + 0xb0) + 1
        *(arg1 + 0xa8) = ecx_1
        *(arg1 + 0xa4)
        edx = mods.dp.d(sx.q(eax_12), *(arg1 + 0xa4))
        *(arg1 + 0xb0) = edx
        
        if (arg2 s<= ecx_1)
            return 
}
