// 函数名称: _strcspn
// 虚拟地址: 0x52b590
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_strcspn(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_28_1
    int32_t var_28_1
    __builtin_memset(&var_28_1, 0, 0x20)
    char* edx = arg2
    int32_t eax
    
    while (true)
        eax.b = *edx
        eax.b = eax.b
        
        if (eax.b == 0)
            break
        
        edx = &edx[1]
        var_28_1 |= 1 << (eax u% 0x20)
    
    char* esi = arg1
    int32_t result = 0xffffffff
    
    do
        result += 1
        eax.b = *esi
        eax.b = eax.b
        
        if (eax.b == 0)
            break
        
        esi = &esi[1]
    while (not(test_bit(var_28_1, eax)))
    
    return result
}
