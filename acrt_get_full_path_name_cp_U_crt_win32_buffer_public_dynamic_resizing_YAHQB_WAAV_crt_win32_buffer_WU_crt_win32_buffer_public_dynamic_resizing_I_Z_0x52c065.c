// 函数名称: ??$__acrt_get_full_path_name_cp@U__crt_win32_buffer_public_dynamic_resizing@@@@YAHQB_WAAV?$__crt_win32_buffer@_WU__crt_win32_buffer_public_dynamic_resizing@@@@I@Z
// 虚拟地址: 0x52c065
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$__acrt_get_full_path_name_cp@U__crt_win32_buffer_public_dynamic_resizing@@@@YAHQB_WAAV?$__crt_win32_buffer@_WU__crt_win32_buffer_public_dynamic_resizing@@@@I@Z(PWSTR arg1, void* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int32_t esi = 0
    uint32_t eax = GetFullPathNameW(arg1, *(arg2 + 0xc), *(arg2 + 8), nullptr)
    
    if (eax != 0)
        if (eax u<= *(arg2 + 0xc))
            *(arg2 + 0x10) = eax
            return esi
        
        int32_t eax_3 =
            __crt_win32_buffer<wchar_t,struct __crt_win32_buffer_internal_dynamic_resizing>::allocate(
            arg2, eax)
        
        if (eax_3 != 0)
            return eax_3
        
        eax = GetFullPathNameW(arg1, *(arg2 + 0xc), *(arg2 + 8), nullptr)
        
        if (eax != 0)
            *(arg2 + 0x10) = eax
            return esi
    
    ___acrt_errno_map_os_error(GetLastError())
    return *__errno()
}
