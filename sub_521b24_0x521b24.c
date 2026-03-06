// 函数名称: sub_521b24
// 虚拟地址: 0x521b24
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_521b24(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int16_t* edi_1 = nullptr
    uint32_t result
    
    if (arg1[0x117] != 1)
        int32_t ecx_2 = arg1[0x2aa]
        
        if (ecx_2 u<= 0x63)
            int32_t ecx_3 = ecx_2 * 2
            
            if (arg1[0x116] != 1)
                edi_1 = *arg1[ecx_3 * 2 + 0x11b]
                result.b = 1
            else
                result = __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> >::validate_and_store_parameter_data(
                    &arg1[0x119 + ecx_3 * 2], 3, zx.d(*(arg1 + 0x31)), arg1[0xb])
            
            if (result.b != 0)
                goto label_521b41
            
            result.b = 0
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result.b = 0
    else
        arg1[5] += 4
        edi_1 = *(arg1[5] - 4)
    label_521b41:
        
        if (__crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::should_format(
                arg1).b != 0)
            int32_t ebx_1
            
            if (edi_1 != 0)
                ebx_1 = *(edi_1 + 4)
            
            void* ecx_1
            
            if (edi_1 == 0 || ebx_1 == 0)
                arg1[0xd] = "(null)"
                ecx_1 = &arg1[0xe]
                result = 6
                arg1[0xf].b = 0
            else
                int32_t var_10_1 = arg1[0xb]
                uint32_t var_14_1 = zx.d(*(arg1 + 0x31))
                char eax_2 = __crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1])
                arg1[0xd] = ebx_1
                ecx_1 = &arg1[0xe]
                result = zx.d(*edi_1)
                
                if (eax_2 == 0)
                    arg1[0xf].b = 0
                else
                    arg1[0xf].b = 1
                    result u>>= 1
            
            *ecx_1 = result
        
        result.b = 1
    
    return result
}
