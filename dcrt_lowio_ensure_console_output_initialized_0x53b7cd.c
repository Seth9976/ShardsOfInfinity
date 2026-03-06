// 函数名称: ___dcrt_lowio_ensure_console_output_initialized
// 虚拟地址: 0x53b7cd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___dcrt_lowio_ensure_console_output_initialized()
{
    // 第一条实际指令: int32_t ecx = data_5b09a0
    int32_t ecx = data_5b09a0
    
    if (ecx == 0xfffffffe)
        ___initconout()
        ecx = data_5b09a0
    
    int32_t result
    result.b = ecx != 0xffffffff
    return result
}
