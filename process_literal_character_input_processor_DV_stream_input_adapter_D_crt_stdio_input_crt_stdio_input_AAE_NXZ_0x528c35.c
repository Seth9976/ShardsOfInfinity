// 函数名称: ?process_literal_character@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x528c35
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?process_literal_character@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t var_c = arg1[2]
    int32_t result = sub_531b7b()
    
    if (result != 0xffffffff)
        arg1[3] += 1
        
        if (result == zx.d(arg1[9].b))
            return __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::process_literal_character_tchar(
                arg1, result.b)
        
        __crt_stdio_input::stream_input_adapter<char>::unget(&arg1[2], result)
    
    result.b = 0
    return result
}
