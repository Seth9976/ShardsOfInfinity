// 函数名称: sub_4529e0
// 虚拟地址: 0x4529e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4529e0()
{
    // 第一条实际指令: void* result = data_65ae04
    void* result = data_65ae04
    bool cond:0 = *(result + 0x2c) == 0
    *(result + 0x28) = 0
    *(result + 0x20) = 0
    *(result + 0x24) = 0
    *(result + 0x1c) = 0
    
    if (not(cond:0))
        sub_47f7e0()
        result = data_65ae04
    
    if (*(result + 0x28) != 0)
        *(result + 0x2c) = 0
        return result
    
    sub_47f410()
    void* eax = data_65ae04
    int32_t* ecx = data_65ae00
    int32_t var_4 = *(eax + 0x24)
    *(eax + 0x2c) = 1
    return (*(*ecx + 0x38))(var_4)
}
