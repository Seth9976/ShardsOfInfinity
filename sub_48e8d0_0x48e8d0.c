// 函数名称: sub_48e8d0
// 虚拟地址: 0x48e8d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __stdcallsub_48e8d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* ebx = data_cdf454
    int32_t* result = *arg1
    int32_t eax = result[2]
    
    if (eax != 0)
        *arg1 = eax
        return result
    
    char* eax_2 = *result
    char* const ecx_1 = &data_5559b1
    
    if (eax_2 != 0)
        ecx_1 = eax_2
    
    int32_t eax_3 = sub_4950a0(ecx_1, 0)
    int32_t ebx_1 = ebx[1]
    int32_t ecx_4 = (ebx_1 & eax_3) + 1
    
    if (ecx_4 u<= ebx_1)
        int32_t* eax_6 = *ebx + (ecx_4 << 2)
        
        do
            int32_t edx_1 = *eax_6
            
            if (edx_1 != 0)
                *arg1 = edx_1
                return result
            
            ecx_4 += 1
            eax_6 = &eax_6[1]
        while (ecx_4 u<= ebx_1)
    
    *arg1 = 0
    return result
}
