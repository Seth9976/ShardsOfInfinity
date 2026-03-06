// 函数名称: ?write_character@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NQA_WIAAPA_WAAID@Z
// 虚拟地址: 0x5295c3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscall?write_character@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NQA_WIAAPA_WAAID@Z(int32_t* arg1, int16_t** arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* var_c = arg1
    int32_t ebx
    ebx.b = arg4
    var_8.b = ebx.b
    var_8:1.b = 0
    
    if (*(___pctype_func(arg1) + (zx.d(ebx.b) << 1)) s< 0)
        var_8:1.b = __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])
    
    var_c.w = 0x3f
    int32_t* eax_2 = arg1[0x1a]
    __mbtowc_l(&var_c, &var_8, *(*eax_2 + 4), eax_2)
    **arg2 = sx.w(ebx.b)
    *arg2 = &(*arg2)[1]
    *arg3 -= 1
    int32_t* result
    result.b = 1
    return result
}
