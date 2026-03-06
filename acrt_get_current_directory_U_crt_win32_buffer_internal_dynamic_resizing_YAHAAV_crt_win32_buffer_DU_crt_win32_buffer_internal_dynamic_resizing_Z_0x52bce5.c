// 函数名称: ??$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z
// 虚拟地址: 0x52bce5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x224
    int32_t __saved_ebp_1 = 0x224
    int32_t (* var_c)(void* arg1) = __ehhandler$??$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_4 = __security_cookie ^ &__saved_ebp
    int32_t var_244 = eax_4
    void* const var_248_2 = &data_52bcf4
    int32_t var_8_1 = 0xffffffff
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_21c
    void* var_234 = &var_21c
    int32_t var_230 = 0x104
    void* var_22c = &var_21c
    int32_t var_228 = 0x104
    int32_t var_224 = 0
    char var_220 = 0
    int32_t var_8 = 0
    int32_t result =
        __acrt_get_current_directory<struct __crt_win32_buffer_internal_dynamic_resizing>(&var_234)
    
    if (result == 0)
        result =
            __acrt_mbs_to_wcs<struct __crt_win32_buffer_internal_dynamic_resizing>(var_22c, arg1, 0)
    
    if (var_220 != 0)
        __free_base(var_22c)
    
    @__security_check_cookie@4(eax_4 ^ &__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_52bd6c
    return result
}
