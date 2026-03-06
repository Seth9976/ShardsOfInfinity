// 函数名称: ___acrt_initialize_stdio
// 虚拟地址: 0x52baf8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_initialize_stdio()
{
    // 第一条实际指令: int32_t eax = data_65a3c4
    int32_t eax = data_65a3c4
    
    if (eax == 0)
        eax = 0x200
        data_65a3c4 = eax
    else if (eax s< 3)
        eax = 3
        data_65a3c4 = eax
    
    data_65a3c8 = __calloc_base(eax, 4)
    __free_base(0)
    
    if (data_65a3c8 == 0)
        data_65a3c4 = 3
        data_65a3c8 = __calloc_base(3, 4)
        __free_base(0)
        
        if (data_65a3c8 == 0)
            return 0xffffffff
    
    int32_t edi = 0
    
    for (void* i = &data_5b00c0; i != 0x5b0168; )
        ___acrt_InitializeCriticalSectionEx@12(i + 0x20, 0xfa0, 0)
        *(data_65a3c8 + (edi << 2)) = i
        int32_t eax_9 = *((&data_65a778)[edi s>> 6] + (edi & 0x3f) * 0x30 + 0x18)
        
        if (eax_9 == 0xffffffff || eax_9 == 0xfffffffe || eax_9 == 0)
            *(i + 0x10) = 0xfffffffe
        
        i += 0x38
        edi += 1
    
    return 0
}
