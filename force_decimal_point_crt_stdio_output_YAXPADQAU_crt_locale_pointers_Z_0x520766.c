// 函数名称: ?force_decimal_point@__crt_stdio_output@@YAXPADQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x520766
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*?force_decimal_point@__crt_stdio_output@@YAXPADQAU__crt_locale_pointers@@@Z(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    
    for (bool cond:0 = _tolower(sx.d(*esi)) != 0x65; cond:0; cond:0 = _isdigit(*esi) != 0)
        esi = &esi[1]
    
    if (_tolower(sx.d(*esi)) == 0x78)
        esi = &esi[2]
    
    char i_1 = *esi
    char* result
    result.b = ***(*arg2 + 0x88)
    *esi = result.b
    void* esi_1 = &esi[1]
    char i
    
    do
        result.b = *esi_1
        i = i_1
        *esi_1 = i_1
        esi_1 += 1
        i_1 = result.b
    while (i != 0)
    return result
}
