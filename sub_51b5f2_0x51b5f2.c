// 函数名称: sub_51b5f2
// 虚拟地址: 0x51b5f2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_51b5f2(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    
    if (result != 0)
        result -= 8
        
        if (*result == 0xdddd)
            result = _free(result)
    
    return result
}
