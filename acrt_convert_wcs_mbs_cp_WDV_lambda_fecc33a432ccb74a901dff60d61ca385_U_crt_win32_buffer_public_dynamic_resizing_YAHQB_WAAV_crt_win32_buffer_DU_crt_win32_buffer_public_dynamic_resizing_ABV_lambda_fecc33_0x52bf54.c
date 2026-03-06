// 函数名称: ??$__acrt_convert_wcs_mbs_cp@_WDV<lambda_fecc33a432ccb74a901dff60d61ca385>@@U__crt_win32_buffer_public_dynamic_resizing@@@@YAHQB_WAAV?$__crt_win32_buffer@DU__crt_win32_buffer_public_dynamic_resizing@@@@ABV<lambda_fecc33a432ccb74a901dff60d61ca385>@@I@Z
// 虚拟地址: 0x52bf54
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$__acrt_convert_wcs_mbs_cp@_WDV<lambda_fecc33a432ccb74a901dff60d61ca385>@@U__crt_win32_buffer_public_dynamic_resizing@@@@YAHQB_WAAV?$__crt_win32_buffer@DU__crt_win32_buffer_public_dynamic_resizing@@@@ABV<lambda_fecc33a432ccb74a901dff60d61ca385>@@I@Z(wchar16* arg1, void* arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t eax = ___acrt_WideCharToMultiByte(arg3, 0, arg1, 0xffffffff, nullptr, 0, 0, 0)
    
    if (eax == 0)
        ___acrt_errno_map_os_error(GetLastError())
        return *__errno()
    
    if (eax u> *(arg2 + 0xc))
        int32_t var_10_1 = eax
        return __crt_win32_buffer<char,struct __crt_win32_buffer_no_resizing>::allocate(arg2)
    
    int32_t eax_4 =
        ___acrt_WideCharToMultiByte(arg3, 0, arg1, 0xffffffff, *(arg2 + 8), *(arg2 + 0xc), 0, 0)
    
    if (eax_4 != 0)
        *(arg2 + 0x10) = eax_4
        return 0
    
    ___acrt_errno_map_os_error(GetLastError())
    return *__errno()
}
