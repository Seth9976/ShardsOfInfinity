// 函数名称: ?__acrt_stdio_parse_mode_plus@@YA_NAAU__acrt_stdio_stream_mode@@AA_N@Z
// 虚拟地址: 0x53186b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*?__acrt_stdio_parse_mode_plus@@YA_NAAU__acrt_stdio_stream_mode@@AA_N@Z(char** arg1, char* arg2)
{
    // 第一条实际指令: char* eax
    char* eax
    
    if (*arg2 == 0)
        *arg2 = 1
        eax = *arg1
        
        if ((eax.b & 2) == 0)
            int32_t ecx_2 = (arg1[1] & 0xfffffffc) | 4
            *arg1 = (eax & 0xfffffffe) | 2
            arg1[1] = ecx_2
            char* eax_2
            eax_2.b = 1
            return eax_2
    
    eax.b = 0
    return eax
}
