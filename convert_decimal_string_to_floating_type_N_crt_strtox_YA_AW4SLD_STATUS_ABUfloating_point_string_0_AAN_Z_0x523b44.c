// 函数名称: ??$convert_decimal_string_to_floating_type@N@__crt_strtox@@YA?AW4SLD_STATUS@@ABUfloating_point_string@0@AAN@Z
// 虚拟地址: 0x523b44
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")??$convert_decimal_string_to_floating_type@N@__crt_strtox@@YA?AW4SLD_STATUS@@ABUfloating_point_string@0@AAN@Z(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_c = arg3
    var_c = arg5
    var_8.b = 1
    return __crt_strtox::convert_decimal_string_to_floating_type_common(arg4, &var_c)
}
