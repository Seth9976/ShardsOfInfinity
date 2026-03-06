// 函数名称: __sopen_nolock
// 虚拟地址: 0x53a1f4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__sopen_nolock(int32_t* arg1, int32_t* arg2, uint8_t* arg3, int32_t arg4, int32_t arg5, char arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_1c
    int32_t var_1c
    __builtin_memset(&var_1c, 0, 0x15)
    int32_t eax
    int32_t ecx
    int32_t edx
    eax, ecx, edx = __acrt_get_utf8_acp_compatibility_codepage()
    int32_t var_14
    int32_t result
    
    if (__acrt_mbs_to_wcs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(&var_1c, edx, ecx, 
            arg3, &var_1c, eax) == 0)
        int32_t var_24_1 = arg7
        result = __wsopen_nolock(arg1, arg2, var_14, arg4, arg5, arg6)
    else
        result = 0xffffffff
    
    char var_8
    
    if (var_8 != 0)
        __free_base(var_14)
    
    return result
}
