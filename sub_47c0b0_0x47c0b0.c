// 函数名称: sub_47c0b0
// 虚拟地址: 0x47c0b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_47c0b0()
{
    // 第一条实际指令: void* result = data_cdf424
    void* result = data_cdf424
    
    if (result != 0 && *(result + 0x1c) != 0)
        while (*(result + 0x48) != 0)
            int32_t* edi_1 = *(result + 0x40)
            void* ecx_1 = edi_1[1]
            *(result + 0x40) = ecx_1
            
            if (ecx_1 == 0)
                *(result + 0x44) = 0
            else
                *(ecx_1 + 8) = 0
            
            int32_t* esi_1 = *edi_1
            *(result + 0x48) -= 1
            sub_45d050(edi_1, 0xc)
            int32_t edx_1 = esi_1[0x391]
            
            if (edx_1 != 0)
                (*(*data_ce19b4 + 0x50))(edx_1)
                esi_1[0x391] = 0
            
            esi_1[0x1f9] = 0
            esi_1[0xfe] = 0
            esi_1[0xfd] = 0
            esi_1[2] = 0
            esi_1[1] = 0
            
            if (esi_1 != 0)
                sub_45d050(esi_1, 0xf08)
            
            result = data_cdf424
        
        *(result + 0x1c) = 0
    
    return result
}
