// 函数名称: sub_529468
// 虚拟地址: 0x529468
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_529468(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t edx = arg1[4]
    int32_t edx = arg1[4]
    int32_t eax = arg1[2]
    int32_t esi_1 = adc.d(arg1[5], 0xffffffff, edx u>= 1)
    arg1[4] = edx - 1
    int32_t result = eax | arg1[3]
    arg1[5] = esi_1
    
    if (result == 0)
    label_529494:
        result.b = arg2
        
        if (result.b != 0 && result.b != 0xff)
            return __crt_stdio_input::string_input_adapter<char>::unget(*arg1, sx.d(result.b))
    else
        int32_t temp2_1 = arg1[3]
        
        if (esi_1 u<= temp2_1 && (esi_1 u< temp2_1 || edx - 1 u<= arg1[2]))
            goto label_529494
    
    return result
}
