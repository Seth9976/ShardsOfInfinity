// 函数名称: ??$parse_floating_point_possible_nan@DV?$c_string_character_source@D@__crt_strtox@@PBD@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$c_string_character_source@D@0@PBD@Z
// 虚拟地址: 0x52cc6a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$parse_floating_point_possible_nan@DV?$c_string_character_source@D@__crt_strtox@@PBD@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$c_string_character_source@D@0@PBD@Z(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_18 = edi
    int32_t i = 0
    int32_t* var_10 = arg2
    char* var_c = arg1
    char* arg_c
    int32_t* var_8 = &arg_c
    char edx = *arg1
    
    do
        if (edx != *(i + &data_54dc78) && edx != *(i + &data_54dc7c))
            <lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()(&var_10)
            return 7
        
        char* eax_1 = *arg2
        edx = *eax_1
        i += 1
        *arg2 = &eax_1[1]
        *arg1 = edx
    while (i != 3)
    
    __crt_strtox::c_string_character_source<char>::unget(arg2, edx)
    char* eax_3 = *arg2
    arg_c = eax_3
    char ecx_1 = *eax_3
    *arg2 = &eax_3[1]
    *arg1 = ecx_1
    
    if (ecx_1 == 0x28)
        char* eax_11 = *arg2
        ecx_1 = *eax_11
        *arg2 = &eax_11[1]
        *arg1 = ecx_1
        
        if (__crt_strtox::parse_floating_point_possible_nan_is_snan<char,class __crt_strtox::c_string_character_source<char> >(
                arg1, arg2) != 0)
            __crt_strtox::c_string_character_source<char>::unget(arg2, *arg1)
            return 5
        
        char eax_15 = __crt_strtox::parse_floating_point_possible_nan_is_ind<char,class __crt_strtox::c_string_character_source<char> >(
            arg1, arg2)
        int32_t* ecx_6
        ecx_6.b = *arg1
        
        if (eax_15 != 0)
            __crt_strtox::c_string_character_source<char>::unget(arg2, ecx_6.b)
            return 6
        
        if (ecx_6.b == 0x29)
            return 4
        
        char edx_1 = ecx_6.b
        
        while (true)
            ecx_6.b = edx_1
            
            if (edx_1 == 0)
                break
            
            ecx_6 = sx.d(edx_1)
            
            if (&ecx_6[-0xc] u> 9 && ecx_6 - 0x61 u> 0x19 && ecx_6 - 0x41 u> 0x19 && ecx_6 != 0x5f)
                goto label_52ccca
            
            char* eax_19 = *arg2
            edx_1 = *eax_19
            *arg2 = &eax_19[1]
            *arg1 = edx_1
            
            if (edx_1 == 0x29)
                ecx_6.b = edx_1
                break
        
        if (ecx_6.b == 0x29)
            return 4
    
    label_52ccca:
    uint32_t eax_6 = zx.d(<lambda_3a2f1c4b88a94fdfdc7bccff06592946>::operator()(&var_10))
    int32_t eax_7 = neg.d(eax_6)
    return (sbb.d(eax_7, eax_7, eax_6 != 0) & 0xfffffffd) + 7
}
