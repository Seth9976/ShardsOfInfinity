// 函数名称: ___acrt_WideCharToMultiByte
// 虚拟地址: 0x534afc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_WideCharToMultiByte(uint32_t arg1, int32_t arg2, wchar16* arg3, int32_t arg4, PSTR arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: uint32_t dwFlags = 0
    uint32_t dwFlags = 0
    int32_t ebx
    int32_t var_8 = ebx
    int32_t edi
    int32_t var_10 = edi
    
    if (arg1 != 0xfde8)
        ebx.b = 0
    
    if (arg1 == 0xfde8 || arg1 == 0xfde9)
        ebx.b = 1
    
    bool cond:1_1
    
    if (arg1 u> 0xc435)
        if (arg1 != 0xd698)
            if (arg1 u<= 0xdea9)
                dwFlags = arg2 & 0xffffff7f
            else if (arg1 u> 0xdeb3 && arg1 != 0xfde8)
                cond:1_1 = arg1 == 0xfde9
            label_534b6b:
                
                if (not(cond:1_1))
                    dwFlags = arg2 & 0xffffff7f
    else if (arg1 != 0xc435 && arg1 != 0x2a)
        if (arg1 u<= 0xc42b)
            dwFlags = arg2 & 0xffffff7f
        else if (arg1 u> 0xc42e && arg1 != 0xc431)
            cond:1_1 = arg1 == 0xc433
            goto label_534b6b
    uint32_t eax = zx.d(ebx.b)
    int32_t eax_1 = neg.d(eax)
    uint32_t eax_5 = zx.d(ebx.b)
    int32_t eax_6 = neg.d(eax_5)
    return WideCharToMultiByte(arg1, dwFlags, arg3, arg4, arg5, arg6, 
        not.d(sbb.d(eax_6, eax_6, eax_5 != 0)) & arg7, not.d(sbb.d(eax_1, eax_1, eax != 0)) & arg8)
}
