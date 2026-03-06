// 函数名称: ?process_whitespace@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x528e7f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?process_whitespace@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: __crt_stdio_input::string_input_adapter<char>::unget(arg1 + 8, __crt_stdio_input::skip_whitespace<class __crt_stdio_input::string_input_adapter,char>(arg1 + 8, *(arg1 + 0x68)))
    __crt_stdio_input::string_input_adapter<char>::unget(arg1 + 8, 
        __crt_stdio_input::skip_whitespace<class __crt_stdio_input::string_input_adapter,char>(
            arg1 + 8, *(arg1 + 0x68)))
    int32_t result
    result.b = 1
    return result
}
