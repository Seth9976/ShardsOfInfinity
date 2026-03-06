// 函数名称: ?scan_scanset_range@?$format_string_parser@D@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x529258
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcall?scan_scanset_range@?$format_string_parser@D@__crt_stdio_input@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    char* edx = arg1 + 0x2c
    void* result
    
    if (edx != 0)
        int32_t edi
        int32_t var_14_1 = edi
        __builtin_memset(edx, 0, 0x20)
        char* edi_2 = *(arg1 + 8)
        void* eax = edi_2
        int32_t ebx
        ebx.b = *edi_2
        var_8:3.b = ebx.b
        uint32_t ecx
        ecx.b = ebx.b
        
        if (ebx.b == 0x5e)
            edi_2 = &edi_2[1]
            eax = edi_2
            *(arg1 + 8) = edi_2
            ecx.b = *eax
        
        if (ecx.b != 0x5d)
        label_5292cb:
            void* edx_1 = edi_2
            
            while (ecx.b != 0)
                if (ecx.b == 0x2d && edx_1 != edi_2)
                    ebx.b = *(edx_1 + 1)
                
                if (ecx.b != 0x2d || edx_1 == edi_2 || ebx.b == 0x5d)
                    uint32_t edx_4 = zx.d(ecx.b)
                    ecx = edx_4 u>> 3
                    *(ecx + arg1 + 0x2c) |= (1 << ((edx_4 & 7) u% 0x20)).b
                else
                    ebx:1.b = *(edx_1 - 1)
                    
                    if (ebx:1.b u> ebx.b)
                        eax.b = ebx:1.b
                        ebx:1.b = ebx.b
                        ebx.b = eax.b
                    
                    ebx.b += 1
                    
                    while (ebx:1.b != ebx.b)
                        uint32_t edx_2 = zx.d(ebx:1.b)
                        ecx = edx_2 u>> 3
                        ebx:1.b += 1
                        *(ecx + arg1 + 0x2c) |= (1 << ((edx_2 & 7) u% 0x20)).b
                
                eax = *(arg1 + 8) + 1
                edx_1 = eax
                *(arg1 + 8) = eax
                ecx.b = *edx_1
                
                if (ecx.b == 0x5d)
                    break
            
            ebx.b = var_8:3.b
            edx = arg1 + 0x2c
        else
            eax = &edi_2[1]
            *(arg1 + 8) = eax
            edi_2 = eax
            *(arg1 + 0x37) |= 0x20
            ecx.b = *eax
            
            if (ecx.b != 0x5d)
                goto label_5292cb
        
        if (*eax != 0)
            if (ebx.b == 0x5e)
                __crt_stdio_input::scanset_buffer<uint8_t>::invert(edx, arg1)
                eax = *(arg1 + 8)
            
            *(arg1 + 8) = eax + 1
            result.b = 1
        else
            *(arg1 + 0xc) = 0x16
            *(arg1 + 0x10) = 0
            *(arg1 + 0x14) = 0
            *(arg1 + 0x16) = 0
            *(arg1 + 0x18) = 0
            *(arg1 + 0x1c) = 0
            *(arg1 + 0x20) = 0
            *(arg1 + 0x24) = 0
            *(arg1 + 0x28) = 0
            result.b = 0
    else
        *(arg1 + 0x10) = 0
        *(arg1 + 0x14) = 0
        *(arg1 + 0x16) = 0
        *(arg1 + 0x18) = 0
        *(arg1 + 0x1c) = 0
        *(arg1 + 0x20) = 0
        *(arg1 + 0x24) = 0
        *(arg1 + 0x28) = 0
        result.b = 0
        *(arg1 + 0xc) = 0xc
    
    return result
}
