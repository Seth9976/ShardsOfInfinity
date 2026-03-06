// 函数名称: ??$common_vsprintf@Vpositional_parameter_base@__crt_stdio_output@@D@@YAH_KQADIQBDQAU__crt_locale_pointers@@1@Z
// 虚拟地址: 0x51f924
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_vsprintf@Vpositional_parameter_base@__crt_stdio_output@@D@@YAH_KQADIQBDQAU__crt_locale_pointers@@1@Z(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t arg5, int32_t* arg6, char* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* var_abc = arg3
    int32_t result
    
    if (arg5 != 0 && (arg4 == 0 || arg3 != 0))
        int32_t edi
        int32_t var_b00_1 = edi
        void* var_af4
        _LocaleUpdate::_LocaleUpdate(&var_af4, arg6)
        char* var_acc = nullptr
        int32_t var_ac8
        int32_t* edi_1 = &var_ac8
        *edi_1 = 0
        void* edi_2 = &edi_1[1]
        *edi_2 = 0
        *(edi_2 + 4) = 0
        char* edi_5 = var_abc
        int32_t eax_5 = arg1 & 2
        var_acc = edi_5
        var_ac8 = arg4
        int32_t var_ac4_1 = 0
        
        if (eax_5 == 0)
            char var_ac0_1 = 0
        
        if (eax_5 != 0 || edi_5 == 0)
            char var_ac0_2 = 1
        
        int32_t var_ae4 = arg1
        int32_t* var_ad8 = &var_acc
        var_abc = arg7
        void var_af0
        void* var_ad0 = &var_af0
        int32_t var_ae0_1 = arg2
        int32_t var_ad4 = arg5
        void var_ab8
        protected: __thiscall __crt_stdio_output::positional_parameter_base<wchar_t, class __crt_stdio_output::string_output_adapter<wchar_t>>::positional_parameter_base<wchar_t, class __crt_stdio_output::string_output_adapter<wchar_t>><class __crt_stdio_output::string_output_adapter<wchar_t> const &, unsigned __int64 const &, wchar_t const *const &, struct __crt_locale_pointers *const &, char *const &>(class __crt_stdio_output::string_output_adapter<wchar_t> const &, unsigned __int64 const &, wchar_t const *const &, struct __crt_locale_pointers *const &, char *const &)(
            &var_ab8, &var_ad8, &var_ae4, &var_ad4, &var_ad0, &var_abc)
        int32_t result_1 = sub_520a6e(&var_ab8)
        
        if (edi_5 != 0)
            if ((arg1 & 1) == 0)
                if (eax_5 == 0)
                    if (arg4 != 0)
                        if (var_ac4_1 != arg4)
                            edi_5[var_ac4_1] = 0
                        else
                            result_1 = 0xfffffffe
                            edi_5[arg4 - 1] = 0
                    else
                        result_1 = 0xffffffff
                else if (arg4 != 0)
                    if (result_1 s>= 0)
                        if (var_ac4_1 == arg4)
                            edi_5[arg4 - 1] = 0
                        else
                            edi_5[var_ac4_1] = 0
                    else
                        *edi_5 = 0
            else if (arg4 != 0 || result_1 == 0)
                if (var_ac4_1 != arg4)
                    edi_5[var_ac4_1] = 0
                else if (result_1 s>= 0 && result_1 u> arg4)
                    result_1 = 0xffffffff
            else
                result_1 = 0xffffffff
        
        void var_a78
        __crt_stdio_output::formatting_buffer::~formatting_buffer(&var_a78)
        char var_ae8
        
        if (var_ae8 != 0)
            void* ecx_6 = var_af4
            *(ecx_6 + 0x350) &= 0xfffffffd
        
        result = result_1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
