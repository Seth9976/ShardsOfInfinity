// 函数名称: ?get@?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAEDXZ
// 虚拟地址: 0x52876c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall?get@?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAEDXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx_1 = arg1[4]
    int32_t edx_1 = arg1[4]
    int32_t eax = arg1[2]
    int32_t esi_1 = adc.d(arg1[5], 0, edx_1 u>= 0xffffffff)
    arg1[4] = edx_1 + 1
    bool cond:0 = (eax | arg1[3]) == 0
    arg1[5] = esi_1
    
    if (not(cond:0))
        int32_t temp1_1 = arg1[3]
        
        if (esi_1 u>= temp1_1 && (esi_1 u> temp1_1 || edx_1 + 1 u> arg1[2]))
            int32_t eax_1
            eax_1.b = 0
            return eax_1
    
    uint32_t ecx_1 = __crt_stdio_input::string_input_adapter<char>::get(*arg1)
    uint32_t eax_2
    eax_2.b = ecx_1 == 0xffffffff
    eax_2.b -= 1
    eax_2.b &= ecx_1.b
    return eax_2
}
