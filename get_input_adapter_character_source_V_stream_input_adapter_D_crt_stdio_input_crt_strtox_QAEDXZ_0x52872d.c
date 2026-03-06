// 函数名称: ?get@?$input_adapter_character_source@V?$stream_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAEDXZ
// 虚拟地址: 0x52872d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?get@?$input_adapter_character_source@V?$stream_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@QAEDXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx_1 = arg1[4]
    int32_t edx_1 = arg1[4]
    int32_t eax = arg1[2]
    int32_t esi_1 = adc.d(arg1[5], 0, edx_1 u>= 0xffffffff)
    arg1[4] = edx_1 + 1
    bool cond:0 = (eax | arg1[3]) == 0
    arg1[5] = esi_1
    int32_t result
    
    if (cond:0)
    label_528754:
        int32_t* esi_2 = *arg1
        int32_t var_8_1 = *esi_2
        result = sub_531b7b()
        
        if (result != 0xffffffff)
            esi_2[1] += 1
            return result
    else
        int32_t temp1_1 = arg1[3]
        
        if (esi_1 u< temp1_1)
            goto label_528754
        
        if (esi_1 u<= temp1_1 && edx_1 + 1 u<= arg1[2])
            goto label_528754
    
    result.b = 0
    return result
}
