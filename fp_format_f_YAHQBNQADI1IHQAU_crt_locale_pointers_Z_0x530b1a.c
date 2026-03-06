// 函数名称: ?fp_format_f@@YAHQBNQADI1IHQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x530b1a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?fp_format_f@@YAHQBNQADI1IHQAU__crt_locale_pointers@@@Z(int32_t* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_18 = edi
    int32_t var_1c = arg5
    int32_t var_10 = 0
    void* var_c
    int32_t* edi_1 = &var_c
    *edi_1 = 0
    edi_1[1] = 0
    ___acrt_fltout(*arg1, arg1[1], arg6, &var_10, arg4)
    int32_t ecx = 0xffffffff
    
    if (arg3 != 0xffffffff)
        int32_t eax_1
        eax_1.b = var_10 == 0x2d
        ecx = arg3 - eax_1
    
    void* eax_4
    eax_4.b = var_10 == 0x2d
    int32_t result = ___acrt_fp_strflt_to_string(eax_4 + arg2, ecx, var_c + arg6, &var_10)
    
    if (result == 0)
        return fp_format_f_internal(arg2, arg3, arg6, &var_10, 0, arg7)
    
    *arg2 = 0
    return result
}
