// 函数名称: ??$parse_floating_point_possible_infinity@DV?$c_string_character_source@D@__crt_strtox@@PBD@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$c_string_character_source@D@0@PBD@Z
// 虚拟地址: 0x52cbc6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$parse_floating_point_possible_infinity@DV?$c_string_character_source@D@__crt_strtox@@PBD@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$c_string_character_source@D@0@PBD@Z(char* arg1, int32_t* arg2, char* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edx = 0
    int32_t edi
    int32_t var_14 = edi
    ecx.b = *arg1
    void* eax
    eax.b = ecx.b
    int32_t result = 3
    
    while (true)
        char* eax_6
        
        if (ecx.b != *(edx + &data_54dc60) && ecx.b != *(edx + &data_54dc64))
            __crt_strtox::c_string_character_source<char>::unget(arg2, eax.b)
            eax_6 = arg3
            result = 7
        label_52cc63:
            *arg1 = 0
            *arg2 = eax_6
            break
        
        char* eax_1 = *arg2
        ecx.b = *eax_1
        edx += 1
        *arg2 = &eax_1[1]
        *arg1 = ecx.b
        eax.b = ecx.b
        
        if (edx == 3)
            __crt_strtox::c_string_character_source<char>::unget(arg2, ecx.b)
            char* eax_2 = *arg2
            char ecx_2 = *eax_2
            *arg2 = &eax_2[1]
            int32_t i = 0
            *arg1 = ecx_2
            void* eax_3
            eax_3.b = ecx_2
            
            do
                if (ecx_2 != (*"INITY")[i] && ecx_2 != (*"inity")[i])
                    __crt_strtox::c_string_character_source<char>::unget(arg2, eax_3.b)
                    eax_6 = eax_2
                    goto label_52cc63
                
                char* eax_4 = *arg2
                ecx_2 = *eax_4
                i += 1
                *arg2 = &eax_4[1]
                *arg1 = ecx_2
                eax_3.b = ecx_2
            while (i != 5)
            
            __crt_strtox::c_string_character_source<char>::unget(arg2, ecx_2)
            break
    
    return result
}
