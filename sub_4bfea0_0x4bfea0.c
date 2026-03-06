// 函数名称: sub_4bfea0
// 虚拟地址: 0x4bfea0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4bfea0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: char* eax_4
    char* eax_4
    int32_t* ecx
    int32_t* result
    
    if (_strncmp(&(*U"][}{\r")[1], *(arg2 + 4), 1) == 0)
        *(arg2 + 4) += 1
        sub_4bd480(arg2)
        result = arg1
        ecx = &result[2]
        *result = data_654ed4
        result[1] = data_654ed8
        *ecx = data_654edc
        eax_4 = data_654edc
    else
        result = arg1
        ecx = &result[2]
        *result = data_e47140
        result[1] = data_e47144
        *ecx = data_e47148
        eax_4 = data_e47148
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_8 = sub_44f000(ecx)
        *(eax_8 + 4) += 1
    
    return result
}
