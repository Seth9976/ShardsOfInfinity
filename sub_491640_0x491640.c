// 函数名称: sub_491640
// 虚拟地址: 0x491640
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_491640(void* arg1, void** arg2)
{
    // 第一条实际指令: char* eax_1 = *(arg1 + 4)
    char* eax_1 = *(arg1 + 4)
    int32_t ecx_1
    
    if (eax_1 == 0 || *eax_1 == 0)
        ecx_1 = 0
    else
        ecx_1 = *(sub_44f000(arg1 + 4) + 8)
    
    void* esi = sub_45cd70(ecx_1 + 1)
    char* const ecx_3 = &data_5559b1
    *arg2 = esi
    char* edx = *(arg1 + 4)
    
    if (edx != 0)
        ecx_3 = edx
    
    void* result
    
    do
        result.b = *ecx_3
        ecx_3 = &ecx_3[1]
        *esi = result.b
        esi += 1
    while (result.b != 0)
    
    result.b = 1
    return result
}
