// 函数名称: sub_421f60
// 虚拟地址: 0x421f60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_421f60(int32_t arg1)
{
    // 第一条实际指令: sub_469cf0(sub_469cf0(sub_472550(arg1, sub_421db0), &data_5bb938, arg1, &data_5bb2a0, 0xffffffff), &data_5bb94c, arg1, &data_5bb2a4, 0xffffffff)
    sub_469cf0(sub_469cf0(sub_472550(arg1, sub_421db0), &data_5bb938, arg1, &data_5bb2a0, 0xffffffff), 
        &data_5bb94c, arg1, &data_5bb2a4, 0xffffffff)
    void* ecx_3 = data_5bb2a8
    void* eax_2 = &data_5559b1
    
    if (ecx_3 != 0)
        eax_2 = ecx_3
    
    char* const ecx_4 = &data_5559b1
    void* result
    
    while (true)
        char edx_1 = *eax_2
        char temp0_1 = *ecx_4
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                result = nullptr
                break
            
            edx_1 = *(eax_2 + 1)
            char temp1_1 = ecx_4[1]
            c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                eax_2 += 2
                ecx_4 = &ecx_4[2]
                
                if (edx_1 != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(eax_2, eax_2, c_1) | 1
        break
    
    if (result == 0)
        return result
    
    return sub_469cf0(result, &data_5bb960, arg1, &data_5bb2a8, 0xffffffff)
}
