// 函数名称: ?find_or_allocate_unused_stream_nolock@@YA?AV__crt_stdio_stream@@XZ
// 虚拟地址: 0x531456
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*?find_or_allocate_unused_stream_nolock@@YA?AV__crt_stdio_stream@@XZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    int32_t* edi_2 = data_65a3c8 + 0xc
    void* ebx_2 = &edi_2[data_65a3c4 - 3]
    void* var_8_1 = ebx_2
    int32_t* result
    
    while (true)
        if (edi_2 != ebx_2)
            void* esi_1 = *edi_2
            
            if (esi_1 != 0)
                if (((*(esi_1 + 0xc) u>> 0xd).b & 1) != 0)
                    edi_2 = &edi_2[1]
                    continue
                else
                    __lock_file(esi_1)
                    int32_t eax_3 = *(esi_1 + 0xc)
                    bool z_1
                    
                    do
                        if (eax_3 == *(esi_1 + 0xc))
                            *(esi_1 + 0xc) = eax_3 | 0x2000
                            z_1 = true
                        else
                            eax_3 = *(esi_1 + 0xc)
                            z_1 = false
                    while (not(z_1))
                    ebx_2 = var_8_1
                    
                    if ((not.b((eax_3 u>> 0xd).b) & 1) == 0)
                        __unlock_file(esi_1)
                        edi_2 = &edi_2[1]
                        continue
                
                goto label_5314cb
            
            *edi_2 = __calloc_base(1, 0x38)
            __free_base(0)
            void* eax_6 = *edi_2
            
            if (eax_6 != 0)
                *(eax_6 + 0x10) = 0xffffffff
                ___acrt_InitializeCriticalSectionEx@12(*edi_2 + 0x20, 0xfa0, 0)
                esi_1 = *edi_2
                *(esi_1 + 0xc) |= 0x2000
                __lock_file(esi_1)
            label_5314cb:
                result = arg1
                *result = esi_1
                break
        
        result = arg1
        *result = 0
        break
    
    return result
}
