// 函数名称: ___acrt_add_locale_ref
// 虚拟地址: 0x537e19
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_add_locale_ref(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0xc) += 1
    *(arg1 + 0xc) += 1
    int32_t* ecx = *(arg1 + 0x7c)
    
    if (ecx != 0)
        *ecx += 1
    
    int32_t* ecx_1 = *(arg1 + 0x84)
    
    if (ecx_1 != 0)
        *ecx_1 += 1
    
    int32_t* ecx_2 = *(arg1 + 0x80)
    
    if (ecx_2 != 0)
        *ecx_2 += 1
    
    int32_t* ecx_3 = *(arg1 + 0x8c)
    
    if (ecx_3 != 0)
        *ecx_3 += 1
    
    void* ecx_4 = arg1 + 0x28
    int32_t i_1 = 6
    int32_t i
    
    do
        if (*(ecx_4 - 8) != &data_5b0298)
            int32_t* edx_1 = *ecx_4
            
            if (edx_1 != 0)
                *edx_1 += 1
        
        if (*(ecx_4 - 0xc) != 0)
            int32_t* edx_2 = *(ecx_4 - 4)
            
            if (edx_2 != 0)
                *edx_2 += 1
        
        ecx_4 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    return ___acrt_locale_add_lc_time_reference(*(arg1 + 0x9c))
}
