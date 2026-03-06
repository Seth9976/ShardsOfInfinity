// 函数名称: ?type_case_a@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x521c03
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint8_t __fastcall?type_case_a@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* var_c = arg1
    int32_t* esi = arg1
    int32_t edi
    int32_t var_14 = edi
    esi[8] |= 0x10
    int32_t __saved_ebx_5 = esi[0xa]
    
    if (__saved_ebx_5 s< 0)
        __saved_ebx_5.b = *(esi + 0x31)
        int32_t __saved_ebx_1
        
        if (__saved_ebx_5.b == 0x61 || __saved_ebx_5.b == 0x41)
            __saved_ebx_1 = 0xd
        else
            __saved_ebx_1 = 6
        
        __saved_ebx_5 = __saved_ebx_1
        esi[0xa] = __saved_ebx_5
    else if (__saved_ebx_5 == 0)
        arg1.b = *(esi + 0x31)
        
        if (arg1.b != 0x67)
            __saved_ebx_5 = 0
        
        if (arg1.b == 0x67 || arg1.b == 0x47)
            esi[0xa] = 1
            __saved_ebx_5 = 1
    
    if (__crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(&esi[0x10], 
            __saved_ebx_5 + 0x15d) == 0)
        esi[0xa] = __crt_stdio_output::formatting_buffer::count<char>(&esi[0x10]) - 0x15d
    
    void* eax_4 = esi[0x111]
    
    if (eax_4 == 0)
        eax_4 = &esi[0x10]
    
    var_c = nullptr
    int32_t var_8_1 = 0
    esi[0xd] = eax_4
    esi[5] += 8
    void* ecx_2 = esi[5]
    var_c = *(ecx_2 - 8)
    int32_t var_8_2 = *(ecx_2 - 4)
    uint32_t eax_7 = __crt_stdio_output::formatting_buffer::count<char>(&esi[0x10])
    void* ebx = esi[0x111]
    
    if (ebx == 0)
        ebx = &esi[0x10]
    
    int32_t var_1c = esi[2]
    int32_t eax_8 = sx.d(*(esi + 0x31))
    int32_t* var_20 = esi[1]
    int32_t var_24 = *esi
    int32_t* var_28 = esi[0xa]
    void* eax_9 = __crt_stdio_output::formatting_buffer::scratch_data<char>(&esi[0x10])
    ___acrt_fp_format(&var_c, ebx, __crt_stdio_output::formatting_buffer::count<char>(&esi[0x10]), 
        eax_9, eax_7, eax_8, var_28, var_24, var_20)
    
    if (((esi[8] u>> 5).b & 1) != 0 && esi[0xa] == 0)
        __crt_stdio_output::force_decimal_point(esi[0xd], esi[2])
    
    uint8_t eax_12 = *(esi + 0x31)
    
    if ((eax_12 == 0x67 || eax_12 == 0x47) && ((esi[8] u>> 5).b & 1) == 0)
        __crt_stdio_output::crop_zeroes(esi[0xd], esi[2])
    
    uint8_t* edx = esi[0xd]
    eax_12 = *edx
    
    if (eax_12 == 0x2d)
        esi[8] |= 0x40
        edx = &edx[1]
        esi[0xd] = edx
        eax_12 = *edx
    
    if (eax_12 == 0x69 || eax_12 == 0x49 || eax_12 == 0x6e || eax_12 == 0x4e)
        esi[8] &= 0xfffffff7
        *(esi + 0x31) = 0x73
    
    uint8_t i
    
    do
        i = *edx
        edx = &edx[1]
    while (i != 0)
    esi[0xe] = edx - &edx[1]
    return 1
}
