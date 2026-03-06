// 函数名称: __recalloc_base
// 虚拟地址: 0x537622
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*__recalloc_base(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 != 0 && divu.dp.d(0:0xffffffe0, arg2) u< arg3)
    if (arg2 != 0 && divu.dp.d(0:0xffffffe0, arg2) u< arg3)
        *__errno() = 0xc
        return nullptr
    
    int32_t edi
    int32_t var_10_1 = edi
    int32_t edi_1
    
    if (arg1 == 0)
        edi_1 = 0
    else
        int32_t var_14_1 = arg1
        edi_1 = sub_533381()
    
    uint32_t esi_1 = arg2 * arg3
    void* result = __realloc_base(arg1, esi_1)
    
    if (result != 0 && edi_1 u< esi_1)
        _memset(result + edi_1, 0, esi_1 - edi_1)
    
    return result
}
