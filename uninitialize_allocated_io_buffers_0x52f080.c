// 函数名称: _uninitialize_allocated_io_buffers
// 虚拟地址: 0x52f080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_uninitialize_allocated_io_buffers()
{
    // 第一条实际指令: __free_base(data_65a76c)
    __free_base(data_65a76c)
    int32_t var_c = data_65a770
    data_65a76c = 0
    __free_base(var_c)
    int32_t var_10 = data_65aa74
    data_65a770 = 0
    __free_base(var_10)
    int32_t var_14 = data_65aa78
    data_65aa74 = 0
    __free_base(var_14)
    data_65aa78 = 0
    int32_t result
    result.b = 1
    return result
}
