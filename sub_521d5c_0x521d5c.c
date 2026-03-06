// 函数名称: sub_521d5c
// 虚拟地址: 0x521d5c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint8_t __fastcallsub_521d5c(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* var_c = arg1
    arg1[8] |= 0x10
    uint8_t result = sub_5228f8(arg1)
    
    if (result != 0)
        result = __crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::should_format(
            arg1)
        
        if (result == 0)
            return result + 1
        
        int32_t eax = arg1[0xa]
        
        if (eax s< 0)
            eax.b = *(arg1 + 0x31)
            int32_t var_14_1
            
            if (eax.b == 0x61 || eax.b == 0x41)
                var_14_1 = 0xd
            else
                var_14_1 = 6
            
            eax = var_14_1
            arg1[0xa] = eax
        else if (eax == 0)
            int32_t* ecx
            ecx.b = *(arg1 + 0x31)
            
            if (ecx.b != 0x67)
                eax = 0
            
            if (ecx.b == 0x67 || ecx.b == 0x47)
                arg1[0xa] = 1
                eax = 1
        
        int32_t edi
        int32_t var_14_2 = edi
        
        if (__crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(&arg1[0x10], 
                eax + 0x15d) == 0)
            arg1[0xa] = __crt_stdio_output::formatting_buffer::count<char>(&arg1[0x10]) - 0x15d
        
        void* eax_5 = arg1[0x111]
        
        if (eax_5 == 0)
            eax_5 = &arg1[0x10]
        
        var_c = nullptr
        int32_t var_8_1 = 0
        arg1[0xd] = eax_5
        result = __crt_stdio_output::positional_parameter_base<struct _CRT_DOUBLE,struct _CRT_DOUBLE,wchar_t,class __crt_stdio_output::string_output_adapter<wchar_t> >::extract_argument_from_va_list<struct _CRT_DOUBLE,struct _CRT_DOUBLE>(
            arg1, &var_c)
        
        if (result != 0)
            uint32_t eax_6 = __crt_stdio_output::formatting_buffer::count<char>(&arg1[0x10])
            void* ebx_1 = arg1[0x111]
            
            if (ebx_1 == 0)
                ebx_1 = &arg1[0x10]
            
            int32_t var_1c_1 = arg1[2]
            int32_t eax_7 = sx.d(*(arg1 + 0x31))
            int32_t* var_20_1 = arg1[1]
            int32_t var_24_1 = *arg1
            int32_t* var_28_1 = arg1[0xa]
            void* eax_8 = __crt_stdio_output::formatting_buffer::scratch_data<char>(&arg1[0x10])
            ___acrt_fp_format(&var_c, ebx_1, 
                __crt_stdio_output::formatting_buffer::count<char>(&arg1[0x10]), eax_8, eax_6, eax_7, 
                var_28_1, var_24_1, var_20_1)
            
            if (((arg1[8] u>> 5).b & 1) != 0 && arg1[0xa] == 0)
                __crt_stdio_output::force_decimal_point(arg1[0xd], arg1[2])
            
            result = *(arg1 + 0x31)
            
            if ((result == 0x67 || result == 0x47) && ((arg1[8] u>> 5).b & 1) == 0)
                __crt_stdio_output::crop_zeroes(arg1[0xd], arg1[2])
            
            uint8_t* edx_1 = arg1[0xd]
            result = *edx_1
            
            if (result == 0x2d)
                arg1[8] |= 0x40
                edx_1 = &edx_1[1]
                arg1[0xd] = edx_1
                result = *edx_1
            
            if (result == 0x69 || result == 0x49 || result == 0x6e || result == 0x4e)
                arg1[8] &= 0xfffffff7
                *(arg1 + 0x31) = 0x73
            
            uint8_t i
            
            do
                i = *edx_1
                edx_1 = &edx_1[1]
            while (i != 0)
            result = 1
            arg1[0xe] = edx_1 - &edx_1[1]
    
    return result
}
