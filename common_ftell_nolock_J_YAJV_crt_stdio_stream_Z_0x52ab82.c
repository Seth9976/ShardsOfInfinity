// 函数名称: ??$common_ftell_nolock@J@@YAJV__crt_stdio_stream@@@Z
// 虚拟地址: 0x52ab82
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t??$common_ftell_nolock@J@@YAJV__crt_stdio_stream@@@Z(int32_t* arg1)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    int32_t edx
    result, edx = common_ftell_nolock<int64_t>(arg1)
    
    if (edx s< 0 || (edx s<= 0 && result u<= 0x7fffffff))
        return result
    
    *__errno() = 0x16
    return 0xffffffff
}
