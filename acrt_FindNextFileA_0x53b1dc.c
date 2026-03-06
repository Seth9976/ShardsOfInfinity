// 函数名称: ___acrt_FindNextFileA
// 虚拟地址: 0x53b1dc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___acrt_FindNextFileA(HANDLE arg1, uint32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    WIN32_FIND_DATAW findFileData
    BOOL result = FindNextFileW(arg1, &findFileData)
    
    if (result != 0)
        *arg2 = findFileData.dwFileAttributes
        arg2[1] = findFileData.ftCreationTime.dwLowDateTime
        arg2[2] = findFileData.ftCreationTime.dwHighDateTime
        arg2[3] = findFileData.ftLastAccessTime.dwLowDateTime
        arg2[4] = findFileData.ftLastAccessTime.dwHighDateTime
        arg2[5] = findFileData.ftLastWriteTime.dwLowDateTime
        arg2[6] = findFileData.ftLastWriteTime.dwHighDateTime
        arg2[7] = findFileData.nFileSizeHigh
        arg2[8] = findFileData.nFileSizeLow
        arg2[9] = findFileData.dwReserved0
        BOOL result_1 = 0
        int32_t edi
        int32_t var_27c_1 = edi
        arg2[0xa] = findFileData.dwReserved1
        int32_t var_26c_1 = 0x104
        void* var_270 = &arg2[0xb]
        void* var_268_1 = &arg2[0xb]
        int32_t var_264_1 = 0x104
        int32_t var_260_1 = 0
        char var_25c_1 = 0
        var_22c
        
        if (int __cdecl __acrt_convert_wcs_mbs<wchar_t, char, unsigned int __cdecl(char *, wchar_t const *, unsigned int, struct __crt_locale_pointers *), struct __crt_win32_buffer_no_resizing>(wchar_t const *const, class __crt_win32_buffer<char, struct __crt_win32_buffer_no_resizing> &, unsigned int (__cdecl &)(char *, wchar_t const *, unsigned int, struct __crt_locale_pointers *), struct __crt_locale_pointers *)(
                &var_22c, &var_270, sub_534922, 0) == 0)
            int32_t var_26c_2 = 0xe
            var_270 = &arg2[0x4c]
            void* var_268_2 = &arg2[0x4c]
            int32_t var_264_2 = 0xe
            int32_t var_260_2 = 0
            char var_25c_2 = 0
            var_24
            int32_t eax_17 = int __cdecl __acrt_convert_wcs_mbs<wchar_t, char, unsigned int __cdecl(char *, wchar_t const *, unsigned int, struct __crt_locale_pointers *), struct __crt_win32_buffer_no_resizing>(wchar_t const *const, class __crt_win32_buffer<char, struct __crt_win32_buffer_no_resizing> &, unsigned int (__cdecl &)(char *, wchar_t const *, unsigned int, struct __crt_locale_pointers *), struct __crt_locale_pointers *)(
                &var_24, &var_270, sub_534922, 0)
            int32_t ebx_2 = neg.d(eax_17)
            result_1 = sbb.d(ebx_2, ebx_2, eax_17 != 0) + 1
        
        result = result_1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
