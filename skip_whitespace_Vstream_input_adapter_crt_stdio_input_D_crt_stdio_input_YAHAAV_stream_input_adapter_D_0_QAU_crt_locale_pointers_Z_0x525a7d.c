// 函数名称: ??$skip_whitespace@Vstream_input_adapter@__crt_stdio_input@@D@__crt_stdio_input@@YAHAAV?$stream_input_adapter@D@0@QAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x525a7d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$skip_whitespace@Vstream_input_adapter@__crt_stdio_input@@D@__crt_stdio_input@@YAHAAV?$stream_input_adapter@D@0@QAU__crt_locale_pointers@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    int32_t i
    
    do
        int32_t var_10_1 = *arg1
        result = sub_531b7b()
        
        if (result == 0xffffffff)
            break
        
        arg1[1] += 1
        i = __ischartype_l(zx.d(result.b), 8, arg2)
    while (i != 0)
    return result
}
