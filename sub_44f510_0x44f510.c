// 函数名称: sub_44f510
// 虚拟地址: 0x44f510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_44f510(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* const esi = &data_5559b1
    char* const esi = &data_5559b1
    char* eax = *arg2
    char* const edx = &data_5559b1
    char* ecx = *arg1
    
    if (ecx != 0)
        edx = ecx
    
    if (eax != 0)
        esi = eax
    
    if (edx != esi)
        if (data_cdf414 != 0 && ecx != 0 && *ecx != 0)
            char* eax_1 = sub_44f000(arg1)
            int32_t temp1_1 = *(eax_1 + 4)
            *(eax_1 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_1, *(eax_1 + 0xc) + 0x10)
                *arg1 = &data_5559b1
        
        char* eax_2 = *arg2
        *arg1 = eax_2
        
        if (eax_2 != 0 && *eax_2 != 0)
            char* eax_3 = sub_44f000(arg1)
            *(eax_3 + 4) += 1
    
    return arg1
}
