// 函数名称: sub_51fe58
// 虚拟地址: 0x51fe58
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __thiscallsub_51fe58(void* arg1, char* arg2)
{
    // 第一条实际指令: char* result
    char* result
    
    if (*(arg1 + 0x45c) != 1)
        int32_t edx_1 = *(arg1 + 0xaa8)
        
        if (edx_1 u<= 0x63)
            int32_t edx_2 = edx_1 * 2
            
            if (*(arg1 + 0x458) == 1)
                return __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> >::validate_and_store_parameter_data(
                    arg1 + 0x464 + (edx_2 << 3), 1, zx.d(*(arg1 + 0x31)), *(arg1 + 0x2c))
            
            arg1.b = **(arg1 + (edx_2 << 3) + 0x46c)
            *arg2 = arg1.b
            result.b = 1
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result.b = 0
    else
        *(arg1 + 0x14) += 4
        *arg2 = *(*(arg1 + 0x14) - 4)
        result.b = 1
    
    return result
}
