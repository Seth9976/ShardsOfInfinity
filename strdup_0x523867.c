// 函数名称: __strdup
// 虚拟地址: 0x523867
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*__strdup(char* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0
    
    char* ecx = arg1
    void* edx = &ecx[1]
    char i
    
    do
        i = *ecx
        ecx = &ecx[1]
    while (i != 0)
    int32_t edi
    int32_t var_c = edi
    void* var_10 = ecx - edx + 1
    char* result = _malloc()
    
    if (result == 0)
        return result
    
    if (_strcpy_s(result, ecx - edx + 1, arg1) == 0)
        return result
    
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x14)
    sub_52d729()
    noreturn
}
