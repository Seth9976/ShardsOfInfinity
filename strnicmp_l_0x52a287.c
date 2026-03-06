// 函数名称: __strnicmp_l
// 虚拟地址: 0x52a287
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__strnicmp_l(char* arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 0
    
    int32_t edi
    int32_t var_20_1 = edi
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, arg4)
    uint32_t result = 0x7fffffff
    char* ebx_1
    
    if (arg1 != 0)
        ebx_1 = arg2
    
    void* var_10
    
    if (arg1 == 0 || ebx_1 == 0 || arg3 u> 0x7fffffff)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else if (*(var_10 + 0xa8) != 0)
        void* edi_2 = arg1 - ebx_1
        uint32_t eax_4
        uint32_t eax_6
        
        do
            eax_4 = __tolower_l(zx.d(*(edi_2 + ebx_1)), &var_10)
            eax_6 = __tolower_l(zx.d(*ebx_1), &var_10)
            ebx_1 = &ebx_1[1]
            int32_t temp0_1 = arg3
            arg3 -= 1
            
            if (temp0_1 == 1)
                break
            
            if (eax_4 == 0)
                break
        while (eax_4 == eax_6)
        
        result = eax_4 - eax_6
    else
        result = ___ascii_strnicmp(arg1, ebx_1, arg3)
    char var_8
    
    if (var_8 != 0)
        void* ecx_3 = var_14
        *(ecx_3 + 0x350) &= 0xfffffffd
    
    return result
}
