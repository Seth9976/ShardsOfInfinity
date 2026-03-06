// 函数名称: sub_524734
// 虚拟地址: 0x524734
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_524734(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t i_1 = 0
    int32_t i_1 = 0
    int32_t arg_c
    int32_t* var_c = &arg_c
    int32_t edi
    int32_t var_20 = edi
    int32_t i = 0
    int32_t* var_14 = arg2
    char* var_10 = arg1
    int32_t i_2 = 0
    char eax
    
    do
        char ecx = *arg1
        
        if (ecx != *(i + &data_54db88) && ecx != *(i + &data_54db8c))
            <lambda_1d4abb0629169a79429c5bf3ec592ce5>::operator()(&var_14)
            return 7
        
        eax = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        i = i_2 + 1
        *arg1 = eax
        i_2 = i
    while (i != 3)
    
    sub_529468(arg2, eax)
    arg_c = arg2[4]
    int32_t arg_10 = arg2[5]
    *arg1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
        arg2)
    char eax_4
    
    do
        eax_4 = *arg1
        
        if (eax_4 != (*"INITY")[i_1] && eax_4 != (*"inity")[i_1])
            int32_t ecx_8
            ecx_8.b = <lambda_1d4abb0629169a79429c5bf3ec592ce5>::operator()(&var_14) == 0
            return (ecx_8 << 2) + 3
        
        eax_4 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            arg2)
        i_1 += 1
        *arg1 = eax_4
    while (i_1 != 5)
    
    sub_529468(arg2, eax_4)
    return 3
}
