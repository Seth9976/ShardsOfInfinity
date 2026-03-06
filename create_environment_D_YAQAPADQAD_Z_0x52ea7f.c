// 函数名称: ??$create_environment@D@@YAQAPADQAD@Z
// 虚拟地址: 0x52ea7f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*??$create_environment@D@@YAQAPADQAD@Z(char* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    char* ebx = arg1
    int32_t edx = 0
    int32_t edi
    int32_t var_18 = edi
    char* esi = ebx
    
    for (char i = *ebx; i != 0; i = *esi)
        if (i != 0x3d)
            edx += 1
        
        char* ecx_1 = esi
        
        do
            i = *ecx_1
            ecx_1 = &ecx_1[1]
        while (i != 0)
        
        esi = &esi[1] + ecx_1 - &ecx_1[1]
    
    void* result = __calloc_base(edx + 1, 4)
    
    if (result != 0)
        void* result_1 = result
        
        while (true)
            char edx_1 = *ebx
            
            if (edx_1 == 0)
                goto label_52eb35
            
            char* ecx_4 = ebx
            void* eax_1
            
            do
                eax_1.b = *ecx_4
                ecx_4 = &ecx_4[1]
            while (eax_1.b != 0)
            
            eax_1 = ecx_4 - &ecx_4[1] + 1
            
            if (edx_1 != 0x3d)
                char* eax_2 = __calloc_base(eax_1, 1)
                
                if (eax_2 == 0)
                    free_environment<char>(result)
                    __free_base(0)
                    break
                
                if (_strcpy_s(eax_2, eax_1, ebx) != 0)
                    int32_t var_2c
                    __builtin_memset(&var_2c, 0, 0x14)
                    sub_52d729()
                    noreturn
                
                char** result_2 = result_1
                *result_2 = eax_2
                result_1 = &result_2[1]
                __free_base(0)
            
            ebx += eax_1
    
    result = nullptr
    label_52eb35:
    __free_base(0)
    return result
}
