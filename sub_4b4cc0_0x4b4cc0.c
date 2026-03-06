// 函数名称: sub_4b4cc0
// 虚拟地址: 0x4b4cc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4b4cc0(int32_t arg1)
{
    // 第一条实际指令: int32_t* edi = data_cdf428
    int32_t* edi = data_cdf428
    
    if (edi != 0)
        int32_t* edi_1 = *edi
        void* esi_1 = nullptr
        
        while (true)
            void* ecx_1
            
            if (esi_1 != 0)
                ecx_1 = *edi_1
                esi_1 += 0x6c
            else
                esi_1 = *edi_1
                ecx_1 = esi_1
            
            void* eax_2 = edi_1[1] * 0x6c + ecx_1
            
            if (esi_1 u>= eax_2)
                break
            
            while ((*(esi_1 + 0x68) & 0xffff0000) == 0)
                esi_1 += 0x6c
                
                if (esi_1 u>= eax_2)
                    goto label_4b4d02
            
            sub_4b5660()
    
    label_4b4d02:
    sub_47c0b0()
    void* esi_2 = nullptr
    
    while (true)
        void* ecx_3 = data_654cc4
        
        do
            if (esi_2 != 0)
                esi_2 += 0xf10
            else
                esi_2 = ecx_3
            
            void* result = data_654cc8 * 0xf10 + ecx_3
            
            if (esi_2 u>= result)
                return result
            
            while ((*(esi_2 + 0xf0c) & 0xffff0000) == 0)
                esi_2 += 0xf10
                
                if (esi_2 u>= result)
                    return result
        while (*esi_2 != arg1)
        
        int32_t edx_1 = *(esi_2 + 0xe44)
        
        if (edx_1 != 0)
            (*(*data_ce19b4 + 0x50))(edx_1)
            *(esi_2 + 0xe44) = 0
        
        *(esi_2 + 0x7e4) = 0
        *(esi_2 + 0x3f8) = 0
        *(esi_2 + 0x3f4) = 0
        *(esi_2 + 8) = 0
        *(esi_2 + 4) = 0
        *(esi_2 + 0xf08) = 0
}
