// 函数名称: ___acrt_free_locale
// 虚拟地址: 0x537e96
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_free_locale(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    int32_t eax = *(arg1 + 0x88)
    
    if (eax != 0 && eax != &data_5b0178)
        int32_t* eax_1 = *(arg1 + 0x7c)
        
        if (eax_1 != 0 && *eax_1 == 0)
            int32_t* eax_2 = *(arg1 + 0x84)
            
            if (eax_2 != 0 && *eax_2 == 0)
                __free_base(eax_2)
                ___acrt_locale_free_monetary(*(arg1 + 0x88))
            
            int32_t* eax_3 = *(arg1 + 0x80)
            
            if (eax_3 != 0 && *eax_3 == 0)
                __free_base(eax_3)
                ___acrt_locale_free_numeric(*(arg1 + 0x88))
            
            __free_base(*(arg1 + 0x7c))
            __free_base(*(arg1 + 0x88))
    
    int32_t* eax_4 = *(arg1 + 0x8c)
    
    if (eax_4 != 0 && *eax_4 == 0)
        __free_base(*(arg1 + 0x90) - 0xfe)
        __free_base(*(arg1 + 0x94) - 0x80)
        __free_base(*(arg1 + 0x98) - 0x80)
        __free_base(*(arg1 + 0x8c))
    
    ___acrt_locale_free_lc_time_if_unreferenced(*(arg1 + 0x9c))
    int32_t i_1 = 6
    void* ebx = arg1 + 0xa0
    int32_t i_2 = 6
    void* edi_1 = arg1 + 0x28
    int32_t i
    
    do
        if (*(edi_1 - 8) != &data_5b0298)
            int32_t* eax_11 = *edi_1
            
            if (eax_11 != 0 && *eax_11 == 0)
                __free_base(eax_11)
                __free_base(*ebx)
            
            i_1 = i_2
        
        if (*(edi_1 - 0xc) != 0)
            int32_t* eax_12 = *(edi_1 - 4)
            
            if (eax_12 != 0 && *eax_12 == 0)
                __free_base(eax_12)
            
            i_1 = i_2
        
        ebx += 4
        edi_1 += 0x10
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)
    return __free_base(arg1)
}
