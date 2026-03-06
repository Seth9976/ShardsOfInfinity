// 函数名称: __mbsnbcpy_l
// 虚拟地址: 0x52d9c7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*__mbsnbcpy_l(char* arg1, char* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: char* result_2 = arg1
    char* result_2 = arg1
    int32_t edi
    int32_t var_24 = edi
    char* result = result_2
    char* result_1 = result
    void* var_1c
    _LocaleUpdate::_LocaleUpdate(&var_1c, arg4)
    void* ecx_1 = arg3
    char* edx_1
    
    if (result_2 != 0 || ecx_1 == 0)
        edx_1 = arg2
    
    void* var_14
    
    if ((result_2 == 0 && ecx_1 != 0) || (edx_1 == 0 && ecx_1 != 0))
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = nullptr
    else if (*(var_14 + 8) == 0)
        result = _strncpy(result_2, edx_1, ecx_1)
    else if (ecx_1 != 0)
        int32_t ebx
        int32_t var_28_2 = ebx
        
        while (true)
            ebx.b = *edx_1
            ecx_1 -= 1
            uint32_t eax_3
            eax_3.b = *(zx.d(ebx.b) + var_14 + 0x19)
            result = result_1
            *result_2 = ebx.b
            result_2 = &result_2[1]
            edx_1 = &edx_1[1]
            eax_3.b &= 4
            
            if (eax_3.b != 0)
                if (ecx_1 == 0)
                    result_2[0xffffffff] = 0
                    break
                
                eax_3.b = *edx_1
                ecx_1 -= 1
                *result_2 = eax_3.b
                result_2 = &result_2[1]
                edx_1 = &edx_1[1]
                
                if (eax_3.b != 0)
                    goto label_52da85
                
                result_2[0xfffffffe] = eax_3.b
            else if (ebx.b != 0)
            label_52da85:
                
                if (ecx_1 == 0)
                    break
                
                continue
            
            if (ecx_1 == 0)
                break
            
            _memset(result_2, 0, ecx_1)
            break
    char var_10
    
    if (var_10 != 0)
        void* ecx_2 = var_1c
        *(ecx_2 + 0x350) &= 0xfffffffd
    
    return result
}
