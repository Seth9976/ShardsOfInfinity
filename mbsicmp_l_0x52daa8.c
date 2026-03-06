// 函数名称: __mbsicmp_l
// 虚拟地址: 0x52daa8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__mbsicmp_l(char* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_30 = edi
    void* var_24
    _LocaleUpdate::_LocaleUpdate(&var_24, arg3)
    char* ebx = arg1
    char* edi_1
    
    if (ebx != 0)
        edi_1 = arg2
    
    uint32_t result
    
    if (ebx != 0 && edi_1 != 0)
        void* var_1c
        void* ecx_1 = var_1c
        result = 0
        void var_20
        
        if (*(ecx_1 + 8) != 0)
            while (true)
                uint16_t edx_1 = zx.w(*ebx)
                char* var_10_1 = ebx
                ebx = &ebx[1]
                char* var_14_1 = edi_1
                uint16_t var_c_1 = edx_1
                char var_8
                uint16_t eax_4
                
                if ((*(zx.d(edx_1.b) + ecx_1 + 0x19) & 4) == 0)
                    uint32_t eax_8 = zx.d(edx_1)
                    
                    if ((*(eax_8 + ecx_1 + 0x19) & 0x10) != 0)
                        eax_4 = zx.w(*(eax_8 + ecx_1 + 0x119))
                    label_52db8a:
                        var_c_1 = eax_4
                    
                    uint32_t edx_4 = zx.d(*edi_1)
                    edi_1 = &edi_1[1]
                    
                    if ((*(edx_4 + ecx_1 + 0x19) & 4) == 0)
                        if ((*(edx_4 + ecx_1 + 0x19) & 0x10) != 0)
                            edx_4 = zx.d(*(edx_4 + ecx_1 + 0x119))
                        
                        goto label_52dc0c
                    
                    if (*edi_1 != 0)
                        int32_t eax_9 = ___acrt_LCMapStringA(&var_20, *(ecx_1 + 0x21c), 0x200, 
                            var_14_1, 2, &var_8, 2, *(ecx_1 + 4), 1)
                        
                        if (eax_9 == 1)
                            edx_4 = zx.d(var_8)
                        label_52dbef:
                            ecx_1 = var_1c
                            edi_1 = &edi_1[1]
                            goto label_52dc0c
                        
                        if (eax_9 == 2)
                            int16_t eax_10 = (var_8.d).w
                            edx_4 = zx.d(zx.w(eax_10.b) * 0x100 + zx.w(eax_10:1.b))
                            goto label_52dbef
                    else
                        edx_4 = 0
                    label_52dc0c:
                        
                        if (edx_4.w != var_c_1)
                            result = (sbb.d(0, 0, edx_4.w u< var_c_1) & 2) - 1
                            break
                        
                        if (var_c_1 == 0)
                            break
                        
                        continue
                else
                    if (*ebx == 0)
                        eax_4 = 0
                        goto label_52db8a
                    
                    int32_t eax_5 = ___acrt_LCMapStringA(&var_20, *(ecx_1 + 0x21c), 0x200, var_10_1, 2, 
                        &var_8, 2, *(ecx_1 + 4), 1)
                    
                    if (eax_5 == 1)
                        eax_4 = zx.w(var_8)
                    label_52db72:
                        ecx_1 = var_1c
                        ebx = &ebx[1]
                        goto label_52db8a
                    
                    if (eax_5 == 2)
                        int16_t eax_6 = (var_8.d).w
                        eax_4 = zx.w(eax_6.b) * 0x100 + zx.w(eax_6:1.b)
                        goto label_52db72
                *__errno() = 0x16
                goto label_52dc24
        else
            result = __stricmp_l(ebx, edi_1, &var_20)
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    label_52dc24:
        result = 0x7fffffff
    
    char var_18
    
    if (var_18 != 0)
        void* ecx_2 = var_24
        *(ecx_2 + 0x350) &= 0xfffffffd
    
    return result
}
