// 函数名称: sub_4ed6f0
// 虚拟地址: 0x4ed6f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4ed6f0(void* arg1)
{
    // 第一条实际指令: void* edx
    void* edx
    void* var_24 = edx
    int32_t i = *(arg1 + 0x10)
    int128_t var_40
    
    if (i s< *(arg1 + 0x18))
        do
            int32_t i_5 = i
            i += 1
            int32_t var_18_1 = *(arg1 + 0x14)
            int32_t i_8 = i
            var_40 = (*(arg1 + 0xc)).o
            
            if (sub_4ed670(&var_40, edx, edx, var_40) == 0)
                break
            
            *(arg1 + 0x10) += 1
            *(arg1 + 0x20) += 1
            edx = var_24
        while (i s< *(arg1 + 0x18))
        
        edx = var_24
    
    int32_t i_1 = *(arg1 + 0x18)
    char eax
    
    while (i_1 s> *(arg1 + 0x10))
        int32_t var_18_2 = *(arg1 + 0x14)
        int32_t i_9 = i_1
        int32_t var_1c_1 = i_1 - 1
        var_40 = (*(arg1 + 0xc)).o
        eax, edx = sub_4ed670(&var_40, edx, edx, var_40)
        
        if (eax == 0)
            break
        
        *(arg1 + 0x18) -= 1
        i_1 -= 1
        edx = var_24
    
    int32_t i_2 = *(arg1 + 0xc)
    
    while (i_2 s< *(arg1 + 0x14))
        int32_t var_1c_2 = *(arg1 + 0x10)
        int32_t i_4 = i_2
        i_2 += 1
        int32_t var_14_1 = *(arg1 + 0x18)
        int32_t i_6 = i_2
        var_40 = i_4.o
        eax, edx = sub_4ed670(&var_40, edx, var_24, var_40)
        
        if (eax == 0)
            break
        
        *(arg1 + 0xc) += 1
        *(arg1 + 0x1c) += 1
    
    for (int32_t i_3 = *(arg1 + 0x14); i_3 s> *(arg1 + 0xc); i_3 -= 1)
        int32_t var_1c_3 = *(arg1 + 0x10)
        int32_t var_14_2 = *(arg1 + 0x18)
        int32_t i_7 = i_3
        var_40 = (i_3 - 1).o
        eax, edx = sub_4ed670(&var_40, edx, var_24, var_40)
        
        if (eax == 0)
            break
        
        *(arg1 + 0x14) -= 1
    
    *(arg1 + 0xc) -= 1
    *(arg1 + 0x10) -= 1
    *(arg1 + 0x14) += 1
    *(arg1 + 0x18) += 1
    *(arg1 + 0x1c) -= 1
    *(arg1 + 0x20) -= 1
}
