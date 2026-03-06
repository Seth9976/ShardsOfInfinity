// 函数名称: sub_438880
// 虚拟地址: 0x438880
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_438880()
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t* i_1 = nullptr
    sub_445070(&data_5bcd7c, &i_1)
    
    for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
        if (*i == 0 && i[3] == 6)
            result += 1
        
        sub_445070(&data_5bcd7c, &i_1)
    
    return result
}
