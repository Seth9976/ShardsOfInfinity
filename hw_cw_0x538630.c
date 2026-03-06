// 函数名称: __hw_cw
// 虚拟地址: 0x538630
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__hw_cw(int32_t arg1) __pure
{
    // 第一条实际指令: uint32_t result_1 = arg1 u>> 4 & 1
    uint32_t result_1 = arg1 u>> 4 & 1
    uint32_t result = result_1
    
    if ((arg1.b & 8) != 0)
        result = zx.d(result_1.w) | 4
    
    if ((arg1.b & 4) != 0)
        result |= 8
    
    if ((arg1.b & 2) != 0)
        result |= 0x10
    
    if ((arg1.b & 1) != 0)
        result |= 0x20
    
    if ((arg1 & 0x80000) != 0)
        result |= 2
    
    int32_t edi
    int32_t var_c = edi
    int32_t edx_4 = arg1 & 0x300
    
    if (edx_4 != 0)
        if (edx_4 == 0x100)
            result |= 0x400
        else if (edx_4 == 0x200)
            result |= 0x800
        else if (edx_4 == 0x300)
            result |= 0xc00
    
    int32_t edx_6 = arg1 & 0x30000
    
    if (edx_6 == 0)
        result |= 0x300
    else if (edx_6 == 0x10000)
        result |= 0x200
    
    if ((arg1 & 0x40000) == 0)
        return result
    
    return result | 0x1000
}
