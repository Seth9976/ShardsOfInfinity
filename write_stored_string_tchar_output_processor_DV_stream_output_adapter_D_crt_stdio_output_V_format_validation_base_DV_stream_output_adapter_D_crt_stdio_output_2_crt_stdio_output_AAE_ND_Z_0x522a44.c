// 函数名称: ?write_stored_string_tchar@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z
// 虚拟地址: 0x522a44
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?write_stored_string_tchar@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_20 = edi
    int32_t result
    
    if (*(arg1 + 0x3c) != 0)
        result = *(arg1 + 0x38)
    
    if (*(arg1 + 0x3c) == 0 || result s<= 0)
        void* var_24_3 = arg1 + 0xc
        void* var_28_2 = arg1 + 0x18
        sub_522b96(arg1 + 0x448, *(arg1 + 0x34), *(arg1 + 0x38))
    else
        int16_t* edi_1 = *(arg1 + 0x34)
        int32_t ebx_1 = 0
        
        if (result != 0)
            while (true)
                int32_t* eax_2 = zx.d(*edi_1)
                edi_1 = &edi_1[1]
                int32_t* var_14 = nullptr
                char var_10
                result = _wctomb_s(&var_14, &var_10, 6, eax_2)
                
                if (result != 0 || var_14 == result)
                    *(arg1 + 0x18) = 0xffffffff
                    break
                
                void* var_24_2 = arg1 + 0xc
                void* var_28_1 = arg1 + 0x18
                sub_522b96(arg1 + 0x448, &var_10, var_14)
                ebx_1 += 1
                
                if (ebx_1 == *(arg1 + 0x38))
                    break
                
                continue
    
    result.b = 1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
