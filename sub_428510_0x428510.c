// 函数名称: sub_428510
// 虚拟地址: 0x428510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_428510(void* arg1)
{
    // 第一条实际指令: char* const ecx = &data_5559b1
    char* const ecx = &data_5559b1
    char* eax_1 = *(arg1 + 8)
    
    if (eax_1 != 0)
        ecx = eax_1
    
    int32_t eax_2 = __atoi64(ecx)
    void* result = sub_41ad20()
    *(result + 0xf0) = eax_2
    return result
}
