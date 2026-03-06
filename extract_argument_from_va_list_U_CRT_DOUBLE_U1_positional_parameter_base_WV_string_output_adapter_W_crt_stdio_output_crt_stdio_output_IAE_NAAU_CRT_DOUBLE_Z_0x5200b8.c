// 函数名称: ??$extract_argument_from_va_list@U_CRT_DOUBLE@@U1@@?$positional_parameter_base@_WV?$string_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IAE_NAAU_CRT_DOUBLE@@@Z
// 虚拟地址: 0x5200b8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscall??$extract_argument_from_va_list@U_CRT_DOUBLE@@U1@@?$positional_parameter_base@_WV?$string_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IAE_NAAU_CRT_DOUBLE@@@Z(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    
    if (*(arg1 + 0x45c) != 1)
        int32_t edx_1 = *(arg1 + 0xaa8)
        
        if (edx_1 u<= 0x63)
            int32_t edx_2 = edx_1 * 2
            
            if (*(arg1 + 0x458) == 1)
                return __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> >::validate_and_store_parameter_data(
                    arg1 + 0x464 + (edx_2 << 3), 4, zx.d(*(arg1 + 0x31)), *(arg1 + 0x2c))
            
            int32_t* eax_4 = *(arg1 + (edx_2 << 3) + 0x46c)
            int32_t edx_3 = eax_4[1]
            *arg2 = *eax_4
            arg2[1] = edx_3
            result.b = 1
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result.b = 0
    else
        *(arg1 + 0x14) += 8
        void* ecx = *(arg1 + 0x14)
        int32_t edx = *(ecx - 8)
        arg2[1] = *(ecx - 4)
        *arg2 = edx
        result.b = 1
    
    return result
}
