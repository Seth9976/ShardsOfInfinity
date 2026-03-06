// 函数名称: sub_4d62d0
// 虚拟地址: 0x4d62d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_4d62d0(char* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void* eax = sub_4d6250(arg4)
    void* eax = sub_4d6250(arg4)
    void* esi_1 = arg2 * arg3
    void* edx = *(arg4 + 0x2d8)
    void* ecx_2 = *(eax + 0x14) - edx
    
    if (esi_1 s>= ecx_2)
        esi_1 = ecx_2
    
    if (esi_1 s<= 0)
        return 0
    
    char* ecx_3 = *(arg4 + 0x2d0)
    int32_t* eax_2 = *(eax + 0x18)
    
    if (ecx_3 == 0)
        sub_51d5b0(arg1, edx + eax_2, esi_1)
        *(arg4 + 0x2d8) += esi_1
        return divu.dp.d(0:esi_1, arg2)
    
    sub_48d990(eax_2, arg1, ecx_3, edx, esi_1, eax_2)
    *(arg4 + 0x2d8) += esi_1
    return divu.dp.d(0:esi_1, arg2)
}
