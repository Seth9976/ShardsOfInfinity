// 函数名称: sub_427030
// 虚拟地址: 0x427030
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_427030()
{
    // 第一条实际指令: int64_t* esi = &data_5bb1f0:4
    int64_t* esi = &data_5bb1f0:4
    int32_t i_3 = 6
    int32_t i
    
    do
        sub_45e9a0(esi - 0xc)
        sub_45e9a0(esi)
        esi = &esi[4]
        i = i_3
        i_3 -= 1
    while (i != 1)
    void* eax = data_5bb2c0
    
    if (eax != 0 && eax != &data_5559b1)
        if (data_cdf414 != i_3 && *eax != 0)
            char* eax_1 = sub_44f000(&data_5bb2c0)
            int32_t temp1_1 = *(eax_1 + 4)
            *(eax_1 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_1, *(eax_1 + 0xc) + 0x10)
        
        data_5bb2c0 = &data_5559b1
    
    void* eax_2 = data_5bb2a0
    
    if (eax_2 != 0 && eax_2 != &data_5559b1)
        if (data_cdf414 != 0 && *eax_2 != 0)
            char* eax_3 = sub_44f000(&data_5bb2a0)
            int32_t temp2_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
        
        data_5bb2a0 = &data_5559b1
    
    void* eax_4 = data_5bb2a4
    
    if (eax_4 != 0 && eax_4 != &data_5559b1)
        if (data_cdf414 != 0 && *eax_4 != 0)
            char* eax_5 = sub_44f000(&data_5bb2a4)
            int32_t temp3_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
        
        data_5bb2a4 = &data_5559b1
    
    void* eax_6 = data_5bb2a8
    
    if (eax_6 != 0 && eax_6 != &data_5559b1)
        if (data_cdf414 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&data_5bb2a8)
            int32_t temp4_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
        
        data_5bb2a8 = &data_5559b1
    
    void* result = data_5bb2ac
    
    if (result != 0 && result != &data_5559b1)
        if (data_cdf414 != 0 && *result != 0)
            result = sub_44f000(&data_5bb2ac)
            int32_t temp5_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp5_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
        
        data_5bb2ac = &data_5559b1
    
    int32_t* i_1 = data_dfc4d8
    
    while (i_1 != 0)
        int32_t* i_2 = i_1
        i_1 = i_1[1]
        result = sub_45d050(i_2, 0xc)
    
    data_dfc4e0 = 0
    data_dfc4d8 = 0
    data_dfc4dc = 0
    return result
}
