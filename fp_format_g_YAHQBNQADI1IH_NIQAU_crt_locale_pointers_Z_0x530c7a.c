// 函数名称: ?fp_format_g@@YAHQBNQADI1IH_NIQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x530c7a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?fp_format_g@@YAHQBNQADI1IH_NIQAU__crt_locale_pointers@@@Z(int32_t* arg1, char* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6, char arg7, int32_t arg8, int32_t* arg9)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_20 = edi
    int32_t var_24 = arg5
    int32_t var_14 = 0
    int32_t var_10
    int32_t* edi_1 = &var_10
    *edi_1 = 0
    edi_1[1] = 0
    ___acrt_fltout(*arg1, arg1[1], arg6, &var_14, arg4)
    void* ecx
    ecx.b = var_14 == 0x2d
    int32_t eax_2 = var_10 - 1
    void* eax_3 = 0xffffffff
    char* esi = ecx + arg2
    
    if (arg3 != 0xffffffff)
        eax_3 = arg3 - ecx
    
    int32_t result = ___acrt_fp_strflt_to_string(esi, eax_3, arg6, &var_14)
    
    if (result != 0)
        *arg2 = 0
        return result
    
    if (var_10 - 1 s< 0xfffffffc || var_10 - 1 s>= arg6)
        return sub_5309d0(arg2, arg3, arg6, arg7, arg8, &var_14, 1, arg9)
    
    if (eax_2 s< var_10 - 1)
        int32_t eax_6
        
        do
            eax_6.b = *esi
            esi = &esi[1]
        while (eax_6.b != 0)
        
        esi[0xfffffffe] = eax_6.b
    
    return fp_format_f_internal(arg2, arg3, arg6, &var_14, 1, arg9)
}
