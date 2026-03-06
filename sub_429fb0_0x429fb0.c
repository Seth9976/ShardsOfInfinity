// 函数名称: sub_429fb0
// 虚拟地址: 0x429fb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_429fb0(int32_t arg1, void* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t esi = *(arg3 + 0xb20)
    int32_t esi = *(arg3 + 0xb20)
    int32_t i_1 = 0
    arg4[2] = *(arg3 + 0xb24)
    int32_t eax_1 = *(arg3 + 0xb28)
    arg4[1] = esi
    arg4[3] = eax_1
    *arg4 = arg2
    
    if (esi s<= 0)
        return arg4
    
    void* edx_1 = arg3 + 0x224
    void* ebx_1 = arg2 + 0x144
    void* var_c = edx_1
    int32_t i
    
    do
        *(ebx_1 + 0x10) = *(edx_1 + 0x1c)
        char* eax_3 = *edx_1
        char* const ecx = &data_5559b1
        
        if (eax_3 != 0)
            ecx = eax_3
        
        *ebx_1 = ecx
        char* const ecx_1 = &data_5559b1
        char* eax_4 = *(edx_1 + 0x14)
        
        if (eax_4 != 0)
            ecx_1 = eax_4
        
        *(ebx_1 - 0x140) = ecx_1
        char* const ecx_2 = &data_5559b1
        char* eax_5 = *(edx_1 - 4)
        
        if (eax_5 != 0)
            ecx_2 = eax_5
        
        *(ebx_1 - 4) = ecx_2
        char* const ecx_3 = &data_5559b1
        *(ebx_1 + 0x14) = *(edx_1 + 0x20)
        char* eax_7 = *(edx_1 - 0x220)
        
        if (eax_7 != 0)
            ecx_3 = eax_7
        
        *(ebx_1 - 0x13c) = ecx_3
        char* const ecx_4 = &data_5559b1
        *(ebx_1 - 0x138) = *(edx_1 - 0x21c)
        char* eax_9 = *(edx_1 - 0x224)
        
        if (eax_9 != 0)
            ecx_4 = eax_9
        
        *(ebx_1 - 0x144) = ecx_4
        *(ebx_1 + 0xc) = *(edx_1 + 0x18)
        *(ebx_1 + 8) = *(edx_1 + 8)
        *(ebx_1 + 0x24) = *(edx_1 + 0x30)
        *(ebx_1 + 0x18) = *(edx_1 + 0x24)
        *(ebx_1 + 0x20) = *(edx_1 + 0x2c)
        void* edx_2 = edx_1 - 0x1fc
        *(ebx_1 + 0x28) = *(edx_1 + 0x34)
        void* eax_15 = ebx_1 - 0x130
        __builtin_memcpy(ebx_1 + 0x2c, edx_1 + 0x38, 0x6c)
        int32_t j_1 = 2
        int32_t j
        
        do
            eax_15 += 0x98
            *(eax_15 - 0x20) = *(edx_2 + 0xd0)
            *(eax_15 - 0x10) = *(edx_2 + 0xe0)
            *(eax_15 - 8) = *(edx_2 + 0xe8)
            *(eax_15 - 0x90) = *(edx_2 + 8)
            *(eax_15 - 0x98) = *edx_2
            *(eax_15 - 0x8c) = *(edx_2 + 0xc)
            *(eax_15 - 0x90) = *(edx_2 + 8)
            *(eax_15 - 0x9c) = edx_2 - 0x10
            *(eax_15 - 0x94) = *(edx_2 + 4)
            *(eax_15 - 0x78) = *(edx_2 + 0x34)
            *(eax_15 - 0x80) = *(edx_2 + 0x2c)
            *(eax_15 - 0x74) = *(edx_2 + 0x38)
            *(eax_15 - 0x78) = *(edx_2 + 0x34)
            *(eax_15 - 0x84) = edx_2 + 0x1c
            *(eax_15 - 0x7c) = *(edx_2 + 0x30)
            *(eax_15 - 0x60) = *(edx_2 + 0x60)
            *(eax_15 - 0x68) = *(edx_2 + 0x58)
            *(eax_15 - 0x5c) = *(edx_2 + 0x64)
            *(eax_15 - 0x60) = *(edx_2 + 0x60)
            *(eax_15 - 0x6c) = edx_2 + 0x48
            *(eax_15 - 0x64) = *(edx_2 + 0x5c)
            *(eax_15 - 0x48) = *(edx_2 + 0x8c)
            *(eax_15 - 0x50) = *(edx_2 + 0x84)
            *(eax_15 - 0x44) = *(edx_2 + 0x90)
            *(eax_15 - 0x48) = *(edx_2 + 0x8c)
            *(eax_15 - 0x54) = edx_2 + 0x74
            *(eax_15 - 0x4c) = *(edx_2 + 0x88)
            *(eax_15 - 0x30) = *(edx_2 + 0xb8)
            *(eax_15 - 0x38) = *(edx_2 + 0xb0)
            *(eax_15 - 0x2c) = *(edx_2 + 0xbc)
            *(eax_15 - 0x30) = *(edx_2 + 0xb8)
            *(eax_15 - 0x3c) = edx_2 + 0xa0
            edx_2 += 0x108
            *(eax_15 - 0x34) = *(edx_2 - 0x54)
            j = j_1
            j_1 -= 1
        while (j != 1)
        ebx_1 += 0x1dc
        i = i_1 + 1
        edx_1 = var_c + 0x2c8
        i_1 = i
        var_c = edx_1
    while (i s< *(arg3 + 0xb20))
    return arg4
}
