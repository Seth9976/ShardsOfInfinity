// 函数名称: ___dcrt_get_narrow_environment_from_os
// 虚拟地址: 0x537591
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

PSTR___dcrt_get_narrow_environment_from_os()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    PWSTR penv = GetEnvironmentStringsW()
    int32_t eax_1
    int32_t ebx_3
    
    if (penv != 0)
        ebx_3 = (find_end_of_double_null_terminated_sequence(penv) - penv) s>> 1
        eax_1 = ___acrt_WideCharToMultiByte(0, 0, penv, ebx_3, nullptr, 0, 0, 0)
    
    PSTR result
    
    if (penv == 0 || eax_1 == 0)
        result = nullptr
    else
        PSTR result_1 = __malloc_base(eax_1)
        int32_t eax_3
        
        if (result_1 != 0)
            eax_3 = ___acrt_WideCharToMultiByte(0, 0, penv, ebx_3, result_1, eax_1, 0, 0)
        
        if (result_1 == 0 || eax_3 == 0)
            result = nullptr
        else
            result = result_1
            result_1 = nullptr
        
        __free_base(result_1)
    
    if (penv != 0)
        FreeEnvironmentStringsW(penv)
    
    return result
}
