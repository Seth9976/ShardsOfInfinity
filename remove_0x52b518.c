// 函数名称: _remove
// 虚拟地址: 0x52b518
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_remove(uint8_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return __wremove(nullptr)
    
    int32_t var_1c
    __builtin_memset(&var_1c, 0, 0x15)
    int32_t eax_1
    int32_t ecx_1
    int32_t edx_1
    eax_1, ecx_1, edx_1 = __acrt_get_utf8_acp_compatibility_codepage()
    PWSTR var_14
    int32_t result
    
    if (__acrt_mbs_to_wcs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(&var_1c, edx_1, 
            ecx_1, arg1, &var_1c, eax_1) == 0)
        result = __wremove(var_14)
    else
        result = 0xffffffff
    
    char var_8
    
    if (var_8 != 0)
        __free_base(var_14)
    
    return result
}
