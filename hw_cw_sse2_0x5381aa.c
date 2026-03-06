// 函数名称: ___hw_cw_sse2
// 虚拟地址: 0x5381aa
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___hw_cw_sse2(int32_t arg1) __pure
{
    // 第一条实际指令: int32_t result = (arg1 & 0x10) << 3
    int32_t result = (arg1 & 0x10) << 3
    int32_t edi
    int32_t var_10 = edi
    
    if ((arg1.b & 8) != 0)
        result |= 0x200
    
    if ((arg1.b & 4) != 0)
        result |= 0x400
    
    if ((arg1.b & 2) != 0)
        result |= 0x800
    
    if ((arg1.b & 1) != 0)
        result |= 0x1000
    
    if ((arg1 & 0x80000) != 0)
        result |= 0x100
    
    int32_t edx_1 = arg1 & 0x300
    
    if (edx_1 != 0)
        if (edx_1 == 0x100)
            result |= 0x2000
        else if (edx_1 == 0x200)
            result |= 0x4000
        else if (edx_1 == 0x300)
            result |= 0x6000
    
    int32_t ecx_1 = arg1 & 0x3000000
    
    if (ecx_1 == 0x1000000)
        return result | 0x8040
    
    if (ecx_1 == 0x2000000)
        return result | 0x40
    
    if (ecx_1 != 0x3000000)
        return result
    
    return result | 0x8000
}
