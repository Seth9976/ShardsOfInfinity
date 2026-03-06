// 函数名称: sub_52bbd2
// 虚拟地址: 0x52bbd2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_52bbd2()
{
    // 第一条实际指令: __flushall()
    __flushall()
    __fcloseall()
    
    for (int32_t* i = nullptr; i != 0xc; i = &i[1])
        ___acrt_stdio_free_buffer_nolock(*(i + data_65a3c8))
        DeleteCriticalSection(*(i + data_65a3c8) + 0x20)
    
    int32_t result = __free_base(data_65a3c8)
    data_65a3c8 = 0
    return result
}
