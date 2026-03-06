// 函数名称: sub_4e0d90
// 虚拟地址: 0x4e0d90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4e0d90(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* eax = *arg2
    char* eax = *arg2
    
    if (eax != 0 && eax != &data_5559b1)
        if (data_cdf414 != 0 && *eax != 0)
            char* eax_1 = sub_44f000(arg2)
            int32_t temp0_1 = *(eax_1 + 4)
            *(eax_1 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_1, *(eax_1 + 0xc) + 0x10)
        
        *arg2 = &data_5559b1
    
    void* result = *(arg1 + 0x10)
    
    if (result s> 0)
        sub_44f690(arg2, *(arg1 + 0xc), result)
    
    result.b = 1
    return result
}
