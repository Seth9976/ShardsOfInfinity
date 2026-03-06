// 函数名称: sub_4d8250
// 虚拟地址: 0x4d8250
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4d8250(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t edx = arg1
    int32_t var_8_1 = edx
    void* edi = nullptr
    void* result
    
    while (true)
        void* eax_1 = data_ce26e8
        void* ecx
        
        if (edi != 0)
            ecx = *(eax_1 + 0x4240)
            edi += 0x14c
        else
            edi = *(eax_1 + 0x4240)
            ecx = edi
        
        result = *(eax_1 + 0x4244) * 0x14c + ecx
        
        if (edi u>= result)
            break
        
        while ((*(edi + 0x148) & 0xffff0000) == 0)
            edi += 0x14c
            
            if (edi u>= result)
                return result
        
        if (*(edi + 4) == 0)
            void* esi_1 = edi + 0x14
            int32_t i_1 = 0x10
            int32_t i
            
            do
                if (*esi_1 != 0 && *(esi_1 + 4) == edx)
                    (*__glewDeleteVertexArrays)(1, esi_1)
                    edx = var_8_1
                    *esi_1 = 0
                    *(esi_1 + 4) = 0
                    *(esi_1 + 8) = 0
                
                esi_1 += 0xc
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
