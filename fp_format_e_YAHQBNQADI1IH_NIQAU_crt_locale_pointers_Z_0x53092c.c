// 函数名称: ?fp_format_e@@YAHQBNQADI1IH_NIQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x53092c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?fp_format_e@@YAHQBNQADI1IH_NIQAU__crt_locale_pointers@@@Z(int32_t* arg1, char* arg2, int32_t arg3, int32_t arg4, void* arg5, void* arg6, char arg7, int32_t arg8, int32_t* arg9)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_18 = edi
    void* eax = arg6 + 3
    
    if (eax u>= arg5)
        eax = arg5
    
    void* var_1c = eax
    int32_t var_10
    ___acrt_fltout(*arg1, arg1[1], arg6 + 1, &var_10, arg4)
    int32_t ecx = 0xffffffff
    
    if (arg3 != 0xffffffff)
        int32_t eax_2
        eax_2.b = var_10 == 0x2d
        int32_t eax_3
        eax_3.b = arg6 s> 0
        ecx = arg3 - eax_2 - eax_3
    
    void* ecx_3
    ecx_3.b = var_10 == 0x2d
    void* const eax_4
    eax_4.b = arg6 s> 0
    int32_t result = ___acrt_fp_strflt_to_string(eax_4 + ecx_3 + arg2, ecx, arg6 + 1, &var_10)
    
    if (result == 0)
        return sub_5309d0(arg2, arg3, arg6, arg7, arg8, &var_10, 0, arg9)
    
    *arg2 = 0
    return result
}
