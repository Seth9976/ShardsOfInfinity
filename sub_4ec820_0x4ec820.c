// 函数名称: sub_4ec820
// 虚拟地址: 0x4ec820
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4ec820(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ecx = *arg1
    int32_t* ecx = *arg1
    int32_t* result = *(*arg2 + 4)
    
    if (ecx[1] == 3)
        if (result != 3)
            result.b = 1
            return result
        
        int32_t* eax_1 = sub_454030(ecx)
        int32_t* eax_2 = sub_454030(*arg2)
        int32_t* ecx_2 = *eax_1
        result = *eax_2
        int32_t edx_2 = ecx_2[1] * *ecx_2
        int32_t ecx_4 = result[1] * *result
        
        if (edx_2 s> ecx_4)
            result.b = 1
            return result
        
        if (edx_2 s< ecx_4)
            result.b = 0
            return result
    else if (result == 3)
        result.b = 0
        return result
    
    result.b = arg1 u< arg2
    return result
}
