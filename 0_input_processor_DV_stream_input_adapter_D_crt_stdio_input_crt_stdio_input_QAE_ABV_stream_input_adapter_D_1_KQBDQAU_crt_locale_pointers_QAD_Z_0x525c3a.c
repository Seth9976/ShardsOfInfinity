// 函数名称: ??0?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@QAE@ABV?$stream_input_adapter@D@1@_KQBDQAU__crt_locale_pointers@@QAD@Z
// 虚拟地址: 0x525c3a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscall??0?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@QAE@ABV?$stream_input_adapter@D@1@_KQBDQAU__crt_locale_pointers@@QAD@Z(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    *arg1 = arg3
    arg1[1] = arg4
    arg1[2] = *arg2
    arg1[3] = arg2[1]
    __crt_stdio_input::format_string_parser<char>::format_string_parser<char>(&arg1[4], arg3, arg4, 
        arg5)
    arg1[0x1a] = 0
    arg1[0x18] = arg6
    arg1[0x19] = arg7
    return arg1
}
