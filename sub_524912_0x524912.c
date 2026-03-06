// 函数名称: sub_524912
// 虚拟地址: 0x524912
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_524912(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_1c = edi
    int32_t i = 0
    int32_t* var_10 = arg2
    char* var_c = arg1
    int32_t arg_c
    int32_t* var_8 = &arg_c
    char eax_1
    
    do
        eax_1 = *arg1
        
        if (eax_1 != *(i + &data_54dba0) && eax_1 != *(i + &data_54dba4))
            <lambda_1d4abb0629169a79429c5bf3ec592ce5>::operator()(&var_10)
            return 7
        
        eax_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        i += 1
        *arg1 = eax_1
    while (i != 3)
    
    sub_529468(arg2, eax_1)
    arg_c = arg2[4]
    int32_t arg_10 = arg2[5]
    char eax_4 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)
    *arg1 = eax_4
    
    if (eax_4 == 0x28)
        *arg1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        
        if (__crt_strtox::parse_floating_point_possible_nan_is_ind<char,class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> > >(
                arg1, arg2) != 0)
            sub_529468(arg2, *arg1)
            return 5
        
        char eax_14 = __crt_strtox::parse_floating_point_possible_nan_is_ind<char,class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> > >(
            arg1, arg2)
        char ecx_9 = *arg1
        
        if (eax_14 != 0)
            sub_529468(arg2, ecx_9)
            return 6
        
        if (ecx_9 == 0x29)
            return 4
        
        eax_14 = ecx_9
        
        while (true)
            if (eax_14 == 0)
                if (eax_14 != 0x29)
                    break
                
                return 4
            
            int32_t ecx_11 = sx.d(eax_14)
            
            if (ecx_11 - 0x30 u> 9 && ecx_11 - 0x61 u> 0x19 && ecx_11 - 0x41 u> 0x19 && ecx_11 != 0x5f)
                break
            
            eax_14 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                arg2)
            *arg1 = eax_14
            
            if (eax_14 == 0x29)
                return 4
    
    uint32_t eax_6 = zx.d(<lambda_1d4abb0629169a79429c5bf3ec592ce5>::operator()(&var_10))
    int32_t eax_7 = neg.d(eax_6)
    return (sbb.d(eax_7, eax_7, eax_6 != 0) & 0xfffffffd) + 7
}
