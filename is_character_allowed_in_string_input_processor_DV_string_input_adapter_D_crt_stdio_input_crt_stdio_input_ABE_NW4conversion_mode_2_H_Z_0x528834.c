// 函数名称: ?is_character_allowed_in_string@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@ABE_NW4conversion_mode@2@H@Z
// 虚拟地址: 0x528834
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall?is_character_allowed_in_string@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@ABE_NW4conversion_mode@2@H@Z(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg3 == 0xffffffff)
        result.b = 0
    else if (arg2 == 0)
        result.b = 1
    else if (arg2 == 1)
        if (arg3 s< 9 || arg3 s> 0xd)
            result.b = arg3 != 0x20
        else
            result.b = 0
    else if (arg2 != 8)
        result.b = 0
    else
        uint32_t edx_1 = zx.d(arg3.b)
        result.b = 1
        result.b = 1 << (edx_1.b & 7)
        result.b = (*((edx_1 u>> 3) + arg1 + 0x44) & result.b) != 0
    
    return result
}
