// 函数名称: sub_4b5660
// 虚拟地址: 0x4b5660
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4b5660()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t* result = sub_4b6ca0(ecx)
    int32_t* result_1 = result
    int32_t* result_2 = result_1
    
    if (result_1[0xa].b != 0)
        int32_t i = 0
        result_1[0xa].b = 0
        int32_t i_1 = 0
        
        if (result_1[0xc] s> 0)
            do
                int32_t edi_1 = 0
                int32_t* ecx_1 = result_1[0xd] + (i << 3)
                int32_t eax_1 = *ecx_1
                int32_t* var_c_1 = ecx_1
                
                if (eax_1 s> 0)
                    int32_t ebx = 0
                    
                    do
                        int32_t* esi_2 = ecx_1[1] + ebx
                        int32_t edx_1 = esi_2[0x390]
                        
                        if (edx_1 != 0)
                            (*(*data_ce19b4 + 0x50))(edx_1)
                            ecx_1 = var_c_1
                            esi_2[0x390] = 0
                        
                        esi_2[0x1f8] = 0
                        edi_1 += 1
                        esi_2[0xfd] = 0
                        ebx += 0xf04
                        esi_2[0xfc] = 0
                        esi_2[1] = 0
                        *esi_2 = 0
                        eax_1 = *ecx_1
                    while (edi_1 s< eax_1)
                    
                    result_1 = result_2
                
                sub_45d050(ecx_1[1], eax_1 * 0xf04)
                i = i_1 + 1
                i_1 = i
            while (i s< result_1[0xc])
        
        result = result_1[0xd]
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        result_1[0xd] = 0
        result_1[0xc] = 0
    
    return result
}
