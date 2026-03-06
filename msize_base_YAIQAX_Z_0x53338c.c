// 函数名称: ?_msize_base@@YAIQAX@Z
// 虚拟地址: 0x53338c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t?_msize_base@@YAIQAX@Z(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return HeapSize(data_65aa88, HEAP_NONE, arg1)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff
}
