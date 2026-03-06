// 函数名称: sub_465fe0
// 虚拟地址: 0x465fe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_465fe0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t i_1 = arg2
    int32_t result = 0x3e8
    
    if (arg2 s> 0)
        void* ebx_1 = arg1 + 4
        int32_t i
        
        do
            void* edi_1 = ebx_1 + 4
            result = sub_4950a0((***(ebx_1 - 4))(), result)
            int32_t j_4 = 4
            int32_t j
            
            do
                char eax_4 = *edi_1
                edi_1 += 1
                result = result u>> 8 ^ *(((zx.d(eax_4) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j = j_4
                j_4 -= 1
            while (j != 1)
            void* ecx_2 = ebx_1 + 0xc
            int32_t j_5 = 4
            int32_t j_1
            
            do
                char eax_7 = *ecx_2
                ecx_2 += 1
                result = result u>> 8 ^ *(((zx.d(eax_7) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_1 = j_5
                j_5 -= 1
            while (j_1 != 1)
            void* ecx_3 = ebx_1
            int32_t j_6 = 4
            int32_t j_2
            
            do
                char eax_10 = *ecx_3
                ecx_3 += 1
                result = result u>> 8 ^ *(((zx.d(eax_10) ^ zx.d(result.b)) << 2) + &data_5720f8)
                j_2 = j_6
                j_6 -= 1
            while (j_2 != 1)
            int32_t eax_13 = *(ebx_1 + 4)
            
            if (eax_13 != 0)
                if (eax_13 == 3)
                    char* eax_17 = *(ebx_1 + 8)
                    char* const ecx_5 = &data_5559b1
                    
                    if (eax_17 != 0)
                        ecx_5 = eax_17
                    
                    result = sub_4950a0(ecx_5, result)
                else
                    void* ecx_4 = ebx_1 + 0x10
                    int32_t j_7 = 4
                    int32_t j_3
                    
                    do
                        char eax_14 = *ecx_4
                        ecx_4 += 1
                        result = result u>> 8 ^ *(((zx.d(eax_14) ^ zx.d(result.b)) << 2) + &data_5720f8)
                        j_3 = j_7
                        j_7 -= 1
                    while (j_3 != 1)
            
            ebx_1 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
