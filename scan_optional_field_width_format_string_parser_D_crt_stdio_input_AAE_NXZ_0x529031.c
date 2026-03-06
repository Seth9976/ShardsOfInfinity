// 函数名称: ?scan_optional_field_width@?$format_string_parser@D@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x529031
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?scan_optional_field_width@?$format_string_parser@D@__crt_stdio_input@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* esi = arg1
    char* edx = esi[2]
    arg1.b = *edx
    int32_t result
    
    if (arg1.b - 0x30 u<= 9)
        result = sx.d(arg1.b) - 0x30
    else if (arg1.b - 0x61 u<= 0x19)
        result = sx.d(arg1.b) - 0x57
    else if (arg1.b - 0x41 u> 0x19)
        result = 0xffffffff
    else
        result = sx.d(arg1.b) - 0x37
    
    if (result u<= 9)
        var_8 = nullptr
        int32_t edx_1
        result, edx_1 = _strtoumax(&var_8, edx, arg1, edx, &var_8, 0xa)
        int32_t* ecx_2
        
        if ((result | edx_1) != 0)
            ecx_2 = var_8
        
        if ((result | edx_1) == 0 || ecx_2 == esi[2])
            esi[4] = 0
            result.b = 0
            esi[5].w = 0
            *(esi + 0x16) = 0
            esi[6] = 0
            esi[7] = 0
            esi[8] = 0
            esi[9].b = 0
            esi[0xa] = 0
            esi[3] = 0x16
        else
            esi[6] = result
            result.b = 1
            esi[7] = edx_1
            esi[2] = ecx_2
    else
        result.b = 1
    
    return result
}
