// 函数名称: __fileno
// 虚拟地址: 0x530fa3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__fileno(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return *(arg1 + 0x10)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff
}
