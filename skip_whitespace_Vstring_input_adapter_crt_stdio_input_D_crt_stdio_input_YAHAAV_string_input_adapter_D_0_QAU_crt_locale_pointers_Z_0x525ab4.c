// 函数名称: ??$skip_whitespace@Vstring_input_adapter@__crt_stdio_input@@D@__crt_stdio_input@@YAHAAV?$string_input_adapter@D@0@QAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x525ab4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t??$skip_whitespace@Vstring_input_adapter@__crt_stdio_input@@D@__crt_stdio_input@@YAHAAV?$string_input_adapter@D@0@QAU__crt_locale_pointers@@@Z(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    int32_t i
    
    do
        result = __crt_stdio_input::string_input_adapter<char>::get(arg1)
        
        if (result == 0xffffffff)
            break
        
        i = __ischartype_l(zx.d(result.b), 8, arg2)
    while (i != 0)
    return result
}
