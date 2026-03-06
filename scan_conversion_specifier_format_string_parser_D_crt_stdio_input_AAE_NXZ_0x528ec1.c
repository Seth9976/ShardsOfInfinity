// 函数名称: ?scan_conversion_specifier@?$format_string_parser@D@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x528ec1
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall?scan_conversion_specifier@?$format_string_parser@D@__crt_stdio_input@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: char* ecx = *(arg1 + 8)
    char* ecx = *(arg1 + 8)
    uint32_t result = zx.d(*ecx)
    
    if (result u> 0x64)
        if (result u> 0x70)
            if (result == 0x73)
            label_52901d:
                __crt_stdio_input::format_string_parser<char>::set_wide_for_c_s_or_scanset(arg1)
                *(arg1 + 0x28) = 1
                *(arg1 + 8) += 1
                result.b = 1
            else
                if (result != 0x75)
                    if (result == 0x78)
                        goto label_528fd0
                    
                    goto label_528feb
                
                *(arg1 + 0x28) = 5
                *(arg1 + 8) = &ecx[1]
                result.b = 1
        else if (result == 0x70)
            *(arg1 + 0x20) = 9
        label_528fd0:
            *(arg1 + 0x28) = 6
            *(arg1 + 8) = &ecx[1]
            result.b = 1
        else if (result u< 0x65)
        label_528feb:
            *(arg1 + 0xc) = 0x16
            *(arg1 + 0x10) = 0
            result.b = 0
            *(arg1 + 0x14) = 0
            *(arg1 + 0x16) = 0
            *(arg1 + 0x18) = 0
            *(arg1 + 0x1c) = 0
            *(arg1 + 0x20) = 0
            *(arg1 + 0x24) = 0
            *(arg1 + 0x28) = 0
        else if (result u<= 0x67)
        label_528fc0:
            *(arg1 + 0x28) = 7
            *(arg1 + 8) = &ecx[1]
            result.b = 1
        else if (result == 0x69)
        label_528f10:
            *(arg1 + 0x28) = 2
            *(arg1 + 8) = &ecx[1]
            result.b = 1
        else if (result == 0x6e)
            *(arg1 + 0x28) = 9
            *(arg1 + 8) = &ecx[1]
            result.b = 1
        else
            if (result != 0x6f)
                goto label_528feb
            
            *(arg1 + 0x28) = 4
            *(arg1 + 8) = &ecx[1]
            result.b = 1
    else if (result == 0x64)
        *(arg1 + 0x28) = 3
        *(arg1 + 8) = &ecx[1]
        result.b = 1
    else
        if (result u> 0x53)
            if (result == 0x58)
                goto label_528fd0
            
            if (result == 0x5b)
                __crt_stdio_input::format_string_parser<char>::set_wide_for_c_s_or_scanset(arg1)
                *(arg1 + 8) += 1
                *(arg1 + 0x28) = 8
                return __crt_stdio_input::format_string_parser<char>::scan_scanset_range(arg1)
                    __tailcall
            
            if (result == 0x61)
                goto label_528fc0
            
            if (result != 0x63)
                goto label_528feb
            
            goto label_528f43
        
        if (result == 0x53)
            goto label_52901d
        
        if (result == 0x41)
            goto label_528fc0
        
        if (result != 0x43)
            if (result u<= 0x44)
                goto label_528feb
            
            if (result u<= 0x47)
                goto label_528fc0
            
            if (result != 0x49)
                goto label_528feb
            
            goto label_528f10
        
    label_528f43:
        
        if ((*(arg1 + 0x18) | *(arg1 + 0x1c)) == 0)
            *(arg1 + 0x18) = 1
            *(arg1 + 0x1c) = 0
        
        __crt_stdio_input::format_string_parser<char>::set_wide_for_c_s_or_scanset(arg1)
        *(arg1 + 0x28) = 0
        *(arg1 + 8) += 1
        result.b = 1
    
    return result
}
