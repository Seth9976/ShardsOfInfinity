// 函数名称: sub_460d80
// 虚拟地址: 0x460d80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_460d80(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* esi = &arg1[4]
    void* esi = &arg1[4]
    *arg1 = *arg2
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    void* ebx_1 = arg2 - arg1
    arg1[3] = arg2[3]
    int32_t i_1 = 4
    int32_t i
    
    do
        char* edi_1 = *esi
        char* const edx_1 = &data_5559b1
        char* eax_4 = *(ebx_1 + esi)
        char* const ecx = &data_5559b1
        
        if (edi_1 != 0)
            edx_1 = edi_1
        
        if (eax_4 != 0)
            ecx = eax_4
        
        if (edx_1 != ecx)
            if (data_cdf414 != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_5 = sub_44f000(esi)
                int32_t temp2_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
                    *esi = &data_5559b1
            
            char* eax_6 = *(ebx_1 + esi)
            *esi = eax_6
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_44f000(esi)
                *(eax_7 + 4) += 1
        
        esi += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    arg1[8] = arg2[8]
    arg1[9] = arg2[9]
    arg1[0xa] = arg2[0xa]
    arg1[0xb] = arg2[0xb]
    arg1[8] = arg2[8]
    arg1[9] = arg2[9]
    arg1[0xa] = arg2[0xa]
    arg1[0xb] = arg2[0xb]
    *(arg1 + 0x20) = *(arg2 + 0x20)
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg1 + 0x40) = *(arg2 + 0x40)
    *(arg1 + 0x50) = *(arg2 + 0x50)
    *(arg1 + 0x20) = *(arg2 + 0x20)
    arg1[0xa] = arg2[0xa]
    *(arg1 + 0x2c) = *(arg2 + 0x2c)
    arg1[0xd] = arg2[0xd]
    *(arg1 + 0x38) = *(arg2 + 0x38)
    arg1[0x10] = arg2[0x10]
    *(arg1 + 0x44) = *(arg2 + 0x44)
    arg1[0x13] = arg2[0x13]
    arg1[8] = arg2[8]
    arg1[9] = arg2[9]
    arg1[0xa] = arg2[0xa]
    arg1[0xb] = arg2[0xb]
    arg1[0xc] = arg2[0xc]
    arg1[0xd] = arg2[0xd]
    arg1[0xe] = arg2[0xe]
    arg1[0xf] = arg2[0xf]
    arg1[8] = arg2[8]
    arg1[9] = arg2[9]
    arg1[0xa] = arg2[0xa]
    arg1[0xb] = arg2[0xb]
    arg1[8] = arg2[8]
    arg1[9] = arg2[9]
    arg1[0xa] = arg2[0xa]
    arg1[0xb] = arg2[0xb]
    return arg1
}
