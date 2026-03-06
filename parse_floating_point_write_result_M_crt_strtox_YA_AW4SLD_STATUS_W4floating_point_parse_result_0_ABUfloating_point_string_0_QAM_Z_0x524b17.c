// 函数名称: ??$parse_floating_point_write_result@M@__crt_strtox@@YA?AW4SLD_STATUS@@W4floating_point_parse_result@0@ABUfloating_point_string@0@QAM@Z
// 虚拟地址: 0x524b17
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$parse_floating_point_write_result@M@__crt_strtox@@YA?AW4SLD_STATUS@@W4floating_point_parse_result@0@ABUfloating_point_string@0@QAM@Z(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t edx
    
    switch (arg1)
        case 0
            return __crt_strtox::convert_decimal_string_to_floating_type<float>(arg1, edx, ecx, arg2, 
                arg3)
        case 1
            return __crt_strtox::convert_hexadecimal_string_to_floating_type<float>(arg1, edx, ecx, 
                arg2, arg3)
        case 2
            uint32_t ecx_2 = zx.d(arg2[0xc2].b)
            int32_t ecx_3 = neg.d(ecx_2)
            *arg3 = sbb.d(ecx_3, ecx_3, ecx_2 != 0) & 0x80000000
            return 0
        case 3
            int32_t edx_1
            edx_1.b = arg2[0xc2].b == 0
            *arg3 = ((((edx_1 - 1) & 0x80000000) + 0x7f800000) | (*arg3 & 0x7f800000)) & 0xff800000
            return 0
        case 4
            int32_t ecx_8
            ecx_8.b = arg2[0xc2].b == 0
            *arg3 = ((ecx_8 - 1) & 0x80000000) + 0x7fffffff
            return 0
        case 5
            int32_t edx_7
            edx_7.b = arg2[0xc2].b == 0
            *arg3 =
                (((((edx_7 - 1) & 0x80000000) + 0x7f800000) | (*arg3 & 0x7f800000)) & 0xff800001) | 1
            return 0
        case 6
            *arg3 = 0xffc00000
            return 0
        case 7
            *arg3 = 0
        case 8
            uint32_t ecx_11 = zx.d(arg2[0xc2].b)
            int32_t ecx_12 = neg.d(ecx_11)
            *arg3 = sbb.d(ecx_12, ecx_12, ecx_11 != 0) & 0x80000000
            return 2
        case 9
            int32_t edx_13
            edx_13.b = arg2[0xc2].b == 0
            *arg3 = ((((edx_13 - 1) & 0x80000000) + 0x7f800000) | (*arg3 & 0x7f800000)) & 0xff800000
            return 3
    
    return 1
}
