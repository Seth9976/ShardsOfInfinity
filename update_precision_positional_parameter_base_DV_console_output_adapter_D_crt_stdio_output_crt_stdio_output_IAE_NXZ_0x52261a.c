// 函数名称: ?update_precision@?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ
// 虚拟地址: 0x52261a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?update_precision@?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    int32_t result
    
    if (arg1[0x117] != 1)
        var_8 = nullptr
        int32_t edx
        int32_t eax_1 = _strtol(&var_8, edx, arg1, arg1[4], &var_8, 0xa)
        bool cond:0_1 = arg1[0x116] != 1
        char* eax_2 = var_8
        arg1[4] = &eax_2[1]
        
        if (cond:0_1)
            arg1[0xa] = *arg1[(eax_1 - 1) * 4 + 0x11b]
            result.b = 1
        else
            if (eax_1 - 1 s>= 0 && *eax_2 == 0x24 && eax_1 - 1 s< 0x64)
                int32_t eax_3 = arg1[0x2a9]
                
                if (eax_1 - 1 s> eax_3)
                    eax_3 = eax_1 - 1
                
                int32_t var_10_1 = arg1[0xb]
                arg1[0x2a9] = eax_3
                return __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> >::validate_and_store_parameter_data(
                    &arg1[0x119 + (eax_1 - 1) * 4], 1, zx.d(*(arg1 + 0x31)), var_10_1)
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result.b = 0
    else
        arg1[5] += 4
        arg1[0xa] = *(arg1[5] - 4)
        result.b = 1
    
    return result
}
