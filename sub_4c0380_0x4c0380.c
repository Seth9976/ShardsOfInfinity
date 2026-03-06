// 函数名称: sub_4c0380
// 虚拟地址: 0x4c0380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4c0380(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (_strchr(arg2[1], 0x5b) == 0)
    if (_strchr(arg2[1], 0x5b) == 0)
        *arg1 = data_e47140
        arg1[1] = data_e47144
        arg1[2] = data_e47148
        char* eax_6 = data_e47148
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_44f000(&arg1[2])
            *(eax_7 + 4) += 1
        
        return arg1
    
    char* ebx = arg2[1]
    char* esi = ebx
    void* eax
    
    do
        eax.b = *esi
        esi = &esi[1]
    while (eax.b != 0)
    void* eax_1 = sub_4bd420(*arg2)
    *(eax_1 + 4) = ebx
    *(eax_1 + 8) = esi - &esi[1]
    *eax_1 = 6
    arg1[2] = &data_5559b1
    *arg1 = 3
    arg1[1] = eax_1
    return arg1
}
