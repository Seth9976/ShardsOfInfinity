// 函数名称: ??$parse_floating_point_write_result@N@__crt_strtox@@YA?AW4SLD_STATUS@@W4floating_point_parse_result@0@ABUfloating_point_string@0@QAN@Z
// 虚拟地址: 0x524c83
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$parse_floating_point_write_result@N@__crt_strtox@@YA?AW4SLD_STATUS@@W4floating_point_parse_result@0@ABUfloating_point_string@0@QAN@Z(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    int32_t ecx
    int32_t ecx_3
    int32_t ecx_10
    int32_t edx
    
    switch (arg1)
        case 0
            return __crt_strtox::convert_decimal_string_to_floating_type<double>(arg1, edx, ecx, arg2, 
                arg3)
        case 1
            return __crt_strtox::convert_hexadecimal_string_to_floating_type<double>(arg1, edx, ecx, 
                arg2, arg3)
        case 2
            int32_t ecx_2
            ecx_2.b = arg2[0xc2].b != 0
            ecx_3 = ecx_2 << 0x1f
        label_524cc8:
            *arg3 = 0
            arg3[1] = ecx_3
            return 0
        case 3
            int32_t ecx_4
            ecx_4.b = arg2[0xc2].b != 0
            ecx_3 = ecx_4 << 0x1f | 0x7ff00000
            goto label_524cc8
        case 4
            int32_t ecx_6
            ecx_6.b = arg2[0xc2].b != 0
            *arg3 = 0xffffffff
            arg3[1] = ecx_6 << 0x1f | 0x7fffffff
            return 0
        case 5
            __crt_strtox::assemble_floating_point_snan<double>(arg2[0xc2].b, arg3)
            return 0
        case 6
            *arg3 = 0
            arg3[1] = 0xfff80000
            return 0
        case 7
            *arg3 = 0
            arg3[1] = 0
        case 8
            result = 2
            int32_t ecx_9
            ecx_9.b = arg2[0xc2].b != 0
            ecx_10 = ecx_9 << 0x1f
        label_524d58:
            *arg3 = 0
            arg3[1] = ecx_10
            return result
        case 9
            result = 3
            int32_t ecx_11
            ecx_11.b = arg2[0xc2].b != 0
            ecx_10 = ecx_11 << 0x1f | 0x7ff00000
            goto label_524d58
    
    return 1
}
