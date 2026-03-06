// 函数名称: sub_42f290
// 虚拟地址: 0x42f290
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_42f290(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t i_2 = *(arg1 + 0x1904)
    int32_t result = 0
    
    if (i_2 s> 0)
        void* edi_1 = arg1 + 0x19
        int32_t i
        
        do
            void* edx_1 = edi_1 - 0x15
            int32_t j_9 = 4
            int32_t j
            
            do
                char ecx = *edx_1
                edx_1 += 1
                result = result u>> 8 ^ *(((zx.d(ecx) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j = j_9
                j_9 -= 1
            while (j != 1)
            void* edx_2 = edi_1 - 0x11
            int32_t j_10 = 4
            int32_t j_1
            
            do
                char ecx_3 = *edx_2
                edx_2 += 1
                result = result u>> 8 ^ *(((zx.d(ecx_3) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_1 = j_10
                j_10 -= 1
            while (j_1 != 1)
            void* edx_3 = edi_1
            int32_t j_11 = 4
            int32_t j_2
            
            do
                char ecx_6 = *edx_3
                edx_3 += 1
                result = result u>> 8 ^ *(((zx.d(ecx_6) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_2 = j_11
                j_11 -= 1
            while (j_2 != 1)
            void* edx_4 = edi_1 - 1
            int32_t j_12 = 4
            int32_t j_3
            
            do
                char ecx_9 = *edx_4
                edx_4 += 1
                result = result u>> 8 ^ *(((zx.d(ecx_9) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_3 = j_12
                j_12 -= 1
            while (j_3 != 1)
            void* edx_5 = edi_1 + 3
            int32_t j_13 = 4
            int32_t j_4
            
            do
                char ecx_12 = *edx_5
                edx_5 += 1
                result = result u>> 8 ^ *(((zx.d(ecx_12) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_4 = j_13
                j_13 -= 1
            while (j_4 != 1)
            edi_1 += 0x20
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *(arg1 + 0x2164)
    
    if (i_3 s> 0)
        void* edi_2 = arg1 + 0x1e60
        int32_t i_1
        
        do
            void* edx_6 = edi_2 + 8
            int32_t j_14 = 4
            int32_t j_5
            
            do
                char ecx_15 = *edx_6
                edx_6 += 1
                result = result u>> 8 ^ *(((zx.d(ecx_15) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_5 = j_14
                j_14 -= 1
            while (j_5 != 1)
            void* edx_7 = edi_2 + 0xc
            int32_t j_15 = 4
            int32_t j_6
            
            do
                char ecx_18 = *edx_7
                edx_7 += 1
                result = result u>> 8 ^ *(((zx.d(ecx_18) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_6 = j_15
                j_15 -= 1
            while (j_6 != 1)
            void* edx_8 = edi_2
            int32_t j_16 = 4
            int32_t j_7
            
            do
                char ecx_21 = *edx_8
                edx_8 += 1
                result = result u>> 8 ^ *(((zx.d(ecx_21) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_7 = j_16
                j_16 -= 1
            while (j_7 != 1)
            void* edx_9 = edi_2 + 4
            int32_t j_17 = 4
            int32_t j_8
            
            do
                char ecx_24 = *edx_9
                edx_9 += 1
                result = result u>> 8 ^ *(((zx.d(ecx_24) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_8 = j_17
                j_17 -= 1
            while (j_8 != 1)
            edi_2 += 0x9c
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    return result
}
