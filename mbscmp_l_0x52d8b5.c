// 函数名称: __mbscmp_l
// 虚拟地址: 0x52d8b5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__mbscmp_l(char* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_24 = edi
    void* var_18
    _LocaleUpdate::_LocaleUpdate(&var_18, arg3)
    char* ecx_1 = arg1
    char* esi_1
    
    if (ecx_1 != 0)
        esi_1 = arg2
    
    int32_t result
    
    if (ecx_1 != 0 && esi_1 != 0)
        void* var_10
        void* edi_1 = var_10
        result = 0
        
        if (*(edi_1 + 8) != 0)
            uint32_t ebx_1
            
            do
                ebx_1 = zx.d(*ecx_1)
                ecx_1 = &ecx_1[1]
                
                if ((*(ebx_1 + edi_1 + 0x19) & 4) != 0)
                    uint32_t eax_3
                    eax_3.b = *ecx_1
                    
                    if (eax_3.b != 0)
                        ecx_1 = &ecx_1[1]
                        ebx_1 = zx.d((ebx_1 << 8).w) | zx.d(eax_3.b)
                    else
                        ebx_1 = 0
                
                uint32_t eax_5 = zx.d(*esi_1)
                esi_1 = &esi_1[1]
                int16_t eax_7
                
                if ((*(zx.d(eax_5.b) + edi_1 + 0x19) & 4) == 0)
                    eax_7 = eax_5.w
                else
                    uint32_t eax_6
                    eax_6.b = *esi_1
                    
                    if (eax_6.b != 0)
                        uint32_t edi_3
                        edi_3.w = (eax_5 << 8).w | zx.w(eax_6.b)
                        esi_1 = &esi_1[1]
                        uint32_t var_8_2 = edi_3
                        edi_1 = var_10
                        eax_7 = edi_3.w
                    else
                        eax_7 = 0
                
                if (eax_7 != ebx_1.w)
                    result = (sbb.d(0, 0, eax_7 u< ebx_1.w) & 2) - 1
                    break
            while (ebx_1.w != 0)
        else
            while (true)
                char eax_1 = *ecx_1
                char temp0_1 = *esi_1
                bool c_1 = eax_1 u< temp0_1
                
                if (eax_1 == temp0_1)
                    if (eax_1 == 0)
                        break
                    
                    eax_1 = ecx_1[1]
                    char temp1_1 = esi_1[1]
                    c_1 = eax_1 u< temp1_1
                    
                    if (eax_1 == temp1_1)
                        ecx_1 = &ecx_1[2]
                        esi_1 = &esi_1[2]
                        
                        if (eax_1 == 0)
                            break
                        
                        continue
                
                result = sbb.d(0, 0, c_1) | 1
                break
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0x7fffffff
    
    char var_c
    
    if (var_c != 0)
        void* ecx_2 = var_18
        *(ecx_2 + 0x350) &= 0xfffffffd
    
    return result
}
