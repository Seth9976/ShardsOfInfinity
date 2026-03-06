// 函数名称: ??$common_vsprintf@Vstandard_base@__crt_stdio_output@@D@@YAH_KQADIQBDQAU__crt_locale_pointers@@1@Z
// 虚拟地址: 0x51fad6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_vsprintf@Vstandard_base@__crt_stdio_output@@D@@YAH_KQADIQBDQAU__crt_locale_pointers@@1@Z(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_464 = arg3
    int32_t result
    
    if (arg5 != 0 && (arg4 == 0 || arg3 != 0))
        int32_t edi
        int32_t var_494_1 = edi
        void* var_488
        _LocaleUpdate::_LocaleUpdate(&var_488, arg6)
        int32_t* var_474 = nullptr
        int32_t var_470
        int32_t* edi_1 = &var_470
        *edi_1 = 0
        void* edi_2 = &edi_1[1]
        *edi_2 = 0
        *(edi_2 + 4) = 0
        int32_t* edi_5 = var_464
        int32_t eax_5 = arg1 & 2
        int32_t var_478 = eax_5
        var_474 = edi_5
        var_470 = arg4
        int32_t var_46c_1 = 0
        
        if (eax_5 == 0)
            char var_468_1 = 0
        
        if (eax_5 != 0 || edi_5 == 0)
            char var_468_2 = 1
        
        var_464 = &var_474
        void var_484
        void var_460
        __crt_stdio_output::output_adapter_data<char,class __crt_stdio_output::string_output_adapter<char> >::output_adapter_data<char,class __crt_stdio_output::string_output_adapter<char> >(
            &var_460, &var_464, arg1, arg2, arg5, &var_484, arg7)
        int32_t var_10_1 = 0
        int32_t result_1 = sub_520bca(&var_460)
        
        if (edi_5 != 0)
            if ((arg1 & 1) == 0)
                if (var_478 == 0)
                    if (arg4 != 0)
                        if (var_46c_1 != arg4)
                            *(edi_5 + var_46c_1) = 0
                        else
                            result_1 = 0xfffffffe
                            *(edi_5 + arg4 - 1) = 0
                    else
                        result_1 = 0xffffffff
                else if (arg4 != 0)
                    if (result_1 s>= 0)
                        if (var_46c_1 == arg4)
                            *(edi_5 + arg4 - 1) = 0
                        else
                            *(edi_5 + var_46c_1) = 0
                    else
                        *edi_5 = 0
            else if (arg4 != 0 || result_1 == 0)
                if (var_46c_1 != arg4)
                    *(edi_5 + var_46c_1) = 0
                else if (result_1 s>= 0 && result_1 u> arg4)
                    result_1 = 0xffffffff
            else
                result_1 = 0xffffffff
        
        void var_420
        __crt_stdio_output::formatting_buffer::~formatting_buffer(&var_420)
        char var_47c
        
        if (var_47c != 0)
            void* ecx_6 = var_488
            *(ecx_6 + 0x350) &= 0xfffffffd
        
        result = result_1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
