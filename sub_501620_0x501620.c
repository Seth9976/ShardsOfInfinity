// 函数名称: sub_501620
// 虚拟地址: 0x501620
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_501620(char* arg1)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    
    if (esi == 0 || *esi == 0)
        esi = &data_5559b1
    
    char* ecx = esi
    char i
    
    do
        i = *ecx
        ecx = &ecx[1]
    while (i != 0)
    int32_t var_c = 1
    void* var_10 = ecx - &ecx[1] + 1
    char* result = _calloc()
    
    if (result == 0)
        int32_t var_c_1 = 1
        int32_t var_10_1 = 1
        return _calloc()
    
    char* ecx_2 = esi
    char* eax_1
    
    do
        eax_1.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_1.b != 0)
    sub_51dd40(result, esi, ecx_2 - &ecx_2[1])
    return result
}
