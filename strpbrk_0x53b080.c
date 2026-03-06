// 函数名称: _strpbrk
// 虚拟地址: 0x53b080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*_strpbrk(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_28_1
    int32_t var_28_1
    __builtin_memset(&var_28_1, 0, 0x20)
    char* edx = arg2
    void* result
    
    while (true)
        result.b = *edx
        result.b = result.b
        
        if (result.b == 0)
            break
        
        edx = &edx[1]
        var_28_1 |= 1 << (result u% 0x20)
    
    char* esi = arg1
    
    do
        result.b = *esi
        result.b = result.b
        
        if (result.b == 0)
            return result
        
        esi = &esi[1]
    while (not(test_bit(var_28_1, result)))
    
    return &esi[0xffffffff]
}
