// 函数名称: ___acrt_MultiByteToWideChar
// 虚拟地址: 0x534339
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_MultiByteToWideChar(uint32_t arg1, enum MULTI_BYTE_TO_WIDE_CHAR_FLAGS arg2, uint8_t* arg3, int32_t arg4, wchar16* arg5, int32_t arg6)
{
    // 第一条实际指令: enum MULTI_BYTE_TO_WIDE_CHAR_FLAGS dwFlags
    enum MULTI_BYTE_TO_WIDE_CHAR_FLAGS dwFlags
    
    if (arg1 u> 0xc435)
        if (arg1 == 0xd698)
            dwFlags = arg2 & MB_ERR_INVALID_CHARS
        else if (arg1 u<= 0xdea9)
            dwFlags = arg2
        else if (arg1 u<= 0xdeb3 || arg1 == 0xfde8)
            dwFlags = 0
        else if (arg1 != 0xfde9)
            dwFlags = arg2
        else
            dwFlags = arg2 & MB_ERR_INVALID_CHARS
    else if (arg1 == 0xc435 || arg1 == 0x2a
            || (arg1 u> 0xc42b && (arg1 u<= 0xc42e || arg1 == 0xc431 || arg1 == 0xc433)))
        dwFlags = 0
    else
        dwFlags = arg2
    
    return MultiByteToWideChar(arg1, dwFlags, arg3, arg4, arg5, arg6)
}
