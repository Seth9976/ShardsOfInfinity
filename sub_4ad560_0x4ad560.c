// 函数名称: sub_4ad560
// 虚拟地址: 0x4ad560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4ad560(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    _memset(ebx + 0x30, 0xff, 0x200)
    *(ebx + 0x24) = 0
    *(ebx + 0x2c) = 0
    uint32_t eax_1 = sub_41b670(0x100)
    *(ebx + 0x24) = sub_45cff0(eax_1 << 2)
    int32_t* result = eax_1 - 1
    *(ebx + 0x28) = result
    
    if (*(ebx + 0x14) != 0)
        void* ecx_1 = *(ebx + 0x18)
        int32_t i = 0
        void* var_10_1 = ecx_1
        
        if (*(ecx_1 + 0x10) s> 0)
            int32_t* edx_1 = nullptr
            int32_t* var_8_1 = nullptr
            
            do
                result = *(ecx_1 + 0x14)
                int32_t j = *(edx_1 + result)
                
                if (j == 0)
                    j = *(ecx_1 + 0xc) + i
                
                if (j s>= 0x80)
                    int32_t eax_7 = ((j s>> 4 | j) & *(ebx + 0x28)) << 2
                    result = *(eax_7 + *(ebx + 0x24))
                    edx_1 = var_8_1
                    
                    if (result == 0)
                    label_4ad620:
                        int32_t* eax_9 = sub_45cfa0(0xc)
                        eax_9[3] += 1
                        int32_t* ecx_2 = *eax_9
                        
                        if (ecx_2 == 0)
                            sub_45ce30(eax_9)
                            ecx_2 = *eax_9
                        
                        *eax_9 = *ecx_2
                        ebx = arg1
                        *ecx_2 = j
                        ecx_2[1] = i
                        ecx_2[2] = *(eax_7 + *(ebx + 0x24))
                        result = *(ebx + 0x24)
                        result[(j s>> 4 | j) & *(ebx + 0x28)] = ecx_2
                        *(ebx + 0x2c) += 1
                        ecx_1 = var_10_1
                        edx_1 = var_8_1
                    else
                        while (j != *result)
                            result = result[2]
                            
                            if (result == 0)
                                goto label_4ad620
                        
                        result[1] = i
                else
                    *(ebx + (j << 2) + 0x30) = i
                
                i += 1
                edx_1 = &edx_1[9]
                var_8_1 = edx_1
            while (i s< *(ecx_1 + 0x10))
    
    return result
}
