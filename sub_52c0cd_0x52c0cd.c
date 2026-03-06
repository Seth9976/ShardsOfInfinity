// 函数名称: sub_52c0cd
// 虚拟地址: 0x52c0cd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_52c0cd(uint8_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_210
    void* esi = &var_210
    void* var_448 = &var_210
    int32_t edi
    int32_t var_454 = edi
    void* var_440 = &var_210
    void var_418
    void* var_430 = &var_418
    void* var_428 = &var_418
    int32_t var_444 = 0x104
    int32_t var_43c = 0x104
    int32_t var_438 = 0
    char var_434 = 0
    int32_t var_42c = 0x104
    int32_t var_424 = 0x104
    int32_t var_420 = 0
    int32_t result = __acrt_mbs_to_wcs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(arg1, 0, 
        &var_430, arg1, &var_430, arg3)
    
    if (result == 0)
        int32_t var_458_1 = arg3
        int32_t result_1
        int32_t ecx_1
        int32_t edx_1
        result_1, ecx_1, edx_1 =
            __acrt_get_full_path_name_cp<struct __crt_win32_buffer_public_dynamic_resizing>(var_428, 
            &var_448)
        esi = var_440
        result = result_1
        
        if (result == 0)
            result = sub_52c2cb(result_1, edx_1, ecx_1, esi, arg2, arg3)
    
    if (0 != 0)
        __free_base(var_428)
    
    if (var_434 != 0)
        __free_base(esi)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
