// 函数名称: ?process_literal_character_tchar@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_ND@Z
// 虚拟地址: 0x528cfc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscall?process_literal_character_tchar@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_ND@Z(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int32_t ebx
    ebx.b = arg2
    uint32_t result
    
    if (*(___pctype_func(arg1) + (zx.d(ebx.b) << 1)) s< 0)
        result = __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])
        
        if (result == zx.d(*(arg1 + 0x2d)))
            result.b = 1
        else
            __crt_stdio_input::string_input_adapter<char>::unget(&arg1[2], result)
            __crt_stdio_input::string_input_adapter<char>::unget(&arg1[2], sx.d(ebx.b))
            result.b = 0
    else
        result.b = 1
    
    return result
}
