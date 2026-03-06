// 函数名称: ?count_newline_bytes@@YA_JQBD0W4__crt_lowio_text_mode@@@Z
// 虚拟地址: 0x52b08f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?count_newline_bytes@@YA_JQBD0W4__crt_lowio_text_mode@@@Z(int32_t arg1 @ edi, char* arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t var_10 = arg1
    int32_t var_10 = arg1
    
    if (arg4 != 1 && arg4 != 2)
        char* ecx = arg2
        int32_t result = 0
        int32_t edx = 0
        int32_t ebx = 0
        void* edi_2 = not.d(sbb.d(arg1, arg1, arg3 u< ecx)) & (arg3 - ecx)
        
        if (edi_2 != 0)
            do
                if (*ecx == 0xa)
                    int32_t result_1 = result
                    result += 1
                    edx = adc.d(edx, 0, result_1 u>= 0xffffffff)
                
                ecx = &ecx[1]
                ebx += 1
            while (ebx != edi_2)
        
        return result
    
    char* esi = arg2
    int32_t ecx_1 = 0
    int32_t edx_1 = 0
    int32_t ebx_1 = 0
    int32_t edi_5 = not.d(sbb.d(arg1, arg1, arg3 u< esi)) & (arg3 - esi + 1) u>> 1
    
    if (edi_5 != 0)
        do
            if (*esi == 0xa)
                int32_t temp2_1 = ecx_1
                ecx_1 += 1
                edx_1 = adc.d(edx_1, 0, temp2_1 u>= 0xffffffff)
            
            esi = &esi[2]
            ebx_1 += 1
        while (ebx_1 != edi_5)
    
    return ecx_1 * 2
}
