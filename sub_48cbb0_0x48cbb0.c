// 函数名称: sub_48cbb0
// 虚拟地址: 0x48cbb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_48cbb0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* ebx = data_cdf450
    
    switch (*arg1 - 0xd)
        case 0
            ebx[6] = 2
        case 1
            ebx[6] = 3
        case 5
            ebx[6] = 4
        case 7, 9
            ebx[6] = 6
        case 0xb
            ebx[6] = 7
    
    if (*(data_cdf428 + 0x22) != 0 && *arg1 == 1)
        int32_t eax_5 = arg1[1]
        
        if (eax_5 == 0x74 || eax_5 == 0x79 || eax_5 == 0x7a)
            return sub_48c940(arg1)
    
    int32_t* eax_7 = sub_45cfa0(0x28)
    int32_t* ecx = eax_7
    eax_7[3] += 1
    int32_t* esi = *eax_7
    
    if (esi == 0)
        sub_45ce30(ecx)
        ecx = eax_7
        esi = *ecx
    
    *ecx = *esi
    __builtin_memset(esi, 0, 0x28)
    *esi = *arg1
    esi[1] = arg1[1]
    esi[2] = arg1[2]
    esi[3] = arg1[3]
    esi[4] = arg1[4]
    esi[5] = arg1[5]
    char* eax_15 = arg1[6]
    esi[6] = eax_15
    
    if (eax_15 != 0 && *eax_15 != 0)
        eax_15 = sub_44f000(&esi[6])
        *(eax_15 + 4) += 1
    
    eax_15.b = arg1[7].b
    esi[7].b = eax_15.b
    esi[8] = 0
    esi[9] = ebx[1]
    void* result = ebx[1]
    
    if (result == 0)
        ebx[2] += 1
        *ebx = esi
        ebx[1] = esi
        return result
    
    *(result + 0x20) = esi
    ebx[2] += 1
    ebx[1] = esi
    return result
}
