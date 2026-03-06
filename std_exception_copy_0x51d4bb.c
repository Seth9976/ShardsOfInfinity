// 函数名称: ___std_exception_copy
// 虚拟地址: 0x51d4bb
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*___std_exception_copy(int32_t* arg1, char** arg2)
{
    // 第一条实际指令: char* ecx_1
    char* ecx_1
    
    if (arg1[1].b != 0)
        ecx_1 = *arg1
    
    char* result
    
    if (arg1[1].b == 0 || ecx_1 == 0)
        result = *arg1
        *arg2 = result
        arg2[1].b = 0
    else
        void* edx_1 = &ecx_1[1]
        char i
        
        do
            i = *ecx_1
            ecx_1 = &ecx_1[1]
        while (i != 0)
        void* var_14_1 = ecx_1 - edx_1 + 1
        char* esi_1 = _malloc()
        
        if (esi_1 != 0)
            _strcpy_s(esi_1, ecx_1 - edx_1 + 1, *arg1)
            char* ecx_4 = esi_1
            esi_1 = nullptr
            *arg2 = ecx_4
            arg2[1].b = 1
        
        result = _free(esi_1)
    
    return result
}
