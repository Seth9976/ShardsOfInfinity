// 函数名称: ?validate_and_update_state_at_end_of_format_string@?$positional_parameter_base@_WV?$stream_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ
// 虚拟地址: 0x522873
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?validate_and_update_state_at_end_of_format_string@?$positional_parameter_base@_WV?$stream_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ(void* arg1)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (__crt_stdio_output::format_validation_base<wchar_t,class __crt_stdio_output::stream_output_adapter<wchar_t> >::validate_and_update_state_at_end_of_format_string(
            arg1).b != 0)
        void* ecx
        void* edx_2
        
        if (*(arg1 + 0x45c) == 2 && *(arg1 + 0x458) == 1)
            ecx = arg1 + 0x464
            edx_2 = arg1 + 0x474 + (*(arg1 + 0xaa4) << 4)
        
        if (*(arg1 + 0x45c) != 2 || *(arg1 + 0x458) != 1 || ecx == edx_2)
        label_5228e2:
            result.b = 1
            return result
        
        result = *(arg1 + 0x14)
        
        while (true)
            *(ecx + 8) = result
            int32_t eax_1 = *ecx
            
            if (eax_1 == 1)
                *(arg1 + 0x14) += 4
            else if (eax_1 == 2)
                *(arg1 + 0x14) += 8
            else if (eax_1 == 3)
                *(arg1 + 0x14) += 4
            else
                if (eax_1 != 4)
                    *__errno() = 0x16
                    __invalid_parameter_noinfo()
                    break
                
                *(arg1 + 0x14) += 8
            
            result = *(arg1 + 0x14)
            ecx += 0x10
            
            if (ecx == edx_2)
                goto label_5228e2
    
    result.b = 0
    return result
}
