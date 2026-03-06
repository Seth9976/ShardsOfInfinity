// 函数名称: sub_4a7540
// 虚拟地址: 0x4a7540
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4a7540()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edx = data_ce189c
    int32_t i = 0
    int32_t ebx
    int32_t var_c = ebx
    
    if (*(edx + 0x5e20684) s> 0)
        int32_t eax_1 = 0
        
        do
            *(eax_1 + edx + 0x5e01294) = 0
            *(eax_1 + edx + 0x5e0128c) = 0
            *(eax_1 + edx + 0x5e01290) = 0
            *(eax_1 + edx + 0x5e01298) = 0
            
            if (*(edx + 0x5e206b0) == 0 || *(edx + 0x5e206b4) == i)
                ebx.b = 1
            else
                ebx.b = 0
            
            *(eax_1 + edx + 0x5e0129c) = ebx.b
            i += 1
            eax_1 += 0x1c
        while (i s< *(edx + 0x5e20684))
    
    int32_t ebx_1 = 0
    *(edx + 0x5e20688) = 0
    void* i_1 = nullptr
    void* i_4 = nullptr
    
    do
        if (*(edx + 0x5e2068c) == 0 || *(edx + 0x5e01280) != ebx_1)
            sub_4a6e50(ebx_1)
            edx = data_ce189c
            int32_t j = 0
            
            if (*(edx + 0x5e20684) s> 0)
                void* ecx_2 = edx + 0x5e01290
                void* esi_1 = i_1 + 0x24a010 + edx
                
                do
                    j += 1
                    *(ecx_2 + 4) += *(esi_1 + 4)
                    *(ecx_2 - 4) = *(esi_1 - 4) f+ *(ecx_2 - 4)
                    *ecx_2 = *ecx_2 f+ *esi_1
                    float xmm0_5 = *(esi_1 + 8)
                    esi_1 += 0x10
                    *(ecx_2 + 8) = xmm0_5 f+ *(ecx_2 + 8)
                    ecx_2 += 0x1c
                while (j s< *(edx + 0x5e20684))
                
                i_1 = i_4
            
            *(edx + 0x5e20688) += 1
        
        i_1 += 0x259a10
        ebx_1 += 1
        i_4 = i_1
    while (i_1 s< 0x5e01280)
    
    if (*(edx + 0x5e206b0) != 0)
        for (int32_t i_2 = 0; i_2 s< 0x28; i_2 += 1)
            sub_4a7230(i_2)
        
        edx = data_ce189c
    
    int32_t i_3 = 0
    int32_t edi_1 = 0
    
    if (*(edx + 0x5e20684) s> 0)
        void* esi_2 = edx + 0x5e1c804
        void* ecx_4 = edx + 0x5e0129c
        
        do
            if (*(ecx_4 - 8) != 0 && *ecx_4 != 0)
                *esi_2 = i_3
                edi_1 += 1
                esi_2 += 4
            
            i_3 += 1
            ecx_4 += 0x1c
        while (i_3 s< *(edx + 0x5e20684))
    
    int32_t eax_5 = (edx + (edi_1 << 2) + 0x5e1c804 - (edx + 0x5e1c804)) s>> 2
    int32_t result =
        sub_429140(eax_5, edx + (edi_1 << 2) + 0x5e1c804, edx + 0x5e1c804, eax_5, sub_4a73c0)
    void* ecx_6 = data_ce189c
    *(ecx_6 + 0x5e206ac) = edi_1
    
    if (*(ecx_6 + 0x5e2069c) s>= edi_1)
        result = edi_1 - 1
        *(ecx_6 + 0x5e2069c) = result
    
    return result
}
