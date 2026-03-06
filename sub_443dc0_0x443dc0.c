// 函数名称: sub_443dc0
// 虚拟地址: 0x443dc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_443dc0()
{
    // 第一条实际指令: void* result = sub_443fc0()
    void* result = sub_443fc0()
    
    if (result != 0)
        do
            sub_443b90(*(result + 0x1c))
            data_5bcd74 += 1
            result = sub_443fc0()
            
            if (result == 0)
                break
        while (*(result + 0x14) == 1)
    
    return result
}
