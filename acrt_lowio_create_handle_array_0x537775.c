// 函数名称: ___acrt_lowio_create_handle_array
// 虚拟地址: 0x537775
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*___acrt_lowio_create_handle_array()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    int32_t edi
    int32_t var_14 = edi
    void* result = __calloc_base(0x40, 0x30)
    
    if (result == 0)
        result = nullptr
    else if (result != result + 0xc00)
        int32_t* esi_1 = result + 0x20
        
        do
            ___acrt_InitializeCriticalSectionEx@12(&esi_1[-8], 0xfa0, 0)
            esi_1[-2] = 0xffffffff
            *esi_1 = 0
            esi_1 = &esi_1[0xc]
            esi_1[-0xb] = 0
            esi_1[-0xa] = 0xa0a0000
            esi_1[-9].b = 0xa
            *(esi_1 - 0x23) &= 0xf8
            *(esi_1 - 0x22) = 0
        while (&esi_1[-8] != result + 0xc00)
    
    __free_base(0)
    return result
}
