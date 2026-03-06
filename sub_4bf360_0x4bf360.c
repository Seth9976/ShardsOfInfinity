// 函数名称: sub_4bf360
// 虚拟地址: 0x4bf360
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4bf360(void* arg1)
{
    // 第一条实际指令: char* result
    char* result
    result.b = **(arg1 + 4)
    
    if (result.b != 0 && result.b != 0x5d && result.b != 0x2c && result.b != 0x24)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
