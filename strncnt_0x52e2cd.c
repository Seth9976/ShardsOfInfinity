// 函数名称: ___strncnt
// 虚拟地址: 0x52e2cd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*___strncnt(char* arg1, int32_t arg2)
{
    // 第一条实际指令: char* result = nullptr
    char* result = nullptr
    
    if (*arg1 != 0)
        while (result != arg2)
            result = &result[1]
            
            if (*(result + arg1) == 0)
                break
    
    return result
}
