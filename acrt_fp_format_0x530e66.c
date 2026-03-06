// 函数名称: ___acrt_fp_format
// 虚拟地址: 0x530e66
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_fp_format(int32_t* arg1, char* arg2, int32_t arg3, int32_t arg4, void* arg5, int32_t arg6, int32_t* arg7, int32_t arg8, int32_t* arg9)
{
    // 第一条实际指令: char ecx
    char ecx
    char var_8 = ecx
    char var_c = ecx
    int32_t edi
    int32_t var_14 = edi
    
    if (arg2 == 0 || arg3 u<= 0 || arg4 == 0 || arg5 u<= 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    if (arg6 != 0x41 && arg6 != 0x45 && arg6 != 0x46)
        var_8 = 0
    
    if (arg6 == 0x41 || arg6 == 0x45 || arg6 == 0x46 || arg6 == 0x47)
        var_8 = 1
    
    if ((arg8 & 8) == 0)
        int32_t eax_5 = __acrt_fp_classify(arg1)
        
        if (eax_5 != 0)
            int32_t temp0_1 = arg1[1]
            
            if (temp0_1 s> 0 || (temp0_1 s>= 0 && *arg1 u>= 0))
                var_c = 0
            else
                var_c = 1
            
            return fp_format_nan_or_infinity(eax_5, var_c, arg2, arg3, var_8)
    
    int32_t var_1c_3
    
    if ((arg8 & 0x10) == 0)
        var_1c_3 = 2
    else
        var_1c_3 = 3
    
    int32_t esi_3
    bool cond:3_1
    
    if (arg6 s> 0x61)
        esi_3 = arg6 - 0x65
        cond:3_1 = arg6 == 0x65
    else
        if (arg6 == 0x61 || arg6 == 0x41)
            return fp_format_a(arg1, arg2, arg3, arg4, arg5, arg7, var_8, var_1c_3, arg9)
        
        esi_3 = arg6 - 0x45
        cond:3_1 = arg6 == 0x45
    
    if (cond:3_1)
        return fp_format_e(arg1, arg2, arg3, arg4, arg5, arg7, var_8, var_1c_3, arg9)
    
    if (esi_3 == 1)
        return fp_format_f(arg1, arg2, arg3, arg4, arg5, arg7, arg9)
    
    return fp_format_g(arg1, arg2, arg3, arg4, arg5, arg7, var_8, var_1c_3, arg9)
}
