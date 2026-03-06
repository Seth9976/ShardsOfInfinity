// 函数名称: sub_450d80
// 虚拟地址: 0x450d80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_450d80(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: char* eax = *arg2
    char* eax = *arg2
    
    if (eax != 0 && eax != &data_5559b1)
        if (data_cdf414 != 0 && *eax != 0)
            eax = sub_44f000(arg2)
            int32_t temp0_1 = *(eax + 4)
            *(eax + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax, *(eax + 0xc) + 0x10)
        
        *arg2 = &data_5559b1
    
    void* edi = *arg1
    char* ecx_2 = edi
    eax.b = *ecx_2
    
    while (eax.b != 0)
        if (eax.b == 0xd && ecx_2[1] == 0xa)
            *arg1 = &ecx_2[2]
            sub_44f690(arg2, edi, ecx_2 - edi)
            int32_t eax_2
            eax_2.b = 1
            return eax_2
        
        if (eax.b == 0xa)
            *arg1 = &ecx_2[1]
            sub_44f690(arg2, edi, ecx_2 - edi)
            int32_t eax_3
            eax_3.b = 1
            return eax_3
        
        ecx_2 = &ecx_2[1]
        eax.b = *ecx_2
    
    eax.b = 0
    return eax
}
