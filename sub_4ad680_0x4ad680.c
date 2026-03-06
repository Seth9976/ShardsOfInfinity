// 函数名称: sub_4ad680
// 虚拟地址: 0x4ad680
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_4ad680(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x24) == 0)
    if (*(arg1 + 0x24) == 0)
        return 
    
    int32_t i = 0
    
    do
        int32_t eax_1 = *(arg1 + 0x24)
        int32_t* j = *(eax_1 + (i << 2))
        
        if (j != 0)
            do
                int32_t* j_1 = j
                j = j[2]
                sub_45d050(j_1, 0xc)
            while (j != 0)
            
            eax_1 = *(arg1 + 0x24)
        
        *(eax_1 + (i << 2)) = 0
        i += 1
    while (i u<= *(arg1 + 0x28))
    
    int32_t eax_2 = *(arg1 + 0x28)
    int32_t* ecx_1 = *(arg1 + 0x24)
    *(arg1 + 0x2c) = 0
    sub_45d050(ecx_1, (eax_2 << 2) + 4)
    *(arg1 + 0x24) = 0
}
