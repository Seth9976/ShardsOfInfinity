// 函数名称: sub_432bd0
// 虚拟地址: 0x432bd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_432bd0()
{
    // 第一条实际指令: void* eax = data_5c2e2c
    void* eax = data_5c2e2c
    
    if (eax != 0)
        *(eax + 0x1a00) = 0
        *(eax + 0x2164) = 0
        *(eax + 0x1904) = 0
        *(eax + 0x1a04) = 0
    
    void* i_1 = nullptr
    sub_445070(&data_5bcd7c, &i_1)
    
    for (void* i = i_1; i != 0xffffffff; i = i_1)
        sub_45e9a0(i + 0x530)
        int32_t ecx_2 = data_5bcd88
        data_5bcd88 = zx.d(*(i + 0x564))
        *(i + 0x564) = ecx_2
        data_5bcd8c -= 1
        sub_445070(&data_5bcd7c, &i_1)
    
    sub_445000(&data_5bcd7c)
    _memset(&data_5bcae8, 0, 0x288)
    void* eax_2 = data_5c2e98
    data_5bcb00 = 0xffffffff
    data_5c2e2c = 0
    data_5bcd78 = 0
    data_5c2d98 = 0
    data_5c2dbc = 0
    *(eax_2 + 0x400) = 0
    *(eax_2 + 0x608) = data_571cf8
    void* result = data_5c2e9c
    *(result + 0x400) = 0
    *(result + 0x608) = data_571cf8
    return result
}
