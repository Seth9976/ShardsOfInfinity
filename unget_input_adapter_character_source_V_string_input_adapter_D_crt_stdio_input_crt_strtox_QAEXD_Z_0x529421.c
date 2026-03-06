// 函数名称: ?unget@?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAEXD@Z
// 虚拟地址: 0x529421
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall?unget@?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAEXD@Z(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t edx = arg1[4]
    int32_t edx = arg1[4]
    int32_t eax = arg1[2]
    int32_t esi_1 = adc.d(arg1[5], 0xffffffff, edx u>= 1)
    arg1[4] = edx - 1
    int32_t result = eax | arg1[3]
    arg1[5] = esi_1
    
    if (result == 0)
    label_52944d:
        result.b = arg2
        
        if (result.b != 0 && result.b != 0xff)
            return __crt_stdio_input::stream_input_adapter<char>::unget(*arg1, sx.d(result.b))
    else
        int32_t temp2_1 = arg1[3]
        
        if (esi_1 u<= temp2_1 && (esi_1 u< temp2_1 || edx - 1 u<= arg1[2]))
            goto label_52944d
    
    return result
}
