// 函数名称: __stricmp_l
// 虚拟地址: 0x52a444
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__stricmp_l(char* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_20 = edi
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, arg3)
    char* ebx_1
    
    if (arg1 != 0)
        ebx_1 = arg2
    
    uint32_t result
    void* var_10
    
    if (arg1 == 0 || ebx_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0x7fffffff
    else if (*(var_10 + 0xa8) != 0)
        void* edi_2 = arg1 - ebx_1
        uint32_t eax_4
        uint32_t eax_6
        
        do
            eax_4 = __tolower_l(zx.d(*(edi_2 + ebx_1)), &var_10)
            eax_6 = __tolower_l(zx.d(*ebx_1), &var_10)
            ebx_1 = &ebx_1[1]
            
            if (eax_4 == 0)
                break
        while (eax_4 == eax_6)
        
        result = eax_4 - eax_6
    else
        result = ___ascii_stricmp(arg1, ebx_1)
    char var_8
    
    if (var_8 != 0)
        void* ecx_2 = var_14
        *(ecx_2 + 0x350) &= 0xfffffffd
    
    return result
}
