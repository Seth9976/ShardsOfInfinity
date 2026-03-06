// 函数名称: ?process_character_count_specifier@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x5289f9
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?process_character_count_specifier@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x26) == 0)
    if (*(arg1 + 0x26) == 0)
        return __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::write_integer(
            arg1, (*(arg1 + 0xc)).b, 0)
    
    int32_t result
    result.b = 1
    return result
}
