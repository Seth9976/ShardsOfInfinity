// 函数名称: _strtol
// 虚拟地址: 0x52de8b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")_strtol(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5, char arg6)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t var_c = 1
    int32_t* var_18 = arg3
    __crt_strtox::make_c_string_character_source<char,std::nullptr>(&var_18, arg4, arg5)
    return
        __crt_strtox::parse_integer<unsigned long,class __crt_strtox::c_string_character_source<char> >(
        nullptr, var_18, arg3, arg6)
}
