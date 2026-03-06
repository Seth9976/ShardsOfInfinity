// 函数名称: sub_40d670
// 虚拟地址: 0x40d670
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_40d670()
{
    // 第一条实际指令: void* result = &data_e05a90
    void* result = &data_e05a90
    int32_t i = 8
    void* result_1 = &data_e05a90
    
    do
        void* ebx_1 = result - 0x6254
        int32_t j = 0x1f
        void* ecx_1 = result - 0x6364
        void* var_c_1 = ecx_1
        
        do
            _memset(ecx_1, 0, 0x32c)
            j -= 1
            __builtin_memcpy(ebx_1 - 0x100, &data_5c77c4, 0x100)
            __builtin_memcpy(ebx_1, &data_5c77c4, 0x100)
            void* edi_3 = ebx_1 + 0x100
            ebx_1 += 0x32c
            __builtin_memcpy(edi_3, &data_5c77c4, 0x100)
            ecx_1 = var_c_1 + 0x32c
            var_c_1 = ecx_1
        while (j != 0)
        
        void* result_2 = result_1
        int32_t j_1 = 7
        void* eax = result_2 - 0x110
        void* var_c_2 = eax
        
        do
            _memset(eax, 0, 0x32c)
            __builtin_memcpy(result_2 - 0x100, &data_5c77c4, 0x100)
            eax = var_c_2 + 0x32c
            __builtin_memcpy(result_2, &data_5c77c4, 0x100)
            var_c_2 = eax
            __builtin_memcpy(result_2 + 0x100, &data_5c77c4, 0x100)
            j_1 -= 1
            result_2 += 0x32c
        while (j_1 != 0)
        
        int32_t j_2 = 7
        void* ecx_4 = result_1 + 0x1524
        void* var_c_3 = ecx_4
        void* ebx_2 = result_1 + 0x1634
        
        do
            _memset(ecx_4, 0, 0x32c)
            j_2 -= 1
            __builtin_memcpy(ebx_2 - 0x100, &data_5c77c4, 0x100)
            __builtin_memcpy(ebx_2, &data_5c77c4, 0x100)
            void* edi_9 = ebx_2 + 0x100
            ebx_2 += 0x32c
            __builtin_memcpy(edi_9, &data_5c77c4, 0x100)
            ecx_4 = var_c_3 + 0x32c
            var_c_3 = ecx_4
        while (j_2 != 0)
        
        i -= 1
        result = result_1 + 0x8ef8
        result_1 = result
    while (i != 0)
    
    return result
}
