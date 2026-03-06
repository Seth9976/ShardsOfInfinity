// 函数名称: ?process_literal_character@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x528c6b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall?process_literal_character@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    uint32_t result = __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])
    
    if (result != 0xffffffff)
        if (result == zx.d(arg1[0xb].b))
            return __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_literal_character_tchar(
                arg1, result.b)
        
        __crt_stdio_input::string_input_adapter<char>::unget(&arg1[2], result)
    
    result.b = 0
    return result
}
