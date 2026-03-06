// 函数名称: ??$parse_floating_point_possible_nan_is_ind@DV?$input_adapter_character_source@V?$console_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@@__crt_strtox@@YA_NAADAAV?$input_adapter_character_source@V?$console_input_adapter@D@__crt_stdio_input@@@0@@Z
// 虚拟地址: 0x524a2f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$parse_floating_point_possible_nan_is_ind@DV?$input_adapter_character_source@V?$console_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@@__crt_strtox@@YA_NAADAAV?$input_adapter_character_source@V?$console_input_adapter@D@__crt_stdio_input@@@0@@Z(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    
    for (int32_t i = 0; i != 4; )
        char eax = *arg1
        
        if (eax != (*"IND)ind)m")[i] && eax != (*"ind)m")[i])
            return 0
        
        i += 1
        *arg1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >::get(
            arg2)
    
    return 1
}
