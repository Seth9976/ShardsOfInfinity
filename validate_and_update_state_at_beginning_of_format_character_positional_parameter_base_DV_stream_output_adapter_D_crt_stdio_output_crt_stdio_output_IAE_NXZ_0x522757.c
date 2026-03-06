// 函数名称: ?validate_and_update_state_at_beginning_of_format_character@?$positional_parameter_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ
// 虚拟地址: 0x522757
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcall?validate_and_update_state_at_beginning_of_format_character@?$positional_parameter_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@IAE_NXZ(char* arg1)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    char* var_c = arg1
    char* esi = arg1
    char* result
    
    if (*(esi + 0x1c) != 1)
        result.b = 1
    else
        result = *(esi + 0x10)
        arg1.b = *result
        
        if (arg1.b == 0x25)
            result.b = 1
        else
            int32_t edx_1 = *(esi + 0x45c)
            
            if (edx_1 != 0)
                goto label_5227e9
            
            var_8 &= edx_1
            
            if (arg1.b s< 0x30 || arg1.b s> 0x39)
                *(esi + 0x45c) = 1
                edx_1 = 1
            label_5227e9:
                
                if (edx_1 != 2)
                    result.b = 1
                else
                label_5227ee:
                    var_c = nullptr
                    int32_t eax_1 = _strtol(result, edx_1, &var_c, result, &var_c, 0xa)
                    char* edx_2 = var_c
                    char* result_1 = eax_1 - 1
                    *(esi + 0xaa8) = result_1
                    *(esi + 0x10) = &edx_2[1]
                    
                    if (*(esi + 0x458) != 1)
                        result.b = 1
                    else if (result_1 s< 0 || *edx_2 != 0x24 || result_1 s>= 0x64)
                        *__errno() = 0x16
                        __invalid_parameter_noinfo()
                        result.b = 0
                    else
                        result = *(esi + 0xaa4)
                        
                        if (result_1 s<= result)
                            result_1 = result
                        
                        *(esi + 0xaa4) = result_1
                        result.b = 1
            else
                result, edx_1 = _strtol(result, edx_1, &var_8, result, &var_8, 0xa)
                
                if (result s> 0 && *var_8 == 0x24)
                    if (*(esi + 0x458) == 1)
                        edx_1 = _memset(&esi[0x464], 0, 0x640)
                    
                    result = *(esi + 0x10)
                    *(esi + 0x45c) = 2
                    goto label_5227ee
                
                *(esi + 0x45c) = 1
                result.b = 1
    
    return result
}
