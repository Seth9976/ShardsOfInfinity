// 函数名称: ?scan_optional_length_modifier@?$format_string_parser@D@__crt_stdio_input@@AAEXXZ
// 虚拟地址: 0x5290d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall?scan_optional_length_modifier@?$format_string_parser@D@__crt_stdio_input@@AAEXXZ(void* arg1)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    char* esi = *(edx + 8)
    uint32_t result = zx.d(*esi)
    
    if (result u> 0x6a)
        if (result == 0x6c)
            result = &esi[1]
            
            if (*result != 0x6c)
                *(edx + 0x20) = 3
            else
                result = &esi[2]
                *(edx + 0x20) = 4
            
            *(edx + 8) = result
            return result
        
        if (result == 0x74)
            result = &esi[1]
            *(edx + 0x20) = 7
            *(edx + 8) = result
            return result
        
        if (result != 0x7a)
            return result
        
        result = &esi[1]
        *(edx + 0x20) = 6
        *(edx + 8) = result
        return result
    
    if (result == 0x6a)
        result = &esi[1]
        *(edx + 0x20) = 5
        *(edx + 8) = result
        return result
    
    if (result != 0x49)
        if (result == 0x4c)
            result = &esi[1]
            *(edx + 0x20) = 8
            *(edx + 8) = result
            return result
        
        if (result == 0x54)
            result = &esi[1]
            *(edx + 0x20) = 0xb
            *(edx + 8) = result
            return result
        
        if (result != 0x68)
            return result
        
        arg1.b = esi[1]
        void* const eax
        eax.b = arg1.b == 0x68
        *(edx + 8) = eax + 1 + esi
        int32_t eax_3
        eax_3.b = arg1.b != 0x68
        *(edx + 0x20) = eax_3 + 1
        return eax_3 + 1
    
    result.b = esi[1]
    
    if (result.b != 0x33)
        if (result.b == 0x36 && esi[2] == 0x34)
            result = &esi[3]
            *(edx + 0x20) = 0xa
            *(edx + 8) = result
            return result
    else if (esi[2] == 0x32)
        result = &esi[3]
        *(edx + 0x20) = 9
        *(edx + 8) = result
        return result
    
    if (result.b != 0x64 && result.b != 0x69 && result.b != 0x6f && result.b != 0x75 && result.b != 0x78
            && result.b != 0x58)
        return result
    
    *(edx + 8) = &esi[1]
    *(edx + 0x20) = 9
    return result
}
