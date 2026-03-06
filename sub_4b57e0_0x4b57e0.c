// 函数名称: sub_4b57e0
// 虚拟地址: 0x4b57e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4b57e0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result = *arg2
    int32_t* result = *arg2
    arg2 = result
    
    if (result != 0)
        int32_t i = 0
        
        if (*result s> 0)
            int32_t ebx_1 = 0
            
            do
                void* esi_2 = result[1] + ebx_1
                int32_t edx_1 = *(esi_2 + 0x24)
                
                if (edx_1 != 0)
                    (*(*data_ce19b4 + 0x2c))(edx_1)
                    *(esi_2 + 0x24) = 0
                
                int32_t edx_2 = *(esi_2 + 0x28)
                
                if (edx_2 != 0)
                    (*(*data_ce19b4 + 0x38))(edx_2)
                    *(esi_2 + 0x28) = 0
                
                int32_t edx_3 = *(esi_2 + 0x2c)
                
                if (edx_3 != 0)
                    (*(*data_ce19b4 + 0x2c))(edx_3)
                    *(esi_2 + 0x2c) = 0
                
                int32_t edx_4 = *(esi_2 + 0x30)
                
                if (edx_4 != 0)
                    (*(*data_ce19b4 + 0x38))(edx_4)
                    *(esi_2 + 0x30) = 0
                
                result = arg2
                i += 1
                *(esi_2 + 0x34) = 0
                ebx_1 += 0x124
            while (i s< *result)
    
    int32_t** edi_1 = data_cdf428
    
    if (edi_1 != 0)
        int32_t* edi_2 = *edi_1
        void* esi_3 = nullptr
        
        while (true)
            void* ecx_5
            
            if (esi_3 != 0)
                ecx_5 = *edi_2
                esi_3 += 0x6c
            else
                esi_3 = *edi_2
                ecx_5 = esi_3
            
            result = edi_2[1] * 0x6c + ecx_5
            
            if (esi_3 u>= result)
                break
            
            while ((*(esi_3 + 0x68) & 0xffff0000) == 0)
                esi_3 += 0x6c
                
                if (esi_3 u>= result)
                    return result
            
            if (*(esi_3 + 4) == arg1)
                sub_4b5660()
    
    return result
}
