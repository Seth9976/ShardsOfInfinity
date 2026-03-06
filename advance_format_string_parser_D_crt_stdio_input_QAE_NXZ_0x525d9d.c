// 函数名称: ?advance@?$format_string_parser@D@__crt_stdio_input@@QAE_NXZ
// 虚拟地址: 0x525d9d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall?advance@?$format_string_parser@D@__crt_stdio_input@@QAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (arg1[3] == 0)
        result = arg1[2]
        arg1[4] = 0
        arg1[5].w = 0
        *(arg1 + 0x16) = 0
        arg1[6] = 0
        arg1[7] = 0
        arg1[8] = 0
        arg1[9].b = 0
        arg1[0xa] = 0
        result.b = *result
        
        if (result.b != 0)
            void* eax_1 = _isspace(result.b)
            char* ecx = arg1[2]
            
            if (eax_1 == 0)
                if (*ecx != 0x25 || ecx[1] == 0x25)
                    arg1[4] = 3
                    eax_1.b = *ecx
                    arg1[5].b = eax_1.b
                    int32_t var_c_3 = 0
                    void* const eax_5
                    eax_5.b = *ecx == 0x25
                    arg1[2] = eax_5 + &ecx[1]
                    return __crt_stdio_input::format_string_parser<char>::scan_optional_literal_character_trail_bytes_tchar(
                        arg1)
                
                arg1[4] = 4
                arg1[2] = &ecx[1]
                
                if (ecx[1] == 0x2a)
                    *(arg1 + 0x16) = 1
                    arg1[2] = &ecx[2]
                
                if (__crt_stdio_input::format_string_parser<char>::scan_optional_field_width(arg1).b
                        == 0)
                    result.b = 0
                else
                    __crt_stdio_input::format_string_parser<char>::scan_optional_length_modifier(arg1)
                    __crt_stdio_input::format_string_parser<char>::scan_optional_wide_modifier(arg1)
                    
                    if (__crt_stdio_input::format_string_parser<char>::scan_conversion_specifier(arg1).b
                            == 0)
                        result.b = 0
                    else if (*(arg1[0xa] * 0xc + arg1[8] + 0x54db10) != 0)
                        result.b = 1
                    else
                        arg1[4] = 0
                        arg1[5].w = 0
                        *(arg1 + 0x16) = 0
                        arg1[6] = 0
                        arg1[7] = 0
                        arg1[8] = 0
                        arg1[9].b = 0
                        arg1[0xa] = 0
                        arg1[3] = 0x16
                        result.b = 0
            else
                arg1[4] = 2
                uint32_t eax_2 = zx.d(*ecx)
                
                while (_isspace(eax_2.b) != 0)
                    arg1[2] += 1
                    eax_2 = zx.d(*arg1[2])
                
                result.b = 1
        else
            arg1[4] = 1
            result.b = 0
    else
        result.b = 0
    
    return result
}
