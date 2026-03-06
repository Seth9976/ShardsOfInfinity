// 函数名称: ??$common_getdcwd@D@@YAPADHQADHHQBDH@Z
// 虚拟地址: 0x52c309
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*??$common_getdcwd@D@@YAPADHQADHHQBDH@Z(int32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 s< 0)
    if (arg3 s< 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return nullptr
    
    int32_t ebx_1 = arg1
    
    if (ebx_1 == 0)
        ebx_1 = __getdrive()
    else if (is_valid_drive(ebx_1) == 0)
        *___doserrno() = 0xf
        *__errno() = 0xd
        __invalid_parameter_noinfo()
        return nullptr
    
    int16_t var_8
    
    if (ebx_1 == 0)
        var_8 = 0x2e
    else
        ebx_1.b += 0x40
        var_8 = 0x2e3a
        var_8.b = ebx_1.b
        char var_5_1 = 0
    
    int32_t edi
    int32_t var_2c_2 = edi
    void* result
    char* var_20
    
    if (arg2 == 0)
        __builtin_memset(&var_20, 0, 0x15)
        sub_52c1cc(&var_8, &var_20, __acrt_get_utf8_acp_compatibility_codepage())
        uint32_t (* result_1)[0x4] =
            __crt_win32_buffer<char,struct __crt_win32_buffer_public_dynamic_resizing>::detach(&var_20)
        char var_c_1
        int32_t var_18_1
        
        if (var_c_1 != 0)
            _free(var_18_1)
        result = result_1
    else if (arg3 s> 0)
        *arg2 = 0
        var_20 = arg2
        int32_t var_1c_1 = arg3
        char* var_18 = arg2
        int32_t var_14_1 = arg3
        int32_t var_10_1 = 0
        char var_c = 0
        int32_t eax_7 = sub_52c0cd(&var_8, &var_20, __acrt_get_utf8_acp_compatibility_codepage())
        int32_t eax_8 = neg.d(eax_7)
        result = not.d(sbb.d(eax_8, eax_8, eax_7 != 0)) & arg2
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = nullptr
    return result
}
