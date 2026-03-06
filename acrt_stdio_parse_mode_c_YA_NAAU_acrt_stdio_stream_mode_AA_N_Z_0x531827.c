// 函数名称: ?__acrt_stdio_parse_mode_c@@YA_NAAU__acrt_stdio_stream_mode@@AA_N@Z
// 虚拟地址: 0x531827
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*?__acrt_stdio_parse_mode_c@@YA_NAAU__acrt_stdio_stream_mode@@AA_N@Z(void* arg1, char* arg2)
{
    // 第一条实际指令: char* result
    char* result
    
    if (*arg2 != 0)
        result.b = 0
        return result
    
    *arg2 = 1
    result.b = 1
    *(arg1 + 4) |= 0x800
    return result
}
