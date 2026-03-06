// 函数名称: ?is_positional_parameter_reappearance_consistent@?$positional_parameter_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@AAE_NABUparameter_data@12@W4parameter_type@12@DW4length_modifier@2@@Z
// 虚拟地址: 0x5207c2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall?is_positional_parameter_reappearance_consistent@?$positional_parameter_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@AAE_NABUparameter_data@12@W4parameter_type@12@DW4length_modifier@2@@Z(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* var_c = arg1
    int32_t edi
    int32_t var_18 = edi
    int32_t result
    result.b = arg2[1].b
    int16_t edx
    edx.b = result.b == 0x70
    
    if (result.b == 0x70)
        result.b = arg4.b != 0x70
        result.b ^= edx.b
    else if (arg4.b == 0x70)
        result.b = arg4.b != 0x70
        result.b ^= edx.b
    else
        char ecx = 0
        
        if (result.b != 0x73)
            var_8:3.b = 0
        
        if (result.b == 0x73 || result.b == 0x53)
            var_8:3.b = 1
        
        if (arg4.b != 0x73)
            edx:1.b = 0
        
        if (arg4.b == 0x73 || arg4.b == 0x53)
            edx:1.b = 1
        
        if (result.b != 0x63)
            edx.b = 0
        
        if (result.b == 0x63 || result.b == 0x43)
            edx.b = 1
        
        if (arg4.b == 0x63 || arg4.b == 0x43)
            ecx = 1
        
        if (var_8:3.b != 0)
            if (var_8:3.b != edx:1.b || edx.b != ecx)
                result.b = 0
            else
            label_52089d:
                int32_t var_1c_3 = arg5
                int32_t var_20_3 = arg4
                char eax_2 = __crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1])
                int32_t var_2c_1 = arg2[3]
                int32_t ebx
                ebx.b = eax_2
                int32_t result_1 = result
                result.b =
                    __crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1]).b == ebx.b
        else if (edx:1.b != 0)
            result.b = 0
        else if (edx.b != 0)
            if (edx.b == ecx)
                goto label_52089d
            
            result.b = 0
        else if (ecx != 0)
            result.b = 0
        else
            var_8:3.b = __crt_stdio_output::positional_parameter_base<char,char,class __crt_stdio_output::string_output_adapter<char> >::is_integral_specifier<char>(
                result.b)
            result = __crt_stdio_output::positional_parameter_base<char,char,class __crt_stdio_output::string_output_adapter<char> >::is_integral_specifier<char>(
                arg4.b)
            char ecx_1 = var_8:3.b
            
            if (ecx_1 != 0)
                if (ecx_1 != result.b)
                    result.b = 0
                else
                    int32_t ecx_2
                    ecx_2.b = arg2[3] == 9
                    result.b = arg5 == 9
                    
                    if (ecx_2 != result)
                        result.b = 0
                    else
                        result.b = __crt_stdio_output::to_integer_size(arg2[3])
                            == __crt_stdio_output::to_integer_size(arg5)
            else if (result.b != 0)
                result.b = 0
            else
                result.b = *arg2 == arg3
    
    return result
}
