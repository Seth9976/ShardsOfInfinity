// 函数名称: __mbsnbcmp_l
// 虚拟地址: 0x52d782
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__mbsnbcmp_l(char* arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t i = arg3
    int32_t i = arg3
    
    if (i == 0)
        return 0
    
    int32_t edi
    int32_t var_28_1 = edi
    void* var_1c
    _LocaleUpdate::_LocaleUpdate(&var_1c, arg4)
    void* var_14
    int32_t result
    
    if (*(var_14 + 8) != 0)
        char* ebx_1 = arg1
        char* edi_1
        
        if (ebx_1 != 0)
            edi_1 = arg2
        
        if (ebx_1 != 0 && edi_1 != 0)
            do
                uint32_t ecx_2 = zx.d(*ebx_1)
                i -= 1
                void* var_c_1 = &ebx_1[1]
                result = 0
                uint32_t ebx_4
                
                if ((*(ecx_2 + var_14 + 0x19) & 4) == 0)
                label_52d839:
                    ebx_4 = zx.d(*edi_1)
                    edi_1 = &edi_1[1]
                    result = 0
                    
                    if ((*(ebx_4 + var_14 + 0x19) & 4) != 0)
                        if (i != 0)
                            uint32_t eax_7
                            eax_7.b = *edi_1
                            i -= 1
                            
                            if (eax_7.b == 0)
                                ebx_4 = 0
                            else
                                edi_1 = &edi_1[1]
                                ebx_4 = zx.d((ebx_4 << 8).w) | zx.d(eax_7.b)
                        else
                            ebx_4 = 0
                else
                    if (i != 0)
                        uint32_t eax_4
                        eax_4.b = ebx_1[1]
                        
                        if (eax_4.b != 0)
                            ecx_2 = zx.d((ecx_2 << 8).w) | zx.d(eax_4.b)
                            var_c_1 = &ebx_1[2]
                        else
                            ecx_2 = 0
                        
                        goto label_52d839
                    
                    ecx_2 = 0
                    
                    if ((*(zx.d(*edi_1) + var_14 + 0x19) & 4) != 0)
                        break
                    
                    uint32_t eax_5
                    eax_5.b = *edi_1
                    ebx_4 = zx.d(eax_5.b)
                
                if (ebx_4.w != ecx_2.w)
                    result = (sbb.d(0, 0, ebx_4.w u< ecx_2.w) & 2) - 1
                    break
                
                if (ecx_2.w == 0)
                    break
                
                ebx_1 = var_c_1
            while (i != 0)
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result = 0x7fffffff
    else
        result = _strncmp(arg1, arg2, i)
    
    char var_10
    
    if (var_10 != 0)
        void* ecx_4 = var_1c
        *(ecx_4 + 0x350) &= 0xfffffffd
    
    return result
}
