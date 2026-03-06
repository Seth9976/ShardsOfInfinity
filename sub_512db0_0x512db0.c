// 函数名称: sub_512db0
// 虚拟地址: 0x512db0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint8_t*sub_512db0(uint8_t* arg1, void* arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi = arg4
    uint32_t eax_3 = zx.d(*arg2) * 3 + zx.d(*arg3)
    uint8_t ecx_3 = ((eax_3 + 2) u>> 2).b
    
    if (edi == 1)
        arg1[1] = ecx_3
        *arg1 = ecx_3
        return arg1
    
    int32_t var_8_1 = 1
    *arg1 = ecx_3
    
    if (edi s> 1)
        void* ecx_5 = arg2 - arg3
        void* ebx_1 = &arg3[1]
        arg2 = ecx_5
        int32_t edx_3
        
        do
            ebx_1 += 1
            uint32_t edx_1 = eax_3
            eax_3 = zx.d(*(ecx_5 + ebx_1 - 1)) * 3 + zx.d(*(ebx_1 - 1))
            arg1[(var_8_1 << 1) - 1] = ((eax_3 + ((edx_1 + 4) << 1) + edx_1) u>> 4).b
            edi = arg4
            arg1[var_8_1 << 1] = ((eax_3 * 3 + edx_1 + 8) u>> 4).b
            edx_3 = var_8_1 + 1
            ecx_5 = arg2
            var_8_1 = edx_3
        while (edx_3 s< edi)
    
    arg1[(edi << 1) - 1] = ((eax_3 + 2) u>> 2).b
    return arg1
}
