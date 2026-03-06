// 函数名称: ??$__acrt_convert_wcs_mbs_cp@D_WV<lambda_62f6974d9771e494a5ea317cc32e971c>@@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHQBDAAV?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@ABV<lambda_62f6974d9771e494a5ea317cc32e971c>@@I@Z
// 虚拟地址: 0x52b3ac
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$__acrt_convert_wcs_mbs_cp@D_WV<lambda_62f6974d9771e494a5ea317cc32e971c>@@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHQBDAAV?$__crt_win32_buffer@_WU__crt_win32_buffer_internal_dynamic_resizing@@@@ABV<lambda_62f6974d9771e494a5ea317cc32e971c>@@I@Z(uint8_t* arg1, void* arg2, uint32_t arg3)
{
    // 第一条实际指令: int32_t eax = ___acrt_MultiByteToWideChar(arg3, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg1, 0xffffffff, nullptr, 0)
    int32_t eax = ___acrt_MultiByteToWideChar(arg3, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg1, 
        0xffffffff, nullptr, 0)
    
    if (eax == 0)
        ___acrt_errno_map_os_error(GetLastError())
        return *__errno()
    
    if (eax u> *(arg2 + 0xc))
        int32_t result =
            __crt_win32_buffer<wchar_t,struct __crt_win32_buffer_internal_dynamic_resizing>::allocate(
            arg2, eax)
        
        if (result != 0)
            return result
    
    int32_t eax_4 = ___acrt_MultiByteToWideChar(arg3, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg1, 
        0xffffffff, *(arg2 + 8), *(arg2 + 0xc))
    
    if (eax_4 != 0)
        *(arg2 + 0x10) = eax_4
        return 0
    
    ___acrt_errno_map_os_error(GetLastError())
    return *__errno()
}
