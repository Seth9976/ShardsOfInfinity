// 函数名称: sub_44f590
// 虚拟地址: 0x44f590
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __thiscallsub_44f590(char** arg1, char* arg2)
{
    // 第一条实际指令: char* const eax = &data_5559b1
    char* const eax = &data_5559b1
    char* ecx = *arg1
    
    if (ecx != 0)
        eax = ecx
    
    if (eax != arg2)
        char* esi_1 = arg2
        void* edx_1 = &esi_1[1]
        
        do
            eax.b = *esi_1
            esi_1 = &esi_1[1]
        while (eax.b != 0)
        
        void* esi_2 = esi_1 - edx_1
        
        if (esi_1 == edx_1)
            if (data_cdf414 != esi_2 && ecx != 0 && *ecx != eax.b)
                char* eax_1 = sub_44f000(arg1)
                int32_t temp2_1 = *(eax_1 + 4)
                *(eax_1 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_1, *(eax_1 + 0xc) + 0x10)
            
            *arg1 = &data_5559b1
            return arg1
        
        sub_44f100(eax, esi_2, arg1, 0)
        sub_51d5b0(*arg1, arg2, esi_2 + 1)
    
    return arg1
}
