// 函数名称: ___acrt_GetStringTypeA
// 虚拟地址: 0x535117
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___acrt_GetStringTypeA(int32_t* arg1, uint32_t arg2, uint8_t* arg3, int32_t arg4, uint16_t* arg5, uint32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_2c = edi
    void* var_20
    _LocaleUpdate::_LocaleUpdate(&var_20, arg1)
    uint32_t ebx = arg6
    void* var_1c
    
    if (ebx == 0)
        ebx = *(var_1c + 8)
    BOOL result = 0
    int32_t eax_3
    eax_3.b = arg7 != 0
    int32_t eax_5 = ___acrt_MultiByteToWideChar(ebx, (eax_3 << 3) + 1, arg3, arg4, nullptr, 0)
    
    if (eax_5 != 0)
        int32_t edx_1 = eax_5 * 2
        uint32_t eax_7 = sbb.d(eax_5, eax_5, edx_1 u< edx_1 + 8) & (edx_1 + 8)
        int32_t* lpSrcStr
        
        if (eax_7 == 0)
            lpSrcStr = nullptr
        else if (eax_7 u> 0x400)
            lpSrcStr = __malloc_base(eax_7)
            
            if (lpSrcStr != 0)
                *lpSrcStr = 0xdddd
                lpSrcStr = &lpSrcStr[2]
        else
            __alloca_probe_16(eax_7)
            lpSrcStr = &var_2c
            
            if (&var_2c != 0)
                var_2c = 0xcccc
                lpSrcStr = &lpSrcStr[2]
        
        if (lpSrcStr != 0)
            _memset(lpSrcStr, 0, edx_1)
            int32_t cchSrc =
                ___acrt_MultiByteToWideChar(ebx, MB_PRECOMPOSED, arg3, arg4, lpSrcStr, eax_5)
            
            if (cchSrc != 0)
                result = GetStringTypeW(arg2, lpSrcStr, cchSrc, arg5)
        
        sub_51b5f2(lpSrcStr)
    
    char var_14
    
    if (var_14 != 0)
        void* eax_10 = var_20
        *(eax_10 + 0x350) &= 0xfffffffd
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
