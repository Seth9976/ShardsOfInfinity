// 函数名称: __aulldiv
// 虚拟地址: 0x51c2c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __stdcall__aulldiv(int32_t arg1, uint32_t arg2, int32_t arg3, uint32_t arg4) __pure
{
    // 第一条实际指令: if (arg4 == 0)
    if (arg4 == 0)
        return divu.dp.d((modu.dp.d(0:arg2, arg3)):arg1, arg3)
    
    uint32_t i = arg4
    int32_t ebx_1 = arg3
    uint32_t edx_3 = arg2
    int32_t eax_6 = arg1
    
    do
        ebx_1 = rrc.d(ebx_1, 1, (i & 1) != 0)
        uint32_t temp4_1 = edx_3
        edx_3 u>>= 1
        eax_6 = rrc.d(eax_6, 1, (temp4_1 & 1) != 0)
        i u>>= 1
    while (i != 0)
    
    uint32_t result = divu.dp.d(edx_3:eax_6, ebx_1)
    int32_t eax_8 = result * arg4
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = mulu.dp.d(arg3, result)
    int32_t edx_5 = edx_4 + eax_8
    
    if (edx_4 + eax_8 u>= edx_4 && edx_5 u<= arg2 && (edx_5 u< arg2 || eax_10 u<= arg1))
        return result
    
    return result - 1
}
