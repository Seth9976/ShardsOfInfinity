// 函数名称: sub_4bd500
// 虚拟地址: 0x4bd500
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4bd500(char arg1, void* arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    char* esi = arg4
    int32_t* var_8_1 = arg3
    
    do
        arg1 = *esi
        esi = &esi[1]
    while (arg1 != 0)
    
    void* esi_1 = esi - &esi[1]
    char* eax_4
    int32_t* ecx_1
    
    if (_strncmp(arg4, *(arg2 + 4), esi_1) == 0)
        *(arg2 + 4) += esi_1
        sub_4bd480(arg2)
        ecx_1 = &arg3[2]
        *arg3 = data_654ed4
        arg3[1] = data_654ed8
        *ecx_1 = data_654edc
        eax_4 = data_654edc
    else
        ecx_1 = &arg3[2]
        *arg3 = data_e47140
        arg3[1] = data_e47144
        *ecx_1 = data_e47148
        eax_4 = data_e47148
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_8 = sub_44f000(ecx_1)
        *(eax_8 + 4) += 1
    
    return arg3
}
