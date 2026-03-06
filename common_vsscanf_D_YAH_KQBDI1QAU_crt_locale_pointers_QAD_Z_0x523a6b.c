// 函数名称: ??$common_vsscanf@D@@YAH_KQBDI1QAU__crt_locale_pointers@@QAD@Z
// 虚拟地址: 0x523a6b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_vsscanf@D@@YAH_KQBDI1QAU__crt_locale_pointers@@QAD@Z(int32_t arg1, int32_t arg2, char* arg3, void* arg4, int32_t arg5, int32_t* arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_a0 = edi
    int32_t result
    
    if (arg3 != 0 && arg5 != 0)
        void invalid
        void* eax_3 = _strnlen(invalid, arg3, arg4)
        void* var_9c
        _LocaleUpdate::_LocaleUpdate(&var_9c, arg6)
        char* var_8c = arg3
        void* var_88_1 = arg3 + eax_3
        char* var_84_1 = arg3
        void var_98
        void var_80
        __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >(
            &var_80, &var_8c, arg1, arg2, arg5, &var_98, arg7)
        result = __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process(
            &var_80)
        char var_90
        
        if (var_90 != 0)
            void* ecx_4 = var_9c
            *(ecx_4 + 0x350) &= 0xfffffffd
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
