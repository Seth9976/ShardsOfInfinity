// 函数名称: sub_418790
// 虚拟地址: 0x418790
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_418790(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* result = arg4
    int32_t* result = arg4
    result[0x3c] = *(arg3 + 0x24)
    result[0x3a] = *(arg3 + 0x1c)
    result[0x3b] = *(arg3 + 0x20)
    result[0x40] = *(arg3 + 0x28)
    result[0x3d] = *(arg3 + 0x2c)
    result[0x3e] = *(arg3 + 0x14)
    result[0x3f] = *(arg3 + 0x10)
    result[0x41] = *(arg3 + 0x30)
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *result = performanceCount
    int32_t var_8
    result[1] = var_8
    int32_t eax_10 = *(arg3 + 0x34)
    result[0x39] = eax_10
    arg4 = nullptr
    
    if (eax_10 s> 0)
        int32_t edx = 0
        void* edi_1 = &result[2]
        int32_t var_8_1 = 0
        void* i
        
        do
            _strncpy(edi_1, *(edx + *(arg3 + 0x38) + 0x10), 0x10)
            *(edi_1 + 0xf) = 0
            *(edi_1 + 0x10) = *(var_8_1 + *(arg3 + 0x38) + 0x18)
            *(edi_1 + 0x18) = *(var_8_1 + *(arg3 + 0x38) + 8)
            *(edi_1 + 0x14) = *(var_8_1 + *(arg3 + 0x38) + 4)
            *(edi_1 + 0x20) = *(var_8_1 + *(arg3 + 0x38) + 0x1c)
            *(edi_1 + 0x24) = *(var_8_1 + *(arg3 + 0x38) + 0x24)
            *(edi_1 + 0x28) = *(var_8_1 + *(arg3 + 0x38) + 0x28)
            i = arg4 + 1
            arg4 = i
            edx = var_8_1 + 0x30
            *(edi_1 + 0x1c) = *(var_8_1 + *(arg3 + 0x38) + 0x20)
            edi_1 += 0x2c
            var_8_1 = edx
        while (i s< result[0x39])
    
    return result
}
